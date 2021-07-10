#include <iostream>
#include <vector>

using namespace std;

class Object {
public:
/* Example Objects: *these are all objects in the game* */
    // типы за которые меня принимают:
    vector<string> my_types;

    // типы которые я могу позволить хранить у себя в контейнерах:
    vector<string> types_of_friends;

    // типы которые я не могу позволить хранить у себя в контейнерах:
    vector<string> types_ignore;

    Object() {
        cout << "Object created" << endl;
        my_types.push_back("Object");
    }

    ~Object() {
        my_types.clear();
        types_ignore.clear();
        types_of_friends.clear();

        cout << "Object killed" << endl << endl;
    }
};

class NotTangible : public Object {
public:
/* Example NotTangible: Cell Slot ... */
    NotTangible() {
        cout << "NotTangible created" << endl;
        my_types.push_back("NotTangible");
    }

    ~NotTangible() {
        cout << "NotTangible killed" << endl;
    }
};

class Block : public Object {
public:
/* Example Blocks: Grass Rock Dirt ... */
    Block() {
        cout << "Block created" << endl;
        my_types.push_back("Block");
    }

    ~Block() {
        cout << "Block killed" << endl;
    }
};

class Essence : public Object {
public:
/* Example Essences: Skeleton Zombie Druid ... */
    Essence() {
        cout << "Essence created" << endl;

        my_types.push_back("Essence");
    }

    ~Essence() {
        cout << "Essence killed" << endl;
    }
};



// TEST:
int main() {
    Block();
    Essence();
    NotTangible();

    Object();
    return 0;
}
