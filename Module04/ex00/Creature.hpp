/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Creature.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 16:51:30 by user42            #+#    #+#             */
/*   Updated: 2020/10/07 10:58:40 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CREATURE_HPP
# define CREATURE_HPP

#include <iostream>

class	Creature
{
	public:

		Creature( void );
		Creature( std::string pName );
		Creature( Creature const & src );
		virtual ~Creature( void );
		Creature &	operator=( Creature const & rhs );

		std::string	getName( void ) const;
		virtual void		getPolymorphed() const;
		
	protected :

		std::string _Name;

};

std::ostream &	operator<<( std::ostream & o, Creature const & rhs );

#endif