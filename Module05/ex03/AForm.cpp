/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 11:29:34 by user42            #+#    #+#             */
/*   Updated: 2020/10/11 18:35:35 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"


AForm::AForm( void ) : _name("Default"), _gradeToBeSigned(1), _gradeToBeExecuted(1)
{
	this->_signed = 0;
}


AForm::AForm( std::string pName, int pGradeToBeSigned, int pGradeToBeExecuted)
: _name(pName) , _gradeToBeSigned(pGradeToBeSigned), _gradeToBeExecuted(pGradeToBeExecuted)
{
	if (pGradeToBeExecuted < 1 || pGradeToBeSigned < 1)
	{
		throw AForm::GradeTooHighException();
		return ;
	}
	else if (pGradeToBeExecuted > 150 || pGradeToBeSigned > 150)
	{
		throw AForm::GradeTooLowException();
		return ;
	}
	this->_signed = 0;
}


AForm::AForm( AForm const & src )
: _name(src._name),
_gradeToBeSigned(src._gradeToBeSigned),
_gradeToBeExecuted(src._gradeToBeExecuted)
{
	AForm::operator=(src);
}


AForm &	AForm::operator=( AForm const & rhs )
{
	if (this != &rhs)
    	this->_signed = rhs._signed;
    return (*this);
}


std::string	AForm::getName( void ) const
{
	return (this->_name);
}


bool		AForm::getSigned( void ) const
{
	return (this->_signed);
}


int			AForm::getGradeToBeSigned( void ) const
{
	return (this->_gradeToBeSigned);
}


int			AForm::getGradeToBeExecuted( void ) const
{
	return (this->_gradeToBeExecuted);
}


void		AForm::beSigned(const Bureaucrat *officier)
{
	if (!officier)
		return;
	if (this->_signed == 1)
		throw AForm::AlreadySignedException();
	else if (officier->getGrade() <= this->getGradeToBeSigned())
		this->_signed = 1;
	else
		throw AForm::GradeTooLowException();
}


AForm::GradeTooHighException::GradeTooHighException( GradeTooHighException const & src )
{
	this->operator=(src);
}



AForm::GradeTooHighException &	AForm::GradeTooHighException::operator=( GradeTooHighException const & rhs )
{
	(void)rhs;
	return (*this);
}


const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Problem exists the grade of the bureaucrat is too high");
}


AForm::GradeTooLowException::GradeTooLowException( GradeTooLowException const & src )
{
	this->operator=(src);
}


AForm::GradeTooLowException &	AForm::GradeTooLowException::operator=( GradeTooLowException const & rhs )
{
	(void)rhs;
	return (*this);
}


const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Problem exists the grade of the bureaucrat is too low");
}


AForm::AlreadySignedException::AlreadySignedException( AlreadySignedException const & src )
{
	this->operator=(src);
}


AForm::AlreadySignedException &	AForm::AlreadySignedException::operator=( AlreadySignedException const & rhs )
{
	(void)rhs;
	return (*this);
}


const char* AForm::AlreadySignedException::what() const throw()
{
	return ("Problem exists the form is already signed!");
}


AForm::NotSignedException::NotSignedException( NotSignedException const & src )
{
	this->operator=(src);
}


AForm::NotSignedException &	AForm::NotSignedException::operator=( NotSignedException const & rhs )
{
	(void)rhs;
	return (*this);
}


const char* AForm::NotSignedException::what() const throw()
{
	return ("Problem exists the form is not signed!");
}


std::ostream &	operator<<( std::ostream &o, AForm const & rhs )
{
	if (rhs.getSigned() == 1)
		o << "AForm <" << rhs.getName() << "> is signed and it needs a grade <"
		<< rhs.getGradeToBeSigned() << "> to be signed and a grade <"
		<< rhs.getGradeToBeExecuted() << "> to be exectued." << std::endl;
	else
		o << "AForm <" << rhs.getName() << "> is unsigned and it needs a grade <"
		<< rhs.getGradeToBeSigned() << "> to be signed and a grade <"
		<< rhs.getGradeToBeExecuted() << "> to be exectued." << std::endl;
	return (o);
}