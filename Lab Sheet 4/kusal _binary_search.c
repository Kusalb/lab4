/* 
*
*	Program: To evaluate a postfix expression.
* 	Author Kusal Bista
* 	Date: 07/16/2016
*   Ref: Data Structure using C and C++,chap 2, page 122 
*/
#include<stdio.h>
#define max 100

int binSearch(int,int);
int x;
char a[max];

int main()
{
	int n,i,j;
	
	printf("Enter  no of elements to be in list?\n");
	scanf("%d",&n);
	printf("Enter the elements of the sorted array:\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter the element you want to search for:\n");
	scanf("%d",&x);
	
	j=binSearch(0,n);
	
	if(j==-1)
	{
		printf("RESULT NOT FOUND!!");
	}
	else
	{
		printf("The number %d is found on the array.\n",a[j]);
	}
}

int binSearch(int low,int high)
{
	int mid;
	mid=(low+high)/2;
		
	if(low>high)
	{
		return (-1);
	}
	else if(x==a[mid])
	{
		return (mid); 
	}
	else if(x<a[mid])
	{
		binSearch(low,mid-1);
	}
	else if(x>a[mid])
	{
		binSearch(mid+1,high);
	}
}

