1)program to implement bubblesort
#include<stdio.h>
int main()
{
    int n,i,j,a[10],b[10],temp;
    for(i=0;i<n;i++)
    {
                    a[i]=0;
                    b[i]=0;
                    }
                    printf("enter the no of elemnts");
                    scanf"%d",&n);
                    printf("enter the elements");
                    for(i=0;i<n;i++)
                    scanf("%d",&a[i]);
                      for(i=0;i<n;i++)
                      {
                    for(j=i+1;j<n;j++)
                    {
                                      if(a[i]>a[j]){
                                                    temp=a[i];
                                                    a[i]=a[j];
                                                    a[j]=temp;
                                                    }
                                                    }
                                                    }
           printf("the given array elements");
                 for(i=0;i<n;i++)
                 printf("%d",b[i]);
                 printf("the sorted array elements are");
                    for(i=0;i<n;i++)
                    printf("%d",a[i]);
                    return 0;
                    }
                                
                    
