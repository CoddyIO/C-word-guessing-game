#include <stdio.h>
int average (int a,int b, int c){
    int avg;
    avg=(a+b+c)/3;
    return avg;
}
int main(){
    int x,y,z,ans;
    printf("Enter you number: ");
    scanf("%d",&x);
    printf("Enter you number: ");
    scanf("%d",&y);
    printf("Enter you number: ");
    scanf("%d",&z);
    ans = average (x,y,z);
    printf("your average is: %d",ans);
    return 0;
}




