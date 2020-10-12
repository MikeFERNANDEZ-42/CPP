/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 11:53:32 by user42            #+#    #+#             */
/*   Updated: 2020/09/30 18:49:32 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#define DOMI "\033[1;36m" << "FR4G-TP Domi" << "\033[0;m" << " lvl." << Dominique.getLevel() << " " <<  "\033[1;31m" << Dominique.getHitsPoints() << "\033[0;m" << "/" << "\033[1;33m" << Dominique.getEnergyPoints() << "\033[0;m" << " "
#define BRUBRU "\033[1;36m" << "FR4G-TP Brubru" << "\033[0;m" << " lvl." << Bruno.getLevel() << " " <<  "\033[1;31m" << Bruno.getHitsPoints() << "\033[0;m" << "/" << "\033[1;33m" << Bruno.getEnergyPoints() << "\033[0;m" << " "
int main(void)
{
	FragTrap Dominique("Domi");
	std::cout << DOMI << "- Ya-t-il quelqu'un para luchar?" << std::endl;
	FragTrap Bruno("Brubru");
	std::cout << BRUBRU << "- Andalé ! Que fais tu ici Domi? Quieres luchar toi aussi?" << std::endl;
	std::cout << DOMI << "- Je t'attend cabron!" << std::endl;
	Bruno.rangedAttack("Domi");
	Dominique.takeDamage(40 * 0.95);
	std::cout << DOMI << "- Aie! Tu l'aura voulu maldito Brubru!" << std::endl;
	std::cout << BRUBRU << "- Je t'attend Domi!" << std::endl;
	Dominique.meleeAttack("Brubru");
	Bruno.takeDamage(20 * 0.95);
	Dominique.meleeAttack("Brubru");
	Bruno.takeDamage(20 * 0.95);
	Dominique.meleeAttack("Brubru");
	Bruno.takeDamage(20 * 0.95);
	Dominique.meleeAttack("Brubru");
	Bruno.takeDamage(20 * 0.95);
	Dominique.meleeAttack("Brubru");
	std::cout << BRUBRU << "- Ouch ! Je vais devoir boire una cerveza para récupérer ma vie!" << std::endl;
	Bruno.beRepaired(9999);
	std::cout << BRUBRU << "- Nous pouvons reprendre!" << std::endl;
	std::cout << DOMI << "- Non, attends, je n'ai plus de energia!" << std::endl;
	Bruno.meleeAttack("Brubru");
	Dominique.takeDamage(20 * 0.95);
	Bruno.meleeAttack("Brubru");
	Dominique.takeDamage(20 * 0.95);
	Bruno.meleeAttack("Brubru");
	Dominique.takeDamage(20 * 0.95);
	Bruno.meleeAttack("Brubru");
	Dominique.takeDamage(20 * 0.95);
	std::cout << DOMI << "- Tu m'a bien eu Brubru...!" << std::endl;
	std::cout << BRUBRU << "-Adios, mi amigo.." << std::endl;
	return (0);
}