#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <cstdlib>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{

public:

    void vaulthunter_dot_exe(std::string const & target);

    FragTrap(std::string mName);
    FragTrap( FragTrap const & src);
    virtual ~FragTrap(void);

    FragTrap & operator=(FragTrap const & rhs);

private:

};

#endif
