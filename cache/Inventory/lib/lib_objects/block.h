#ifndef CYTON_CODE_OBJECT_BLOCK_CPP
#define CYTON_CODE_OBJECT_BLOCK_CPP


#include "object.h"

class Block : public Object {
public:
/* Example Blocks: Grass Rock Dirt ... */
    Block() {
        this->get_my_types().push_back("Block");
    }
};

#endif // CYTON_CODE_OBJECT_BLOCK_CPP
