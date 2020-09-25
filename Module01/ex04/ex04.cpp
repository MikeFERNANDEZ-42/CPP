/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 18:36:39 by user42            #+#    #+#             */
/*   Updated: 2020/09/24 18:40:31 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	std::string str = "HI THIS IS BRAIN";
	
	std::string *pstr = &str;
	std::string &rstr = str;
	
	std::cout << "str  : " << str << std::endl;
	std::cout << "pstr : " << *pstr << std::endl;
	std::cout << "rstr : " << rstr << std::endl;
	return (0);
}