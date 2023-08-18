#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start_size;
    int end_size;

    do
    {
       start_size = get_int("Start size: ");
    }
    while (start_size < 9);

    // TODO: Prompt for end size
    do
    {
        end_size = get_int("End size: ");
    }
    while (end_size < start_size);

    // TODO: Calculate number of years until we reach threshold
    int n = start_size;
    int i = 0;

    while (n < end_size)
    {
        i++;
        n = n + (n/3) - (n/4);
    }

    // TODO: Print number of years
    printf("Years: %i\n", i);
}
