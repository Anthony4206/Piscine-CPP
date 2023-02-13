#include <iostream>
#include <cstdlib>

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void) {
    std::cout << "SUBJECT TESTS" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;

    std::cout << std::endl << "COPY TEST" << std::endl;

    Animal *a = new Cat();
    Cat     *cast = dynamic_cast<Cat *>(a);
    Animal *b = new Cat(*cast);

    std::cout << a->getType() << std::endl;
    a->makeSound();
    std::cout << b->getType() << std::endl;
    b->makeSound();

    delete a;
    delete b;

    std::cout << std::endl << "ARRAY TESTS" << std::endl;
    int             incr;
    const int       NB_ANIMAL = 4;
    const Animal    *animal[NB_ANIMAL];

    for (incr = 0; incr < NB_ANIMAL; incr++) {
        if (incr < NB_ANIMAL / 2) {
            animal[incr] = new Dog();
        } else {
            animal[incr] = new Cat();
        }
    }

    const Cat   *cat;
    const Dog   *dog;
    std::srand(time(NULL));

    for (incr = 0; incr < NB_ANIMAL; incr++) {
        std::cout << animal[incr]->getType() << std::endl;
        if (animal[incr]->getType() == "Cat") {
            cat = dynamic_cast<const Cat *>(animal[incr]);
            std::cout << cat->getBrain()->getIdeas(std::rand() % 100) << std::endl;;
        }
        if (animal[incr]->getType() == "Dog") {
            dog = dynamic_cast<const Dog *>(animal[incr]);
            std::cout << dog->getBrain()->getIdeas(std::rand() % 100) << std::endl;
        }
        animal[incr]->makeSound();
    }

    for (incr = 0; incr < NB_ANIMAL; incr++) {
        delete animal[incr];
    }

    return (0);
}