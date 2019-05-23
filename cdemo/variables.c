#include <stdio.h>

int main()
{
  int a;
  int b = 3;
  int c;

  a = 2;
  c = a + b;

	int* ptrtoa = &a;

	c = *ptrtoa;

	*ptrtoa = 5;

	printf("a=%d, b=%d/n" a, b);
  printf("Sum of %d and %d is %d\n", a, b, c);
}
