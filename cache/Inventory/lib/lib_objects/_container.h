#ifndef CYTON_CODE_OBJECT_ESSENCE_CELL_GAME
#define CYTON_CODE_OBJECT_ESSENCE_CELL_GAME


#include "not_tangible.h"

class Container : public NotTangible {
/* Example Container: Cell Slot Panel ... */

public:

    Container() {
        this->add_my_type("Container");

        cout << "Container created" << endl;
    }

    ~Container() {

        cout << "Container killed" << endl;
    }

private:

    // ресурсы которые я в себе храню
    std::vector<std::string> my_res;

    void _clear(){
        this->my_res.clear();
    }
};

#endif // CYTON_CODE_OBJECT_ESSENCE_CELL_GAME

