#include<stdio.h>
int main(){
  int n,x;
  scanf("%d",&n);
  int arr1[n];
  int temp[n];
  for(int i=0;i<n;i++)
  {
      scanf("%d",&arr1[i]);
  }
  scanf("%d",&x);
  int arr2[x];
  for(int j=0;j<x;j++)
  {
      scanf("%d",&arr2[j]);
  }
  for(int k=0,i=0;i<n;k++,i++)
  {
      temp[k]=arr1[i];
  }
  for(int i=0,j=0;j<x;j++,i++)
  {
      arr1[i]=arr2[j];
  }
  for(int k=0,j=0;k<n;k++,j++)
  {
      arr2[j]=temp[k];
  }
   printf("A=");
     for(int i=0;i<x;i++)
  {
     printf("%d ",arr1[i]);
  }
   printf("\nB=");
     for(int j=0;j<n;j++)
  {
     printf("%d ",arr2[j]);
  }

}























