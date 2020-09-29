/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 11:53:27 by user42            #+#    #+#             */
/*   Updated: 2020/09/29 17:24:54 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string pName) : _Value(0), _Hits_points(100)
, _MaxHitPoints(100), _EnergyPoints(50), _MaxEnergyPoints(50),
_Level(1),_Name(pName) , _MeleeAttackDamage(20), _RangedAttackDamage(15),
_ArmorDamageReduction(3)
{
	std::cout << "El famoso <" << _Name << "> llego para luchar !" << std::endl;
	srand(time(NULL));
}


ScavTrap::ScavTrap( ScavTrap const & src )
{
	*this = src;
}


ScavTrap::~ScavTrap( void )
{
	if (this->_Name == "Domi")
		std::cout << "El famoso <" << _Name << "> est tombé au combat."  << std::endl;
	else
		std::cout << "<" << _Name << "> décide de partir pour de nouvelles aventures!"  << std::endl;
	
}


int			ScavTrap::getValue( void ) const
{
	return ( this->_Value );
}


int			ScavTrap::getHitsPoints( void ) const
{
	return ( this->_Hits_points );
}


int			ScavTrap::getEnergyPoints(void ) const
{
	return ( this->_EnergyPoints );
}


int 		ScavTrap::getLevel( void ) const
{
	return ( this->_Level );
}


void		ScavTrap::setValue( int const raw )
{
	this->_Value = raw;
}


ScavTrap &	ScavTrap::operator=( ScavTrap const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	this->_Value = rhs.getValue();
	return ( *this );
}


void		ScavTrap::rangedAttack(std::string const & target)
{
	std::string weapon[5] = {"un couteau à saucisson éguisé comme il se doit",
	" un T-max en Y", "un allemand avec sa meilleure paire de claquette chausettes",
	"le mec du PMU d'en face", "un vrai mâle Alpha"};
	int attack = vaulthunter_dot_exe(target);

	if ( attack != 0 )
	{
		std::cout << "<" << _Name << "> attaque <" << target
		<< "> à distance avec " << weapon[rand() % 5] << ", causant <"
		<< _RangedAttackDamage << "> points de dégâts !" << std::endl;
	}
}


void		ScavTrap::meleeAttack(std::string const & target)
{
	std::string weapon[5] = {"un couteau à saucisson éguisé comme il se doit",
	" un T-max en Y", "un allemand avec sa meilleure paire de claquette chausettes",
	"le mec du PMU d'en face", "un vrai mâle Alpha"};
	int attack = vaulthunter_dot_exe(target);

	if ( attack != 0)
	{
		std::cout << "<" << _Name << "> attaque <" << target
		<< "> au corps à corps avec " << weapon[rand() % 5] << ", causant <"
		<< _MeleeAttackDamage << "> points de dégâts !" << std::endl;
	}
}


void		ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "<" << _Name << "> subit <" << amount
	<< "> points de dégâts !"  << std::endl;
	this->_Hits_points -= amount;
	if (this->_Hits_points < 0)
		this->_Hits_points = 0;

}


void		ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "<" << _Name << "> se soigne de <" << amount
	<< "> points de vie !"  << std::endl;
	if ((this->_Hits_points + amount) > 100)
		this->_Hits_points = 100;
	else
		this->_Hits_points += amount;
}


int		ScavTrap::vaulthunter_dot_exe(std::string	const & target)
{
	
	if (this->_EnergyPoints >= 25)
	{
		this->_EnergyPoints -= 25;
		return (1);
	}
	else
		std::cout <<"<" << _Name << "> n'a plus assez d'énergie pour attaquer !" << std::endl;
	return (0);
}


std::ostream &	operator<<( std::ostream &o, ScavTrap const & rhs )
{
	o << rhs.getValue();
	return (o);
}