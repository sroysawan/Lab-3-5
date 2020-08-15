#include <stdio.h>

int main(void) {
  float base,high,triangle;
  printf("Enter Base : ");
  scanf("%f",&base);
  printf("Enter High : ");
  scanf("%f",&high);
  triangle = 0.5*base*high;
  printf("Triangle is %f",triangle);
  return 0;
}