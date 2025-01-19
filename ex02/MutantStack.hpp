/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucabohn <lucabohn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 18:33:52 by lbohm             #+#    #+#             */
/*   Updated: 2025/01/19 22:40:49 by lucabohn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTStACK_HPP
# define MUTANTStACK_HPP

# include <stack>
# include <deque>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack(void);
		MutantStack(const MutantStack &cpy);
		MutantStack	&operator= (const MutantStack &cpy);
		~MutantStack(void);

		typedef typename std::deque<T>::iterator iterator;
		typedef typename std::deque<T>::const_iterator const_iterator;

		iterator		begin(void);
		iterator		end(void);
		const_iterator	begin(void) const;
		const_iterator	end(void) const;
};

# include "MutantStack.tpp"

#endif