/*Merging Sorted Array*/

#include<stdio.h>
/*****************/
void MergeArray(int A[], int m, int B[], int n)
{
    int C[m+n];
    int i=0, j=0, k=0;
    while(i<m && j<n)
    {
        if(A[i]<B[j]){
            C[k]=A[i];
            i++;
            k++;
        }
        else{
            C[k]=B[j];
            j++;
            k++;
        }
    }
    while(i<m)
    {
        C[k]=A[i];
        i++;
        k++;
    }
    while(j<n)
    {
        C[k]=B[j];
        j++;
        k++;
    }
    Traverse(C,k);
}
/*****************/
void Traverse(int A[], int N)
{
    int i;
    for(i=0;i<N;i++){
        printf("%d  ", A[i]);
    }
    printf("\n\n");
}
/*****************/
int main()
{
    int A[10] = {2,6,12,18,24};
    int m = 5;
    int B[10] = {5,10,15,20,25};
    int n = 5;
    MergeArray(A,m,B,n);
}
