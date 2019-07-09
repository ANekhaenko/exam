/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anekhaen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 17:28:02 by anekhaen          #+#    #+#             */
/*   Updated: 2019/05/05 17:53:32 by anekhaen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = getline(line, MAXLINE)) > 0)
		if (len > max)
		{	
			max = len;
			copy(longest, line);
		}
	if (max > 0)
		printf("%s", longest);
	return 0;
}
int getline(char line[], int maxline)
{
	int c, i;

	for ( i = 0; i < lim-1 && (c=getchar()) != EOF && c !='\n'; ++i)
		s[i] = c;
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
void copy(char to[], char from[])
{
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0')
		i++;
}

