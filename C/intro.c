#include <stdio.h>

int main(void) {
  printf("What is your name ");
  char name[30];
  scanf("%s", &name);
  printf("Hello, %s", name);
  return 0;
}
