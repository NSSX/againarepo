#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include <iostream>
#include <cstdlib>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class SuperTrap : virtual public  ClapTrap, virtual public FragTrap, virtual public NinjaTrap{

public:
    
    SuperTrap(std::string mName);
    SuperTrap( SuperTrap const & src);
    virtual ~SuperTrap(void);

    SuperTrap & operator=(SuperTrap const & rhs);

private:

};

#endif
