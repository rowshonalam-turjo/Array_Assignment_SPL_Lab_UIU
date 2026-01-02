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
    for(int j=0; j<y; j++)
    {
        scanf("%d",&arr2[j]);
    }
    int arr3[x<y? x:y];
    int count=0;
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            if(arr1[i]==arr2[j])
            {

                arr3[count]=arr1[i];
                count++;
            }
        }
    }
    if(count>0)
    {
        for(int a=0; a<count; a++)
        {
            printf("%d ",arr3[a]);
        }
    }
    else{
        printf("Empty Set.");
    }

}
