// Autor Dal Bo Yob

#ifndef GAME_OBJECT_ESSENCE
#define GAME_OBJECT_ESSENCE

#include "./object.h"

class Essence : public Object, public Tangible{
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

#endif // GAME_OBJECT_ESSENCE

