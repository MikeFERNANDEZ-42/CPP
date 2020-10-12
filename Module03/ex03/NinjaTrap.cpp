/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 11:53:27 by user42            #+#    #+#             */
/*   Updated: 2020/09/30 18:23:52 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"


NinjaTrap::NinjaTrap( void )
{
	this->_Hits_points = 60;
	this->_MaxHitPoints = 60;
	this->_EnergyPoints = 120;
	this->_MaxEnergyPoints = 120;
	this->_Level = 1;
	this->_MeleeAttackDamage = 60;
	this->_RangedAttackDamage = 5;
	this->_ArmorDamageReduction = 0;
	std::cout << "Le NinjaTrap a été créé avec succès !" << std::endl;
}


NinjaTrap::NinjaTrap( std::string pName )
{
	this->_Hits_points = 60;
	this->_MaxHitPoints = 60;
	this->_EnergyPoints = 120;
	this->_MaxEnergyPoints = 120;
	this->_Level = 1;
	this->_MeleeAttackDamage = 60;
	this->_RangedAttackDamage = 5;
	this->_ArmorDamageReduction = 0;
	this->_Name = pName;
	std::cout << "Le NinjaTrap a été créé avec succès !" << std::endl;
	srand(time(NULL));
}


NinjaTrap::NinjaTrap( NinjaTrap const & src )
{
	*this = src;
	 std::cout << " NinjaTrap copy generate !" << std::endl;
}


NinjaTrap::~NinjaTrap( void )
{
	std::cout << "Le NinjaTrap a été détruit avec succès !" << std::endl;		
}

NinjaTrap &	NinjaTrap::operator=( NinjaTrap const & rhs )
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


void		NinjaTrap::ninjaShoebox(ClapTrap &target)
{
	std::cout << "\033[1;32m";
	this->meleeAttack(target.getName());
	std::cout << "\033[0;m";
	std::cout << "\033[1;31m";
	target.takeDamage(this->_MeleeAttackDamage - (this->_MeleeAttackDamage * ((float)target.getArmor()) / 100));
	std::cout << "\033[0;m";
}


void		NinjaTrap::ninjaShoebox(FragTrap &target)
{
	std::cout << "\033[1;32m";
	this->meleeAttack(target.getName());
	std::cout << "\033[0;m";
	std::cout << "\033[1;31m";
	target.takeDamage(this->_MeleeAttackDamage - (this->_MeleeAttackDamage * ((float)target.getArmor()) / 100));
	std::cout << "\033[0;m";
}


void		NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	std::cout << "\033[1;32m";
	this->meleeAttack(target.getName());
	std::cout << "\033[0;m";
	std::cout << "\033[1;31m";
	target.takeDamage(this->_MeleeAttackDamage - (this->_MeleeAttackDamage * ((float)target.getArmor()) / 100));
	std::cout << "\033[0;m";
}


void		NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	std::cout << "\033[1;32m";
	this->meleeAttack(target.getName());
	std::cout << "\033[0;m";
	std::cout << "\033[1;31m";
	target.takeDamage(this->_MeleeAttackDamage - (this->_MeleeAttackDamage * ((float)target.getArmor()) / 100));
	std::cout << "\033[0;m";
}



std::ostream &	operator<<( std::ostream &o, NinjaTrap const & rhs )
{
	o << 0;
	return (o);
}