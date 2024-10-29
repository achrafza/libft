
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	int len;
	unsigned int i;

	len = ft_strlen(s);
	str =(char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while(s[i])
	{
		str[i] = (*f)(i,str[i]);
		i++;
	}
	str[i] = 0;
	return str;
}
