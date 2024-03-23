#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

int count(FILE *file)
{
    int count = 0;
    char line[100];

    while (fgets(line, sizeof(line), file) != NULL)
    {
        int isEmpty = 1;

        for (int i = 0; line[i] != '\0'; i++)
        {
            puts(line);
            if (line[i] != ' ' &&
                line[i] != '\n' &&
                line[i] != '\t'&&
                line[i] != '\r')
            {
                isEmpty = 0;
                break;
            }
        }

        if (isEmpty == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    FILE *f = fopen("files.c", "r");
    if (f != NULL)
    {
        printf("Count lines = %d\n", count(f));
    }
    fclose(f);
    return 0;
}
