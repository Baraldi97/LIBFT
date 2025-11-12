#include <unistd.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	n_size;

	n_size = nmemb * size;
	if (size != 0 && nmemb > __SIZE_MAX__ / size)
		return (NULL);
	ptr =  malloc(n_size);
	if (ptr ==  NULL)
		return (NULL);
	ft_bzero(ptr, n_size);
	return (ptr);
}
