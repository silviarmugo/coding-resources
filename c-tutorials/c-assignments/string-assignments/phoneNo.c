#include<stdio.h>
#include<string.h>

void addCountryCode(char phoneNumber[]);

int main(){
    char phoneNumber[20];
    printf("Enter your phone number : ");
    fgets(phoneNumber,11,stdin);
    addCountryCode(phoneNumber);
    return 0;
}
void addCountryCode(char phoneNumber[]){
   char modifiedNo[15] = "+254 ";  

   if (strlen(phoneNumber)>9){
     strcpy(phoneNumber,phoneNumber+1);
     strcat(modifiedNo,phoneNumber);
     printf("Your phone number is %s",modifiedNo);
     return;
   }else{
    printf("Invalid phone number!");
    
   }
}