#include<stdio.h>
int main()
{
int n,i,j,temp;
printf("Enter the size of the array:");
scanf("%d",&n);
int arr[n],mid;
mid=n/2;

printf("enter the array elements\n");
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("array elements are:\n");
for(int i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
printf("\n");

for(int i=0;i<mid;i++)
{
for(int j=i+1;j<mid;j++)
{
if(arr[i]>arr[j])
{
int temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
53;
for(i=mid; i<n; i++) 
{
for(j=i+1; j<n; j++) {
if(arr[i]<arr[j]) 
{
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
}
}

printf("\nArray after sorting:\n");
for (i = 0; i < n; i++)
{
printf("%d\t", arr[i]);
}
printf("\n");

return 0;
}

