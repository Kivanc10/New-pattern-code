#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N=6;
    int A[]={1,3,5,7,8,9};
    int M=4;
    int B[]={2,6,10,13};
    int ia=0,ib=0,ic=0,i;
    int C[10];
    while(ia<N && ib<M){
        if(A[ia]>B[ib]){
            C[ic]=B[ib];
            ic++;
            ib++;
        }
        else{
            C[ic]=A[ia];
            ic++;
            ia++;
        }
    }
    while(ib<M){
        C[ic]=B[ib];
        ic++;
        ib++;
    }
    while(ia<N){
        C[ic]=A[ia];
        ic++;
        ia++;
    }
    for(i=0;i<10;i++){
        printf(" %d  ",C[i]);
    }

    return 0;
}
