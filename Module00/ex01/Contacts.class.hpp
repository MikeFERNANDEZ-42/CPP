/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 23:40:11 by user42            #+#    #+#             */
/*   Updated: 2020/09/22 18:18:15 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_CLASS_HPP
# define CONTACTS_CLASS_HPP

# include <iostream>

class	Contacts {

public:

	Contacts(void);
	~Contacts(void) ;

	std::string		getInfos(int i) const;
	void			setInfos(std::string infos, int i);

private:

	std::string _infos[11];

};

#endif