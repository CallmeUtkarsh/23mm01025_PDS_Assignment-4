#include<stdio.h>
int main(){
    int x,y;
    int c;
    printf("Enter first integer\n");
    scanf("%d", &x);
    printf("Enter 1 for ADDITION\nEnter 2 for SUBSTRACTION\nEnter 3 for MULTIPLICATION\nEnter 4 for DIVISION\n");
    scanf("%d", &c);
    printf("Enter second integer\n");
    scanf("%d", &y);
    switch(c){
        case 1:
        printf("%d",x+y);
        break;

        case 2:
        printf("%d",x-y);
        break;

        case 3:
        printf("%d",x*y);
        break;

        case 4:
        printf("%d",x/y);
        break;

        default:
        printf("ENTER VALID OPERTION AS PER GIVEN INSTRUCTIONS");
    }
    return 0;
}