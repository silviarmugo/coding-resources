#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include "password.h"
#include "checkAccNo.h"
#include "pinvalidation.h"
#include "prototypes.h"


 

int main(){
    int option;
    printf("Welcome to Elite Simple Bank!\n");
    while (1){
        
        printf("Choose an option to continue : \n");
        printf("1.Create account\n2.Check account balance\n3.Deposit to account\n4.Withdraw funds\n5.Transfer funds\n6.Exit the program\n");
        scanf("%d",&option);
        int c;
        while ((c = getchar()) != '\n' && c != EOF) { };
        switch (option)
        {
        case 1:
            accountCreation();
            break;
        case 2:
            checkBalance();
            break;
        case 3:
            deposit();
            break;
        case 4:
            withdraw();
            break;
        case 5:
            transferFunds();
            break;
        case 6 :
            printf("Exiting the program!");
            return 1;

        default:
            printf("Invalid option! Try again\n");
            break;
        }
    }

    return 0;
}
void accountCreation(){
    
    //char password[5];
    char accountNo[7];
    char name[40],branch[40];
    char balance [8];
    printf("Enter your name :");
    if (fgets(name,sizeof(name),stdin)){
        name[strcspn(name,"\n")]=0;
    };
    printf("Enter your branch name: ");
    if (fgets(branch,sizeof(branch),stdin)){
        branch[strcspn(branch,"\n")]=0;
    };

    printf("Enter your 6 digit account number: ");
    if (fgets(accountNo,sizeof(accountNo),stdin)){
        accountNo[strcspn(accountNo,"\n")]=0;
    }
    checkAccountNumber(accountNo);
    
    char* pin = password();

    int c;
    while ((c = getchar()) != '\n' && c != EOF) { };
    
    printf("\nEnter your initial deposit : ");
     if (fgets(balance,sizeof(balance),stdin)){
        balance[strcspn(balance,"\n")]=0;
    }
    int bal =atoi(balance);
    
    FILE *file;
    file=fopen("customers.csv","a");
    if (file==NULL){
        printf("Error opening file");
        return;
    }
    fprintf(file,"%s,%s,%s,%s,%d\n",name,branch,accountNo,pin,bal);
    fclose(file);
    printf("Welcome to Elite bank %s !\n\n ",name);
    
    

}
void checkBalance(){
    char accountNumber[7];
    int balance;

    printf("Enter account number : ");
    if (fgets(accountNumber,sizeof(accountNumber),stdin)){
        accountNumber[strcspn(accountNumber,"\n")]=0;
    }

    if (checkAccountNumber(accountNumber)==true){
       char* pin = password();
       
      balance = pinValidation(pin,accountNumber);
      if (balance==EXIT_FAILURE){
          printf("\nWrong pin!\n"); 
          return;   
    
      }
      printf("\nYour balance is ksh.%d\n",balance);
   
    }
}

void deposit(){
    FILE *file;
    char line[256];
    char accountNumber[7];
    int deposit = 0;
    int balance = 0;
    printf("Enter account number : ");
    if (fgets(accountNumber,sizeof(accountNumber),stdin)){
        accountNumber[strcspn(accountNumber,"\n")]=0;
    }
    if (checkAccountNumber(accountNumber)==true){
        
        printf("\nEnter an amount to deposit: ");
        scanf("%d",&deposit);

        char* pin = password();
        balance = pinValidation(pin,accountNumber);
        if (balance==EXIT_FAILURE){
            printf("\nWrong pin\n");
            return;
        }

        file = fopen("customers.csv","r");
        if (file == NULL) {
        printf("Error opening file.\n");
        return;
        }
        //int itemsRead = sscanf(line, "%*[^,],%*[^,],%*[^,],%*[^,],%d", &balance);
       // if (itemsRead==1){
        balance+=deposit;
        updateAccBalance(accountNumber,balance);
        printf("\nKsh.%d has successfully been deposited to your account!\n",deposit);
        fclose(file);
    }
}

void withdraw(){
    FILE *file;
    char line[256];
    char accountNumber[7];
    int amount = 0;
    int balance = 0;
    printf("Enter account number : ");
    if (fgets(accountNumber,sizeof(accountNumber),stdin)){
        accountNumber[strcspn(accountNumber,"\n")]=0;
    }
    if (checkAccountNumber(accountNumber)==true){
        char* pin = password();
        balance = pinValidation(pin,accountNumber);
        if (balance==EXIT_FAILURE){
            printf("\nWrong pin\n");
            return;
        }
        printf("\nEnter an amount to withdraw: ");
        scanf("%d",&amount);

        if (amount>balance){
            printf("Insufficient balance!\n");
            return;
        }else{

            file = fopen("customers.csv","r");
            if (file == NULL) {
            printf("Error opening file.\n");
            return;
            }            
            balance-=amount;
            updateAccBalance(accountNumber,balance);
            printf("Ksh.%d has successfully been withdrawn!\n",amount);
            fclose(file);
        }
    }

}

void transferFunds() {
    char sendersAccNo[8]; 

    printf("Enter your account number:\n");
    if (fgets(sendersAccNo, sizeof(sendersAccNo), stdin)) {
        sendersAccNo[strcspn(sendersAccNo, "\n")] = '\0'; 
    }

    if (checkAccountNumber(sendersAccNo)) {

        char receiversAccNo[8]; 
        printf("Enter receiver's account number:\n");

        if (fgets(receiversAccNo, sizeof(receiversAccNo), stdin)) {
            receiversAccNo[strcspn(receiversAccNo, "\n")] = '\0'; 
        }

        if (checkAccountNumber(receiversAccNo)) {
            int amount = 0;
            int balance = 0;
            printf("Enter amount:\n");
            scanf("%d", &amount);
            
            char *pin = password();
            balance = pinValidation(pin, sendersAccNo);
            if (balance == EXIT_FAILURE){
                printf("\nWrong pin\n");
                return;
            }

            if (amount > balance) {
                printf("\nAccount balance too low to send ksh.%d\nYour balance is ksh.%d\n", amount, balance);
                return;
            }

            // Update sender's balance
            int newBalance = balance - amount;
            updateAccBalance(sendersAccNo, newBalance);

            // Update receiver's balance
            FILE *file;
            char line[256];
            char accNo[8]; 
            char receiversName[40];
            int found = 0; 
            file = fopen("customers.csv", "r");
            if (file != NULL) {
                while (fgets(line, sizeof(line), file)) {
                    int itemsRead = sscanf(line, "%[^,],%*[^,],%7[^,],%*[^,],%d", receiversName, accNo, &balance); // Corrected format specifier

                    if (itemsRead == 3) {
                        int result = strcmp(receiversAccNo, accNo);
                        if (result == 0) {
                            found = 1;
                            break;
                        }
                    } else {
                        printf("Error reading the file!\n");
                        fclose(file);
                        return;
                    }
                }
                fclose(file);
                if (!found) {
                    printf("Receiver's account number does not exist!\n");
                    return;
                }
            } else {
                printf("Error opening the file!\n");
                return;
            }

            newBalance = balance + amount;
            updateAccBalance(receiversAccNo, newBalance);
            printf("\nKsh.%d sent to %s.\n", amount, receiversName);

        } else {
            printf("Receiver's account number does not exist!\n");
            return;
        }

    } else {
        printf("Sender's account number does not exist!\n");
        return;
    }
}