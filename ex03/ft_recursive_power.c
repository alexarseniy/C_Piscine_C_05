/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 20:52:02 by olarseni          #+#    #+#             */
/*   Updated: 2024/11/08 23:36:38 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * (ft_recursive_power(nb, power - 1)));
}
//
//int	main(int argc, char **argv)
//{
//	if (argc != 3)
//		return (0);
//	printf("result = %i\n", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
//	return (0);
//}
