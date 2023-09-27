/*
Nama 		: Gigih Haidar Falah
NIM		    : 24060122140150
Tanggal		: 8 Maret 2023
Deskripsi 	: Menentukan Faktor Bilangan N
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus//
    int N;

    //Algoritma//
    printf("Program Faktor Bilangan\n");
    printf("Masukkan bilangan integer positif sembarang N : ");
    scanf("%i", &N);

    if (N <= 0)
    {
        printf("N harus positif");
    }
    else{
        for (int i = 1; i <= N; i++)
        {
            if (N % i==0)
            {
                printf(" %i ", i);
            }
        }
    }
}

