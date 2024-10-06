#include<stdio.h>
void main(){
    int i,j,k,p;
    printf("Enter your number:");
    scanf("%d",&k);
    for(i=1;i<=k;i++){
        for(p=1;p<=k-i;p++){
            printf(" ");
        }
        for(j=1;j<=i*2-1;j++){
            printf("*");
        }
        printf("\n");
    }
    int x=2*k-1;
    for(i=1;i<=k-1;i++){
        for(p=1;p<=i;p++){
            printf(" ");
        }
        x=x-2;
        for(j=1;j<=x;j++){
            printf("*");
        }
        printf("\n");
    }
}


