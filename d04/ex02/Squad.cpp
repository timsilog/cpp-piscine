#include "Squad.hpp"

Squad::Squad() {
    std::cout << "Squad created.\n";
    this->_team = NULL;
    this->_size = 0;
}

Squad::Squad(Squad const & src) {
    std::cout << "Squad created.\n";
    this->_team = new ISpaceMarine *[src._size];
    for (int i = 0; i < src._size; i++)
        this->_team[i] = src._team[i]->clone();
    this->_size = src._size;
}

Squad::~Squad() {
    this->freeTeam();
}

Squad & Squad::operator=(Squad const & rhs) {
    if (this->_team)
        this->freeTeam();
    this->_team = new ISpaceMarine *[rhs._size];
    for (int i = 0; i < rhs._size; i++)
        this->_team[i] = rhs._team[i]->clone();
    this->_size = rhs._size;
    return (*this);
}

void    Squad::freeTeam() {
    if (this->_team) {
        for (int i = 0; i < this->_size; i++) {
            delete this->_team[i];
        }
        delete[] this->_team;
        this->_team = NULL;
    }
}

int     Squad::getCount() const {
    return (this->_size);
}

ISpaceMarine* Squad::getUnit(int i) const {
    return (this->_team[i]);
}

int     Squad::push(ISpaceMarine* m) {
    if (m == NULL)
        return (this->_size);
    // check if m already exists
    if (this->_team) {
        for (int i = 0; i < this->_size; i++) {
            if (this->_team[i] == m) {
                std::cout << "That marine is already part of the squad!\n";
                return (this->_size); 
            }   
        }
    }
    ISpaceMarine** newTeam = new ISpaceMarine*[this->_size + 1];
    if (this->_team) {
        for (int i = 0; i < this->_size; i++)
            newTeam[i] = this->_team[i];
    }

    newTeam[this->_size] = m;
    if (this->_team)
        delete[] this->_team;
    this->_team = newTeam;
    this->_size++;
    return (this->_size);
}