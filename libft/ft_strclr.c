/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <lmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 01:24:25 by lmarques          #+#    #+#             */
/*   Updated: 2016/08/27 01:28:01 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strclr(char *s)
{
	int	count;

	count = 0;
	if (s)
	{
		while (s[count])
		{
			s[count] = '\0';
			count++;
		}
	}
}