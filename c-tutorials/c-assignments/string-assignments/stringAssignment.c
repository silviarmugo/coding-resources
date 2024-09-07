#include<stdio.h>




void stringInReverse(char str[]);
void lowerToUpper(char str[]);
void upperToLower(char str[]);
int stringLength(char str[]);



int main() {
    char str[100] ;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    
     int len = stringLength(str);
    lowerToUpper(str);
    upperToLower(str);
    stringInReverse(str);
   
    //printf("Length is %d",len);
    
   // printf("Capitalized string: %s\n", str);

    
    return 0;
}

int stringLength(char str[]){

    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

void stringInReverse(char str[]) {
    int len =stringLength(str);
    
    for(int index = 0; index < len / 2; index++) {        
        char temp = str[index];        
        str[index] = str[len - index - 1];         
        str[len - index - 1] = temp;   
    }
    printf("The string you entered in reverse is: %s",str);
}

void lowerToUpper(char str[]){
    int len =stringLength(str);
    char upper;
     for(int index=0;index<len;index++){
        if (str[index]>='a' && str[index]<='z'){
            upper=str[index]-=32;
            str[index]=upper;
        }
    }
    printf("The string you entered in uppercase is \n%s\n",str);
}

void upperToLower(char str[]){
    int len =stringLength(str);
    char upper;
    for(int index=0;index<len;index++){
        if (str[index]>='A' && str[index]<='Z'){
            upper=str[index]+=32;
            str[index]=upper;
        }
    }
    
    printf("The string you entered in lowercase is \n%s\n",str);
}