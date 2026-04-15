/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroo <student@42.eu>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 17:01:20 by fgroo             #+#    #+#             */
/*   Updated: 2026/04/13 19:15:43 by fgroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type) {
}

const std::string& Weapon::getType( void ) const {
	return (this->_type);
}

void Weapon::setType( std::string type ) {
	this->_type = type;
}
