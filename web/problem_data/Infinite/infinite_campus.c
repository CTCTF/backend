#include <stdio.h>
#include <stdlib.h>

#define STUDENTS 32

typedef struct {
  char name[8];
  int grade;
} student;

void accept_grades() {
  student students[STUDENTS];
  char flag[12];
  FILE *flag_file = fopen("/home/tripathy/Documents/CTF_Problems/Binaries/Infinite_Campus/flag.txt", "r");
  fgets(flag, 12, flag_file);
  int i;
  
  for (i = 0; i < STUDENTS; i++) {
    students[i].name[0] = 't';
    students[i].name[1] = 'e';
    students[i].name[2] = 'm';
    students[i].name[3] = 'p';
    students[i].grade = 0;
  }
  
  for (i = 0; i < STUDENTS; i++) {
    char temp_name[8];
    int temp_grade;
    printf("Student name: ");
    scanf("%s", temp_name);
    printf("Student grade: ");
    scanf("%d", &temp_grade);
    if (temp_grade < 0 || temp_grade > 100) {
      printf("Invalid grade. You must not be the teacher.\n");
      return;
    }
    strcpy(students[i].name, temp_name);
    students[i].grade = temp_grade;

    if (students[i].grade > 100) {
      printf("Wow. This student is so good. Give them this flag: %s", flag);
    }
  }
}

int main(int argc, char** argv) {
  accept_grades();
  return 0;
}
