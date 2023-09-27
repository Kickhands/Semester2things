/*Nama File : BilSempN */
/*Deskripsi : algoritma untuk mencetak bilangan Sempurna sampai dengan bilangan integer sembarang N.  */
/*Pembuat   : Gigih Haidar Falah - 24060122140150
/*Tanggal   : Jumat 24-03-2024 */

#include <stdio.h>
#include <stdlib.h>


int main() {
    /*kamus*/
    int n;
    scanf ("%d",&n);
    int tab [n+1];
    int i;

    /*algoritma*/

    int maks1 = 0;
    int maks2 = 0;
    for (i=1;i<=n;i++){
        scanf("%d",&tab[i]);
    }
    for (i=1;i<=n;i++){
        if (tab[i]>maks1){
            maks2=maks1;
            maks1=tab[i];
        } else if ((tab[i]<maks1)&&(tab[i]>maks2)){
            maks2=tab[i];
        }

    }
    printf ("%d",maks2);


    return 0;
}
