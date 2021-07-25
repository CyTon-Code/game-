// Autor Dal Bo Yob

#ifndef GAME_OBJECT_TANGIBLE_BLOCK
#define GAME_OBJECT_TANGIBLE_BLOCK


#include "./tangible.hpp"

class Block : public Tangible {
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

#endif // GAME_OBJECT_TANGIBLE_BLOCK

