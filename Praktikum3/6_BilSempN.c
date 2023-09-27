/*
Nama 		: Gigih Haidar Falah
NIM		    : 24060122140150
Tanggal		: 8 Maret 2023
Deskripsi 	: Menentukan bilangan Sempurna sampai dengan bilangan integer sembarang N
*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    // Kamus //
    int N, i, faktor, j;

    // Algoritma //
    printf("N = ");
    scanf("%d", &N);

    if (N>0){
        for (i = 1; i <= N ; i++){
            faktor = 0 ;
            for (j = 1 ; j <= i/2; j++){
                if (i % j == 0){
                    faktor += j ;
                }
            }
            if(faktor == i){
                printf("%d ", i);
            }
        }
    }

    return 0;
}


