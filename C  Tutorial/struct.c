#include <stdio.h>
#include <string.h>
struct Employee
{
    int id;
    char name[37];
    float salary;
} mirza, zabbar, yunus;
int main()
{
    struct Employee;
    mirza.id = 12;
    mirza.salary = 1200.02;
    strcpy(mirza.name, "My name is khan");
    printf("The id,name,Salary is %d,%s,%f\n", mirza.id, mirza.name,mirza.salary);
    zabbar.id = 11234;
    zabbar.salary = 1203;
    strcpy(zabbar.name, "My name is Harry potter");
    printf("The id,name,Salary is %d,%s,%f\n", zabbar.id, zabbar.name,zabbar.salary);
    yunus.id = 11202;
    yunus.salary = 1122;
    strcpy(yunus.name, "My name is Abdul Kalam");
    printf("The id,name,Salary is %d,%s,%f\n", yunus.id, yunus.name,yunus.salary);

    return 0;
}