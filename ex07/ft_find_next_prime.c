/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 03:23:03 by olarseni          #+#    #+#             */
/*   Updated: 2024/11/08 23:37:07 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb == 2 || nb == 3)
		return (1);
	if (nb == 0 || nb == 1 || !(nb % 2))
		return (0);
	while (i <= nb / i && nb % i != 0)
		i += 2;
	if (i > nb / i)
		return (1);
	return (0);
}

int	ft_find_next_prime(int nb)
{
	if (nb == 0 || nb == 1 || nb == 2)
		return (2);
	if (nb % 2 == 0)
		nb += 1;
	while (!ft_is_prime(nb))
		nb += 2;
	return (nb);
}
//
//int	main(int argc, char **argv)
//{
//	if (argc != 2)
//		return (0);
//	printf("%i", ft_find_next_prime(atoi(argv[1])));
//	return (0);
//}
