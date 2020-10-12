/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentPardonForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 11:29:34 by user42            #+#    #+#             */
/*   Updated: 2020/10/11 18:14:44 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentPardonForm.hpp"


PresidentPardonForm::PresidentPardonForm( void )
: AForm("Default", 25, 5)
{
}


PresidentPardonForm::PresidentPardonForm( std::string pName)
: AForm((pName) , 25, 5)
{
}


PresidentPardonForm::PresidentPardonForm( PresidentPardonForm const & src )
{
	*this = src;
}


PresidentPardonForm &	PresidentPardonForm::operator=( PresidentPardonForm const & rhs )
{
	if (this != &rhs)
    	AForm::operator=(rhs);
    return (*this);
}


void	PresidentPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() != 1)
	{
		throw PresidentPardonForm::NotSignedException();
		return;
	}
	if (executor.getGrade() > 5)
	{
		throw PresidentPardonForm::GradeTooLowException();
		return;
	}
	std::cout << "<" << executor.getName() << "> a été pardonné par Zafod Beeblebrox." << std::endl;
}


std::ostream &	operator<<( std::ostream &o, PresidentPardonForm const & rhs )
{
	if (rhs.getSigned() == 1)
		o << "PresidentPardonForm <" << rhs.getName() << "> is signed and it needs a grade <"
		<< rhs.getGradeToBeSigned() << "> to be signed and a grade <"
		<< rhs.getGradeToBeExecuted() << "> to be exectued." << std::endl;
	else
		o << "PresidentPardonForm <" << rhs.getName() << "> is unsigned and it needs a grade <"
		<< rhs.getGradeToBeSigned() << "> to be signed and a grade <"
		<< rhs.getGradeToBeExecuted() << "> to be exectued." << std::endl;
	return (o);
}