#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    printf("WELCOME TO THE GAME\n");
    int number,m;
    int x=0;
    srand(time(0));
    number=rand()%100+1;
    for (int i=0; x==0;i++){
        printf("enter your number");
        scanf("%d",&m);
        if (m==number){
            x=1;
        }
        else{
            x=0;
        }
    }
    return 0;
}