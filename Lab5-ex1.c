#include <stdio.h>
 
int main()
{
    char fileName[40]; //initialized filename as an array of characters
    printf("Specify file name you would like to print to: \n");
    scanf("%s\n", fileName); //removed & from before filename because it's an array
 

    FILE* file1 = fopen(fileName, "a+");
 
    char c;
    while ((c=getchar()) != EOF)
    {
    	//%s was added to the fprintf() because the format specifier needs to 
    	//be used when trying to print a string or character array to a file.
        fprintf(file1, "%s", &c); 
    }
 
    fclose(file1);
 
    printf("CTRL+d is a correct ending");
 
    return 0;
}
