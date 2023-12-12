#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;                                            // p is a pointer to an integer, and it points to n
    printf("%p is the address on n which stores 50.\n", p); // prints the address of n

    char *s = "HI!";                                                      // s is a pointer to a string, and it points to the first character in the string
    printf("%s\n", s);                                                    // prints the string
    printf("%p is the address of the first character stored in s.\n", s); // prints the address of the first character in s
    printf("%p is the address of the 0 position stored in s.\n", &s[0]);  // prints the address of the first character in s
}