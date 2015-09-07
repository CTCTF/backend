#include <stdio.h>
#include <stdlib.h>

void set_up_problem() {
  gid_t gid = getegid();
  setresgid(gid, gid, gid);
}

void this_looks_bad(char* in) {
  int bad = 0;;
  char buf[64];
  strcpy(buf, in);
  if (bad == 0x1337) {
    printf("Oh no! It's not safe! The shell is open! You can read the flag now! Ahhhhhh\n");
    system("/bin/sh");
  } else {
    printf("Phew, I'm still safe\n");
  }
}

int main(int argc, char** argv) {
  set_up_problem(); 
  if (argc != 2) {
    printf("Correct Usage: ./overlow1 (string)\n");
    return 1;
  }
  this_looks_bad(argv[1]);
  return 0;
}
