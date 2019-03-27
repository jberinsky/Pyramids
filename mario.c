// Jason Berinsky
// 2 February 2019
// CS50 Problem Set 1
// Displays a block pyramid of a specified height between 1 and 8
#include <cs50.h>
#include <stdio.h>

void blocks(int);
void spaces(int);

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");  
    }
    while (height < 1 || height > 8);
    int level = height;
    for (int i = 1; i <= height; i++)
    {
        spaces(level);
        blocks(i);
        printf("  ");
        blocks(i);
        printf("\n");
        level--;
    }
}

// Prints an inputted number of blocks (#)
void blocks(i)
{
    for (int j = 0; j < i; j++)
    {
        printf("#");
    }
}

// Prints an inputted number of spaces
void spaces(i)
{
    for (int j = 1; j < i; j++)
    {
        printf(" ");
    }
}
