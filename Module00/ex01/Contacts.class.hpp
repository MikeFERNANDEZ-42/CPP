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

#ifndef CONTACTS_CLASS_HPP
#define CONTACTS_CLASS_HPP

#include <iostream>

class Contacts 
{

public:
	Contacts();
	Contacts( 	std::string pFN, std::string pLN,
				std::string pNick, std::string pLog, 
				std::string pAddr, std::string pMail,
				std::string pPhone, std::string pBirth,
				std::string pMeal, std::string pWear,
				std::string pSecret );
	~Contacts() ;

private:
	std::string m_fistName;
	std::string m_lastName;
	std::string m_nickname;
	std::string m_login;
	std::string m_postalAddr;
	std::string m_mail;
	std::string m_phone;
	std::string m_birthday;
	std::string m_meal;
	std::string m_underwear;
	std::string m_secret;
};

#endif
