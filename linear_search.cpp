// Linear search algo
#include<stdio.h>
int main ()
{ int size , i , target , flag = 0;
printf("Enter the size of the array \n");
scanf("%d" , &size);
int array[size];
printf("Enter the elements of the array \n");
for (i = 0 ; i<size ; i++)
{
	scanf("%d" , &array[i]);
}
printf("Enter the target value");
scanf("%d" , &target);
for (i = 0 ; i<size ; i++)
{
if (array[i] == target)
{
flag = 1;
break;
}
}
if (flag == 1)
{
	printf("Target found at %d index \n" , i+1);
}
else 
{
	printf("Target not found \n");
}

	return 0 ;
}
