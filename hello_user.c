#include <stdio.h>
// it includes a file that contains printf and scanf functions

int main(void)
{
    char name[10];

    printf("insert name: ");    //printf prints text to the terminal
    scanf("%s", name); //scanf reads text from the terminal and stores it in their variable
    printf("hello, %s", name);
}