#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    int arr1[x];
    for(int i=0; i<x; i++)
    {
        scanf("%d",&arr1[i]);
    }
    scanf("%d",&y);
    int arr2[y];
    for(int j=0; j<y;j++)
    {
        scanf("%d",&arr2[j]);
    }
    int count=0;
    int arr3[x+y];
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y;j++)
        {
            if(arr1[i]==arr2[j])
            { for(int k=j;y>k;k++)
               {arr2[k]=arr2[k+1];

               }
               y--;

            }
        }
    }
    for(int k=0; k<x; k++)
    {
       arr3[count]=arr1[k];
       count++;
    }

    for(int m=0; m<y; m++)
    {
       arr3[count]=arr2[m];
         count++;

    }
    for(int a=0;a<count;a++)
    {
        printf("%d ",arr3[a]);
    }


}
