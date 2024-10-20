#include <stdio.h>
int main(){
    int *a;
    int b=2;
    a=&b;
    printf("your address %d\n",*a);
    printf("your address %u\n",b);
    printf("your address %u\n",&a);
    printf("your address %u\n",&b);
    printf("your address %u\n",a);
    printf("your address %d\n",b);
    printf("your address %u\n",a);
    return 0;
}