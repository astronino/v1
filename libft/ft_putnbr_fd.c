/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 01:32:56 by yoelguer          #+#    #+#             */
/*   Updated: 2019/04/17 01:48:22 by yoelguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	n1;

	n1 = n;
	if (n1 < 0)
	{
		ft_putchar_fd('-', fd);
		n1 = n1 * (-1);
	}
	if (n1 > 9)
	{
		ft_putnbr_fd(n1 / 10, fd);
		ft_putnbr_fd(n1 % 10, fd);
	}
	else
	{
		ft_putchar_fd(n1 + 48, fd);
	}
}
