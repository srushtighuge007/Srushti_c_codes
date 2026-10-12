#include<stdio.h>
int main()
{
int arr[5];
int i;
int count1=0;
int count2=0;

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

printf("Even numbers are\n");
for(i=0;i<5;i++)
{
if(arr[i]%2==0)
{
printf("%d\n",arr[i]);
count1++;
}
}
printf("total even numbers are:%d\n",count1);

printf("Odd numbers are\n");
for(i=1;i<5;i++)
{
if(arr[i]%2!=0)
{
printf("%d\n",arr[i]);
count2++;
}
}
printf("total odd numbers are:%d\n",count2);
return 0;
}
