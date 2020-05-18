#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int n[],int len)
{
    int temp,mov,pass;

    for(pass=1;pass<len;pass++)
    {
        for(mov=0;mov<len-1;mov++)
        {
            if(n[mov]>n[mov+1])
            {
                temp=n[mov];
                n[mov]=n[mov+1];
                n[mov+1]=temp;
            }
        }
    }

}
int searching(int array[],int len,int wanted){
    int middle;
    int lower=0;
    int upper = len-1;
    while(lower<=upper){
        middle=(lower+upper)/2;
        if(array[middle]==wanted){
            return middle;
        }
        if(array[middle] > wanted){
            upper=middle-1;
        }
        else{
            lower=middle+1;
        }
    }
    return -1;
}
int main()
{
    int n;
    printf("\nEnter size of array :\n");
    scanf("%d",&n);
    int d[n],i,wanted;
    printf("\nEnter elements of array : \n");
    for(i=0;i<n;i++){
        printf("%d. number ",i+1);
        scanf("%d",&d[i]);
        printf("\n");
    }
    printf("\nEntered array is : \n");
    for(i=0;i<n;i++)
    {
        printf("%d \t",d[i]);
    }
    printf("\n");
    bubbleSort(d,n);
    printf("\nAfter the sorting : \n");
    for(i=0;i<n;i++)
    {
        printf("%d \t",d[i]);
    }
   printf("\n\n\n");
   while(1)
    {
        printf("\nEnter the wanted number : \n");
        scanf("%d",&wanted);
        int located = searching(d,n,wanted);
        if(located==-1)
        {
            printf("\nArray has not this number\n");
        }
        else
        {
            printf("\n%d numbers located in %d. index\n",wanted,located);
        }

    }

    return 0;
}
