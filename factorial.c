#include <stdio.h>
int main(){
    int k,l;
    int fact=1;
    printf("Enter the number: ");
    scanf("%d",&k);
    for (int i=1;i<=k;i++){
        l=fact;
        fact=i*l;
    }
    printf("the factorial is %d",fact);
    
    return 0;
}