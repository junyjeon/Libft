/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 18:24:13 by junyojeo          #+#    #+#             */
/*   Updated: 2022/07/14 18:54:25 by junyojeo         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst->next)
	{
		lst->next = lst;
		size++;
	}
	return (size);
}
