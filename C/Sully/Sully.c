# define _GNU_SOURCE
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

int main()
{
    int i = 5;
    char *next, *next_x;
    asprintf(&next, "Sully_%d.c", i - 1);
    asprintf(&next_x, "Sully_%d", i - 1);
    char *str = "# define _GNU_SOURCE%c# include <stdlib.h>%c# include <fcntl.h>%c# include <stdio.h>%c%cint main()%c{%c    int i = %d;%c    char *next, *next_x;%c    asprintf(&next, %cSully_%%d.c%c, i - 1);%c    asprintf(&next_x, %cSully_%%d%c, i - 1);%c    char *str = %c%s%c;%c    if (i > 0)%c    {%c        dprintf(open(next, O_WRONLY | O_CREAT, S_IRWXU | S_IRWXG | S_IRWXO), str, 10, 10, 10, 10, 10, 10, 10, i - 1, 10, 10, 34, 34, 10, 34, 34, 10, 34, str, 34, 10, 10, 10, 10, 10, 34, 34, 10, 10, 10, 10);%c        char *cmd;%c        asprintf(&cmd, %cgcc -Wall -Werror -Wextra %%s -o %%s; ./%%s%c, next, next_x, next_x);%c        system(cmd);%c    }%c    return (0);%c}";
    if (i > 0)
    {
        dprintf(open(next, O_WRONLY | O_CREAT, S_IRWXU | S_IRWXG | S_IRWXO), str, 10, 10, 10, 10, 10, 10, 10, i - 1, 10, 10, 34, 34, 10, 34, 34, 10, 34, str, 34, 10, 10, 10, 10, 10, 34, 34, 10, 10, 10, 10);
        char *cmd;
        asprintf(&cmd, "gcc -Wall -Werror -Wextra %s -o %s ; ./%s", next, next_x, next_x);
        system(cmd);
    }
    return (0);
}