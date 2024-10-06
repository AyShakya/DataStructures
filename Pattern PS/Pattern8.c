#include<stdio.h>
void main(){
    int i,j,k;
    char c='A',m;
    printf("Enter your number:");
    scanf("%d",&k);
    for(i=1;i<=k;i++){
        m=c;
        for(j=1;j<=i;j++){
            printf("%c ", m);
            m++;
        }
        c++;
        printf("\n");
    }
}
