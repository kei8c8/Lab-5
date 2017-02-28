#include <stdio.h>

int factorial ( int num ){   
	//added the check for zero because the program then ends the factorial and
	//doesn't keep looping until it's out of range of an integer size
	if(num==0){  
    	return 1;
    }
    return num * factorial( num - 1 );
}

int main(void)
{
    int no,ans;
    printf("Enter the number \n");
    scanf( "%d", &no );
    ans = factorial( no );
    printf("The factorial is %d ", ans );
    return 0;
}
