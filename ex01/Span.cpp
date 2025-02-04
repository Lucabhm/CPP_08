/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucabohn <lucabohn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 20:24:51 by lucabohn          #+#    #+#             */
/*   Updated: 2025/01/18 22:42:43 by lucabohn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

Span::Span(void)
{
	this->max = 0;
}

Span::Span(unsigned int n)
{
	this->max = n;
}

Span::Span(const Span &cpy)
{
	this->list = cpy.list;
	this->max = cpy.max;
}

Span	&Span::operator= (const Span &cpy)
{
	if (this != &cpy)
	{
		this->list = cpy.list;
		this->max = cpy.max;
	}
	return (*this);
}

Span::~Span(void) {}

void	Span::addNumber(unsigned int newNbr)
{
	if (this->list.size() >= this->max)
		throw std::runtime_error("list if full");
	this->list.insert(newNbr);
}

unsigned int	Span::shortestSpan(void)
{
	std::multiset<int>::iterator	first;
	std::multiset<int>::iterator	second;
	unsigned int					span;

	if (this->list.size() < 2)
		throw std::runtime_error("no span can be found");
	first = this->list.begin();
	second = this->list.begin();
	second++;
	span = *second - *first;
	while (second != this->list.end())
	{
		if (*second - *first < span)
			span = *second - *first;
		first++;
		second++;
	}
	return (span);
}

unsigned int	Span::longestSpan(void)
{
	if (this->list.size() < 2)
		throw std::runtime_error("no span can be found");
	return (*this->list.rbegin() - *this->list.begin());
}