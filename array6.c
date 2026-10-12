#include<stdio.h>
int main()
{
int n;
int i,j,temp;
int count=0;

printf("Enter the size of the array: ");
scanf("%d", &n);

int arr[n];
printf("enter the array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

printf("array elements are:\n");
for(i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
printf("\n");

for(i=0;i<n;i++) 
{
if(arr[i]%2==0) 
{
for(j=i+1;j<n;j++) 
{
if (arr[j]%2==0 && arr[i]>arr[j]) 
{
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
}
}
}
printf("Array after sorting only even numbers:\n");
for(i=0;i<n;i++)  
{
printf("%d\t", arr[i]);
}
printf("\n");
return 0;
}

