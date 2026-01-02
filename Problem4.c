#include<stdio.h>
int main()
{
   int n;
   float sum=0,avg;
   printf("Enter number=");
   scanf("%d",&n);
   float arr[n];
   for(int i=0;i<n;i++)
   {
       scanf("%f",&arr[i]);
       sum=sum+arr[i];
   }
   avg=(sum/n);
   printf("Avg=%.2f",avg);
}

