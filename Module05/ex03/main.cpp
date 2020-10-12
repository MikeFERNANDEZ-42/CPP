	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 12:59:15 by user42            #+#    #+#             */
/*   Updated: 2020/10/10 21:34:47 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

int main(void)
{	
	std::cout << "\033[1;33mTest Shrubbery  invalide: \033[0;m" << std::endl;
	try
	{
		Bureaucrat Bureaucrate("Bureaucrate", 150);
		std::cout << Bureaucrate << std::endl;
		Bureaucrat Assistant("Assistant", 144);
		
		std::cout << Assistant << std::endl;
		ShrubberyCreationForm ForestForm("ForestForm");
		std::cout << ForestForm << std::endl;
		Assistant.SignForm(&ForestForm);
		Bureaucrate.executeForm(ForestForm);
	}
	catch (std::exception & e)
	{
		std::cerr << std::endl << "\033[1;31mError : " << e.what() << "\033[0;m" << std::endl;
	}


	std::cout << std::endl << "\033[1;33mTest Shrubbery  valide: \033[0;m" << std::endl;
	try
	{
		Bureaucrat Bureaucrate("Bureaucrate", 135);
		std::cout << Bureaucrate << std::endl;
		Bureaucrat Assistant("Assistant", 144);
		
		std::cout << Assistant << std::endl;
		ShrubberyCreationForm ForestForm("ForestForm");
		std::cout << ForestForm << std::endl;
		Assistant.SignForm(&ForestForm);
		Bureaucrate.executeForm(ForestForm);
	}
	catch (std::exception & e)
	{
		std::cerr << std::endl << "\033[1;31mError : " << e.what() << "\033[0;m" << std::endl;
	}


	std::cout << std::endl << "\033[1;33mTest Robotomies invalide: \033[0;m" << std::endl;
	try
	{
		Bureaucrat Medecin("Medecin", 50);
		std::cout << Medecin << std::endl;
		Bureaucrat Assistant("Assistant", 70);
		std::cout << Assistant << std::endl;
		RobotomyRequestForm  RobotomyForms("RobotomyForm1");
		std::cout << RobotomyForms << std::endl;
		Assistant.SignForm(&RobotomyForms);
		Medecin.executeForm(RobotomyForms);
	}
	catch (std::exception & e)
	{
		std::cerr << std::endl << "\033[1;31mError : " << e.what() << "\033[0;m" << std::endl;
	}


	std::cout << std::endl << "\033[1;33mTest Robotomies valide : \033[0;m" << std::endl;
	try
	{
		Bureaucrat Medecin("Medecin", 30);
		std::cout << Medecin << std::endl;
		Bureaucrat Assistant("Assistant", 70);
		std::cout << Assistant << std::endl;
		RobotomyRequestForm  RobotomyForms[5] = {	RobotomyRequestForm("RobotomyForm1"),
													RobotomyRequestForm("RobotomyForm2"),
													RobotomyRequestForm("RobotomyForm3"),
													RobotomyRequestForm("RobotomyForm4"),
													RobotomyRequestForm("RobotomyForm5")};
		for (size_t i = 0; i < 5; i++)
			std::cout << RobotomyForms[i] << std::endl;
		for (size_t i = 0; i < 5; i++)
			Assistant.SignForm(&RobotomyForms[i]);
		for (size_t i = 0; i < 5; i++)
			Medecin.executeForm(RobotomyForms[i]);
	}
	catch (std::exception & e)
	{
		std::cerr << std::endl << "\033[1;31mError : " << e.what() << "\033[0;m" << std::endl;
	}


	std::cout << std::endl << "\033[1;33mTest PresidentPardon invalide: \033[0;m" << std::endl;
	try
	{
		Bureaucrat Ministre("Ministre", 10);
		std::cout << Ministre << std::endl;
		Bureaucrat Assistant("Assistant", 24);
		std::cout << Assistant << std::endl;
		PresidentPardonForm  PresidentForms("PresidentForm1");
		std::cout << PresidentForms << std::endl;
		Assistant.SignForm(&PresidentForms);
		Ministre.executeForm(PresidentForms);
	}
	catch (std::exception & e)
	{
		std::cerr << std::endl << "\033[1;31mError : " << e.what() << "\033[0;m" << std::endl;
	}


	std::cout << std::endl << "\033[1;33mTest PresidentPardon valide: \033[0;m" << std::endl;
	try
	{
		Bureaucrat President("President", 1);
		std::cout << President << std::endl;
		Bureaucrat Assistant("Assistant", 24);
		std::cout << Assistant << std::endl;
		PresidentPardonForm  PresidentForms("PresidentForm1");
		std::cout << PresidentForms << std::endl;
		Assistant.SignForm(&PresidentForms);
		President.executeForm(PresidentForms);
	}
	catch (std::exception & e)
	{
		std::cerr << std::endl << "\033[1;31mError : " << e.what() << "\033[0;m" << std::endl;
	}


	return (0);
}
