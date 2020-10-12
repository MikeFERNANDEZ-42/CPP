/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 14:00:05 by user42            #+#    #+#             */
/*   Updated: 2020/10/07 16:54:12 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"


Enemy::Enemy( void )
{
	this->_hp = 0;
	this->_type = "Elegant";
}


Enemy::Enemy(int hp, std::string const & type)
{
	this->_hp = hp;
	this->_type = type;
}


Enemy::Enemy( Enemy const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}


Enemy::~Enemy( void )
{
	this->_hp = -1;
}


Enemy &	Enemy::operator=( Enemy const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != & rhs)
	{
		this->_hp = rhs._hp;
		this->_type = rhs._type;
	}
	return ( *this );
}


std::string const & Enemy::getType() const
{
	return (this->_type);
}


int Enemy::getHP() const
{
	return (this->_hp);
}


void Enemy::takeDamage(int damages)
{
	if (damages < 0)
		return;
	this->_hp = (this->_hp - damages >= 0) ? this->_hp - damages : 0;
}


std::ostream &	operator<<( std::ostream &o, Enemy const & rhs )
{
	o << 0;
	return (o);
}