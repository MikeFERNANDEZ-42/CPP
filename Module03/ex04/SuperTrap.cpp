/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 11:53:27 by user42            #+#    #+#             */
/*   Updated: 2020/09/30 19:36:03 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"


SuperTrap::SuperTrap( void )
{
	this->_Hits_points = FragTrap::_Hits_points;
	this->_MaxHitPoints = FragTrap::_MaxHitPoints;
	this->_EnergyPoints = NinjaTrap::_EnergyPoints;
	this->_MaxEnergyPoints = NinjaTrap::_MaxEnergyPoints;
	this->_Level = 1;
	this->_MeleeAttackDamage = NinjaTrap::_MeleeAttackDamage;
	this->_RangedAttackDamage = FragTrap::_RangedAttackDamage;
	this->_ArmorDamageReduction = FragTrap::_ArmorDamageReduction;
	std::cout << "Le SuperTrap a été créé avec succès !" << std::endl;
}


SuperTrap::SuperTrap( std::string pName )
{
	this->_Hits_points = FragTrap::_Hits_points;
	this->_MaxHitPoints = FragTrap::_MaxHitPoints;
	this->_EnergyPoints = NinjaTrap::_EnergyPoints;
	this->_MaxEnergyPoints = NinjaTrap::_MaxEnergyPoints;
	this->_Level = 1;
	this->_MeleeAttackDamage = NinjaTrap::_MeleeAttackDamage;
	this->_RangedAttackDamage = FragTrap::_RangedAttackDamage;
	this->_ArmorDamageReduction = FragTrap::_ArmorDamageReduction;
	this->_Name = pName;
	std::cout << "Le SuperTrap a été créé avec succès !" << std::endl;
	srand(time(NULL));
}


SuperTrap::SuperTrap( SuperTrap const & src )
{
	*this = src;
	 std::cout << " SuperTrap copy generate !" << std::endl;
}


SuperTrap::~SuperTrap( void )
{
	std::cout << "Le SuperTrap a été détruit avec succès !" << std::endl;		
}


SuperTrap &	SuperTrap::operator=( SuperTrap const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_Hits_points = rhs._Hits_points;
        this->_EnergyPoints = rhs._EnergyPoints;
        this->_MaxEnergyPoints = rhs._MaxEnergyPoints;
        this->_MaxHitPoints = rhs._MaxHitPoints;
        this->_Level = rhs._Level;
        this->_Name = rhs._Name;
        this->_ArmorDamageReduction = rhs._ArmorDamageReduction;
        this->_RangedAttackDamage = rhs._RangedAttackDamage;
        this->_MeleeAttackDamage = rhs._MeleeAttackDamage;
	}
	return ( *this );
}


void			SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}


void			SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}

std::ostream &	operator<<( std::ostream &o, SuperTrap const & rhs )
{
	o << 0;
	return (o);
}