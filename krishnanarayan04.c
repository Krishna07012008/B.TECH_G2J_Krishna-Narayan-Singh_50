#include<stdio.h>
int main (){
    int a,b,c,d,e;
    float sum,per;
    printf("Enter the subject marks:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum = a+b+c+d+e;
    per = sum/5;
    if ( per>=90 && per<=100){
     printf("GRADE A");
    }
    else if( per>=80 && per<=90){
     printf("GRADE B");
    }
    else if( per>=70 && per<=80){
     printf("GRADE C");
    }
    else if( per>=60 && per<=70)
    { printf("GRADE D");
    }
    return 0; 
}