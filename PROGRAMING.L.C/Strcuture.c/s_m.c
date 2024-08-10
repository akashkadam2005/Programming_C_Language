#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

// Structure to hold student information
typedef struct {
    char name[50];
    int roll;
    float marks;
} Student;

// Array to store students
Student students[MAX_STUDENTS];

// Current number of students
int numStudents = 0;

// Function to add a student
void addStudent() {
    if (numStudents < MAX_STUDENTS) {
        printf("Enter name: ");
        scanf("%s", students[numStudents].name);
        printf("Enter roll number: ");
        scanf("%d", &students[numStudents].roll);
        printf("Enter marks: ");
        scanf("%f", &students[numStudents].marks);
        numStudents++;
        printf("Student added successfully!\n");
    } else {
        printf("Maximum number of students reached!\n");
    }
}

// Function to view all students
void viewStudents() {
    if (numStudents > 0) 
	{
        printf("Name\tRoll\tMarks\n");
        
        for(int i = 0; i < numStudents; i++)
		 {
            printf("%s\t%d\t%.2f\n", students[i].name, students[i].roll, students[i].marks);
        }
    } else {
        printf("No students available.\n");
    }
}

// Function to search for a student by roll number
void searchStudent() {
    int roll;
    printf("Enter roll number to search: ");
    scanf("%d", &roll);
    int found = 0;
    for (int i = 0; i < numStudents; i++) {
        if (students[i].roll == roll) {
            printf("Name: %s\nRoll: %d\nMarks: %.2f\n", students[i].name, students[i].roll, students[i].marks);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Student not found.\n");
    }
}

int main() {
    int choice;
    do {
        printf("\nStudent Management System\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                viewStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 4);

  
}

