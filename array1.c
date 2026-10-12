#include<stdio.h>
int main()
{
int arr[5];
int sum=0;

printf("enter the values of array\n");
for(int i=0;i<5;i++)
{
scanf("%d",&arr[i]);
}

printf("array elements are\n");
for(int i=0;i<5;i++)
{
printf("%d\t",arr[i]);
sum=sum+arr[i];
}
printf("\n");
printf("sum of array elements = %d\n",sum);

return 0;
}