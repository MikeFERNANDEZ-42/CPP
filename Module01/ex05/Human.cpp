/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 18:42:34 by user42            #+#    #+#             */
/*   Updated: 2020/09/24 21:11:42 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
	_brain = Brain();
}

Human::~Human()
{
}

void	*Human::identify()
{
	return (this->_brain.identify());
}

Brain	Human::getBrain()
{
	return(this->_brain);
}