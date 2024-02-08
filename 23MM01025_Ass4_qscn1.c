#include<stdio.h>

int main(){
    int num,m;
    printf("enter the number");
    scanf("%d",&num);
    m=num%2;
    switch(m){
        case 0:
            printf("%d is even number.",num);
            break;
        
        case 1:
            printf("%d is odd number.",num);
            break;
        
    }
}