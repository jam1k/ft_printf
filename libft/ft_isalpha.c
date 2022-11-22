/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:28:49 by jshestov          #+#    #+#             */
/*   Updated: 2022/11/09 09:27:59 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int argument)
{
	if ((argument >= 65 && argument < 91)
		|| (argument >= 97 && argument <= 122))
		return (1);
	else
		return (0);
}
