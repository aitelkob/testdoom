/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isword.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-el- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 15:07:53 by yait-el-          #+#    #+#             */
/*   Updated: 2019/04/19 15:15:51 by yait-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isword(char	const *s, size_t i, char c)
{
	if (i == 0 && s[i] != c)
		return (1);
	if (s[i] != c && s[i - 1] == c)
		return (1);
	return (0);
}
