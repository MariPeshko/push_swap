/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 19:28:02 by mpeshko           #+#    #+#             */
/*   Updated: 2024/07/11 18:26:35 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"
#include "../libft/libft.h"

void	error_exit(int err_number)
{
	write(2, "Error\n", 6);
	exit(err_number);
}

void	error_mix_exit(int err_number)
{
	write(2, "Error\n", 6);
	exit(err_number);
}

void	error_dup_exit(int err_number)
{
	write(2, "Error\n", 6);
	exit(err_number);
}

// Malloc error
void	error_mall_exit(int err_number)
{
	write(2, "Error\n", 6);
	exit(err_number);
}
