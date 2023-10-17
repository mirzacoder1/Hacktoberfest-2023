#include <stdio.h>
int main()
{
    int totalpopulation, totalmen, totallitracy;
label:
    printf("Enter the total population\n");
    scanf("%d", &totalpopulation);

    totalmen = (52 * totalpopulation) / 100;
    printf("The total men of the population is %d\n", totalmen);

    totallitracy = (48 * totalpopulation) / 100;
    printf("The total litracy is %d\n", totallitracy);

    int litratemen = (35 * totalpopulation) / 100;
    printf("Total literate mens are %d\n", litratemen);

    int totalillitratemen = totalmen - litratemen;
    printf("Total number of illitrate men is %d\n", totalillitratemen);

    int totalillitratewomen = totalpopulation - totallitracy - totalillitratemen;
    printf("Total number of illitrate women is %d\n",totalillitratewomen);

    goto label;
    return 0;
}