char    *ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	while (s2[i++])
		s1[i-1] = s2[i-1];
	return (s1);
}

#include <stdio.h>

int main(void)
{
	char str1[] = "Flavio";
	char str2[] = "Gaucho";

	printf("str1 = %s\n", str1);
	ft_strcpy(str1, str2);
	printf("str1 = %s\n", str1);
	return (0);
}
