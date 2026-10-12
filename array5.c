#include<stdio.h>
int main()
{
int arr[5];
printf("enter the array elements\n");
for(int i=0;i<5;i++)
{
scanf("%d",&arr[i]);
}
printf("array elements are:\n");
for(int i=0;i<5;i++)
{
printf("%d\t",arr[i]);
}

int copy[5];

for(int i=0;i<5;i++)
{
copy[i]=arr[i];
}
printf("\n");
printf("copied array:\n");
for(int i=0;i<5;i++)
printf("%d\t",copy[i]);
}






















#