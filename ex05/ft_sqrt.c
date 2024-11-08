/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:06:27 by olarseni          #+#    #+#             */
/*   Updated: 2024/11/08 23:36:52 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i < INT_MAX / i)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
//
//int	main(int argc, char **argv)
//{
//	if (argc != 2)
//		return (0);
//	printf("raiz cuadrada de %i = %i\n", atoi(argv[1]),ft_sqrt(atoi(argv[1])));
//	return (0);
//}
