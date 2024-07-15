/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:26:11 by mpeshko           #+#    #+#             */
/*   Updated: 2024/07/11 18:42:28 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"
#include "../libft/libft.h"

void	input_is_valid_onearg(char *argv, t_stack **a)
{
	int	i;

	i = 0;
	if (argv[i] == '\0')
	{
		free_stack(a);
		error_mix_exit(6);
	}
	while (argv[i] != '\0')
	{
		if (ft_isdigit(argv[i]) || argv[i] == 32)
			i++;
		else if (argv[i] == '-' && argv[i + 1] != '\0'
			&& argv[i + 1] != 32)
			i++;
		else if (argv[i] == '+' && argv[i + 1] != '\0'
			&& argv[i + 1] != 32)
			i++;
		else
		{
			free_stack(a);
			error_mix_exit(3);
		}
	}
}

void	input_is_valid(char *argv, t_stack **a)
{
	int	i;

	i = 0;
	if (argv[i] == '\0')
	{
		free_stack(a);
		error_mix_exit(6);
	}
	while (argv[i] != '\0')
	{
		if (ft_isdigit(argv[i]))
			i++;
		else if (argv[i] == '-' && argv[i + 1] != '\0')
			i++;
		else if (argv[i] == '+' && argv[i + 1] != '\0'
			&& argv[i + 1] != 32)
			i++;
		else
		{
			free_stack(a);
			error_mix_exit(3);
		}
	}
}
