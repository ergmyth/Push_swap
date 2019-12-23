/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 13:46:57 by eleonard          #+#    #+#             */
/*   Updated: 2019/10/24 14:14:30 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"

typedef struct		s_stack
{
	int				n;
	int				limiter;
	struct s_stack	*next;
}					t_stack;

typedef struct		s_stack_vars
{
	t_stack			*stack;
	int				max;
	int				len;
	int				mid;
	int				*cur_tab;
	int				*sorted_tab;
	int				*cur_offset;
	int				offset_count;
}					t_stack_vars;

typedef int			(*t_s_func)(void *);

typedef struct		s_func
{
	char			*name;
	t_s_func		func;
}					t_func;

typedef struct		s_ps
{
	t_stack_vars	*first;
	t_stack_vars	*second;
	int				*sorted_tab;
	int				print;
	int				op;
	int				len;
	int				commands_offset[11];
	int				func_size;
	t_func			func[11];
}					t_ps;

void				func_free(t_ps *s);
void				case_of_error(void);
t_ps				*init_struct(void);
void				command_end_other(t_ps *s);
void				command_end_pb(t_ps *s, int pushed_nbr);
void				insert_elem(int *tab, int elem, int len);
void				remove_elem(int *tab, int elem, int len);
t_stack_vars		*init_stack_vars(int len);
void				func_arr(t_ps *s);
void				fill_stack(int i, char **av, t_ps *s);
void				array_sort(int *tab, int len, char *seq);
void				count_of_ops_for_input(t_ps *s, int *a_ret, int *b_ret);
void				pre_sort_a(t_ps *s, int last);
int					find_command_by_name(char *str, t_ps *s);
void				fill_stack_vars(t_stack_vars *s, char *seq);
void				get_cur_tab(t_stack_vars *s);
void				get_cur_offset(t_stack_vars *s);
int					is_sorted(t_stack_vars *s, char c);
void				find_solution(t_ps *s);
void				ft_sort(t_ps *s, int last);
void				rem_commands(t_ps *s, int last);
int					def_rev_a(int i, t_ps *s);
int					get_nbr(char *str);
int					check_for_duplicates(t_stack *stack, int nbr);
void				add_to_stack(t_stack **lst, t_stack *elem);
int					swap_elems(t_stack **stack);
t_stack				*new_elem(int nbr, int limiter);
int					func_sa(t_ps *s);
int					func_sb(t_ps *s);
int					func_ss(t_ps *s);
int					push_from_to(t_stack_vars *vars1, t_stack_vars *vars2);
int					func_pa(t_ps *s);
int					func_pb(t_ps *s);
int					rotate_lst(t_stack **stack);
int					func_ra(t_ps *s);
int					func_rb(t_ps *s);
int					func_rr(t_ps *s);
int					rev_ro_lst(t_stack **stack);
int					func_rra(t_ps *s);
int					func_rrb(t_ps *s);
int					func_rrr(t_ps *s);

#endif
