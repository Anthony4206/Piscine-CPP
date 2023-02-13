/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:16:56 by alevasse          #+#    #+#             */
/*   Updated: 2023/02/13 14:50:06 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int	main(void) {
	IMateriaSource	*src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter	*me = new Character("me");

	AMateria	*tmp;
	tmp = src->createMateria("ice");
	std::cout << "materia:" << tmp << std::endl;
	me->equip(tmp);
	tmp = src->createMateria("cure");
	std::cout << "materia:" << tmp << std::endl;
	me->equip(tmp);
	tmp = src->createMateria("cure");
	std::cout << "materia:" << tmp << std::endl;
	me->equip(tmp);
	tmp = src->createMateria("cure");
	std::cout << "materia:" << tmp << std::endl;
	me->equip(tmp);
	tmp = src->createMateria("ice");
	std::cout << "materia:" << tmp << std::endl;
	me->equip(tmp);
	ICharacter	*bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);

	std::cout << "TESTS AFTER UNEQUIP" << std::endl;
	me->unequip(2);
	me->unequip(3);
	me->unequip(0);
	me->unequip(1);

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);

	std::cout << "UNEQUIP FINISHED" << std::endl;

	delete bob;
	delete me;
	delete src;

	return (0);
}
