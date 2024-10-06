/*Set Intersection*/

#include<stdio.h>
/*****************/
void MergeIntersectionSet(int A[], int m, int B[], int n)
{
    int C[m+n];
    int i=0, j=0, k=0;
    while(i<m && j<n)
    {
        if(A[i]<B[j]){

            i++;

        }
        else{
            if(B[j]<A[i]){

                j++;

            }
            else{
                C[k]=A[i];
                i++;
                j++;
                k++;
            }
        }
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
    int A[10] = {1,2,3,4,5};
    int m = 5;
    int B[10] = {2,4,5,6,8};
    int n = 5;
    MergeIntersectionSet(A,m,B,n);
    return 0;
}

