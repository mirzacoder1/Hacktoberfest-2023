#include <stdio.h>
int main()
{
  float a, b, c;
  int salary;
label:
  printf("Enter your salary in Rs\n");
  scanf("%d", &salary);

  a = (salary * 40) / 100;
  printf("Dearness allowence is %f of %d\n", a, salary);

  b = (salary * 20) / 100;
  printf("House rent is %f of %d\n", b, salary);

  c = salary - a - b;
  printf("The gross salary remaining is %f\n", c);
  goto label;
  return 0;
}