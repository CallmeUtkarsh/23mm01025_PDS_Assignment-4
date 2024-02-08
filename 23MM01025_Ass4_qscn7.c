#include<stdio.h>

int main(){
    int age;
    printf("enter age\n");
    scanf("%d", &age);
    if(age<5){
        printf("Free Ticket");
    }
    else if(age>=5 && age<=12){
        printf("Ticket price :20");
    }
    else if(age>=13 && age<=59){
        printf("Ticket price :50");
    }
    else{
        printf("Ticket price :%d",50-((20*50)/100));
    }
    return 0;
}