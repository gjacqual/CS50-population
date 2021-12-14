#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int years = 0;
    int lamas;
    int end;

    // TODO: Prompt for start size
    do
    {
        lamas = get_int("Start size: ");
    }
    while (lamas < 9);

    // TODO: Prompt for end size
    do
    {
        end = get_int("End size: ");
    }
    while (end < lamas);

    // TODO: Calculate number of years until we reach threshold

    while (lamas < end)
    {
        lamas = lamas + (lamas / 3) - (lamas / 4);
        years++;
    }

    printf("Years: %i\n", years);
}
