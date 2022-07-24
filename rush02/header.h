#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int	ft_strlen(char *str);
int	ft_atoi(char *str);
char	*read_name_dict(int argc, char **argv);
int	choose_dict(int argc, char **argv);
char	*ft_read_dic(int num);
char	*ft_strcat(char *dest, char *src);
char	*ft_hundreds(char *pack);
char	*ft_get_pack(char *str);
char	*ft_rest_str(char *str);
int val_nums(int argc, char *str);
