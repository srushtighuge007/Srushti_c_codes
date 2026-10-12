#include<stdio.h>
int main()
{
int arr[10];
printf("enter the array elements\n");
for(int i=0;i<10;i++)
{
scanf("%d",&arr[i]);
}
printf("array elements\n");
for(int i=0;i<10;i++)
{
printf("%d\t",arr[i]);
}

printf("\n");
for(int i=0;i<10;i++)
{
int rev=0;
int num=arr[i];

while(num>0)
{
rev=rev*10+num%10;

num=num/10;
}

if(arr[i]==rev)
{
printf("palindrome number found at %d\n",i);
}

}
}