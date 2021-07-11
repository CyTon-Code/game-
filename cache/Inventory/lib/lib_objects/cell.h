#ifndef CYTON_CODE_OBJECT_NOT_TANGIBLE_CELL_GAME
#define CYTON_CODE_OBJECT_NOT_TANGIBLE_CELL_GAME


#include "not_tangible.h"

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

#endif // CYTON_CODE_OBJECT_NOT_TANGIBLE_CELL_GAME

