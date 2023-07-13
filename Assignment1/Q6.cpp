#include <stdio.h>

int main() {
  // Create a string
  char fullName[30];
  printf("Enter your name: \n");
  fgets(fullName, sizeof(fullName), stdin);
  printf("\"Hello, %s\"", fullName);
  
  return 0;
}

