/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroo <student@42.eu>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 17:22:10 by fgroo             #+#    #+#             */
/*   Updated: 2026/04/08 17:22:15 by fgroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(void) {
}

Zombie::Zombie(std::string name) {
	_name = name;
	announce();
}

void	Zombie::setName(std::string name) {
	_name = name;
}

Zombie::~Zombie( void ) {
	std::cout << _name << " destructor debug" << std::endl;
}



Zombie*	newZombie(std::string name) {
	Zombie	*newZombie = new Zombie(name);
	return (newZombie);
}

void	randomChump(std::string name) {
	Zombie	newZombie(name);
}
