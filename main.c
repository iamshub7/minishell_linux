
#include "header.h"

char prompt[50] = "minishell : $ ";

int main()
{
    char input[100];

    system("clear");

    signal(SIGINT, signal_handler);
    signal(SIGTSTP, signal_handler);
    signal(SIGCHLD, signal_handler);

    while (1)
    {
        scan_input(prompt, input);
    }
    return 0;
}
