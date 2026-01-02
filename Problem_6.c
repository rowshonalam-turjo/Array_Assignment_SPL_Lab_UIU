#include<stdio.h>
int main()
{
   int n,sum=0;
   printf("Enter number=");
   scanf("%d",&n);
   int arr1[n];
   int arr2[n];
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr1[i]);
   }
    for(int i=0;i<n;i++)
   {
       scanf("%d",&arr2[i]);
   }
   for(int j=0;j<n;j++)
   {
       printf(" %d",arr1[j]+arr2[j]);
   }

}

