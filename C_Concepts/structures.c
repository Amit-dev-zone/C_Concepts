#include <stdio.h>
#include <string.h>

struct student {
    char name[20];
    int roll;
    float cgpa;
};

int main(){

struct student s1;
strcpy(s1.name, "Amit");
s1.roll = 1413;
s1.cgpa = 8.9;


struct student s1 = {"Amit", 1413, 8.9};
struct student s2 = {"Aman", 1453, 8.3};
struct student s3 = {"Rahul", 1414, 9.1};

printf("Student Info:\n");
printf("Name:%s\n", s1.name);
printf("Roll:%d\n", s1.roll);
printf("CGPA:%.2f\n", s1.cgpa);

printf("\n");
printf("Student Info:\n");
printf("Name:%s\n", s2.name);
printf("Roll:%d\n", s2.roll);
printf("CGPA:%.2f\n", s2.cgpa);

printf("\n");
printf("Student Info:\n");
printf("Name:%s\n", s3.name);
printf("Roll:%d\n", s3.roll);
printf("CGPA:%.2f\n", s3.cgpa);

return 0;
}

// structure Array

int main(){

 struct student CSE[100];
  struct student ECE[100];
   struct student IT[100];

struct student s1 = {"Amit", 1413, 8.9};
CSE[0] = s1;
printf("Student Info:\n");
printf("Name:%s\n", CSE[0].name);
printf("Roll:%d\n", CSE[0].roll);
printf("CGPA:%.2f\n", CSE[0].cgpa);

return 0;
}


int main(){

struct student s1 = {"Amit", 1413, 8.9};
struct student *ptr = &s1;

printf("Student Info:\n");
printf("Name:%s\n", (*ptr).name);
printf("Roll:%d\n", (*ptr).roll);
printf("CGPA:%.2f\n", (*ptr).cgpa);
printf("\n");

//Arrow operator
printf("Name:%s\n", ptr->name);
printf("Roll:%d\n", ptr->roll);
printf("CGPA:%.2f\n", ptr->cgpa);


return 0;
}

//other input method
for(int i = 0; i < 3; i++) {
 printf("Enter roll, name, marks: ");
 scanf("%d %s %f", &students[i].roll, students[i].name, &students[i].marks);
}

//output method
for(int i = 0; i < 3; i++) {
 printf("\nRoll: %d | Name: %s | Marks: %.2f",
 students[i].roll, students[i].name, students[i].marks);
}


//passing to function by value; 
void printInfo(struct student s1);
printInfo(s1);

//passing to function by reference; 
void printInfoRef(struct student *s1);
printInfoRef(&s1);
