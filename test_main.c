#include <stdio.h>

#include "main.c"

void test_menu_invalid()
{
    int actual = validateMenuChoice(9);
    int expected = 0;

    printf("expected: %d, actual: %d, success: %d\n",
           expected, actual, expected == actual);
}

void test_menu_valid()
{
    int actual = validateMenuChoice(2);
    int expected = 1;

    printf("expected: %d, actual: %d, success: %d\n",
           expected, actual, expected == actual);
}

int main()
{
    test_menu_invalid();
    test_menu_valid();
    return 0;
}
