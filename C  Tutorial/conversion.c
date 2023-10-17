#include <stdio.h>
int main(int argc, char const *argv[])
{
    char input;
    float PoundsToKgs = 0.453592;
    float InchesToFoot = 0.0833333;
    float cmsToInches = 0.393701;
    float KmsToMiles = 0.621371;
    float InchesToMeters = 0.0254;
    float first, second;

    while (1)
    {
        printf("Enter the input character. q to quit\n   1.Pounds to Kgs\n   2.Inches to Foot\n   3.cms  to Inches\n   4.Kms to Miles\n   5.Inches to Meters\n");
        scanf(" %c", &input);

        printf("Enter character %c\n",input);

        switch (input)
        {
        case 'q':
            printf("Quitting the programme\n");
            goto end;
            break;

        case '1':

            printf("Enter quantity in terms of first\n");
            scanf("%f", &first);
            second = first * PoundsToKgs;
            printf("%f pounds is equal to %f Kgs\n", first, second);
            break;

        case '2':

            printf("Enter quantity in terms of first\n");
            scanf("%f", &first);
            second = first * InchesToFoot;
            printf("%f inches is equal to %f foot\n", first, second);
            break;

        case '3':

            printf("Enter quantity in terms of first\n");
            scanf("%f", &first);
            second = first * cmsToInches;
            printf("%f cms is equal to %f Inches\n", first, second);
            break;

        case '4':

            printf("Enter quantity in terms of first\n");
            scanf("%f", &first);
            second = first * KmsToMiles;
            printf("%f Kms is equal to %f Miles\n", first, second);
            break;

        case '5':

            printf("Enter quantity in terms of first\n");
            scanf("%f", &first);
            second = first * InchesToMeters;
            printf("%f Inches is equal to %f Meters\n", first, second);
            break;

        default:
            break;
        }
    }
end:
    return 0;
}
