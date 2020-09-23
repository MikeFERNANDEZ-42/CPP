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
#include "Contacts.class.hpp"

Contacts::Contacts()
: m_fistName( "no value" )
, m_lastName( "no value" )
, m_nickname( "no value" )
, m_login( "no value" )
, m_postalAddr( "no value" )
, m_mail( "no value" )
, m_phone( "no value" )
, m_birthday( "no value" )
, m_meal( "no value" )
, m_underwear( "no value" )
, m_secret( "no value" )
{
}

Contacts::Contacts( std::string pFN, std::string pLN, std::string pNick, std::string pLog, std::string pAddr, std::string pMail, std::string pPhone, std::string pBirth, std::string pMeal, std::string pWear,	std::string pSecret )
: m_fistName( pFN )
, m_lastName( pLN )
, m_nickname( pNick )
, m_login( pLog )
, m_postalAddr( pAddr )
, m_mail( pMail )
, m_phone( pPhone )
, m_birthday( pBirth )
, m_meal( pMeal )
, m_underwear( pWear )
, m_secret( pSecret )
{
}

Contacts::~Contacts() 
{
}
