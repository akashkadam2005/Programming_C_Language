
#include <stdio.h>
#include <string.h>

struct User {
    char username[50];
    char password[50];
};

int main() {
    struct User user = {"john_doe", "password123"};

    char input_username[50];
    char input_password[50];

    int login_attempts = 3;  // Set the number of login attempts

    while (login_attempts > 0) {
        printf("Enter username: ");
        scanf("%s", input_username);

        printf("Enter password: ");
        scanf("%s", input_password);

        if (strcmp(user.username, input_username) == 0 && strcmp(user.password, input_password) == 0) {
            printf("Login successful!\n");
            break;  // Break out of the loop on successful login
        } else {
            login_attempts--;
            if (login_attempts > 0) {
                printf("Login failed. %d attempts remaining.\n", login_attempts);
            } else {
                printf("Too many login attempts. Account locked.\n");
            }
        }
    }

   
}

