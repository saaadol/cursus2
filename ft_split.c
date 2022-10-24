#include "libft.h"
static void	free_words(size_t j, char **ptr)
{
	while (j)
	{
		free(ptr[j - 1]);
		j--;
	}
	free(ptr);
}

static int	count_word(char const *words, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (words[i])
	{
		while (words[i] && words[i] == c)
		{
			i++;
		}
		if (words[i] && words[i] != c)
		{
			while (words[i] && words[i] != c)
			{
				i++;
			}
			count++;
		}
	}
	return (count);
}

static int	words_length(char const *words, char c, int i)
{
	int	len;

	len = 0;
	while (words[i] && words[i] == c)
	{
		i++;
	}
	while (words[i] && words[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static char	**split(char **ptr, const char *s, char c, int i)
{
	int	j;
	int	k;

	j = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			k = 0;
			ptr[j] = malloc((sizeof(char )) * (words_length(s, c, i) + 1));
			if (!ptr[j])
			{
				free_words(j, ptr);
				return (0);
			}
			while (s[i] && s[i] != c)
				ptr[j][k++] = s[i++];
			ptr[j++][k] = '\0';
		}
	}
	ptr[j] = 0;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;

	if (!s)
	{
		return (0);
	}
	ptr = malloc((sizeof(char *)) * count_word(s, c) + 1);
	i = 0;
	if (!ptr)
		return (0);
	return (split(ptr, s, c, i));
}