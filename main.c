#include "libasm.h"
#include <errno.h>
#include <unistd.h>
#define BUF 32

int		main(void)
{
	char dest[100];

	printf("-- ft_strlen\n\n");
	printf("%ld\n", ft_strlen(""));
	printf("%ld\n", ft_strlen("i"));
	printf("%ld\n", ft_strlen("pouet"));
	printf("%ld\n", ft_strlen("pouetpouet"));

	printf("\n-- ft_strcpy\n\n");
	printf("%s\n", ft_strcpy(dest, "truc"));
	printf("%s\n", ft_strcpy(dest, "aaa"));
	printf("%s\n", ft_strcpy(dest, "pouet"));
	printf("%s\n", ft_strcpy(dest, ""));

	printf("-- ft_strcmp\n");
	printf("%d\n", ft_strcmp("i", "b"));
	printf("%d\n", ft_strcmp("", "i"));
	printf("%d\n", ft_strcmp("aaaaa", "i"));
	printf("%d\n", ft_strcmp("i", "aaaaa"));

	printf("-- ft_strdup\n");
	printf("%s\n", ft_strdup("i"));
	printf("%s\n", ft_strdup(""));
	printf("%s\n", ft_strdup("aaaaa"));
	printf("%s\n", ft_strdup("i"));
	printf("%s\n", ft_strdup("pouet"));

	int ret;
	printf("\n-- ft_write\n\n");
	dprintf(1, "\nft_write(1, \"truc\\n\", 5)\n");
	errno = 0;
	ret = ft_write(1, "truc\n", 5);
	dprintf(1, "ret = %d\n", ret);
	dprintf(1, "errno = %d\n", errno);
	dprintf(1, "\nft_write(1, \"aaaaaaaaaaaaa\\n\", 5)\n");
	errno = 0;
	ret = ft_write(1, "aaaaaaaaaa   aaa\n", 17);
	dprintf(1, "ret = %d\n", ret);
	dprintf(1, "errno = %d\n", errno);
	dprintf(1, "\nft_write(3, \"pouet\\n\", 5)\n");
	errno = 0;
	ret = ft_write(3, "pouet\n", 6);
	dprintf(1, "ret = %d\n", ret);
	dprintf(1, "errno = %d\n", errno);
	dprintf(1, "\nwrite(3, \"pouet\\n\", 5)\n");
	ret = write(3, "pouet\n", 6);
	dprintf(1, "ret = %d\n", ret);
	dprintf(1, "errno = %d\n", errno);

	printf("\n-- ft_read\n\n");
	int fd = open("test.txt", O_RDONLY);
	char buf[BUF + 1];
	errno = 0;
	while ((ret = ft_read(fd, buf, BUF)) > 0)
	{
		buf[ret] = 0;
		dprintf(1, "%s\n", buf);
	}
	dprintf(1, "ret = %d\n", ret);
	dprintf(1, "errno = %d\n", errno);
	errno = 0;
	while ((ret = ft_read(42, buf, BUF)) > 0)
	{
		buf[ret] = 0;
		printf("%s", buf);
	}
	dprintf(1, "ret = %d\n", ret);
	dprintf(1, "errno = %d\n", errno);
}