/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 23:40:11 by user42            #+#    #+#             */
/*   Updated: 2020/09/22 18:18:15 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTLIST_HPP
# define CONTACTLIST_HPP

#include "Contacts.class.hpp"

class ContactList 
{
public:
	ContactList();
	~ContactList();
	
	bool AddNewContact();
	void printContantList();
	
private:
	Contacts*	m_ListContact[8];
	int			m_NbContact;
};

#endif

