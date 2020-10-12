/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 18:18:44 by user42            #+#    #+#             */
/*   Updated: 2020/10/07 21:15:47 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"


Squad::Squad( void )
{
	this->_count = 0;
	this->_unit = NULL;
}


Squad::Squad( Squad const & src )
{
	Squad::operator=(src);
}


Squad::~Squad( void )
{
	suppr_squad(this->_unit);
}

Squad &	Squad::operator=( Squad const & rhs )
{
	suppr_squad(this->_unit);

	t_squad *cpy = rhs._unit;
	if (cpy != NULL)
	{
		t_squad *newone = new t_squad;

		newone->unit = cpy->unit->clone();
		newone->next = NULL;
		t_squad *first = newone;
		while (cpy->next != NULL){
			newone->unit = cpy->unit->clone();
			t_squad *next = new t_squad;
			newone->next = next;
			cpy = cpy->next;
		}
		newone->unit = cpy->unit->clone();
		newone->next = NULL;

		this->_unit = first;
	}
		this->_count = rhs._count;
	return (*this);
}

int Squad::getCount() const
{
	return (this->_count);
}


ISpaceMarine* Squad::getUnit(int N) const
{
	t_squad *cpy = this->_unit;

	if (this->getCount() <= 0 || this->getCount() < N || N < 0)
		return NULL;
	for (int i = 0; i < N; i++)
	{
		cpy = cpy->next;
	}
	return (cpy->unit);
}


int Squad::push(ISpaceMarine *ptr)
{
	t_squad *cpy = this->_unit;
	t_squad *newone = new t_squad;
	
	if (ptr == NULL)
		return 0;
	newone->unit = ptr;
	newone->next = NULL;

	if (cpy == NULL)
		this->_unit = newone;
	else{
		while (cpy->next != NULL){
			if (cpy->unit == ptr){
				delete newone;
				return (0);
			}
			cpy = cpy->next;
		}
		cpy->next = newone;
	}
	this->_count += 1;
	return (1);
}

void							suppr_squad(t_squad *base)
{
	t_squad *cpy;

	if (base != NULL){
		while (base->next != NULL){
			cpy = base->next;
			delete base->unit;
			delete base;
			base = cpy;
		}
		delete base->unit;
		delete base;
	}
}