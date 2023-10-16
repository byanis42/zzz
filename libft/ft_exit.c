/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byanis <byanis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:08:28 by byanis            #+#    #+#             */
/*   Updated: 2022/10/10 21:18:26 by byanis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_exit(int ret, int n, ...)
{
	va_list		argv;
	void		*temp;
	int			i;

	i = 0;
	va_start(argv, n);
	while (i < n)
	{
		temp = va_arg(argv, void *);
		ft_memdel(&temp);
		i++;
	}
	va_end(argv);
	return (ret);
}
