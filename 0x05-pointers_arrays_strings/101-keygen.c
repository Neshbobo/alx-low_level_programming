#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random password
char* generatePassword(int length) {
char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
int charsetLength = sizeof(charset) - 1;
    
char* password = (char*)malloc(length + 1);
if (!password) {
perror("Memory allocation error");
exit(1);
}

for (int i = 0; i < length; i++) {
int randomIndex = rand() % charsetLength;
password[i] = charset[randomIndex];
}

password[length] = '\0';
return password;
}

int main() {
// Seed the random number generator with the current time
srand(time(NULL));

int passwordLength = 12; // Adjust the length as needed
char* password = generatePassword(passwordLength);

printf("Generated Password: %s\n", password);

// Don't forget to free the memory allocated for the password
free(password);

return 0;
}







