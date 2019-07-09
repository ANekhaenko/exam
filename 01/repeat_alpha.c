#include <unistd.h>

int main(int argc, char **argv)
{

   int i = 0, A = 0;

   if (argc == 2)
    {
        while(argv[1][i] != '\0')
        {
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                {
                    A = 65;
                    while(argv[1][i] - A != 0)
                        {
                            write (1, &argv[1][i], 1);
                            A++;
                        }
                }
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                {
                    A = 96;
                    while(argv[1][i] - A != 0)
                        {
                            write (1, &argv[1][i], 1);
                            A++;
                        }
                }
                else
                write (1, &argv[1][i], 1);
            i++;
        }
    }
    write(1,"\n",1);
    return(0);
}
