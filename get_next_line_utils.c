/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgalmich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 12:58:49 by rgalmich          #+#    #+#             */
/*   Updated: 2025/05/14 12:58:52 by rgalmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	s;
	size_t	d;

	if (!dst && !src)
		return (0);
	if (siz <= ft_strlen(dst))
		return (siz + ft_strlen(src));
	s = ft_strlen(dst);
	d = 0;
	while (src[d] != '\0' && s + 1 < siz)
	{
		dst[s] = src[d];
		s++;
		d++;
	}
	dst[s] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	totallen;
	char	*new;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	totallen = ft_strlen(s1) + ft_strlen(s2);
	new = malloc((totallen + 1) * (sizeof(char)));
	if (!new)
		return (NULL);
	ft_strlcpy(new, s1, totallen + 1);
	ft_strlcat(new, s2, totallen + 1);
	return (new);
}

char	*ft_strdup(const char *s)
{
	char	*no;
	int		i;
	int		size;

	size = 0;
	while (s[size])
		size++;
	no = malloc(sizeof(char) * (size + 1));
	if (!no)
		return (NULL);
	i = 0;
	while (s[i])
	{
		no[i] = s[i];
		i++;
	}
	no[i] = '\0';
	return (no);
}
