#include "SuperTrap.hpp"
#include "NinjaTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main(void){

    srand(time(NULL));

    SuperTrap supertrap("mySUPERTRAP");
    std::cout << supertrap.hit_points << std::endl;
//    supertrap.vaulthunter_dot_exe("ll");
    NinjaTrap ninja("okokok");
    NinjaTrap ninja2("okokok22");
    ninja.ninjaShoebox(ninja2);
    supertrap.ninjaShoebox(ninja2);
    FragTrap ff("ff");
    ff.vaulthunter_dot_exe("xdde");
    ff.vaulthunter_dot_exe("xdde");
    ff.vaulthunter_dot_exe("xdde");
    ff.vaulthunter_dot_exe("xdde");
    supertrap.vaulthunter_dot_exe("xdde");
    return (0);
}
