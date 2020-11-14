//
// pwn1.c
//

#include <stdio.h>
#include <string.h>
#include <unistd.h>

// compilation : gcc pwn1.c -o pwn1
// goal : faire afficher le message de succès sans changer le binaire
//        ou changer la valeur des variables a l'aide d'un débugger


int is_password_valid(const char *username, const char *password)
{
    //
    // TODO : implement this fonction in the future
    //        not even hackers will be able to go around this >:)
    //
    return 0;
}

// Nothing bad could happen if we made our variable global right?
int is_valid = 0;

int auth()
{
    char username[101];
    char password[101];

    printf("Enter your username:\n");
    fgets(username, 100, stdin);
    printf("Enter your password:\n");
    fgets(password, 100, stdin);

    printf("Authenticating user: ");
    printf(username);
    printf("\n");

    if (is_password_valid(username, password))
	is_valid = 1;

    return is_valid;
}

int main(int ac, char **av)
{
    if (auth())
	printf("SUCCESS!!! You are authenticated\n");
    else
	printf("Failure! Your username or password is not correct\n");
    return 0;
}
