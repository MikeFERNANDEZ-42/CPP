/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 11:53:53 by user42            #+#    #+#             */
/*   Updated: 2020/09/24 19:35:02 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int	pnbZombies) : _nbZombies(pnbZombies)
{
	std::cout << "The ZombieParty is created !" << std::endl << std::endl;;
	srand(time(NULL));
	CreateParty();
}

ZombieHorde::~ZombieHorde()
{
	std::cout << std::endl ;
	for (int i = 0; i < this->_nbZombies; i++)
		delete (_Zombies[i]);
	std::cout << "The ZombieParty is destroyed !" << std::endl;
}

void	ZombieHorde::setZombieType(Zombie *Zombie)
{
	Zombie->setType(this->_types[rand() % 10]);
}

Zombie	*ZombieHorde::newZombie(std::string name)
{
	Zombie *newZombie = new Zombie(name);
	setZombieType(newZombie);
	return (newZombie);
}

Zombie	*ZombieHorde::randomChump(Zombie *Zombies)
{
	Zombies = newZombie(this->_names[rand() % 10]);
	Zombies->announce();
	return (Zombies);
}

void	ZombieHorde::CreateParty(void)
{
	this->_Zombies = new Zombie*[this->_nbZombies];
	for (int i = 0; i < this->_nbZombies; i++)
	{
		this->_Zombies[i] = randomChump(this->_Zombies[i]);
		
	}
}

void	ZombieHorde::announce()
{
	this->announce();
}