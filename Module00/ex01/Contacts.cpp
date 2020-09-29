/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 13:30:18 by user42            #+#    #+#             */
/*   Updated: 2020/09/29 13:04:20 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.h"

Contacts::Contacts( void ) {

	//std::cout << "Constructor called" << std::endl;
	return ;
}

Contacts::~Contacts( void ) {

	//std::cout << "Destructor called" << std::endl;
	return ;
}

std::string	Contacts::getInfos(int i) const {

	return (this->_infos[i]);
};

void	Contacts::setInfos(std::string infos, int i){

	this->_infos[i] = infos;
	return ;
};