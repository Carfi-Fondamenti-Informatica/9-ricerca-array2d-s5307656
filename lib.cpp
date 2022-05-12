#include "lib.h"
void init (char a[10][20]){
    for (int i=0;i<10; i++){
        for (int j=0; j<20; j++){
            a [i][j]=0;
        }
    }
}
void init (char b[20]){
    for (int i=0; i<20; i++){
        b [i]= 0;
    }
}
int ricerca (char lista_nomi [10][20], char nome [20]){
    int c=0;
    for (int i=0; i<10;i++){
        c=0;
        for (int j=0;j<20;j++){
            if (lista_nomi [i][j]==nome [j]){
                c++;
            }else
                break;
        }
        if (c==20){
            return i;
        }
    }
    return -1;
}
