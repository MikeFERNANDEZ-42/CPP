/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 11:53:30 by user42            #+#    #+#             */
/*   Updated: 2020/09/30 17:13:05 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	NinjaTrap : public virtual ClapTrap {

public:

	NinjaTrap( void );
	NinjaTrap( std::string pName);
	NinjaTrap( NinjaTrap const & src );
	~NinjaTrap( void );

	NinjaTrap &	operator=( NinjaTrap const & rhs );

	void		ninjaShoebox(ClapTrap &target);
    void		ninjaShoebox(FragTrap &target);
	void		ninjaShoebox(ScavTrap &target);
	void		ninjaShoebox(NinjaTrap &target);


protected :

};

std::ostream &	operator<<( std::ostream & o, NinjaTrap const & rhs );

#endif