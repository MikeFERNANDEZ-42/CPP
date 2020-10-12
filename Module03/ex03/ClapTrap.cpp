/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 11:53:27 by user42            #+#    #+#             */
/*   Updated: 2020/10/01 10:26:07 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(	void )
{
	this->_Hits_points = 100;
	this->_MaxHitPoints = 100;
	this->_EnergyPoints = 100;
	this->_MaxEnergyPoints = 100;
	this->_Level = 1;
	this->_MeleeAttackDamage = 20;
	this->_RangedAttackDamage = 40;
	this->_ArmorDamageReduction = 5;
	std::cout << "Le ClapTrap a été créé avec succès !" << std::endl;
}


ClapTrap::ClapTrap( std::string pName )
{
	this->_Hits_points = 100;
	this->_MaxHitPoints = 100;
	this->_EnergyPoints = 100;
	this->_MaxEnergyPoints = 100;
	this->_Level = 1;
	this->_MeleeAttackDamage = 20;
	this->_RangedAttackDamage = 40;
	this->_ArmorDamageReduction = 5;
	this->_Name = pName;
	std::cout << "Le ClapTrap a été créé avec succès !" << std::endl;
	srand(time(NULL));
}


ClapTrap::ClapTrap( ClapTrap const & src )
{
	*this = src;
	 std::cout << " ClapTrap copy generate !" << std::endl;
}


ClapTrap::~ClapTrap( void )
{
	std::cout << "Le ClapTrap a été détruit avec succès !" << std::endl;		
}

std::string	ClapTrap::getName( void ) const
{
	return ( this->_Name );
}

int			ClapTrap::getHitsPoints( void ) const
{
	return ( this->_Hits_points );
}


int			ClapTrap::getEnergyPoints(void ) const
{
	return ( this->_EnergyPoints );
}


int 		ClapTrap::getLevel( void ) const
{
	return ( this->_Level );
}

int 		ClapTrap::getArmor( void ) const
{
	return ( this->_ArmorDamageReduction );
}


ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs )
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


void			ClapTrap::rangedAttack(std::string const & target)
{
	std::string weapon[5] = {"un couteau à saucisson éguisé comme il se doit",
	" un T-max en Y", "un allemand avec sa meilleure paire de claquette chausettes",
	"le mec du PMU d'en face", "un vrai mâle Alpha"};

	if (this->_EnergyPoints >= 25)
	{
		this->_EnergyPoints -= 25;
		std::cout << "<" << _Name << "> attaque <" << target
		<< "> à distance avec " << weapon[rand() % 5] << ", causant <"
		<< _RangedAttackDamage << "> points de dégâts !" << std::endl;
	}
	else
		std::cout <<"<" << _Name << "> n'a plus assez d'énergie pour attaquer !" << std::endl;

}


void			ClapTrap::meleeAttack(std::string const & target)
{
	std::string weapon[5] = {"un couteau à saucisson éguisé comme il se doit",
	" un T-max en Y", "un allemand avec sa meilleure paire de claquette chausettes",
	"le mec du PMU d'en face", "un vrai mâle Alpha"};

	if (this->_EnergyPoints >= 25)
	{
		this->_EnergyPoints -= 25;
		std::cout << "<" << _Name << "> attaque <" << target
		<< "> au corps à corps avec " << weapon[rand() % 5] << ", causant <"
		<< _MeleeAttackDamage << "> points de dégâts !" << std::endl;
	}
	else
		std::cout <<"<" << _Name << "> n'a plus assez d'énergie pour attaquer !" << std::endl;
}


void		ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "<" << _Name << "> subit <" << amount
	<< "> points de dégâts !"  << std::endl;
	this->_Hits_points -= amount;
	if (this->_Hits_points < 0)
		this->_Hits_points = 0;

}


void		ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "<" << _Name << "> se soigne de <" << amount
	<< "> points de vie !"  << std::endl;
	if ((this->_Hits_points + amount) > 100)
		this->_Hits_points = 100;
	else
		this->_Hits_points += amount;
}

std::ostream &	operator<<( std::ostream &o, ClapTrap const & rhs )
{
	o << 0;
	return (o);
}