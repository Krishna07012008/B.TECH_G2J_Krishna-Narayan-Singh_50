#include<stdio.h>
#include<math.h>
int main(){
   float a,b;
   char op;
   printf("Welcome to Calculator");
   printf("Enter num1:");
   scanf("%f" ,&a);
   printf("Enter num2:");
   scanf("%f" ,&b);
   printf("Enter your operator");
   scanf(" %c",&op);
   switch(op){
    case'+' :
    printf("Addition =%f" , a+b);
    break;
    case'-' :
    printf("Subtraction =%f" , a-b);
    break;
    case '*' :
    printf("Multiplication =%f" , a*b);
    break;
    case '/' :
    if (b==0){
        printf("Error ! DIVISION NOT POSSIBLE");
    }   
    else{
        printf("Division =%f" ,a/b);
        break;
    }
    default:
    printf("Error! INVALID OPERATOR ");
}
return 0;
}



