/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroo <student@42.eu>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 17:01:27 by fgroo             #+#    #+#             */
/*   Updated: 2026/04/15 17:05:40 by fgroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
	public:
		HumanB( std::string name );
		void	setWeapon( Weapon &weapon );
		void	attack( void ) const;
	private:
		std::string	_name;
		Weapon		*_weapon;
};

#endif