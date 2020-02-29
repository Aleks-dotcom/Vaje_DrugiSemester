#include <stdio.h>
#include <stdlib.h>  
int potenca_2(int potenca){
    int rezultat = 1;
    for (int i = 0; i<potenca; i++){
        rezultat = rezultat * 2;
    }
    return rezultat;
}
//vrne do katerega logaritma pridemo
int kateriLogaritem(int stevilo){
    int stevec =0;
    int log =1;
    while(stevilo>=log){
        log = log *2;
        stevec++;
    }
    return stevec;
}
//printa koncni rezultat
void printStevilo(int stevilo){
    int ostanek = 0;
    if (stevilo<0){stevilo = stevilo *-1;}
    if (stevilo / 10 == 0){
        ostanek = stevilo;
    }else{
        ostanek = stevilo % 10;
        stevilo /= 10;
        printStevilo(stevilo);
    }
    putchar(ostanek + '0');
}

int main(){ 
    char arr[30];
    char c;
    int firstOne = 0;
    int stevilo = 0;
    int dolzina = 0;
    int stevec = 0;
    c = getchar() - '0';

    while(c != -38){ 
        if ((c == 0) && (firstOne == 0)){ c = (getchar()-'0') ;continue;}
        firstOne = 1;
        arr[stevec] = c;
        stevec++;
        c = getchar() - '0';
    }

    dolzina = stevec;
    for(int j = dolzina-1; j>-1;j--){
        if(arr[j]==1){
            stevilo += potenca_2(j);
        }
    }
    
    printStevilo(kateriLogaritem(stevilo));
    putchar('\n');
    return 0;
}
