/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_anagram.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 09:02:37 by exam              #+#    #+#             */
/*   Updated: 2018/12/18 09:15:02 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_anagram(char *a, char *b)
{
	int		arr[255];
	int		i;

	i = -1;
	while (i < 255)
		arr[++i] = 100;
	i = -1;
	while (a[++i])
		++arr[(int)a[i]];
	i = -1;
	while (b[++i])
		--arr[(int)b[i]];
	i = 0;
	while (i < 256)
	{
		if (arr[i] != 100)
			return (0);
		++i;
	}
	return (1);
}
