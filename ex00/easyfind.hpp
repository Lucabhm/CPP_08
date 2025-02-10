/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 23:25:49 by lbohm             #+#    #+#             */
/*   Updated: 2025/02/10 13:15:24 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

template <typename T>
typename T::iterator	easyfind(T arr, int find)
{
	typename T::iterator value = std::find(arr.begin(), arr.end(), find);
	if (value == arr.end())
		throw std::runtime_error("Int not Found");
	return (value);
}

#endif