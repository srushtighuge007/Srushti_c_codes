#include<stdio.h>
int main() 
{
int arr[10],i,count1=0,count2=0;
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

for(i=0;i<10;i++) 
{
if(arr[i]%2==0) 
{
count1++;
} 
else
{
count2++;
}
}

printf("Even numbers count:%d\n",count1);
printf("Odd numbers count:%d\n",count2);

return 0;
}