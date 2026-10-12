#include<stdio.h>
int main() 
{
int arr[10],max,i;
printf("Enter the array elements:\n");
for(i=0;i<10;i++) 
{
scanf("%d",&arr[i]);
}

printf("array elements are:\n");
for(i=0;i<10;i++)
{
printf("%d\t",arr[i]);
}
printf("\n");

max=arr[0];

for(i=1;i<10;i++) 
{
if(arr[i]>max) 
{
max=arr[i];
}
}
printf("The largest number is: %d\n",max);
return 0;
}    