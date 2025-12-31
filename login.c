#include <stdio.h>
#include <string.h>

const char* login(const char* username, const char* password) {
    const char* correct_username = "admin";
    const char* correct_password = "password123";

    if (strcmp(username, correct_username) == 0 && strcmp(password, correct_password) == 0) {
        return "Login successful!";
    } else {
        return "Login failed: Incorrect username or password.";
    }
}

int main(){
    char username[30];
    char password[30];

    printf("Enter a username(less than 30 characters): ");
    scanf("%29s", username);
    printf("Enter a password(less than 30 characters): ");
    scanf("%29s", password);

    printf("%s\n", login(username, password));
    return 0;
}