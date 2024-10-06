#include<stdio.h>
void main(){
    int i,j,k;
    printf("Enter your number:");
    scanf("%d",&k);
    for(i=1;i<=k;i++){
        char c = 'A';
        for(j=1;j<=i;j++){
            printf("%c ", c);
            c++;
        }
        printf("\n");
    }
}
