/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 13:25:39 by rothomps          #+#    #+#             */
/*   Updated: 2019/02/14 13:59:55 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

 int get_next_line(const int fd, char **line)
 {
	char buf[23];
	int fdc;

	fdc = (int)fd;

	read(fd, buf, 23);
	close(fd);

	write(1, buf, 23);

	return (0);
 }
int main(int c, char **v)
{
	int fd;

	if (c == 2)
	{
		fd = open(*v, O_RDONLY);
		if (fd == -1)
		{
			printf("Failed to open and read file\n");
			exit(1);
		}
		get_next_line(fd, v);
	}
	else
		write (1, "enter one file name\n", 20);
	return (0);
}
