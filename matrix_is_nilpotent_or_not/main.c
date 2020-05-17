#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int boyut;
int nilpotent(int matris[][boyut],int boy){
    int count,i,j,deger;
    int sonMatris[boy][boy];
    int sonToplam=0;
    for(i=0;i<boy;i++){
        for(j=0;j<boy;j++){
            deger=0;
            for(count=0;count<boy;count++){
                deger+=matris[i][count]*matris[count][j];
            }
            sonMatris[i][j]=deger; // matrisin çarpýlmýþ hali bulunuyor
        }
    }
    for(i=0;i<boy;i++){
        for(j=0;j<boy;j++){
            sonToplam+=sonMatris[i][j];
        }
    }
    if(sonToplam==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    srand(time(NULL));
    printf("Please enter the size of matrix\n");
    scanf("%d",&boyut);
    int matris[boyut][boyut];
    for(int i=0;i<boyut;i++){
        for(int j=0;j<boyut;j++){
            matris[i][j]=rand()%20+(-10);
        }
    }
    printf("\nOccured matrix :\n");
    for(int i=0;i<boyut;i++){
        for(int j=0;j<boyut;j++){
            printf(" %3d ",matris[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    if(nilpotent(matris,boyut) ==1){
        printf("\nThe entered matrix is nilpotent\n");
    }
    else{
        printf("\nThe entered matrix is not nilpotent\n");
    }

    return 0;
}
