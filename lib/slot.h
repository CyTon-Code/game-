// Autor Dal Bo Yob

#ifndef GAME_OBJECT_NOT__TANGIBLE_SLOT
#define GAME_OBJECT_NOT__TANGIBLE_SLOT

#include "./not__tangible.h"

class Slot : public NotTangible {
/* Example Slots: Slot ... */

public:

    Slot() {
        this->add_my_type("Slot");

        cout << "Slot created" << endl;
    }

    ~Slot() {
        this->clearTypesOfChanges();

        cout << "Slot killed" << endl;
    }

    void clearSlot() {
        this->clearObject();
        this->clearTypesOfChanges();
    }

    void clearTypesOfChanges() {
        cout << "Object -> types of changes -> clear" << endl;
        this->types_of_changes.clear();
    }

private:

    // типы влияющие на статистику объекта в котором нахожусь:
    std::vector<std::string> types_of_changes;
};

#endif // GAME_OBJECT_NOT__TANGIBLE_SLOT

