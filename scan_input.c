
#include "header.h"

void scan_input(char *prompt, char *input)
{
    printf("%s", prompt);
    fflush(stdout);

    scanf(" %[^\n]", input);

    if (strncmp(input, "PS1=", 4) == 0)
    {
        strcpy(prompt, input + 4);
        strcat(prompt, " ");
        return;
    }

    char *cmd = extract_command(input);
    int type = check_command_type(cmd);

    if (type == BUILTIN)
        execute_internal(input);
    else if (type == EXTERNAL)
        execute_external(input);
    else
        printf("Command not found\n");
}
