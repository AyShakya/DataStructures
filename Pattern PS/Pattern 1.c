/*
1
22
333
4444
55555
*/
#include<stdio.h>

int main(){
    int i,j,k;
    printf("Enter number:");
    scanf("%d", &k);
    for(i=1;i<=k;i++){
        for(j=1;j<=i;j++){
            printf("%d", i);
        }
        printf("\n");
    }
}
