#include <stdio.h>
#include <stdlib.h>

#define MAXLEN 64
int current_balance = 10;

void set_up_bank() {
  FILE *flag_file = fopen("/home/tripathy/Documents/CTF_Problems/Binaries/Bank/flag.txt", "r");
  char flag[37];
  fgets(flag, 37, flag_file);
  printf("%s\n", flag);
}

void withdraw(int delta) {
  if (delta < 0) {
    printf("You cannot withdraw a negative amount of money.\n");
  } else if (current_balance - delta < 0) {
    printf("You cannot withdraw more money than you have.\n");
  }
  current_balance -= delta;
}

void deposit(int delta) {
  if (delta < 0) {
    printf("You cannot deposit a negative amount of money.\n");
  }
  current_balance += delta;
}

int validate_password() {
  char input[MAXLEN];
  printf("What is your bank account password?\n");
  gets(input);
  return (strcmp("hue_hue_psswd", input) == 0);
}

int main(int argc, char **argv) {
  if (argc != 3) {
     printf("Invalid arguments.\n");
     printf("./bank (withdraw|deposit) (amount)\n");
     return 1;
  }

  if (validate_password() != 1) {
    printf("Invalid password\n");
    return -1;
  }

  void (*action)(int);

  if (strcmp(argv[1], "withdraw") == 0) {
    action = &withdraw;
  } else if (strcmp(argv[1], "deposit") == 0) {
    action = &deposit;
  } else {
    printf("%s is not a valid action.\n", argv[1]);
    return -2;
  }

  action(strtol(argv[2], NULL, 10));
  return 0;
}
