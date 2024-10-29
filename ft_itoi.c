

#include "libft.h"

static int mallocnum(int n)
{
	int c;

	c=1;
	while(n)
	{
		c++;
		n/=10;
	}
	return c;
}

char *ft_itoa(int n)
{
	char *num;
	int len;
	int i;
	char str[100];

	len=mallocnum(n);
	i = 0;
	num = (char *)malloc(sizeof(char) * len);
	while (--len){
		*(str + i)='0' +  n%10;
		n /= 10;
		i++;
	}
	str[i] = 0;
	while(i--){
		num[len++] = str[i];
	}
	num[len] = 0;
	return num;
}

