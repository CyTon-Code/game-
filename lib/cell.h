// Autor Dal Bo Yob

#ifndef GAME_OBJECT_NOT__TANGIBLE_CELL
#define GAME_OBJECT_NOT__TANGIBLE_CELL

#include "./not__tangible.h"

class Cell : public NotTangible {
/* Example Cells: Cell ... */

public:

    Cell() {
        this->add_my_type("Cell");
        this->add_type_friend("all");

        cout << "Cell created" << endl;
    }

    ~Cell() {

        cout << "Cell killed" << endl;
    }
};

#endif // GAME_OBJECT_NOT__TANGIBLE_CELL

