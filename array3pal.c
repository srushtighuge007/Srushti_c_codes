#include<stdio.h>

int checkPalindrome(int num)
{
int copy=num;
int rev=0;
while(num>0)
{
rev=rev*10+num%10;
num=num/10;
}

if(copy==rev)
{
return 1;
}
return 0;
}

int main()
{
int me[10];

printf("enter the array elements\n");
for(int i=0;i<10;i++)
{
scanf("%d",&me[i]);
}
printf("array elements\n");
for(int i=0;i<10;i++)
{
printf("%d\t",me[i]);
}

printf("\n");

for(int i=0;i<10;i++)
{
int num=me[i];

int flag=checkPalindrome(num);

if(flag==1)
{
printf("palindrome number found at %d\n",i);
}
}
return 0;
}