/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
#include<stdio.h>
void main(){
    int i,j,k,c=1;
    printf("Enter your number:");
    scanf("%d",&k);
    for(i=1;i<=k;i++){
        for(j=1;j<=i;j++){
            printf("%d ", c);
            c++;
        }
        printf("\n");
    }
}
