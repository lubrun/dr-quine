# include <fcntl.h>
# include <stdio.h>

# define zob 420
# define STR "# include <fcntl.h>%c# include <stdio.h>%c%c# define zob 420%c# define STR %c%s%c%c# define FT(x)int  main(){ dprintf(open(%cGrace_kid.c%c, O_WRONLY | O_CREAT), STR, 10, 10, 10, 10, 34, STR, 34, 10, 34, 34, 10, 10, 10, 10); }%c/*%c  420%c*/%cFT(0)"
# define FT(x)int  main(){ dprintf(open("Grace_kid.c", O_WRONLY | O_CREAT), STR, 10, 10, 10, 10, 34, STR, 34, 10, 34, 34, 10, 10, 10, 10); }
/*
  420
*/
FT(0)