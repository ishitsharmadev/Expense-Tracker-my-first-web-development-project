#include <stdio.h>
// area of circle
int main()
{
  float radius;
  printf("enter the radius of circle: ");
  scanf("%f", &radius);
  printf("area of circle with radius %f is = %f", radius, 3.14 * radius * radius);
}