#include<iostream>
using namespace std;

void swap_ref(int *x, int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}

int main()
{
	int x,y;
	int *a,*b;
	printf("Enter the numbers: ");
	scanf("%d%d",&x,&y);
	printf("Before Swapping: x = %d and y = %d\n",x,y);
	swap_ref(&x,&y);
	printf("Swapping using call by reference: x = %d and y = %d\n",x,y);
}	
