#include <stdio.h>
#include <stdbool.h>
#include <string.h>

size_t my_strlen(const char *str)
{
    size_t result;
    int i = 0;
    while(true)
    {   
        if(str[i] == '\0')
        {
            result = i;
            return result;
        }
        i++;
    }
}

void my_strcpy(char dst[], const char src[])
{
    int i = 0;
    while(true)
    {
        dst[i] = src[i];
        if(src[i] == '\0')
        {
            break;
        }
        i++;
    }
}

// 0 - if diff
// 1 - if equals
int my_strcmp(const char a[], const char b[])
{
    if(my_strlen(a) != my_strlen(b))
    {
        return 0;
    }
    for(size_t i = 0; i <= my_strlen(a); i++)
    {
        if(a[i] != b[i])
        {
            return 0;
        }
    }
    return 1;
}

int scout_str(const char sym, const char str[])
{
    int count = 0;
    for(size_t i = 0; i <= my_strlen(str); i++)
    {
        if(str[i] == sym)
        {
            count++;
        }
    }
    return count;
}

int main(void)
{

    char str[] = "Hellohhhh";

    /*MY STRLEN*/
    //printf("%ld\n", my_strlen(str));
    //printf("%ld\n", strlen(str));

    /*CPY STR*/
    //char dst[sizeof(str)];
    //my_strcpy(dst, str);
    //printf("%s\n", dst);

    /*STR CHECK EQUALS*/
    //char str2[] = "Прив";
    //printf("%d\n", my_strcmp(str, str2));

    /*count STR letter*/
    //printf("%d\n", scout_str('h', str));

    // не совсем понял что значит обработчик задач типо я пишу led on и на выходе просто принт вывожу
    // или типо 00 - led on, 01 - led off, 10 - status, 11 - reset?

    return 0;
}