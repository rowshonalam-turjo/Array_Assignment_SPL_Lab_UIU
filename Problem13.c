#include<stdio.h>
int main()
{
    int n,a,b;
    printf("Enter number=");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Position=");
    scanf("%d",&b);

    for(int m=0; m<n; m++)
    {
        if(m>b)
        {
            arr[m-1]=arr[m];
        }
    }


    for(int k=0; k<n-1; k++)
    {
        printf("%d ",arr[k]);
    }


}

