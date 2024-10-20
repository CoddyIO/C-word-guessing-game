#include <stdio.h>
int main(){
    int a;
    int j;
    int k;
    printf("Enter the last number");
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        k=j;
        j=i+k;
    }
    printf("total: %d",j);
    return 0;
}