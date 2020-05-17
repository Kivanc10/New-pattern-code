#include <stdio.h>
#include <stdlib.h>

struct kimlik
{
    char isim[30];
    int gun,ay,yil;
};
int enKucuguBul(struct kimlik Kisi[],int sayi){
    int enKucuk=0,i;
    for(i=1;i<sayi;i++){
        if(Kisi[i].yil*365+Kisi[i].ay*30+Kisi[i].gun > Kisi[enKucuk].yil*365+Kisi[i].ay*30+Kisi[i].gun){
            enKucuk=i;
        }
    }
    return enKucuk;
}
int main()
{
    int sayi;
    printf("Kisi sayisini girin:\n");
    scanf("%d",&sayi);
    struct kimlik kisiler[sayi];
    int i;
    for(i=1;i<=sayi;i++){
        printf("%d. kisinin ismini girin : ",i);
        scanf("%s",&kisiler[i-1].isim);
        printf("%d. kisinin dogum tarihini girin:\nGun : ",i);
        scanf("%d",&kisiler[i-1].gun);
        printf("Ay:");
        scanf("%d",&kisiler[i-1].ay);
        printf("Yil:");
        scanf("%d",&kisiler[i-1].yil);
        printf("\n");
    }
    printf("\nKisi bilgileri\n -------------\n");
    for(i=0;i<sayi;i++){
        printf("%s - %d / %d / %d\n",kisiler[i].isim,kisiler[i].gun,kisiler[i].ay,kisiler[i].yil);
    }
    int enKucuk = enKucuguBul(kisiler,sayi);
    printf("\nEn kucuk kisinin ismi : %s\n\n",kisiler[enKucuk].isim);
    printf("En kucuk kisinin dogum tarihi : %d / %d / %d\n",kisiler[enKucuk].gun,kisiler[enKucuk].ay,kisiler[enKucuk].yil);
    return 0;
}
