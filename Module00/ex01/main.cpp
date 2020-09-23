/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 15:29:19 by user42            #+#    #+#             */
/*   Updated: 2020/09/23 11:16:20 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>
#include "ContactList.hpp"
	
int		main(int argc, char **argv)
{
	ContactList m_ContactList;
	std::string commande;

	std::cout << "\033[1;32mBienvenu sur votre annuaire virtuel !\033[0;m" << std::endl;
	std::cout << "Commandes autorisés : \033[1;36mADD - SEARCH - EXIT" << std::endl;
	while (1)
	{
		std::cout << "\033[1;33mVeuillez indiquer une commande : \033[0;m";
		std::cin >> commande;
		if (commande.compare("EXIT") == 0)
			return (0);
		else if (commande.compare("ADD") == 0)
		{
			if ( m_ContactList.AddNewContact() )
				std::cout << "\033[1;36mContact ajouté.\033[0;m" << std::endl;
			else
				std::cout << "\033[1;31mListe de contacts pleine.\033[0;m";
		}
		else if (commande.compare("SEARCH") == 0)
		{
			m_ContactList.printContantList();
			std::cout << std::endl << "Choisir l'index du contact à afficher : " << std::endl;
/*			std::cout << "Quel contact voulez-vous rechercher ? : " << std::endl;
			std::cin >> id_search;
			if (!(ft_verif_id(id_search, nb_contacts, &id_finded)))
				std::cout << "\033[1;31m\nCe contact n'existe pas.\033[0;m" << std::endl;
			else
					ft_contacts_display(instance[id_finded], id_finded);
*/ 
		}
		else
			std::cout << "\033[1;31mCeci n'est pas une commande valide.\033[0;m" << std::endl;
	}
	return (0);
}

	
