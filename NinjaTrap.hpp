#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include <iostream>
#include <cstdlib>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap{

public:

    void ninjaShoebox(FragTrap const & src);
    void ninjaShoebox(ScavTrap const & src);
    void ninjaShoebox(NinjaTrap const & src);

    NinjaTrap(std::string mName);
    NinjaTrap( NinjaTrap const & src);
    virtual ~NinjaTrap(void);

    NinjaTrap & operator=(NinjaTrap const & rhs);

private:

};

#endif
