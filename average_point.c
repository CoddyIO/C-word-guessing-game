#include <stdio.h>
int average (int *a,int *b){
    int avg;
    avg=(*a+*b)/2;
    return avg;
}
int main(){
    int x,y,ans;
    printf("Enter you number: ");
    scanf("%d",&x);
    printf("Enter you number: ");
    scanf("%d",&y);
    
    ans = average (&x,&y);
    printf("your average is: %d",ans);
    return 0;
}




