 
#include<stdio.h>
#include<string.h>
void main()
{
    int i=0;
    char arr1[ 15 ] = "Trumantiger";
    char arr2[ 15 ]; //changed from 20 to 15 so arr2 can be copied to arr1
    while(i<15){ //changed from 20 to fifteen to match length of the array
        arr2[ i ] = 'A';
	++i;
    }
    strcpy( arr1 , arr2 );
    printf("%s",arr1);
}
