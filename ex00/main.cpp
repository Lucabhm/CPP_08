/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 23:25:16 by lbohm             #+#    #+#             */
/*   Updated: 2025/02/10 13:18:32 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <map>
#include "easyfind.hpp"

int	main(void)
{
	std::vector<int>			nbrs;
	std::list<int>				list;

	for (int i = 0; i < 10; i++)
		nbrs.push_back(i);
	for (int i = 0; i < 10; i++)
		list.push_back(i);
	try
	{
		std::cout << *easyfind(nbrs, 2) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << *easyfind(list, 9) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}