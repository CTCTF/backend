#include <stdio.h>
#include <stdlib.h>

void seashell() {
  printf("Our systems are breached :(\n");
  system("/bin/sh");
}

void this_seems_bad(char *input) {
  char buf[64];
  strcpy(buf, input);
  printf("Phew, we're okay here.\n");
}

int main(int argc, char** argv) {
  if (argc != 2) {
    printf("Correct usage: ./overflow2 (string)\n");
  }

  this_seems_bad(argv[1]);
  return 0;
}
