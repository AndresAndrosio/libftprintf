/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:53:19 by arozados          #+#    #+#             */
/*   Updated: 2026/10/18 15:52:20 by arozados         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	**free_result(char **result)
{
	size_t	index;

	index = 0;
	while (result[index] != NULL)
	{
		free(result[index]);
		index++;
	}
	free(result);
	return (NULL);
}

static char	*get_next_word(char const *s, char c)
{
	char const	*start;
	char		*result;
	size_t		len;
	size_t		i;

	while (*s == c)
		s++;
	if (*s == '\0')
		return (NULL);
	start = s;
	len = 0;
	while (s[len] && s[len] != c)
		len++;
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = start[i];
		i++;
	}
	result[len] = '\0';
	return (result);
}

static char	*get_next_char_of_word(char const *s, char c)
{
	while (*s == c)
		s++;
	while (*s && *s != c)
		s++;
	return ((char *)s);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	words;
	size_t	i;

	if (s == NULL)
		return (NULL);
	words = count_words(s, c);
	result = malloc((words + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < words)
	{
		result[i] = get_next_word(s, c);
		if (result[i] == NULL)
			return (free_result(result));
		s = get_next_char_of_word(s, c);
		i++;
	}
	result[i] = NULL;
	return (result);
}

// int	main(void)
// {
// 	char **result;
// 	size_t i;

// 	result = ft_split("Hello,World,This,is,a,test", ',');
// 	if (result == NULL)
// 	{
// 		printf("ft_split returned NULL\n");
// 		return (1);
// 	}
// 	i = 0;
// 	while (result[i] != NULL)
// 	{
// 		printf("result[%zu]: %s\n", i, result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }