/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 15:16:06 by user42            #+#    #+#             */
/*   Updated: 2020/09/21 15:21:46 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	if (argc >= 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		for(int i=1; argv[i]; i++)
			for(int j=0; argv[i][j]; j++)
				std::cout<< (char)toupper(argv[i][j]);
		std::cout<<std::endl;
	}
	return (0);
}
