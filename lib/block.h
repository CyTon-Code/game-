// Autor Dal Bo Yob

#ifndef GAME_OBJECT_BLOCK
#define GAME_OBJECT_BLOCK


#include "./object.h"

class Block : public Object {
/* Example Blocks: Grass Rock Dirt ... */

public:

    Block() {
        this->add_my_type("Tangible");
        this->add_my_type("Block");

        cout << "Block created" << endl;
    }

    ~Block() {

        cout << "Block killed" << endl;
    }
};

#endif // GAME_OBJECT_BLOCK

