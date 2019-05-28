#include<stdio.h>

int areaOfCircle(float r)
{
return (3.14*r*r);
}

int main()
{
float r;
float area;
area = areaOfCircle(r);
for(r = 3; r < 13; r = r + 1)
{
  float d = r+ 0.5;
  float e;
  e = areaOfCircle(d);
printf("Area: %f\n",e);
}
return 0;
}
