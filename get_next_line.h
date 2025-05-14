#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 256

# endif


char *get_next_line(int fd);
char	*clean_stash(char *stash);
char	*extract_line(char *stash);
char	*read_until_newline(int fd, char *stash);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t siz);
char	*ft_strjoin(char const *s1, char const *s2);


#endif