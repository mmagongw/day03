/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagongw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 13:51:14 by mmagongw          #+#    #+#             */
/*   Updated: 2020/06/25 13:51:41 by mmagongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strrev(char *str)
{
	int		len;
	int		i;
	char	swap;

	len = 0;
	i = 0;
	while (str[len + 1] != '\0')
		len++;
	while (i < (len - i))
	{
		swap = str[i];
		str[i] = str[len - i];
		str[len - i] = swap;
		i++;
	}
	return (str);

