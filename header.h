
#ifndef MINI_SHELL_H
#define MINI_SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>

#define BUILTIN 1
#define EXTERNAL 2
#define NO_COMMAND 3

void scan_input(char *prompt, char *input);
char *extract_command(char *input);
int check_command_type(char *command);

void execute_internal(char *input);
void execute_external(char *input);

void signal_handler(int sig);

#endif
