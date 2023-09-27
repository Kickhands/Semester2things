#include <stdio.h>
#include <stdbool.h>

int main () {
    // Kamus
    int a, b, c;

    // Input
    printf("Masukkan nilai a : ");
    scanf("%d", &a);
    printf("Masukkan nilai b : ");
    scanf("%d", &b);
    printf("Masukkan nilai c : ");
    scanf("%d", &c);

    // Algoritma
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Terdapat nilai yang bukan segitiga.\n");
    } else if (a != b && b != c && a != c) {
        printf("Segitiga Sembarang.\n");
    } else if (a == b && b != c || b == c && c != a || c == a && c != b) {
        printf("Segitiga Sama Kaki.\n");
    } else if (a == b && b == c && c == a) {
        printf("Segitiga Sama sisi.\n");
    }

    // Kamus
    int i;

    // Input
    printf("Masukkan sebuah bilangan: ");

    // Algoritma
    if (scanf("%d", &i)) {
        if (i > 0) {
            printf("%d adalah bilangan positif.\n", i);
        } else if (i == 0) {
            printf("%d adalah nol.\n", i);
        } else if (i < 0) {
            printf("%d adalah bilangan negatif.\n", i);
        }
    } else {
        printf("Bukan merupakan sebuah bilangan.\n");
    }

    // Kamus
    int x, y, z;

    // Input
    printf("Masukkan x: ");
    scanf("%d", &x);
    printf("Masukkan y: ");
    scanf("%d", &y);
    printf("Masukkan z: ");
    scanf("%d", &z);

    if (x >= 0 && y >= 0 && z >= 0) {
        printf("Rangkai seri.\n");
    } else {
        printf("Masukkan tahanan tidak boleh negatif.\n");
    }

    // Kamus
    int iA, iB;
    char o;
    float t;
    char trash;

    // Input
    printf("Masukkan nilai iA : ");
    scanf("%d", &iA);
    printf("Masukkan nilai iB : ");
    scanf("%d", &iB);
    printf("Masukkan operasi: ");
    scanf(" %c", &o);  // Sisipkan spasi sebelum %c untuk menghindari masalah dengan karakter newline sebelumnya.

    // Algoritma
    switch (o) {
    case 'a':
        printf("%d\n", iA + iB);
        break;
    case 'b':
        printf("%d\n", iA - iB);
        break;
    case 'c':
        printf("%d\n", iA * iB);
        break;
    case 'd':
        t = (float)iA / iB;
        printf("%f\n", t);
        break;
    case 'e':
        printf("%d\n", iA / iB);
        break;
    case 'f':
        printf("%d\n", iA % iB);
        break;
    default:
        printf("Bukan Pilihan Menu\n");
    }

    // Kamus
    int C;

    // Input
    printf("Masukkan nomor bulan : ");
    scanf("%d", &C);

    // Algoritma
    switch (C) {
    case 1:
        printf("Januari\n");
        break;
    case 2:
        printf("Februari\n");
        break;
    case 3:
        printf("Maret\n");
        break;
    case 4:
        printf("April\n");
        break;
    case 5:
        printf("Mei\n");
        break;
    case 6:
        printf("Juni\n");
        break;
    case 7:
        printf("Juli\n");
        break;
    case 8:
        printf("Agustus\n");
        break;
    case 9:
        printf("September\n");
        break;
    case 10:
        printf("Oktober\n");
        break;
    case 11:
        printf("November\n");
        break;
    case 12:
        printf("Desember\n");
        break;
    default:
        printf("Masukkan nomor Bulan tidak tepat\n");
    }

    // Kamus
    int D;

    // Input
    printf("Masukkan nomor hari : ");
    scanf("%d", &D);

    // Algoritma
    switch (D) {
    case 1:
        printf("Hari Senin\n");
        break;
    case 2:
        printf("Hari Selasa\n");
        break;
    case 3:
        printf("Hari Rabu\n");
        break;
    case 4:
        printf("Hari Kamis\n");
        break;
    case 5:
        printf("Hari Jumat\n");
        break;
    case 6:
        printf("Hari Sabtu\n");
        break;
    case 7:
        printf("Hari Minggu\n");
        break;
    default:
        printf("Masukkan nomor hari tidak tepat\n");
    }

    return 0;
}
