#include <stdio.h>
int fib (int a,int d){
    int next;
    next=a+d;
    printf(" %d,",next);
    return next;  
}
int main(){
    int i=0,j=1,next,n;
    printf("enter the series number");
    scanf("%d",&n);
    printf("Fibonacci Series: %d, %d,", i, j);
    for(int k=3;k<=n;k++){
        next=fib(i,j);
        i=j;
        j=next;
    }
    return 0;
}