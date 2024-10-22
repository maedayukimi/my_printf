/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawako <maedayukimi@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:16:37 by mawako            #+#    #+#             */
/*   Updated: 2024/09/25 19:54:19 by mawako           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int	ft_string(char *s)
{
	int	i;

	i = 0;
	if (s)
		while (s[i])
			write(1, &s[i++], 1);
	else if (s == NULL)
		return (write(1, "(null)", 6) - 1);
	return (i - 1);
}
