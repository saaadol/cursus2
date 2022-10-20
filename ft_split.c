#include "libft.h"
int count_words(char *s, char c)
{
    int i;
    int counter;

    counter = 0;
    i = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i] && s[i] != c)
        {
            while (s[i] != c)
                i++;
            counter++;
        }
    }
    return counter;
}

char split(char **ptr, char const *s, char c)
{
    int i; 
    int j; 
    int k;

    k = 0;
    i = 0;
    j = 0;

    while(s[i])
    {
        while (s[i] && s[i] == c)
            i++;
        if (s[i] && s[i] == c)
        {
            k = 0;
            ptr[j]= malloc((sizeof(char)) * count_words(s, c) + 1);
            if (!ptr)
                return 0;
            while(s[i] && s[i] != c)
            {
                ptr[j][k++] = s[i++];
                                
            }
            ptr[j++][k] = '\0'; 
        }
        ptr[j] = 0; 
        return ptr;
    }
}
char **ft_split(char const *s, char c)
{
    char **ptr;
    int counter;

    counter = count_words(s,c);    
    ptr = (char **)malloc(sizeof(char) * (counter+1));
    if (!ptr)
        return 0;

}