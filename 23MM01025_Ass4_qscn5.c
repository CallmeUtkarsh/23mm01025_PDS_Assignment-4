#include<stdio.h>

int main(){
    int num,a,b,c,d,x;
    printf("enter the number\n");
    scanf("%d",&num);
    if(num>=100 && num<1000){
        a=num%10;
        b=num/100;
        c=num%100-a;
        d=c/10;
        x=a*a*a+b*b*b+d*d*d;
    if(x==num){
        printf("%d is an armstrong number",num);
    }
    else{
        printf("%d is not an armstrong number",num);
    }
    }
    else{
        printf("not a three digit number");
    }
}