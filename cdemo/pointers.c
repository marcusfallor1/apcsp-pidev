#include <stdio.h>

int main()
{

  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  float d = 4;
  float e = 11;

  float* ptrtod = &d;
  float* ptrtoe = &e;

  printf("The value of d is %f\nThe address of d is %d\n", d, &d);
  printf("The value of e is %f\nThe address of e is %d\n", e, &e);

  float temp = *ptrtod;

  *ptrtod = *ptrtoe;

  *ptrtoe = temp;

}
