/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroo <student@42.eu>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 15:08:21 by fgroo             #+#    #+#             */
/*   Updated: 2026/04/08 17:22:05 by fgroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	//Zombie::announce();
	Zombie	zom1("ben");

	Zombie *zom2 = newZombie("joe");
	randomChump("bob");

	delete zom2;

	return (0);
}
