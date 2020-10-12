/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 11:53:32 by user42            #+#    #+#             */
/*   Updated: 2020/10/01 10:37:09 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#define DOMI "\033[1;36m" << "Domi" << "\033[0;m" << " lvl." << Dominique.getLevel() << " " <<  "\033[1;31m" << Dominique.getHitsPoints() << "\033[0;m" << "/" << "\033[1;33m" << Dominique.getEnergyPoints() << "\033[0;m "
#define BRUBRU "\033[1;36m" << "Brubru" << "\033[0;m" << " lvl." << Bruno.getLevel() << " " <<  "\033[1;31m" << Bruno.getHitsPoints() << "\033[0;m" << "/" << "\033[1;33m" << Bruno.getEnergyPoints() << "\033[0;m "

int main(void)
{
	FragTrap	Bruno("Brubru");
	ScavTrap	Dominique("Domi");
	ClapTrap	Simon("Simon");
	NinjaTrap	Jordan("Jojo");
	NinjaTrap	Olivier("Oliv");


	Jordan.ninjaShoebox(Bruno);
	Jordan.ninjaShoebox(Dominique);
	Jordan.ninjaShoebox(Simon);
	Jordan.ninjaShoebox(Olivier);


	return (0);
}