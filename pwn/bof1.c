//
// bof1.c
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// compilation : gcc bof1.c -o bof1
// goal : execute the function give_me_a_shell without modifying the binary
//        or changing values in the debugger

void give_me_a_shell()
{
  printf("Congratulation Hacker!\n");
  printf("I will give you a shell as a reward\n");
  system("cd .files/bof1/ && /bin/sh");
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
  my_putstr();
  return 0;
}
