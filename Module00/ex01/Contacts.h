/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 23:40:11 by user42            #+#    #+#             */
/*   Updated: 2020/09/23 17:47:13 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_CLASS_H
# define CONTACTS_CLASS_H

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