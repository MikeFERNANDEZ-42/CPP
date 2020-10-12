/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 16:48:28 by user42            #+#    #+#             */
/*   Updated: 2020/10/07 11:04:32 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"


Peon::Peon( void ) : Victim("Peon")
{
	std::cout << "Zog zog." << std::endl;
}


Peon::Peon( std::string pName ) : Victim(pName)
{
	std::cout << "Zog zog." << std::endl;
}


Peon::Peon( Peon const & src ) : Victim(src)
{
	std::cout << "Zog zog." << std::endl;
	*this = src;
}


Peon::~Peon( void )
{
	std::cout << "Bleuark..." << std::endl;
}


Peon &	Peon::operator=( Peon const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != & rhs)
		this->_Name = rhs._Name;
	return ( *this );
}

void		Peon::getPolymorphed() const
{
	std::cout << this->_Name << " has been turned into a pink pony!" << std::endl;
}

