/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 13:58:31 by user42            #+#    #+#             */
/*   Updated: 2020/10/07 15:45:48 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy
{

	public:
		
		Enemy();
		Enemy(int hp, std::string const & type);
		Enemy( Enemy const & src );
		virtual ~Enemy();
		Enemy &	operator=( Enemy const & rhs );

		std::string const &getType() const;
		int getHP() const;
		virtual void takeDamage(int);

	private:
		
		int _hp;
		std::string _type;
};

std::ostream &	operator<<( std::ostream & o, Enemy const & rhs );

#endif