// Example program to demonstrate sprintf()
#include<stdio.h>


int primaryControl(int n){
    int flag=1,j;
    if(n==0 || n==1){
        flag=0;
    }
    for(j=2;j<=n/2;j++){
        if(n%j==0){
            flag=0;
            break;
        }
    }
    return flag;
}
int main(){
    int i,flag;
    char str[1000];
    for(i=0;i<101;i++){
        flag=primaryControl(i);
        if(flag==0){
            if(i%2==0){
                sprintf(str,"|%3d(double)| ...><... | %4d|..>>..|%9.3f| \n", i, i*2, (i*1.0)*2.0 );
            }
            if(i%2==1){
                sprintf(str,"|%3d(single)| ...><... | %4d|..>>..|%9.3f| \n", i, i/2, (i*1.0)/2.0 );
            }
        }
        if(flag==1 && i!=0){
            sprintf(str,"|%3d(primary)| ...><... | %4d|..>>..|%9.3f| \n", i, i*i, (i*1.0)*(i*1.0));
        }
        printf("%s",str);
    }
     return 0;
}


