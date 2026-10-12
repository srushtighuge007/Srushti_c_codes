#include<stdio.h>
int main()
{
int arr[10];
int num;
int count1=0;
int count2=0;
int count3=0;

printf("enter the values of array\n");
for(int i=0;i<10;i++)
{
scanf("%d",&arr[i]);
}
printf("array elements are\n");
for(int i=0;i<10;i++)
{
printf("%d\t",arr[i]);
}

if(arr[i]==0)
{
count1++;
}

else if(arr[i]>0)
{
count2++;
}

else
{
count3++;
}

printf("zero count %d\n",count1);
printf("positive count %d\n",count2);
printf("negative count %d\n",count3);
}