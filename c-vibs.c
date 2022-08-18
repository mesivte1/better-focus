#include <Stdio.h>


int main()
{
    char string[] = "hello to the funny world.";
    printf("Printing out a string %s\n", string);
    char *pstring = "pointer to a string is stored in read only memory";
    printf("%s\n", pstring);
}