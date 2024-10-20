#include <stdio.h>
int multiply(int x,int t){
    int ans;
    int l;
    int m;
    ans= x*t;
    printf("%d x %d = %d \n",x,t,ans);
    m=l;
    l=m+ans;


    return l;

}
int main(){
    int a;
    int p;
    printf("Enter the number");
    scanf( "%d",&a);
    for (int i=1; i<11;i++){
        p=multiply(a,i);
        


    }
    printf("total: %d",p);
    return 0;
}