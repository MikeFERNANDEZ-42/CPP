/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 19:01:40 by user42            #+#    #+#             */
/*   Updated: 2020/09/24 12:00:51 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string pName,std::string pCol, std::string pRace, float pSize,
float pWeight, std::string pFav, std::string pBest)
: _Name(pName)
, _Color(pCol)
, _Race(pRace)
, _Size(pSize)
, _Weight(pWeight)
, _FavoriteToy(pFav)
, _BestFriend(pBest)
{
	std::cout << this->_Name << " created !" << std::endl << std::endl;
}

void	Pony::Actions(std::string pDrink, std::string pFood, std::string pEnemy) const
{
	std::cout << this->_Name << " is galloping in the valley." << std::endl;
	std::cout << this->_Name << " is drinking some " << pDrink << " by the river." << std::endl;
	std::cout << this->_Name << " is eating a \"" << pFood << "\" on top of a rainbow." << std::endl;
	std::cout << this->_Name << " is fighting his worst enemy \"" << pEnemy << "\"." << std::endl;
	std::cout << this->_Name << " is sleeping under his favorite tree." << std::endl << std::endl;
}

Pony::~Pony()
{
	std::cout << this->_Name << " destroyed !" << std::endl;
}