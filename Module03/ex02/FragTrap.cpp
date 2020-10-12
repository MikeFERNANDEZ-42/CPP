/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 11:53:27 by user42            #+#    #+#             */
/*   Updated: 2020/09/30 19:42:45 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string pName)
{
	this->_Hits_points = 100;
	this->_MaxHitPoints = 100;
	this->_EnergyPoints = 100;
	this->_MaxEnergyPoints = 100;
	this->_Level = 1;
	this->_Name = pName; 
	this->_MeleeAttackDamage = 20;
	this->_RangedAttackDamage = 40;
	this->_ArmorDamageReduction = 5;
	this->_MeleeAttackDamage = 30;
	this->_RangedAttackDamage = 20;
	std::cout << "El famoso FR4G-TP <" << _Name << "> llego para luchar !" << std::endl;
	srand(time(NULL));
}


FragTrap::FragTrap( FragTrap const & src )
{
	*this = src;
}


FragTrap::~FragTrap( void )
{
	if (this->_Name == "Domi")
		std::cout << "El famoso FR4G-TP <" << _Name << "> est tombé au combat."  << std::endl;
	else
		std::cout << "FR4G-TP <" << _Name << "> décide de partir pour de nouvelles aventures!"  << std::endl;
	
}


FragTrap &	FragTrap::operator=( FragTrap const & rhs )
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


int		FragTrap::vaulthunter_dot_exe(std::string	const & target)
{
	
	if (this->_EnergyPoints >= 25)
	{
		this->_EnergyPoints -= 25;
		return (1);
	}
	else
		std::cout <<"FR4G-TP <" << _Name << "> n'a plus assez d'énergie pour attaquer !" << std::endl;
	return (0);
}


std::ostream &	operator<<( std::ostream &o, FragTrap const & rhs )
{
	o << 0;
	return (o);
}