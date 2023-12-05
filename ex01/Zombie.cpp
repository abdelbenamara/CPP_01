/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:48:38 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/05 21:05:13 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name("")
{
	return;
}

Zombie::~Zombie()
{
	std::cout << "Zombie \"" << this->name;
	std::cout << "\" has been destroyed !" << std::endl;

	return;
}

void Zombie::setName(std::string name)
{
	this->name = name;

	return;
}

void Zombie::announce() const
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;

	return;
}
