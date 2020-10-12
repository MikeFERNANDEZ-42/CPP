/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 11:53:27 by user42            #+#    #+#             */
/*   Updated: 2020/10/01 13:12:40 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string pName)
{
	this->_Hits_points = 100;
	this->_MaxHitPoints = 100;
	this->_EnergyPoints = 50;
	this->_MaxEnergyPoints = 50;
	this->_Level = 1;
	this->_Name = pName; 
	this->_MeleeAttackDamage = 20;
	this->_RangedAttackDamage = 15;
	this->_ArmorDamageReduction = 3;
	std::cout << std::endl  << "La gentil SC4V-TP <" << _Name << "> arrive tout gentiement." << std::endl;
	srand(time(NULL));
}


ScavTrap::ScavTrap( ScavTrap const & src )
{
	*this = src;
}


ScavTrap::~ScavTrap( void )
{
	std::cout << "SC4V-TP <" << _Name << "> s'enfuit en courant, les larmes aux yeux..."  << std::endl << std::endl;	
}


ScavTrap &		ScavTrap::operator=( ScavTrap const & rhs )
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


void			ScavTrap::challengeNewcomer(void)
{
	bool			valid = 0;
	int				choice;
	std::string		challenges[5] = {"Riverwood", "le Bourg Palette", "la casa de mi tio Paco", "les terres de feu", "un bain chaud bien mérité"};

	std::cout << SANDY << " - Hola companero!" << std::endl;
	std::cout << SANDY << " - Maintenant que vous avez vaincu le terrible Domi, où vous amenera votre prochaine aventure senor Brubru? " << std::endl << std::endl;
	std::cout << SANDY << " - Vous pourriez vous diriger vers Riverwood afin de devenir un guerrier accompli : \033[1;31m0\033[0;m" << std::endl;
	std::cout << SANDY << " - Ou bien au Bourg Palette afind de devenir le meilleur dresseur : \033[1;31m1\033[0;m" << std::endl;
	std::cout << SANDY << " - Et pourquoi pas à la maison de mon oncle Paco? Il fait d'excellents mojitosa : \033[1;31m2\033[0;m" << std::endl;
	std::cout << SANDY << " - Où vous avez encore soif de sang et souhaitez affronter le terrible seigneur ragnaros aux terres de feu : \033[1;31m3\033[0;m" << std::endl;
	std::cout << SANDY << " - Sinon vous pouvez tout aussi rentrez chez vous pour prendre un bon bain bien mérité : \033[1;31m4\033[0;m" << std::endl;
	std::cout << SANDY << " - Dites moi quel est votre choix : ";
	while (valid != 1)
	{
		std::cin >> choice;
		if (choice >= 0 && choice < 5)
			valid = 1;
		else 
			std::cout << SANDY << " - Hombre, cette destination n'existe pas, veuillez en choisir une autre" << std::endl;
	}
	std::cout << std::endl << SANDY << " - Très bon choix ! Dans ce cas là, en route pour < " << challenges[choice] << "> !" << std::endl << std::endl;
}

std::ostream &	operator<<( std::ostream &o, ScavTrap const & rhs )
{
	o << 0;
	return (o);
}