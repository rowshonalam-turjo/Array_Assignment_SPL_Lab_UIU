#include<stdio.h>
int main()
{
   int n;
   printf("Enter number=");
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   printf("ArrA=");
   for(int k=0;k<n;k++)
   {
        printf("%d ",arr[k]);
   }
    printf("\nArrB=");
   for(int j=n-1;j>=0;j--)
   {
       printf("%d ",arr[j]);
   }


}
