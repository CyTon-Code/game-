// Autor Dal Bo Yob

#ifndef GAME_OBJECT_NOT__TANGIBLE_SLOT_MOUSE
#define GAME_OBJECT_NOT__TANGIBLE_SLOT_MOUSE


#include "./slot.h"

class Mouse : public Slot {
/* Example Slots: Mouse ... */

public:

    Mouse() {
        this->add_my_type("Mouse");

        cout << "Mouse created" << endl;
    }

    ~Mouse() {
        cout << "Mouse killed" << endl;
    }
};

#endif // GAME_OBJECT_NOT__TANGIBLE_SLOT_MOUSE

