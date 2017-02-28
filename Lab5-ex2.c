#include <stdio.h>
void main()
{
    char p[] = "Mizzou"; //made p an array instead of a pointer & initialized it
    //the fourth element of p can now be accessed and replaced with a new character
    //using array notation
    p[3] = 'P';
    printf("%s",p);
}
