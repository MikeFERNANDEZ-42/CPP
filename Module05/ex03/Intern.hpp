/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 11:03:38 by user42            #+#    #+#             */
/*   Updated: 2020/10/12 11:03:54 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>

class	Intern
{

	public:

		Intern( void );
		Intern( Intern const & src );
		virtual ~Intern( void );
		Intern &	operator=( Intern const & rhs );

	private :

};

std::ostream &	operator<<( std::ostream & o, Intern const & rhs );

#endif