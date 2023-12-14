/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 23:40:18 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/14 13:08:52 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

#include <string>

class Weapon
{
public:
	Weapon(std::string type);
	~Weapon(void);

	std::string getType(void) const;
	void setType(std::string type);

private:
	std::string type;
};

#endif
