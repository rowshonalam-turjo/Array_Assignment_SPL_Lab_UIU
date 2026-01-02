#include<stdio.h>
int main()
{
    int n,a,fou=0;
    printf("Enter number=");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Sarching Value=");
    scanf("%d",&a);
    for(int j=0; j<n; j++)
    {
        if(a==arr[j])
        {
            if(fou==0)
            {
                printf("FOUND at index position: ");
                fou=1;
            }
            printf("%d,",j);
        }

    }
     if (fou == 0)
        {
        printf("NOT FOUND");
        }


}
