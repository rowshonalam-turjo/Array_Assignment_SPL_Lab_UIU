#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    int A[x];
    for(int i=0;i<x;i++)
    {
        scanf("%d",&A[i]);
    }
    scanf("%d",&y);
    int B[y];
    for(int j=0;j<y;j++)
    {
        scanf("%d",&B[j]);
    }
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            if(A[i]==B[j])
            {
                for(int k=i;k<x-1;k++)
                {
                    A[k]=A[k+1];
                }
                i--;
                x--;
            }
        }

    }
    for(int i=0;i<x;i++)
    {
        printf("%d ",A[i]);
    }

}
