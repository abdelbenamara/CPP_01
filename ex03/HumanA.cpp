/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 23:52:42 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/06 00:18:59 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
	return;
}

HumanA::~HumanA()
{
	return;
}

void HumanA::attack() const
{
	std::cout << this->name << " attacks with their ";
	std::cout << this->weapon.getType() << std::endl;

	return;
}
