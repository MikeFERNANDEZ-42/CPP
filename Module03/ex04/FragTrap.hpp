/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 11:53:30 by user42            #+#    #+#             */
/*   Updated: 2020/10/01 10:58:05 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class	FragTrap : public virtual ClapTrap
{
	
	public:
		
		FragTrap( void );
		FragTrap( std::string pName );
		FragTrap( FragTrap const & src );
		~FragTrap( void );

		FragTrap &	operator=( FragTrap const & rhs );

		int			vaulthunter_dot_exe(std::string	const & target);


	private :

};

std::ostream &	operator<<( std::ostream & o, FragTrap const & rhs );

#endif