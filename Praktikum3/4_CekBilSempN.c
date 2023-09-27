/*
Nama 		: Gigih Haidar Falah
NIM		    : 24060122140150
Tanggal		: 8 Maret 2023
Deskripsi 	: menentukan apakah sebuah bilangan integer sembarang N (N>0) adalah bilangan Sempurna atau Bukan
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Kamus //
    int N, i, faktor = 0 ;

    // Algoritma //
    printf("N = ");
    scanf("%d", &N);


    if (N>0){
        for (i = 1; i <= N/2 ; i++){
            if (N % i == 0){
                faktor += i;
            }
        }
    }

    if (N>0){
        if (faktor == N){
            printf("Bilangan Sempurna");
        }else{
            printf("Bukan Bilangan Sempurna");
        }
    }
    return 0;
}



