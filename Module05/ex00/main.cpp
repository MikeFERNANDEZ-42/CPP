/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 12:59:15 by user42            #+#    #+#             */
/*   Updated: 2020/10/10 13:39:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{	
	try
	{
		Bureaucrat Jacque("Jacque", -1);
		std::cout << Jacque << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Error : " << e.what() << std::endl;
	}

	std::cout << std::endl;
	
	try
	{
		Bureaucrat Brigitte("Brigitte", 0);
		std::cout << Brigitte << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Error : " << e.what() << std::endl;
	}

	std::cout << std::endl;
	
	try
	{
		Bureaucrat Benoit("Benoit", 151);
		std::cout << Benoit << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Error : " << e.what() << std::endl;
	}

	std::cout << std::endl;
	
	try
	{
		Bureaucrat Pierre("Pierre", 3);
		std::cout << Pierre;
		Pierre.promute();
		std::cout << Pierre;
		Pierre.promute();
		std::cout << Pierre;
		Pierre.promute();
		std::cout << Pierre;
	}
	catch (std::exception & e)
	{
		std::cerr << "Error : " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat Jean("Jean", 148);
		std::cout << Jean;
		Jean.demote();
		std::cout << Jean;
		Jean.demote();
		std::cout << Jean;
		Jean.demote();
		std::cout << Jean;
	}
	catch (std::exception & e)
	{
		std::cerr << "Error : " << e.what() << std::endl;
	}
	
	return (0);
}

