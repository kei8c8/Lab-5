#include<stdio.h>
int main()
{
	int x=1309;
	int *p = &x; //points to the address of x now
	printf("\n The value of x is = %d",x);
	printf("\n The pointer points to the value = %d",*p); //will print value of x
	return 1;
}
