/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <souledla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:24:03 by souledla          #+#    #+#             */
/*   Updated: 2022/10/30 16:30:01 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*protection(void)
{
	char	*ptr;

	ptr = ft_calloc(1, 1);
	return (ptr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*ptr;

	i = 0;
	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (protection());
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	ptr = (char *)malloc(len * sizeof(char) + 1);
	if (!ptr)
		return (0);
	while (i < len && start < ft_strlen(s))
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
