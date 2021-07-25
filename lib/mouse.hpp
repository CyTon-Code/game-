// Autor Dal Bo Yob

#ifndef GAME_OBJECT_NOT__TANGIBLE_CELL_MOUSE
#define GAME_OBJECT_NOT__TANGIBLE_CELL_MOUSE


#include "./cell.hpp"

class Mouse : public Cell {
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

#endif // GAME_OBJECT_NOT__TANGIBLE_CELL_MOUSE

