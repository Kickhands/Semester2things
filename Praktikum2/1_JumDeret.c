/*
Nama 		: Gigih Haidar Falah
NIM		    : 24060122140110
Tanggal		: 8 Maret 2023
Deskripsi 	: Menghitung Jumlah Deret dari N
*/

#include <stdio.h>
int main(){
    //Kamus//
    int N, Sum,i;

    //Algoritma//
    printf("Program Jumlah Deret\n");
    printf("Masukan N : ");
    scanf("%i", &N);

    if (N <= 0)
    {
        printf("Masukan N harus positif!");
    }
    else
    {
        Sum = 0;
        for (i = 1; i <= N; i++)
        {
            Sum += i;
        }
        printf("Jumlah Total Deretnya adalah %i", Sum);
    }
    return 0;
}
