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
    printf("Number=");
    scanf("%d",&a);
    printf("Position=");
    scanf("%d",&b);

    for(int m=n; m>=b; m--)
    {
        if(m>=b)
        {
            arr[m]=arr[m-1];
        }
    }
    arr[b]=a;

    for(int k=0; k<=n; k++)
    {
        printf("%d ",arr[k]);
    }


}
