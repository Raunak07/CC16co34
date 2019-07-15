#include<stdio.h>
int main()
{
char arr1[10],c;
int arr2[10],n,d,i;
printf("Enter the lenght of the expression\n");
scanf("%d",&n);
printf("Enter the expression\n");
for(i=0;i<n;i++)
{
scanf("%c",&c);
arr1[i]=c;
}
for(i=0;i<n;i++)
{
printf("%c",arr1[i]);
}
return 0;
}
