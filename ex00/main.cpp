/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:45:51 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/05 21:03:14 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombie;

	zombie = newZombie("Foo Heap");
	zombie->announce();
	delete zombie;

	randomChump("Bar Stack");

	return 0;
}
