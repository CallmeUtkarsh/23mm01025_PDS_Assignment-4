#include<stdio.h>

int main(){
    int cs,cb,i;
    printf("Credit Balance: \n");
    scanf("%d",&cb);
    printf("Credit Score: \n");
    scanf("%d",&cs);
    if(cs<600 && cs>0){
        i=cb*0.15;
        printf("interest would be %d\n",i);
    }
    else if(cs>=600 && cs<=750){
        i=cb*0.12;
        printf("interest would be %d\n",i);
    }
    else if(cs>750){
        i=cb*0.10;
        printf("interest would be %d\n",i);
    }
    else{
        printf("invalid values entered.");
    }
    return 0;

}