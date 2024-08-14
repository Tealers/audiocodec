#include <stdio.h>

int main() {
  int x;
  int y;

  printf("Enter a number:");
  scanf("%d", &x);
  printf("Enter a number:");
  scanf("%d", &y);
  printf("%d", x + y);

  return 0;
}
