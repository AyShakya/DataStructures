#include<stdio.h>
void main(){
    int x,i,j,k,p,N;
    printf("Enter your number:");
    scanf("%d",&N);
    x=2*(N-1);
    for(i=1;i<=N;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        for(k=1;k<=x;k++){
            printf(" ");
        }
        x=x-2;
        for(p=i;p>=1;p--){
            printf("%d",p);
        }
        printf("\n");
    }
}
