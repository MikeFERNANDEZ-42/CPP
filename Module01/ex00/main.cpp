/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 19:09:57 by user42            #+#    #+#             */
/*   Updated: 2020/09/24 11:45:59 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack(void)
{
	Pony Oliver("Oliver", "Black", "Purebred", 1.75, 61.5, "Carrot", "Everybody");
	Oliver.Actions("apple juice", "petit croissant", "el famoso Pascal the rabbit");
}

void	ponyOnTheHeap(void)
{
	Pony *Jordan = new Pony("Jordan", "White", "Welsh", 1.62, 30.6, "Bone", "No one");
	Jordan->Actions("milk", "pancake with chocolate", "Cindy the pinguin");
	delete (Jordan);
}

int	main(int argc, char **argv, char **env)
{
	ponyOnTheStack();
	std::cout << std::endl << "--------------------" << std::endl << std::endl;
	ponyOnTheHeap();
	return (0);
}
