/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 18:10:24 by user42            #+#    #+#             */
/*   Updated: 2020/10/07 21:10:55 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

#include <iostream>
#include "ISquad.hpp"

typedef struct		s_squad
{
	ISpaceMarine	*unit;
	struct s_squad	*next;
}					t_squad;


class	Squad : public ISquad
{

	public:

		Squad( void );
		Squad( Squad const & src );
		virtual ~Squad( void );
		Squad &	operator=( Squad const & rhs );

		virtual		int getCount() const;
		virtual		ISpaceMarine* getUnit(int) const;
		virtual		int push(ISpaceMarine*);

	private :
	
		int			_count;
		s_squad *	_unit;

};

void	suppr_squad(t_squad *base);

#endif