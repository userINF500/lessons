#include <stdio.h>

size_t strlen(const char *str)
{
    int s,i = 0;
    size_t size = 0;
    while (str[size] != 0)
    {
        ++size;
    }
    return size;
}

size_t strnlen(const char *str, size_t maxlen) 
{
    size_t length = 0;
    while (length < maxlen && str[length] != '\0') 
    {
        length++;
    }
    return length;
}

const char *strdup(const char *str)
{
    return str;
}

char *strndup(const char *str, size_t length)
{
    char str;
    size_t size = 0;
    while(size < length)
    {
        size ++;
        return str[size];
    }
}

int main()
{
    const char *str = "hello world";

    printf("%s", strndup(str, 2));
    return 0;
}
