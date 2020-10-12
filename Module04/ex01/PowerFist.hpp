/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 11:46:59 by user42            #+#    #+#             */
/*   Updated: 2020/10/07 12:50:02 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include <iostream>
#include "AWeapon.hpp"

class	PowerFist : public AWeapon
{

	public:

		PowerFist( void );
		PowerFist(std::string const & name, int apcost, int damage);
		PowerFist( PowerFist const & src );
		virtual ~PowerFist( void );
		PowerFist &	operator=( PowerFist const & rhs );

		virtual void attack() const;
		
	private :

};


#endif