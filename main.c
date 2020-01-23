/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: coscialp <coscialp@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/10 11:41:22 by coscialp     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/23 18:21:07 by coscialp    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libasm.h"
#define BUF 32

int		main(int ac, char **av)
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

	printf("\n-- ft_write\n\n");
	printf("ret was %ld\n", ft_write(1, "truc\n", 5));
	printf("ret was %ld\n", ft_write(1, "aaa\n", 4));

	printf("\n-- ft_read\n\n");
	int	ret;
	int fd = open(av[ac -1], O_RDONLY);
	char buf[BUF + 1];
	while ((ret = ft_read(fd, buf, BUF)) > 0)
	{
		buf[ret] = 0;
		printf("%s", buf);
	}
	printf("\nret is %d\n", ret);
	while ((ret = ft_read(42, buf, BUF)) > 0)
	{
		buf[ret] = 0;
		printf("%s", buf);
	}
	printf("\nret is %d\n", ret);
}