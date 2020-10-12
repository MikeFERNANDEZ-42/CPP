/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 11:00:06 by user42            #+#    #+#             */
/*   Updated: 2020/10/05 18:39:16 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap Jordan("Jordan");
	FragTrap Olivier("Olivier");
		Olivier.takeDamage(Jordan.vaulthunter_dot_exe("Olivier"));
		Olivier.takeDamage(Jordan.vaulthunter_dot_exe("Olivier"));
		Olivier.takeDamage(Jordan.vaulthunter_dot_exe("Olivier"));
		Olivier.takeDamage(Jordan.vaulthunter_dot_exe("Olivier"));
		Olivier.beRepaired(999);
		Olivier.takeDamage(Jordan.vaulthunter_dot_exe("Olivier"));

	return (0);
}