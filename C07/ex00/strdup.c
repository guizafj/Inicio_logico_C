#include <stdlib.h>

char	*strdup(const char *src)
{
	char			*dest;
	unsigned int	len;
	unsigned int	i;

	len = 0;
	while (src[i])
		len++;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
