#include <stdio.h>
int main()
{
    printf("Hello World\n");

    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("Enter your age\n");
        scanf(" %d", &age);
        // if (age>10)
        //{
        //    break;
        //}
        if (age > 10)
        {
            continue;
        }
        printf("Zabbar is a good boy\n");
        printf("Zabbar is a good boy\n");
        printf("Zabbar is a good boy\n");
        printf("Zabbar is a good boy\n");
        printf("Zabbar is a good boy\n");
    }

    return 0;
}
