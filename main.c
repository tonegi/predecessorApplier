#include <stdio.h>

int main(void) {
    char character, predecessor;
  printf("Enter any character: ");
      scanf("%c", &character);
    predecessor = character - 1;
  printf("Its predecessor is: %c\n", predecessor);   
  return 0;
}
