#include<stdio.h>
void main(){
    int i,j,k;
    char c='A';
    printf("Enter your number:");
    scanf("%d",&k);
    for(i=1;i<=k;i++){
        for(j=1;j<=i;j++){
            printf("%c ", c);
            c++;
        }
        printf("\n");
    }
}
