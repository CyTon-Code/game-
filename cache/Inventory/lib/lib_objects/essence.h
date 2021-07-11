#ifndef CYTON_CODE_OBJECT_ESSENCE_GAME
#define CYTON_CODE_OBJECT_ESSENCE_GAME


#include "object.h"

class Essence : public Object {
/* Example Essences: Skeleton Zombie Druid ... */

public:

    Essence() {
        this->add_my_type("Essence");

        cout << "Essence created" << endl;
    }

    ~Essence() {

        cout << "Essence killed" << endl;
    }
};

#endif // CYTON_CODE_OBJECT_ESSENCE_GAME

