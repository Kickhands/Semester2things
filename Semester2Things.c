/*Nama File : JarakPBola*/
/*Deskripsi : Menghitung dan menampilkan y*/
/*Pembuat   : Gigih Haidar Falah- 24060122140150*/
/*Tanggal   : Senin, 27, 23.09*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    float V0;
    float t;
    float g;
    float y;

    printf("Masukkan nilai (V0): ");
    scanf("%f", &V0);
    printf("Masukkan nilai (t): ");
    scanf("%f", &t);
    printf("Masukkan nilai (g): ");
    scanf("%f", &g);

    y = V0 * t - 1/2 * (g * t * t);
    printf("y = %f\n", y);

    /*Nama File : gayaSentr*/
    /*Deskripsi : Menghitung dan menampilkan Massa F*/
    /*Pembuat   : Gigih Haidar Falah- 24060122140150*/
    /*Tanggal   : Senin, 27, 23.09*/

    float m;
    float v;
    float r;
    float F;

    printf("Masukkan nilai (m): ");
    scanf("%f", &m);
    printf("Masukkan nilai (v): ");
    scanf("%f", &v);
    printf("Masukkan nilai (r): ");
    scanf("%f", &r);

    F = m * (v * v / r);
    printf("F = %f\n", F);

    /*Nama File : JarakGLBB*/
    /*Deskripsi : Menghitung dan menampilkan Jarak s*/
    /*Pembuat   : Gigih Haidar Falah- 24060122140150*/
    /*Tanggal   : Senin, 27, 23.09*/

    float a;
    float s;

    printf("Masukkan nilai (V0): ");
    scanf("%f", &V0);
    printf("Masukkan nilai (t): ");
    scanf("%f", &t);
    printf("Masukkan nilai (a): ");
    scanf("%f", &a);

    s = V0 * t + 1/2 * (a * t * t);
    printf("Jarak S = %f\n", s);

    /*Nama File : luasKellLayang*/
    /*Deskripsi : Menghitung dan menampilkan Luas dan Keliling Layang layang*/
    /*Pembuat   : Gigih Haidar Falah- 24060122140150*/
    /*Tanggal   : Senin, 27, 23.09*/

    float s1;
    float s2;
    float d1;
    float d2;
    float Luas;
    float Keliling;

    printf("Masukkan nilai (s1): ");
    scanf("%f", &s1);
    printf("Masukkan nilai (s2): ");
    scanf("%f", &s2);
    printf("Masukkan nilai (d1): ");
    scanf("%f", &d1);
    printf("Masukkan nilai (d2): ");
    scanf("%f", &d2);

    Luas = (d1 * d2) / 2;
    Keliling = 2 * (s1 + s2);
    printf("Luas = %f\n", Luas);
    printf("Keliling = %f\n", Keliling);

    /*Nama File : volBolaKaret*/
    /*Deskripsi : Menghitung dan menampilkan Volume Bola Karet*/
    /*Pembuat   : Gigih Haidar Falah- 24060122140150*/
    /*Tanggal   : Senin, 27, 23.09*/

    int r2;
    int Vb;
    int Vk;
    const float phi = 3.14;

    printf("Masukkan nilai (r): ");
    scanf("%d", &r2);

    Vb = 4/3 * (phi * r2 * r2 * r2);
    Vk = 1/2 * Vb;
    printf("Vb = %d\n", Vb);
    printf("Vk = %d\n", Vk);

    return 0;
}
