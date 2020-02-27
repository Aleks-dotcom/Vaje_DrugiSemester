#include <stdio.h>
#include <stdlib.h>

int main(){
    int stcifer,drugaNajvecja= 0, najvecja=0,i,j;
    scanf("%d",&stcifer);
    int arr[stcifer];
    for (i = 0; i<stcifer;i++){
        scanf("%d", &arr[i]);
    }
    for (j = 0; j<stcifer; j++){
        if(arr[j] >= najvecja){
            drugaNajvecja = najvecja;
            najvecja = arr[j];
        }else{
            if (arr[j] > drugaNajvecja){
                drugaNajvecja = arr[j];
            }    
        }
    }
    printf("%d\n",drugaNajvecja);
    return 0;
}
