/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 20:24:43 by lbohm             #+#    #+#             */
/*   Updated: 2025/02/12 11:03:44 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <set>
# include <algorithm>
# include <iostream>

class Span
{
	private:
		std::multiset<int>	list;
		unsigned int		max;
	public:
		Span(void);
		Span(unsigned int n);
		Span(const Span &cpy);
		Span	&operator= (const Span &cpy);
		~Span(void);
		void	addNumber(unsigned int newNbr);
		template <typename T>
		void	addNumber(T start, T end)
		{
			if (this->list.size() >= this->max || this->list.size() + std::distance(start, end) > this->max)
				throw std::runtime_error("list if full");
			this->list.insert(start, end);
		}
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);
};

#endif