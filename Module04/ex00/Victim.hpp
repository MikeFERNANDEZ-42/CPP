/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 16:51:30 by user42            #+#    #+#             */
/*   Updated: 2020/10/01 19:13:07 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class	Victim
{
	public:

		Victim( void );
		Victim( std::string pName );
		Victim( Victim const & src );
		virtual ~Victim( void );
		Victim &	operator=( Victim const & rhs );

		std::string	getName( void ) const;
		virtual void		getPolymorphed() const;
		
	protected :

		std::string _Name;

};

std::ostream &	operator<<( std::ostream & o, Victim const & rhs );

#endif