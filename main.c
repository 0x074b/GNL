#include <fcntl.h>     // open
#include <stdio.h>     // printf
#include <unistd.h>    // close
#include "get_next_line.h"

char *get_next_line(int fd);

int main(void)
{
	int fd = open("oui.txt", O_RDONLY);
	char *line;

	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return 0;
}

