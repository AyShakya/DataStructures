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
    for(i=0;i<m;i++){
        for(j=0;j<i;j++){
            temp=A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=temp;
        }
    }
    for(k=0;k<m;k++){
        printf("\n");
        for(p=0;p<m;p++){
            printf(" %d ", A[k][p]);
        }
    }
return 0;
}

