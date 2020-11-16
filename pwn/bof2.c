//
// bof1.c
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// compilation : gcc bof2.c -o bof2
// goal : execute the function prepare_shell and give_me_a_shell without
//        modifying the binary or changing values in the debugger

int access_granted = 0;

void prepare_shell()
{
  printf("Allowing access to shell\n");
  access_granted = 1;
}

void give_me_a_shell()
{
  if (access_granted) {
    printf("Access granted! Please come in and use this shell\n");
    system("cd .files/bof2/ && /bin/sh");
  } else {
    printf("Sorry... Access was not granted\n");
  }
}

void my_putstr()
{
  char string[200];
  int len;

  printf("Enter a string you want to print:\n");
  gets(string);

  printf("Here is your string:\n%s\n", string);
}

int main()
{
  printf("Last time you got the better of me.\n");
  printf("Now I added a protection and there is nothing you can do about it >:)\n");
  my_putstr();
  return 0;
}
