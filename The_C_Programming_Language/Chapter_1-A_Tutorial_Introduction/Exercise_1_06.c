#include <stdio.h>

/* Exercsise 1-6. Verify that the expression getchar() != EOF is 0 or 1*/
int main() {
  printf("value of expression: %d", (getchar() != EOF));
  return 0;
}