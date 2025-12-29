
#include "header.h"

void signal_handler(int sig)
{
    if (sig == SIGINT || sig == SIGTSTP)
        printf("\n");
    else if (sig == SIGCHLD)
        while (waitpid(-1, NULL, WNOHANG) > 0);
}
