/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:56:03 by mpeshko           #+#    #+#             */
/*   Updated: 2024/07/15 16:22:30 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

typedef struct s_stack
{
	int				nbr;
	struct s_stack	*next;
}	t_stack;

// main parsing functions
t_stack	*input_into_stack(int argc, char **argv);
t_stack	*one_arg(char **argv);

// helper parsing functions
int		ft_atoi2(const char *str, t_stack **my_node);
int		ft_atoi2_onearg(const char *str, t_stack **my_node, char **strings);

void	stack_birth(t_stack **lst, t_stack *node);
t_stack	*node_birth(int content);

char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *str);

// clean up
void	free_str_arr(char **lst);
void	free_stack(t_stack **stack);
void	free_both(t_stack **stack, char **lst);

// checker
void	input_is_valid(char *argv, t_stack **a);
void	input_is_valid_onearg(char *argv, t_stack **a);
int		is_onlydigit(char **argv);
int		ft_isdigit(int c);
int		dup_search(t_stack *a);
int		check_sort(t_stack *stack_a);

// operations
void	ft_sa(t_stack **a);
void	ft_sb(t_stack **b);
void	ft_ss(t_stack **a, t_stack **b);
void	ft_pb(t_stack **a, t_stack **b);
void	ft_pa(t_stack **a, t_stack **b);
void	ft_ra(t_stack **a);
void	ft_rb(t_stack **b);
void	ft_rr(t_stack **a, t_stack **b);
void	ft_rra(t_stack **a);
void	ft_rrb(t_stack **b);
void	ft_rrr(t_stack **a, t_stack **b);

// sorting
void	sort_algorithm(t_stack **a);
void	sort_push_to_b(t_stack **stack_a, t_stack **stack_b);
void	sort_push_to_a(t_stack **stack_a, t_stack **stack_b);
void	sort_three(t_stack **stack_a);
void	sort_ascend_a(t_stack **a);

// counting a cost for pushing to stack b in descending order
int		alg_cheapest_ab(t_stack *a, t_stack *b);
int		case_one(t_stack *a, t_stack *b, int nbr);
int		case_two(t_stack *a, t_stack *b, int nbr);

// applying a chosen method
int		do_case_one(t_stack **a, t_stack **b, int nbr);
int		do_case_two(t_stack **a, t_stack **b, int nbr);

// counting a cost for pushing to stack a in ascending order
int		alg_cheapest_ba(t_stack *a, t_stack *b);
int		case_one_b(t_stack *b, t_stack *a, int nbr);
int		case_two_b(t_stack *b, t_stack *a, int nbr);

// applying a chosen method
int		do_case_one_b(t_stack **b, t_stack **a, int nbr);
int		do_case_two_b(t_stack **b, t_stack **a, int nbr);

// helper functions during sorting
t_stack	*ft_lstlast(t_stack *lst);
int		ft_lstsize(t_stack *lst);
int		min_nbr(t_stack *a);
int		max_nbr(t_stack *a);
int		find_place_b(t_stack *stack_b, int nbr_push);
int		find_place_a(t_stack *stack_a, int nbr_push);
int		cur_place(t_stack *stack, int nbr);

// error functions
void	error_exit(int err_number);
void	error_mix_exit(int err_number);
void	error_dup_exit(int err_number);
void	error_mall_exit(int err_number);

#endif