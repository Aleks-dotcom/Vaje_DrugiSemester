#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,res;
    scanf("%d",&a);
    scanf("%d",&b);
    res = (a+b) % 10;
    printf("%d\n",res);
    return 0;
}