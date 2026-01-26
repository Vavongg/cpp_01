/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainthana <ainthana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 12:15:08 by ainthana          #+#    #+#             */
/*   Updated: 2026/01/26 18:12:41 by ainthana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &weapon): name(str), weapon(weapon) {

}

HumanA::~HumanA() {

}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << weapon.getType() << std::endl;
}