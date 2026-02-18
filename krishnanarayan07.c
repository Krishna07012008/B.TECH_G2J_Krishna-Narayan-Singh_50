#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    char op;
    printf("Enter two operand");
    scanf("%d%d",&a,&b);
    printf("Enter an operation(+,-,*,/)");
    scanf(" %c", & op);
    switch(op)
    {
        case '+':
        printf("Addition = %d",a+b);
        break;
        case '-':
        printf("Subtraction = %d",a-b);
        break;
        printf("Multiplication = %d",a*b);
        break;
        case '/':
        if (b<=0){
             printf("Division can not be possible");
        }
        else
        printf("Division = %f",(float)a/b);
        break;
        default:{
            printf("Error! Incorrect operator");}
    }
            return 0;
}   
   