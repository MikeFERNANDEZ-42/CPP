/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 11:00:24 by user42            #+#    #+#             */
/*   Updated: 2020/10/12 11:03:34 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern( void )
{
	std::cout << "Default constructor called" << std::endl;
}


Intern::Intern( Intern const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}


Intern::~Intern( void )
{
	std::cout << "Default destructor called" << std::endl;
}


Intern &	Intern::operator=( Intern const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != & rhs)
	{
	}
	return ( *this );
}


std::ostream &	operator<<( std::ostream &o, Intern const & rhs )
{
	o << 0;
	return (o);
}