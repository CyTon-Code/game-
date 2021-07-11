#ifndef CYTON_CODE_OBJECT_BLOCK_GAME
#define CYTON_CODE_OBJECT_BLOCK_GAME


#include "object.h"

class Block : public Object {
/* Example Blocks: Grass Rock Dirt ... */

public:

    Block() {
        this->add_my_type("Block");

        cout << "Block created" << endl;
    }

    ~Block() {

        cout << "Block killed" << endl;
    }
};

#endif // CYTON_CODE_OBJECT_BLOCK_GAME

