/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 13:30:18 by user42            #+#    #+#             */
/*   Updated: 2020/09/22 23:20:01 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ContactList.hpp"

ContactList::ContactList()
: m_NbContact( 0 )
{
	for( int i = 0; i < 8; i++)
		m_ListContact[i] = 0;
}

ContactList::~ContactList()
{
	for( int i = 0; i < 8; i++)
	{
		if( m_ListContact[i] )
			delete m_ListContact[i];
	}
}

bool ContactList::AddNewContact()
{
	if (m_NbContact > 8)
		return false;
		
	std::string champs[11] = {"First_name", "Last_name", "Nickname", "Login","Postal_address",
	"Email_address", "Phone_number", "Birthday_date", "Favorite meal", "Underwear_color", "Darkest_secret"};
	std::string cpy;
	std::string values[11];	

	for(int i = 0; i < 11; i++)
	{
		std::cout << champs[i] << " : ";
		std::cin >> values[i];
	}
	m_ListContact[m_NbContact] = new Contacts( values[0], values[1],
											values[2], values[3],
											values[4], values[5],
											values[6], values[7],
											values[8], values[9],
											values[10] );
	m_NbContact++;										
	return true;
}

void ContactList::printContantList()
{
	std::string lToPrint;
	for( int i = 0; i < m_NbContact; i++ )
	{
		char lIndex[11]  = { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\0'};
		lIndex[9] = (i + 0x30);
			for( int i = 0; i < 8; i++)
			{
				//if( m_ListContact[i] )
					//std::cout << lIndex << '|' << m_ListContact[i]->printLight() << std::endl;
			}
	}
}

