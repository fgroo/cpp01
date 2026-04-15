/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroo <student@42.eu>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 15:08:21 by fgroo             #+#    #+#             */
/*   Updated: 2026/04/08 17:38:36 by fgroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	//Zombie::announce();
	Zombie	zom1("ben");

	Zombie *zom2 = newZombie("joe");
	randomChump("bob");

	delete zom2;


	Zombie *horde = zombieHorde(5, "gang");
	for (int i = 0; i < 5; i++)
		horde[i].announce();
	delete[] horde;

	return (0);
}
