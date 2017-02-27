//program to find nth smallest element in an unsorted array//
#include<stdio.h>
int main()
{
int a[10],i,n;
printf("enter the elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
min=a[0];
for(i=0;i<n;i++)
if(a[i+1]<min)
min=a[i+1];
printf("%d is small",min);
return 0;
}




