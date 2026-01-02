#include<stdio.h>
int main(){
int n,count=0;
scanf("%d",&n);
int arr[n];
  for(int i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }

  for(int j=0;j<n;j++)
  {
      for(int k=j+1;k<n;k++)
      {
          if(arr[j]==arr[k])
          {
             for(int m=k;m<n;m++)
             {
                 arr[k]=arr[k+1];
             }
             n--;
             k--;
          }
      }
  }
  for(int i=0;i<n;i++)
  {
     printf("%d ",arr[i]);
  }
}

