/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 10:51:56 by user42            #+#    #+#             */
/*   Updated: 2020/10/11 11:11:03 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class	ShrubberyCreationForm : public AForm
{

	public:

		ShrubberyCreationForm( void );
		ShrubberyCreationForm( std::string pName);
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		virtual ~ShrubberyCreationForm( void ) {}
		ShrubberyCreationForm &	operator=( ShrubberyCreationForm const & rhs );

		virtual void	execute(Bureaucrat const & executor) const;
	
};

std::ostream &	operator<<( std::ostream & o, ShrubberyCreationForm const & rhs );

#endif