/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 16:52:43 by user42            #+#    #+#             */
/*   Updated: 2020/10/07 11:15:33 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"
#include "Creature.hpp"

class	Sorcerer 
{

	public:

		Sorcerer( void );
		Sorcerer( std::string pName, std::string pTitle );
		Sorcerer( Sorcerer const & src );
		virtual ~Sorcerer( void );
		Sorcerer &	operator=( Sorcerer const & rhs );
	
		std::string	getName( void ) const;
		std::string	getTitle( void ) const;
		void 		polymorph( Victim const & ) const;
		void 		polymorph( Creature const & ) const;

	private :

		std::string	_Name;
		std::string	_Title;


};

std::ostream &	operator<<( std::ostream & o, Sorcerer const & rhs );

#endif