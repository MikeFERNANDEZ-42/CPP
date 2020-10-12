/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 12:59:15 by user42            #+#    #+#             */
/*   Updated: 2020/10/11 10:33:14 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{	

	std::cout << "\033[1;33mTest gradeToBeSigned négatif : \033[0;m" << std::endl;
	try
	{
		Bureaucrat officier1("officier1", 100);
		Form form1("form1", -5 , 3);
		std::cout << form1 << std::endl;
		officier1.SignForm(&form1);
		
	}
	catch (std::exception & e)
	{
		std::cerr << std::endl << "\033[1;31mError : " << e.what() << "\033[0;m" << std::endl;
	}

	std::cout << std::endl << "\033[1;33mTest gradeToBeSigned supérieur à 150 : \033[0;m" << std::endl;
	try
	{
		Bureaucrat officier2("officier2", 100);
		Form form2("form2", 200 , 3);
		std::cout << form2 << std::endl;
		
	}
	catch (std::exception & e)
	{
			std::cerr << std::endl << "\033[1;31mError : " << e.what() << "\033[0;m" << std::endl;
	}

	std::cout << std::endl << "\033[1;33mTest gradeToBeExecuted inférieur à 0 : \033[0;m" << std::endl;
	try
	{
		Bureaucrat officier3("officier3", 100);
		Form form3("form3", 5 , -16);
		std::cout << form3 << std::endl;
		
	}
	catch (std::exception & e)
	{
			std::cerr << std::endl << "\033[1;31mError : " << e.what() << "\033[0;m" << std::endl;
	}

	std::cout << std::endl << "\033[1;33mTest gradeToBeExecuted supérieur à 150 : \033[0;m" << std::endl;
	try
	{
		Bureaucrat officier4("officier4", 100);
		Form form4("form4", 5 , 160);
		std::cout << form4 << std::endl;
	}
	catch (std::exception & e)
	{
			std::cerr << std::endl << "\033[1;31mError : " << e.what() << "\033[0;m" << std::endl;
	}

	std::cout << std::endl << "\033[1;33mTest signature formulmaire conforme : \033[0;m" << std::endl;
	try
	{
		Bureaucrat Jacque("Jacque", 100);
		std::cout << Jacque << std::endl;
		Form permis("Permis", 140 , 3);
		std::cout << permis << std::endl;
		permis.beSigned(&Jacque);
		Jacque.SignForm(&permis);
	}
	catch (std::exception & e)
	{
		std::cerr << std::endl << "\033[1;31mError : " << e.what() << "\033[0;m" << std::endl;
	}

	std::cout << std::endl << "\033[1;33mTest signature formulmaire déja signé : \033[0;m" << std::endl;
	try
	{
		Bureaucrat Paul("Paul", 100);
		std::cout << Paul << std::endl;
		Form Formulaire("Formulaire", 140 , 3);
		std::cout << Formulaire << std::endl;
		Formulaire.beSigned(&Paul);
		Paul.SignForm(&Formulaire);
		Formulaire.beSigned(&Paul);
		Paul.SignForm(&Formulaire);
	}
	catch (std::exception & e)
	{
		std::cerr << std::endl << "\033[1;31mError : " << e.what() << "\033[0;m" << std::endl;
	}


	std::cout << std::endl << "\033[1;33mTest signature formulmaire conforme : \033[0;m" << std::endl;
	try
	{
		Bureaucrat Jacque("Jacque", 100);
		std::cout << Jacque << std::endl;
		Form permis("Permis", 140 , 3);
		std::cout << permis << std::endl;
		permis.beSigned(&Jacque);
		Jacque.SignForm(&permis);
	}
	catch (std::exception & e)
	{
		std::cerr << std::endl << "\033[1;31mError : " << e.what() << "\033[0;m" << std::endl;
	}

	return (0);
}
