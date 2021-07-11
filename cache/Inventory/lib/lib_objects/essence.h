#ifndef CYTON_CODE_OBJECT_ESSENCE_CPP
#define CYTON_CODE_OBJECT_ESSENCE_CPP


#include "object.h"

class Essence : public Object {
public:
/* Example Essences: Skeleton Zombie Druid ... */
    Essence() {
        this->get_my_types().push_back("Essence");
    }
};

#endif // CYTON_CODE_OBJECT_ESSENCE_CPP
