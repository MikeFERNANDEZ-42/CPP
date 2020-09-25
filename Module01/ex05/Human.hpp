/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 18:42:37 by user42            #+#    #+#             */
/*   Updated: 2020/09/24 21:12:22 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

#include "Brain.hpp"

class	Human {

public:

	Human();
	~Human();

	void	*identify();
	Brain getBrain();

private :

	Brain _brain;	
};

#endif