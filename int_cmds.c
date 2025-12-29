
#include "header.h"

void execute_internal(char *input)
{
    if (strcmp(input, "pwd") == 0)
    {
        char buf[100];
        getcwd(buf, sizeof(buf));
        printf("%s\n", buf);
    }
    else if (strncmp(input, "cd", 2) == 0)
    {
        chdir(input + 3);
    }
    else if (strcmp(input, "exit") == 0)
    {
        exit(0);
    }
    else if (strncmp(input, "echo", 4) == 0)
    {
        printf("%s\n", input + 5);
    }
}
