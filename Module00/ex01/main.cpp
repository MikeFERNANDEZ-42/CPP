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
#include "Contacts.class.hpp"

int		ft_verif_id(std::string id_search, int nb_contacts, int *id_finded)
{
	char*	cpy;
	int		verif_id;

	for (int i = 0; i < id_search.length(); i++)
	{
		if (isdigit(id_search[i]) < 1)
			return (0);
	}
	cpy = const_cast<char*>(id_search.c_str());
	std::cout << cpy;
	verif_id = atoi(cpy);
	if (verif_id >= nb_contacts)
		return 0;
	return (1);
}

void	ft_set_contact(Contacts *instance, int *nb_contacts)
{
	std::string champs[11] = {"First_name", "Last_name", "Nickname", "Login","Postal_address",
	"Email_address", "Phone_number", "Birthday_date", "Favorite meal", "Underwear_color", "Darkest_secret"};
	std::string cpy;	

	for(int i = 0; i < 11; i++)
	{
		std::cout << champs[i] << " : ";
		std::cin >> cpy;
		instance->setInfos(cpy, i);
	}
	(*nb_contacts)++;
	std::cout << "\033[1;36mContact ajouté.\033[0;m" << std::endl;
}

void	ft_contacts_display (Contacts	instance, int nb_contacts) 
{
	char display[11];
	std::string cpy;
	int i;
	int	k;

	for (int j = -1; j < 3; j++)
	{
		k = 0;
		cpy = (j == -1) ? std::to_string(nb_contacts) : instance.getInfos(j);
		for (i = 0; i < 10; i++)
			display[i] = ' ';
		display[i] = '\0';
		i = 9 - cpy.length();
		while (i < 10)
			display[i++] =  cpy[k++];
		if (display[0] != ' ')
			display[9] = '.';
		std::cout << display << " | ";
			
	}
	std::cout << std::endl;
}

int		main(int argc, char **argv)
{
	Contacts	instance[8];
	int			nb_contacts;
	std::string commande;
	std::string	id_search;
	int 		id_finded;

	nb_contacts = 0;
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
			if (nb_contacts < 8)
				ft_set_contact(&instance[nb_contacts], &nb_contacts);
			else
				std::cout << "\033[1;31mListe de contacts pleine.\033[0;m";
		}
		else if (commande.compare("SEARCH") == 0)
		{
			std::cout << "Quel contact voulez-vous rechercher ? : " << std::endl;
			std::cin >> id_search;
			if (!(ft_verif_id(id_search, nb_contacts, &id_finded)))
				std::cout << "\033[1;31m\nCe contact n'existe pas.\033[0;m" << std::endl;
			else
					ft_contacts_display(instance[id_finded], id_finded);
		}
		else
			std::cout << "\033[1;31mCeci n'est pas une commande valide.\033[0;m" << std::endl;
	}
	return (0);
}

	
