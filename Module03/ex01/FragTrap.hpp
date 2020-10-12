/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 11:53:30 by user42            #+#    #+#             */
/*   Updated: 2020/09/30 18:51:53 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>

class	FragTrap 
{
	
	public:

		FragTrap( std::string pName );
		FragTrap( FragTrap const & src );
		~FragTrap( void );

		FragTrap &	operator=( FragTrap const & rhs );

		int			getHitsPoints( void ) const;
		int			getEnergyPoints(void ) const;
		int 		getLevel( void ) const;
		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		int			vaulthunter_dot_exe(std::string	const & target);


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

std::ostream &	operator<<( std::ostream & o, FragTrap const & rhs );

#endif