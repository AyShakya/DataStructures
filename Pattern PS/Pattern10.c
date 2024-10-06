#include<stdio.h>
void main(){
    int i,j,k,p;
    printf("Enter your number:");
    scanf("%d",&k);
    for(i=1;i<=k;i++){
        for(p=k-1;p>=i;p--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}
