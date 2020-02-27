#include <stdio.h>
#include <stdlib.h>

int main(){
    int stcifer,prvaCifra, soEnake=1,i,j;
    scanf("%d",&stcifer);
    int arr[stcifer];
    for (i = 0; i<stcifer;i++){
        scanf("%d", &arr[i]);
    }
    prvaCifra = arr[1];
    for (j = 0; j<stcifer; j++){
        if(arr[j] != prvaCifra){
            soEnake=0;
        }
    }
    printf("%d\n",soEnake);
    return 0;
}