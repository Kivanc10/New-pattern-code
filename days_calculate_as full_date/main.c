#include <stdio.h>
#include <stdlib.h>
void hesapla(int toplam , int *yil,int *ay,int *gun){
    *yil = (toplam/365);
    *ay = (toplam%365)/30;
    *gun = (toplam%365)%30;
}
int main()
{
    int yil,ay,gun;
    int girilenToplam;
    printf("Isin bitme suresini girin : \n");
    scanf("%d",&girilenToplam);
    hesapla(girilenToplam,&yil,&ay,&gun);
    printf("\n%d yil %d ay %d gun surer\n",yil,ay,gun);
    return 0;
}
