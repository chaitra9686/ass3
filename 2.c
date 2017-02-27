// program to find smallest and largest no in a array//
#include<stdio.h>
main()
{
      int a[10],i,n;
      printf("enter array elements");
      for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      max=a[0];
      for(i=0;i<n;i++)
      if(a[i+1]>max)
      max=a[i+1];
      printf("largest no is %d",max);
      min=a[0];
      for(i=0;i<n;i++)
      if(a[i+1]<min)
      min=a[i+1];
      printf("smallest no is %d",min);
      }
      
