#include<stdio.h>
int main()
{
int arr[5];
int search;
int found=0;

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

printf("\nEnter the element to search: ");
scanf("%d",&search);

for(int i=0;i<5;i++) 
{
if(arr[i]==search)
{
printf("Element %d found in the array\n",search);
found=1;
break;
}
}
if(found==0)
{
printf("Element %d not found in the array\n",search);
}
return 0;
}