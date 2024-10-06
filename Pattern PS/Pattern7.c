#include<stdio.h>
void main(){
    int i,j,k,p,m,c=1;
    printf("Enter your number:");
    scanf("%d",&k);
    for(i=1;i<=k;i++){
        for(p=k-1;p>=i;p--){
            printf(" ");
        }
        m=c;
        for(j=1;j<=i;j++){
            printf("%d ", m);
            m++;
        }
        c++;
        printf("\n");
    }
}
