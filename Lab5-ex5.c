#include<stdio.h>
#include<malloc.h>
void main()
{
    char *a = "hey";
    //free (a); was deleted because memory wasn't being allocated
    a = "hello";   
    printf("%s",a);
}
