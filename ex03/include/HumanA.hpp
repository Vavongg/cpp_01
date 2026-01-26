/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainthana <ainthana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 12:15:00 by ainthana          #+#    #+#             */
/*   Updated: 2026/01/26 14:57:59 by ainthana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
class	HumanA {
	private:
		std::string	_name;
		Weapon	&_weapon;

	public:
		HumanA(std::string	name, Weapon &weapon);
		~HumanA();
		void	attack();
};

#endif
