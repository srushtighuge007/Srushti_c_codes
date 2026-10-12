#include<stdio.h>
int main()
{
int arr[10],i,j,count;
printf("enter the array elements\n");
for(i=0;i<10;i++)
{
scanf("%d",&arr[i]);
}
printf("array elements are:\n");
for(int i=0;i<10;i++)
{
printf("%d\t",arr[i]);
}
printf("\n");

printf("\nFrequency of each element:\n");
for(i=0;i<10;i++)
{
count=0;
int alreadyCounted=0;
for(j=0;j<i;j++) 
{
if(arr[i]==arr[j])
{
alreadyCounted=1;
break;
}
}
if(alreadyCounted==0)
{
for(j=0;j<10;j++) 
{
if(arr[i]==arr[j]) 
{
count++;
}
}
printf("%d occurs %d times\n",arr[i],count);
}
}

return 0;
}
