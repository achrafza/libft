/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:13:06 by azahid            #+#    #+#             */
/*   Updated: 2024/10/23 18:26:15 by azahid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;

	str=(char *)malloc(sizeof(char) * (len+1));
	if(!*str)
		return NULL;
	while(len-- && *(s + start))
	{
		*str = *(s + start);
		str++;
		s++;
	}
	*str =0;
	return str;
}
