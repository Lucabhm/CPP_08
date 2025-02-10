/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 20:37:33 by lucabohn          #+#    #+#             */
/*   Updated: 2025/02/10 13:57:25 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"
#include <list>
#include <time.h>
#include <random>

int main()
{
	srand(static_cast<unsigned int>(time(NULL)));
	Span			sp = Span(5);
	Span			sp2 = Span(10000);
	std::list<int>	list;
	std::list<int>::iterator	first;
	std::list<int>::iterator	last;

	for (int i = 0; i < 20000; i++)
		list.push_back(rand());
	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		first = list.begin();
		if (!list.empty())
		{
			last = std::prev(list.end());
			sp2.addNumber(first, last);
		}
		std::cout << sp.shortestSpan() << std::endl; std::cout << sp.longestSpan() << std::endl;
		std::cout << sp2.shortestSpan() << std::endl; std::cout << sp2.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
