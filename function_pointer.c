#include <stdio.h>
int mass(int *a){
    *a=4;
    return 0;
}
int main(){
    int *b;
    int c=2;
    b=&c;
    printf("the value is %d \n",c);
    mass(b);
    printf("the value is %d",c);
    return 0;
}