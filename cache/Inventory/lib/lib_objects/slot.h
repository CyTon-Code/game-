// Autor Dal Bo Yob

#ifndef CYTON_CODE_OBJECT_NOT_TANGIBLE_SLOT_GAME
#define CYTON_CODE_OBJECT_NOT_TANGIBLE_SLOT_GAME


#include "not_tangible.h"

class Slot : public NotTangible {
/* Example Slots: Slot ... */

public:

    Slot() {
        this->add_my_type("Slot");

        cout << "Slot created" << endl;
    }

    ~Slot() {

        cout << "Slot killed" << endl;
    }

    void clear(){
        this->_clear();
        this->_clear_types_changes();
    }
private:

    // типы изменяющие статистику объекта в котором нахожусь:
    std::vector<std::string> types_of_changes;
    void _clear_types_changes(){
        this->types_of_changes.clear();
    }

};

#endif // CYTON_CODE_OBJECT_NOT_TANGIBLE_SLOT_GAME

