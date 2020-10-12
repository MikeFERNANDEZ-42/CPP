/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentPardonForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 10:51:56 by user42            #+#    #+#             */
/*   Updated: 2020/10/11 17:15:22 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PresidentPardonForm_HPP
# define PresidentPardonForm_HPP

#include "AForm.hpp"

class	PresidentPardonForm : public AForm
{

	public:

		PresidentPardonForm( void );
		PresidentPardonForm( std::string pName);
		PresidentPardonForm( PresidentPardonForm const & src );
		virtual ~PresidentPardonForm( void ) {}
		PresidentPardonForm &	operator=( PresidentPardonForm const & rhs );

		virtual void	execute(Bureaucrat const & executor) const;

};

std::ostream &	operator<<( std::ostream & o, PresidentPardonForm const & rhs );

#endif