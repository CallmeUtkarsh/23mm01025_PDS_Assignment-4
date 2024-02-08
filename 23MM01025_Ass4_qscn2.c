#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter the value of a,b,c :\n");
    scanf("%d%d%d",&a,&b,&c);
    (a>b&&a>c)?printf("%d is the largest among the given numbers.",a):((b>a&&b>c)?printf("%d is the largest among the given numbers.",b):printf("%d is the largest among the given numbers.",c));
}