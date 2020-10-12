/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 11:53:30 by user42            #+#    #+#             */
/*   Updated: 2020/09/30 17:13:05 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class	SuperTrap : virtual public FragTrap, virtual public NinjaTrap {

public:

	SuperTrap( void );
	SuperTrap( std::string pName);
	SuperTrap( SuperTrap const & src );
	~SuperTrap( void );

	SuperTrap &	operator=( SuperTrap const & rhs );
	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);

private :

};

std::ostream &	operator<<( std::ostream & o, SuperTrap const & rhs );

#endif