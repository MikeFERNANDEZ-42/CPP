/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 11:53:30 by user42            #+#    #+#             */
/*   Updated: 2020/09/29 13:24:52 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>

class	FragTrap {

public:

	FragTrap( std::string pName );
	FragTrap( FragTrap const & src );
	~FragTrap( void );

	int			getValue( void ) const;
	int			getHitsPoints( void ) const;
	int			getEnergyPoints(void ) const;
	int 		getLevel( void ) const;
	void		setValue( int const raw );
	FragTrap &	operator=( FragTrap const & rhs );

	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	int			vaulthunter_dot_exe(std::string	const & target);

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

std::ostream &	operator<<( std::ostream & o, FragTrap const & rhs );

#endif