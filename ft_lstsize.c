/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 18:24:13 by junyojeo          #+#    #+#             */
/*   Updated: 2022/07/08 18:27:07 by junyojeo         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst->next)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
