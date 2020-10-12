/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 11:00:06 by user42            #+#    #+#             */
/*   Updated: 2020/10/08 15:04:04 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
	FragTrap *Jordan = new FragTrap("Jordan");
	ScavTrap Olivier("Olivier");
	
	Olivier.takeDamage(Jordan->vaulthunter_dot_exe("Olivier"));
	Olivier.takeDamage(Jordan->vaulthunter_dot_exe("Olivier"));
	Olivier.takeDamage(Jordan->vaulthunter_dot_exe("Olivier"));
	Olivier.takeDamage(Jordan->vaulthunter_dot_exe("Olivier"));
	Olivier.takeDamage(Jordan->vaulthunter_dot_exe("Olivier"));
	Olivier.beRepaired(999);
	delete (Jordan);
	Olivier.challengeNewcomer();
	
	
	return (0);
}