#include <stdio.h>
#include <string.h>

struct Student {
  char First[68];
  char Last[68];
  int Age;
  int StudentID;
};

void printStudent(struct Student* student) {
printf("Student:\n");
printf("Name: %s %s\n", student-> First, student-> Last);
printf("Age: %d\n", student-> Age);
printf("Student ID: %d\n", student -> StudentID);
}

int main(){
      int numberStudent;
  char strInput[300];
      printf("How many students do you want to enter: \n");
fgets(strInput, 300, stdin);
  sscanf(strInput, "%d", &numberStudent);
  struct Student student[numberStudent];
  for (int i= 0; i< numberStudent; i++) {
printf("You are entering student number %d\n", i);
printf("First Name: ");
fgets(strInput, 300, stdin);
sscanf(strInput, "%s", student[i].First);
printf("Last Name: ");
fgets(strInput, 300, stdin);
sscanf(strInput, "%s", student[i].Last);
printf("Age: ");
fgets(strInput, 300, stdin);
sscanf(strInput, "%d", &student[i].Age);
printf("Student ID: ");
fgets(strInput, 300, stdin);
sscanf(strInput, "%d", &student[i].StudentID);
  }
for (int i= 0; i< numberStudent; i++){
printStudent(&student[i]);
  }
}
