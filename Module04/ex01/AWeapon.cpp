/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 11:29:09 by user42            #+#    #+#             */
/*   Updated: 2020/10/07 16:53:48 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon( void )
{
	this->_Name = "Default";
	this->_Apcost = 0;
	this->_Damage = 0;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	this->_Name = name;
	this->_Apcost = apcost;
	this->_Damage = damage;
}

AWeapon::AWeapon( AWeapon const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

AWeapon::~AWeapon( void )
{
	this->_Damage = -1;
}


AWeapon &	AWeapon::operator=( AWeapon const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != & rhs)
	{
		this->_Name = rhs._Name;
		this->_Apcost = rhs._Apcost;
		this->_Damage = rhs._Damage;
	}
	return ( *this );
}


std::string const &AWeapon::getName() const
{
	return (this->_Name);
}


int AWeapon::getAPCost() const
{
	return (this->_Apcost);
}


int AWeapon::getDamage() const
{
	return (this->_Damage);
}


void AWeapon::attack() const
{
}

