// Autor Dal Bo Yob

#ifndef GAME_OBJECT_TANGIBLE_ESSENCE
#define GAME_OBJECT_TANGIBLE_ESSENCE

#include "./tangible.hpp"

class Essence : public Tangible  {
/* Example Essences: Skeleton Zombie Normal ... */

public:

    Essence() {
        this->add_my_type("Essence");

        cout << "Essence created" << endl;
    }

    ~Essence() {

        cout << "Essence killed" << endl;
    }
};

#endif // GAME_OBJECT_TANGIBLE_ESSENCE

