#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter number=");
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);

    }
    int max=arr[0],maxind=0,min=arr[0],minind=0;


    for(int j=0; j<n; j++)
    {
        if(max<arr[j])
        {
            max=arr[j];
            maxind=j;
        }
        if(min>arr[j])
        {
            min=arr[j];
            minind=j;
        }

    }
    printf("\nMax:%d,  Index:%d",max,maxind);
    printf("\nMin:%d,  Index:%d",min,minind);
}
