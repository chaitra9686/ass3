//to reverse an array without using temporary array//
#include<stdio.h>
int main()
{
    int n,i,j,t,arr[30],len ,temp;
    printf("enter the no of elements to insert in an array");
    scanf("%d",&len);
    printf("enter elements to insert in an array");
    for(i=0;i<len;i++)
    scanf("%d",&t);
    arr[i]=t;
    printf("original array is");
    for(i=0,arr[i]!='\0';i++)
    printf("%d",arr[i]);
    j=len-1;
    for(i=0;i&lt=(len/2);i++)
    temp=arr[i];
    arr[i]=temp;
    j--;
}
printf("reverse is");
for(i=0;arr[i]!='\0';i++)
printf("%d",arr[i]);
}

    
