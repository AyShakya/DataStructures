#include<stdio.h>
void Traverse(int A[], int N)
{
    int i;
    for(i=0;i<N;i++){
        printf("%d  ", A[i]);
    }
    printf("\n\n");
}
void ReverseArray(int A[], int i, int j, int N)
{
    int a;
    while(i<j)
    {
        a = A[i];
        A[i] = A[j];
        A[j] = a;
        i++;
        j--;
    }
}
void rotate(int A[], int N, int k) {
    ReverseArray(A,N-k,N-1,N);
    ReverseArray(A,0,N-k-1,N);
    ReverseArray(A,0,N-1,N);
}
int main(){
    int A[10]={1,2,3,4,5};
    int N=5;
    int k;
    printf("Enter:");
    scanf("%d",&k);
    rotate(A,N,k);
    Traverse(A,N);

}
