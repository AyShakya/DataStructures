#include<stdio.h>
void main(){
    int i,j,k,p;
    printf("Enter your number:");
    scanf("%d",&k);
    int x=2*k-1;
    for(i=1;i<=k;i++){
        for(p=1;p<=i-1;p++){
            printf(" ");
        }
        for(j=1;j<=x;j++){
            printf("*");
        }
        x=x-2;
        printf("\n");
    }
    x=3;
    for(i=1;i<=k-1;i++){
        for(p=1;p<=k-i-1;p++){
            printf(" ");
        }
        for(j=1;j<=x;j++){
            printf("*");
        }
        x=x+2;
        printf("\n");
    }
}


