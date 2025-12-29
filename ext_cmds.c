
#include "header.h"

int status;

void execute_external(char *input)
{
    pid_t pid = fork();

    if (pid == 0)
    {
        signal(SIGINT, SIG_DFL);
        signal(SIGTSTP, SIG_DFL);

        char *args[20];
        int i = 0;

        args[i] = strtok(input, " ");
        while (args[i])
            args[++i] = strtok(NULL, " ");

        execvp(args[0], args);
        perror("execvp");
        exit(1);
    }
    else
    {
        waitpid(pid, &status, WUNTRACED);
    }
}
