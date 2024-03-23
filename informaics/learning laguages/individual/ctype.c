#include <stdio.h>
int isalpha(int c) 
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int isdigit(int c) 
{
    return (c >= '0' && c <= '9');
}

int isupper(int c) 
{
    return (c >= 'A' && c <= 'Z');
}

int isxdigit(int c) 
{
    return (isdigit(c) || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F'));
}

int isalnum(int c) 
{
    return (isalpha(c) || isdigit(c));
}

int isspace(int c) 
{
    return (c == ' ' || c == '\t' || c == '\n' || c == '\r');
}
