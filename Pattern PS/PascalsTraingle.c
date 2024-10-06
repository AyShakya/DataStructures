#include<stdio.h>
void PascalTriangle(int N){
    int M[100][100]={0};
    M[0][N-1] = 1;
    for(int i=1;i<N;i++){
        for(int j=0;j<N;j++){
            M[i][j]=M[i-1][j]+M[i-1][j+1];
        }
    }
    for(int k=0;k<N;k++){
        for(int p=0;p<N;p++){
            if(M[k][p]!=0){
                printf("%d ", M[k][p]);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
int main(){
    int k;
    printf("Enter no. of rows:");
    scanf("%d",&k);
    PascalTriangle(k);
    return 0;
}
