/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 11:53:30 by user42            #+#    #+#             */
/*   Updated: 2020/09/30 17:13:05 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap {

public:

	ClapTrap( void );
	ClapTrap( std::string pName);
	ClapTrap( ClapTrap const & src );
	~ClapTrap( void );

	int			getHitsPoints( void ) const;
	int			getEnergyPoints(void ) const;
	int 		getLevel( void ) const;
	ClapTrap &	operator=( ClapTrap const & rhs );

	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

protected :

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

std::ostream &	operator<<( std::ostream & o, ClapTrap const & rhs );

#endif