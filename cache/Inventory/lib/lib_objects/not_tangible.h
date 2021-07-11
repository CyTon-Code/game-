#ifndef CYTON_CODE_OBJECT_NOT_TANGIBLE_CPP
#define CYTON_CODE_OBJECT_NOT_TANGIBLE_CPP


#include "object.h"

class NotTangible : public Object {
public:
/* Example NotTangible: Cell Slot ... */
    NotTangible() {
        this->get_my_types().push_back("NotTangible");
    }
};

#endif // CYTON_CODE_OBJECT_NOT_TANGIBLE_CPP
