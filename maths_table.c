#include <stdio.h>
int multiply(int x,int t){
    int ans;
    ans= x*t;
    printf("%d x %d = %d \n",x,t,ans);
    return 0;

}
int main(){
    int a;
    int p;
    printf("Enter the number");
    scanf( "%d",&a);
    for (int i=1; i<11;i++){
        p=multiply(a,i);


    }
    return 0;
}