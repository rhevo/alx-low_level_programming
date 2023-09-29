#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int total, count;
    unsigned int i;
    char *p;
    int cents[] = {25, 10, 5, 2, 1};

    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    total = strtol(argv[1], &p, 10);

    if (*p || total < 0)
    {
        printf("Error\n");
        return 1;
    }

    count = 0;
    for (i = 0; i < sizeof(cents) / sizeof(cents[0]); i++)
    {
        count += total / cents[i];
        total = total % cents[i];
    }

    printf("%d\n", count);
    return 0;
}
