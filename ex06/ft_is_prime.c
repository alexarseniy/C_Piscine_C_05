/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 22:45:08 by olarseni          #+#    #+#             */
/*   Updated: 2024/11/08 23:37:02 by olarseni         ###   ########.fr       */
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
//
//int	main(int argc, char **argv)
//{
//	if (argc != 2)
//		return (0);
//	printf("%i\n", ft_is_prime(atoi(argv[1])));
//	return (0);
//}
