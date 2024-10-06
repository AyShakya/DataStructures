#include<stdio.h>
int TOH(int N, char S, char M, char D){
    if(N==1){
        printf("%c-->%c\n",S,D);
    }
    else{
        TOH(N-1,S,D,M);
        printf("%c-->%c\n",S,D);
        TOH(N-1,M,S,D);
    }
    return 0;
}
int main(){
    int k;
    printf("Enter terms:");
    scanf("%d",&k);
    TOH(k,'S','m','d');
    return 0;
}

