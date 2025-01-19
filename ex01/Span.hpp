/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucabohn <lucabohn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 20:24:43 by lucabohn          #+#    #+#             */
/*   Updated: 2025/01/18 23:27:38 by lucabohn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <set>
# include <algorithm>

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
			if (this->list.size() >= this->max || this->list.size() + std::distance(start, end) >= this->max)
				throw std::runtime_error("list if full");
			this->list.insert(start, end);
		}
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);
};


#endif