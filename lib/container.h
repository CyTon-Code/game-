// Autor Dal Bo Yob

#ifndef GAME_OBJECT_NOT__TANGIBLE_CONTAINER
#define GAME_OBJECT_NOT__TANGIBLE_CONTAINER

#include "./not__tangible.h"

class Container : public NotTangible {
/* Example Container: Cell Slot Panel ... */

public:

    Container() {
        this->add_my_type("Container");

        cout << "Container created" << endl;
    }

    ~Container() {

        cout << "Container killed" << endl;
    }

    void clearContainer(){}
private:

    // ресурсы которые я в себе храню
    std::vector<std::string> my_res;

    void _clear(){
        this->my_res.clear();
    }
};

#endif // GAME_OBJECT_NOT__TANGIBLE_CONTAINER

