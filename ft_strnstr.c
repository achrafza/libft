/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:23:37 by azahid            #+#    #+#             */
/*   Updated: 2024/10/23 17:22:22 by azahid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *tofind, size_t len)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (str[i] && len--)
	{
		while (tofind[j] && str[i] && str[i + j] == tofind[j])
			j++;
		if(!tofind[j]) return ((char *)str + i);
		i++;
	}
	return NULL;
}
