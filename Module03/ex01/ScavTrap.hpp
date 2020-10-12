/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 11:53:30 by user42            #+#    #+#             */
/*   Updated: 2020/09/30 19:33:56 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#define SANDY "\033[1;36m" << "SC4V-TP Sandy" << "\033[0;m" << " lvl." << this->getLevel() << " " <<  "\033[1;31m" << this->getHitsPoints() << "\033[0;m" << "/" << "\033[1;33m" << this->getEnergyPoints() << "\033[0;m" << " "

class	ScavTrap {

public:

	ScavTrap( std::string pName );
	ScavTrap( ScavTrap const & src );
	~ScavTrap( void );

	int				getValue( void ) const;
	int				getHitsPoints( void ) const;
	int				getEnergyPoints(void ) const;
	int 			getLevel( void ) const;
	void			setValue( int const raw );
	ScavTrap &		operator=( ScavTrap const & rhs );

	void			rangedAttack(std::string const & target);
	void			meleeAttack(std::string const & target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	void			challengeNewcomer(void);

private :

	int					_Hits_points;
	int					_MaxHitPoints;
	int					_EnergyPoints;
	int					_MaxEnergyPoints;
	int					_Level;
	std::string			_Name;
	int					_MeleeAttackDamage;
	int					_RangedAttackDamage;
	int					_ArmorDamageReduction;

};

std::ostream &	operator<<( std::ostream & o, ScavTrap const & rhs );

#endif