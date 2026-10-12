#include<stdio.h>
int main() 
{
int arr[10],min,i;
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

min=arr[0];

for(i=1;i<10;i++) 
{
if(arr[i]<min) 
{
min=arr[i];
}
}
printf("The smallest number is: %d\n",min);
return 0;
}    