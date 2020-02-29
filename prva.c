#include <stdio.h>
//rekurzija nas nikoli ne neha presenecati
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
//prebere cifre iz vrstice.
int vrniCifro(int delimiter){
    int num=0,neg=0;
    char c;
    c = getchar() - '0';
    while(c != delimiter){        
        if (c == -3){
            neg = 1;
        }else{
            if(num == 0){
                num = c;
            }else{
                num = num*10 +c;
            }
        }
        c = getchar() - '0';
    }
    if (neg){ return num * -1;}
    return num;
}
int main(){
    int res;
    res = vrniCifro(-16) + vrniCifro(-38);
    if (res < 0){putchar('-');}
    printStevilo(res);
    putchar('\n');
    return 0;
}