#include<stdio.h>
void main(){
    int i,j,l,k,N;
    printf("Enter your number:");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=1;j<=N-i;j++){
            printf(" ");
        }
        int m=i;
        for(k=1;k<=i;k++){
            printf("%d",m);
            m--;
        }
        int x=2;
        for(l=1;l<=i-1;l++){
            printf("%d",x);
            x++;
        }
        printf("\n");
    }
}
