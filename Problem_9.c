#include<stdio.h>
int main()
{
   int n,count=0;
   char j;
   printf("Enter number=");
   scanf("%d",&n);
   char arr[n];
   for(int i=0;i<n;i++)
   {
       scanf("%c",&arr[j]);
      if(arr[j]=='a'||arr[j]=='e'||arr[j]=='i'||arr[j]=='o'||arr[j]=='u'||arr[j]=='A'||arr[j]=='E'||arr[j]=='I'||arr[j]=='O'||arr[j]=='U')
      {
          count++;
      }
   }
   printf("Count=%d",count);
}
