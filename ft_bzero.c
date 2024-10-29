/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:27:55 by azahid            #+#    #+#             */
/*   Updated: 2024/10/22 16:01:11 by azahid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	int				zero;

	zero = 0;
	str =(unsigned char*)s;
	while (n--)
		*(str++) =(unsigned char)zero;
}
