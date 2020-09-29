/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 11:53:30 by user42            #+#    #+#             */
/*   Updated: 2020/09/29 17:26:48 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>

class	ScavTrap {

public:

	ScavTrap( std::string pName );
	ScavTrap( ScavTrap const & src );
	~ScavTrap( void );

	int			getValue( void ) const;
	int			getHitsPoints( void ) const;
	int			getEnergyPoints(void ) const;
	int 		getLevel( void ) const;
	void		setValue( int const raw );
	ScavTrap &	operator=( ScavTrap const & rhs );

	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	int			challengeNewcomer(std::string	const & target);

private :

	int					_Value;
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