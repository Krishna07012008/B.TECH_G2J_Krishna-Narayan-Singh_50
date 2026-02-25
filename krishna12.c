#include<stdio.h>
int main(){
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if (age>0&&age<=12){
        printf("Child");}
     else if (age>=13&&age<=17){
            printf("TEEN");
        }
         else if (age>=18&&age<=50){
            printf("Adult");
        }
         else if (age>=50){
            printf("SENIOR CITISENS");
        }
         else{
            printf("Please enter valid number for age");
         }
         return 0;
        }

    


    
