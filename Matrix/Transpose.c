#include<stdio.h>
int main(){
    int A[100][100];
    int m;
    printf("Enter no. of row and column:");
    scanf("%d",&m);
    printf("Enter elements:");
    for(int k=0;k<m;k++){
        for(int p=0;p<m;p++){
            scanf("%d",&A[k][p]);
        }
    }
    int i,j,k,p,temp;
    int B[100][100];
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            B[j][i]=A[i][j];
        }
    }
    for(k=0;k<m;k++){
        printf("\n");
        for(p=0;p<m;p++){
            printf(" %d ", B[k][p]);
            }
    }

    return 0;
}
