#include<stdio.h>
#include<string.h>
#include<malloc.h>
int main(void)
{
	char s[50], *dyn_s; //made array to store string
	int ln;
	printf("Enter the input string\n");
	scanf("%s",s);
	ln = strlen(s);
	dyn_s = (char*)malloc(strlen(s)+1); //removed * so it could allocate memory 
	strcpy(dyn_s, s); //can't assign string to string without strcpy()
	dyn_s[strlen(s)]='\0';
	printf("%s", dyn_s); //added %s so the string could be printed
    free(dyn_s); //frees allocated memory malloced on line 11
	return 0;
}

