#include <stdio.h>
#define MAXINPUT 30
void reverse(char *str) {
  char *end = str;
  char tmp;
  if (str) {
    while (*end) {
      ++end;
    }
    --end;
    while (str < end) {
      tmp = *str;
      *str++ = *end;
      *end-- = tmp;
    }
  }
}

int main(int argc, char const *argv[]) {
  char input[MAXINPUT];
  scanf("%s", input);
  reverse(input);
  printf("%s\n", input);
  return 0;
}