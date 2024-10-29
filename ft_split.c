/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:06:01 by azahid            #+#    #+#             */
/*   Updated: 2024/10/23 19:06:01 by azahid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_words(char const *s,char c)
{
	int count;

	count = 0;
	while(*s)
	{
		while(*s == c)
			s++;
		if(*s != c)
		{
			count++;
			while(*s && *s != c)
				s++;
		}
	}
	return count;
}
static char *malloc_words(char const *s,char c)
{
	char *ss;
	int len;
	int i;

	len = 0;
	while(*s == c)
		s++;
	while(s[len++] != c);
	ss = (char *)malloc(sizeof(char) * len);
	i = 0;
	while (*s != c){
		ss[i] = *s;
		i++;
		s++;
	}
	return ss;
}

char	**ft_split(char const *s, char c)
{
	int count;
	char **str;
	int i;

	count = count_words(s,c);
	str = (char **)malloc((count + 1) * sizeof(char *));
	i = 0;
	while(*s)
	{
		str[i] = malloc_words(s,c);
		i++;
		while(*s != c)
			s++;
	}
	str[i] = 0;
	return str;
}
