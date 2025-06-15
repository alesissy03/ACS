#include <stdio.h>
#include "autentificare.h"

int main() {
    int user, pass;

    printf("Enter username (int): ");
    scanf("%d", &user);

    printf("Enter password (int): ");
    scanf("%d", &pass);

    login(user, pass);  // Call function from autentificare.c

    printf("Status: %d\n", status);  // Print the authentication status

    return 0;
}
