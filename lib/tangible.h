// Autor Dal Bo Yob

#ifndef GAME_OBJECT_TANGIBLE
#define GAME_OBJECT_TANGIBLE

#include "./object.h"

class Tangible : public Object {
/* Example Tangibles: Cell Slot ... */

public:

    Tangible() {
        this->add_my_type("Tangible");

        cout << "Tangible created" << endl;
    }

    ~Tangible() {

        cout << "Tangible killed" << endl;
    }
};

#endif // GAME_OBJECT_TANGIBLE

