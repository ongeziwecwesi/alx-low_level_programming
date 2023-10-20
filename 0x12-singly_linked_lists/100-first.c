#include <stdio.h>

/**
 * my_pre_main_function - Function that is automatically executed before main.
 */
void my_pre_main_function(void) __attribute__((constructor));

void my_pre_main_function(void)
{
printf("You're beat! and yet, you must allow,\n)"
printf("I bore my house upon my back!\n");
}

/**
 * main - The main function.
 *
 * Return: Always 0.
 */
int main(void)
{
printf("This is the main function.\n");

return (0);
}

