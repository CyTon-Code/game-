// Autor Dal Bo Yob

#ifndef GAME_OBJECT_NOT__TANGIBLE
#define GAME_OBJECT_NOT__TANGIBLE


#include "./object.h"

class NotTangible : public Object {
/* Example NotTangibles: Cell Slot ... */

public:

    NotTangible() {
        this->add_my_type("NotTangible");

        cout << "NotTangible created" << endl;
    }

    ~NotTangible() {

        cout << "NotTangible killed" << endl;
    }
};

#endif // GAME_OBJECT_NOT__TANGIBLE

