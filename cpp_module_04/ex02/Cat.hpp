#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
    private:
        Brain* brain;
    public:
        Cat();
        virtual ~Cat();
        void makeSound()const;
        Cat (const Cat& copy);
        Cat& operator=(const Cat& copy);
        Brain *getBrain()const;

};
#endif