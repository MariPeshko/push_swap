/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 19:28:02 by mpeshko           #+#    #+#             */
/*   Updated: 2024/06/11 20:11:56 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"
#include "../libft/libft.h"

//Here an error message is being printed out
void	ft_error(void)
{
	write (2, "Error\n", 6);
	exit(1);
}

void	ft_error_mix(void)
{
	write (2, "Error\n", 6);
	exit(3);
}

void	mix_str_int(char *argv, t_stack **a)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (ft_strchr(&argv[i], ' '))
		{
			ft_free(a);
			ft_error_mix();
		}
		i++;
	}
}
