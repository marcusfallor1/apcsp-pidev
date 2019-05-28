#include<stdio.h>

float area(int a)
{
return (3.14 * a * a);
}

int main()
{
int a;
float b;
b = area(a);

for(a = 3; a < 13; a = a + 1)
{
  float d = a + 0.5;
  float e;
  e = area(d);
printf("Area: %f\n", e);
}
return 0;
}
