#include <stdio.h>
#include <stdlib.h>

#define MAXZOMBIES 64

unsigned int zombie_num = 0;

typedef struct {
    char name[16];
    unsigned int height;
    unsigned int power;
} zombie;

void get_zombies() {
  FILE *flag_file = fopen("/home/tripathy/Documents/CTF_Problems/Binaries/Zombie_Apocalypse/flag.txt", "r");
  char flag[22];
  fgets(flag, 22, flag_file); 
  zombie zombies[MAXZOMBIES];
  int i;
  for (i = 0; i < MAXZOMBIES; i++) {
    zombies[i].name[0] = 'A';
    zombies[i].height = 0;
    zombies[i].power = 0;
  }
  printf("%x\n", &zombies[0].name);
  for (i = 0; i < zombie_num; i++) {
    if (zombies[i].power > 0) {
      printf("The zombies are too strong! Here's the flag! Save yourself!\n");
      printf("%s\n", flag);
      return;
    }
    printf("Zombie Name: ");
    scanf("%s", zombies[i].name);
    printf("Zombie Height: ");
    scanf("%u", &zombies[i].height);
    printf("Zombie Power: ");
    scanf("%u", &zombies[i].power);
    printf("\n");
  }
}

int main(int argc, char** argv) {
  printf("How many zombies do you need to fight? ");
  scanf("%u", &zombie_num);
  get_zombies();
  return 0;
}

    
