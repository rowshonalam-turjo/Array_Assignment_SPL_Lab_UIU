#include<stdio.h>
int main()
{
   int n,sum=0,j=1;
   printf("Enter number=");
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
       if(j%2!=0)
       {sum+=arr[i];}
       j++;
   }
   printf("sum=%d",sum);
}

