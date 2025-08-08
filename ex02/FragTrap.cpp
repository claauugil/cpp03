/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgil <cgil@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 17:15:40 by claudia           #+#    #+#             */
/*   Updated: 2025/08/08 19:31:24 by cgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("Unnamed ScavTrap")
{
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
    std::cout << "ScavTrap from ClapTrap " << this->getName() << " created with default constructor" << std::endl;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name)
{
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
    std::cout << "ScavTrap from ClapTrap " << this->getName() << " was created." << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "ScavTrap from ClapTrap " << this->getName() << " was destroyed" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &copy)
{
    std::cout << "Assignment operator for ScavTrap called." << std::endl;
    ClapTrap::operator=(copy);
    return (*this);
}

void highFivesGuys(void)
{
    
}