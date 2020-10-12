/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 15:03:01 by user42            #+#    #+#             */
/*   Updated: 2020/10/07 15:47:39 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"


RadScorpion::RadScorpion( void ) : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion( RadScorpion const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}


RadScorpion::~RadScorpion( void )
{
	std::cout << "* SPROTCH *" << std::endl;
}


RadScorpion &	RadScorpion::operator=( RadScorpion const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != & rhs)
		Enemy:operator=(rhs);
	return ( *this );
}


std::ostream &	operator<<( std::ostream &o, RadScorpion const & rhs )
{
	o << 0;
	return (o);
}