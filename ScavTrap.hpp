#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <cstdlib>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{

public:

    void challengeNewcomer(void);

    ScavTrap(std::string mName);
    ScavTrap( ScavTrap const & src);
    virtual ~ScavTrap(void);

    ScavTrap & operator=(ScavTrap const & rhs);

private:

};

#endif
