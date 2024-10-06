#include<stdio.h>
int main(){
    int A[100][100];
    int m,n,k,p;
    printf("Enter no. of row:");
    scanf("%d",&m);
    printf("Enter no. of column:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(k=0;k<m;k++){
        for(p=0;p<n;p++){
            scanf("%d",&A[k][p]);
        }
    }
    int i,j,s,e,temp;
    int B[100][100];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            B[j][i]=A[i][j];
        }
    }
    for(i=0;i<n;i++){
        s=0;
        e=m-1;
        while(s<e){
            temp=B[i][s];
            B[i][s]=B[i][e];
            B[i][e]=temp;
            s++;
            e--;
        }
    }
    int x,y;
    for(x=0;x<n;x++){
        printf("\n");
        for(y=0;y<m;y++){
            printf(" %d ", B[x][y]);
        }
    }
return 0;
}
