/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:49:29 by azahid            #+#    #+#             */
/*   Updated: 2024/10/23 19:05:41 by azahid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int ft_isset(char const *set,char c)
{
	while(*set)
		if(*(set++) == c)
			return 1;
	return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
	int c;
	int i;
	char *str;
	
	i = 0;
	c = 0;
	while(s1[i])
	{
		if (!ft_isset(set,s1[i]))
			c++;
		i++;
	}
	i = 0;
	str =(char *)malloc(sizeof(char) *(c+1));
	while(c--)
	{
		if(!ft_isset(set,*s1))
			str[i++] = *s1;
	}
	str[i] = 0;
	return str;
}
