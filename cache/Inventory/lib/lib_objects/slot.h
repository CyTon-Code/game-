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
        this->clear_types_of_changes();

        cout << "Slot killed" << endl;
    }

    void clear_slot(){
        this->clear_object();
        this->clear_types_of_changes();
    }

    void clear_types_of_changes(){
        this->types_of_changes.clear();
    }

private:

    // типы влияющие на статистику объекта в котором нахожусь:
    std::vector<std::string> types_of_changes;
};

#endif // CYTON_CODE_OBJECT_NOT_TANGIBLE_SLOT_GAME

