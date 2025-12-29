
#include "header.h"

char *extract_command(char *input)
{
    static char cmd[50];
    int i = 0;

    while (input[i] != ' ' && input[i] != '\0')
    {
        cmd[i] = input[i];
        i++;
    }
    cmd[i] = '\0';
    return cmd;
}

int check_command_type(char *command)
{
    char *builtins[] = {"cd", "pwd", "exit", "echo", NULL};

    for (int i = 0; builtins[i]; i++)
    {
        if (strcmp(command, builtins[i]) == 0)
            return BUILTIN;
    }
    return EXTERNAL;
}
