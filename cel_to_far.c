#include <stdio.h>
int far(int a){
    int fare;
    fare =a * (9/5) + 32;
    printf("the temp in Farheniet: %d",fare);
    return 0;
}
int main(){
    int x;
    printf("enter the temperatur in celcius: ");
    scanf("%d",&x);
    far(x);
    return 0;
}