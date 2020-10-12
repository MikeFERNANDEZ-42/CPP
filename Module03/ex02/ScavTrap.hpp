/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 11:53:30 by user42            #+#    #+#             */
/*   Updated: 2020/09/30 19:41:04 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#define SANDY "\033[1;36m" << "SC4V-TP Sandy" << "\033[0;m" << " lvl." << this->getLevel() << " " <<  "\033[1;31m" << this->getHitsPoints() << "\033[0;m" << "/" << "\033[1;33m" << this->getEnergyPoints() << "\033[0;m" << " "

class	ScavTrap  : public ClapTrap
{

	public:

		ScavTrap( std::string pName );
		ScavTrap( ScavTrap const & src );
		~ScavTrap( void );

		ScavTrap &		operator=( ScavTrap const & rhs );

		void			challengeNewcomer(void);

	private :

};

std::ostream &	operator<<( std::ostream & o, ScavTrap const & rhs );

#endif