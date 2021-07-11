#ifndef CYTON_CODE_OBJECT_NOT_TANGIBLE_GAME
#define CYTON_CODE_OBJECT_NOT_TANGIBLE_GAME


#include "object.h"

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

#endif // CYTON_CODE_OBJECT_NOT_TANGIBLE_GAME

