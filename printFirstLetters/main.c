#include <stdio.h>
#include <stdlib.h>
void printFirstLetters(const char *c){
    if(c==NULL){
        return;  //control of null
    }
    int lengthOfChar=strlen(c);
    if(c[0]!=' ' && c[0]!='\0'){
        printf("%c\n",c[0]); //print first letter
    }
    for(int i=0;i<lengthOfChar;i++){
        if(c[i]==' '){
            if(i+1<lengthOfChar && c[i+1]!= ' '){
                printf("%c\n",c[i+1]);
            }
        }
    }

}
int main()
{
    char c1[100];
    printf("Enter text\n");
    gets(c1);
    printFirstLetters(c1);
    return 0;
}
