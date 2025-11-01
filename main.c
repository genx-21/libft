#include "libft.h"

int main(void)
{
    char buffer[50] = "Hello World!";

    // 1. Non-overlapping (dest before src)
    char dest1[20] = "sfsdffs";
    printf("Before memmove1: %s\n", buffer);
    ;
    printf("After memmove1:  %s\n\n", ft_strchr(buffer, 'd'));
    return 0;
}
