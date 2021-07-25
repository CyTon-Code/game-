// Autor Dal Bo Yob

#ifndef GAME_OBJECT_ESSENCE_MAN
#define GAME_OBJECT_ESSENCE_MAN

#include "./essence.hpp"

class Man : public Essence {
/* Example Mans: Elf Gnom Druid Man ... */

public:

    Man() {
        this->add_my_type("Man");

        // this->add slots for objects of Essence-Man (head, body, foot)


        cout << "Man created" << endl;
    }

    ~Man() {
        cout << "Man killed" << endl;
    }
};

#endif // GAME_OBJECT_ESSENCE_MAN

