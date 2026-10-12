#include<stdio.h>
int main()
{
int arr[10];
printf("enter the array elements\n");
for(int i=0;i<10;i++)
{
scanf("%d",&arr[i]);
}
printf("array elements are:\n");
for(int i=0;i<10;i++)
{
printf("%d\t",arr[i]);
}

for(int i=0;i<10;i++)
{
for(int j=i+1;j<10;j++)
{
if(arr[i]>arr[j])
{
int temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}


printf("\nArray in ascending order is:\n");
for(int i=0;i<10;i++)
{
printf("%d\t",arr[i]);
}
return 0;
}