/*
Nama 		: Gigih Haidar Falah
NIM		    : 24060122140150
Tanggal		: 8 Maret 2023
Deskripsi 	: Menentukan Bilangan Prima
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
        for (i = 1; i <=N ; i++){
            if (N % i == 0){
                faktor++;
            }
        }
    }

    if (N>0){
        if (faktor ==2){
            printf("%d Bilangan Prima {faktor bilangannya adalah 1 dan %d ", N, N);
        }else{
            printf("%d Bukan Bilangan Prima {faktor bilangannya adalah ", N);
            for (i = 1; i <=N ; i++){
            if (N % i == 0){
                printf("%d",i);
            if (i != N){
                printf(", ");
            }
            }

        }
    }printf("}");
    return 0;
}
}

