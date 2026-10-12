#include<stdio.h>
int main()
{
int arr[5];
int i;
int count=0;

printf("enter the array elements\n");
for(i=0;i<5;i++)
{
scanf("%d",&arr[i]);
}

printf("array elements are:\n");
for(i=0;i<5;i++)
{
printf("%d\t",arr[i]);
}
printf("\n");

for(i=0;i<5;i++)
{
if(arr[i]%2==0)
{
count++;
}
printf("Even numbers are:%d\n",arr[i]);
}
printf("Even numbers found are:%d\n",count);
return 0;
}
