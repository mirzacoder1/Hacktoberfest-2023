#include <stdio.h>
int main(int argc, char const *argv[])
{
    char input;
    float kelvinTocelsius = -273.15;
    float celsiusTokelvin = 273.15;
    float fahreheitTocelsius = 32;
    float a, b;
    while (1)
    {
        printf("Enter your Input.\n        q to quit\n        1.Kelvin To celsius\n        2.celsius To kelvin\n        3.fahrenheit To celsius\n");
        scanf(" %c", &input);

        switch (input)
        {
        case 'q':
            printf("Quitting the program...");
            goto end;
            break;
        case '1':
            printf("Enter the quantity in terms of a\n");
            scanf("%f", &a);
            b = a + kelvinTocelsius;
            printf("%f kelvin is equal to %f celsius\n", a, b);
            break;
        case '2':
            printf("Enter the quantity in terms of a\n");
            scanf("%f", &a);
            b = a + celsiusTokelvin;
            printf("%f celsius is equal to %f kelvin\n", a, b);
            break;
        case '3':
            printf("Enter the quantity in terms of a\n");
            scanf("%f", &a);
            b = (a - fahreheitTocelsius) / 1.8;
            printf("%f fahrenheit is equal to %f celsius\n", a, b);
            break;

        default:
            break;
        }
    }
end:

    return 0;
}
