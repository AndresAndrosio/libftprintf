/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arozados <arozados@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 19:21:04 by arozados          #+#    #+#             */
/*   Updated: 2026/10/18 17:24:23 by arozados         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	trim_detector(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start_index;
	size_t	end_index;
	size_t	index;
	char	*result;

	if (!s1)
		return (NULL);
	start_index = 0;
	end_index = ft_strlen(s1);
	while (start_index < end_index && trim_detector(s1[start_index], set))
		start_index++;
	while (end_index > start_index && trim_detector(s1[end_index - 1], set))
		end_index--;
	result = malloc(end_index - start_index + 1);
	if (result == NULL)
		return (NULL);
	index = 0;
	while (start_index < end_index)
		result[index++] = s1[start_index++];
	result[index] = '\0';
	return (result);
}

// typedef struct s_test
// {
// 	int			id;
// 	char const	*s1;
// 	char const	*set;
// 	char const	*expected;
// }				t_test;

// static void	run_test(t_test t)
// {
// 	char	*result;
// 	int		ok;

// 	result = ft_strtrim(t.s1, t.set);
// 	ok = (result != NULL && strcmp(result, t.expected) == 0);
// 	printf("Test %d: %s | Result: '%s' | Expected: '%s'\n", t.id,
// 		ok ? "OK" : "KO", result != NULL ? result : "(null)", t.expected);
// 	free(result);
// }

// int	main(void)
// {
// 	size_t	i;

// 	t_test tests[] = {
// 		{1, "   Hello World   ", " ", "Hello World"},
// 		{2, "abcHelloabc", "abc", "Hello"},
// 		{3, "NoTrimNeeded", "xyz", "NoTrimNeeded"},
// 		{4, "", " ", ""},
// 		{5, "   ", " ", ""},
// 		{6, "xxHellox", "x", "Hello"},
// 		{7, "aaa", "a", ""},
// 	};
// 	i = 0;
// 	while (i < sizeof(tests) / sizeof(tests[0]))
// 		run_test(tests[i++]);
// 	return (0);
// }
