/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 11:53:48 by user42            #+#    #+#             */
/*   Updated: 2020/09/24 19:30:06 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

#include "Zombie.hpp"

class	ZombieHorde {

public:

	ZombieHorde(int pnbZombies);
	~ZombieHorde();

	void	announce();
	void	setZombieType(Zombie *Zombie);
	Zombie	*newZombie(std::string name);
	Zombie	*randomChump(Zombie *Zombies);
	void	CreateParty(void);

private :

		int	_nbZombies;
		int _id;
		Zombie **_Zombies;

		std::string _types[10] = {"Nostalgique", "Négligé",
		"Sans yeux", "Moustachu", "Publicitaire", "Pacifiste",
		"Colossale", "Magicien", "Nageur", "Flibustier"};

		std::string _names[10] = {"Gustave", "Steve", "Cunégond",
		"Charles-Antoine", "Elisabeth", "Brittany", "Pascal",
		"Dimitri", "Chantal", "Dominique"};
};

#endif