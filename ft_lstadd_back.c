/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 23:52:02 by junyojeo          #+#    #+#             */
/*   Updated: 2022/07/09 00:28:12 by junyojeo         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!*lst)
		lst->next = new;
	else
	{
		lstlast(lst);
		lst->next = new;
	}
}
