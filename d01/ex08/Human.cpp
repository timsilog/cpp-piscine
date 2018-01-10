# include "Human.hpp"

void Human::meleeAttack(std::string const & target) {
    std::cout << "Uses melee attack on " << target << ".\n";
}

void Human::rangedAttack(std::string const & target) {
    std::cout << "Uses ranged attack on " << target << ".\n";
}

void Human::intimidatingShout(std::string const & target) {
    std::cout << "Uses Intimidating Shout on " << target << ".\n";
}
void Human::action(std::string const & action_name, std::string const & target) {
    std::string actions[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
    typedef void (Human::*ActionMembers)(std::string const & target);
    ActionMembers members[3] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};

    for (int i = 0; i < 3; i++)
    {
        if (action_name == actions[i])
        {
            (this->*(members[i]))(target);
            return;
        }
    }
    std::cout << "Invalid action. Try entering \"meleeAttack\", \"rangedAttack\", or \"intimidatingShout\"\n";
}