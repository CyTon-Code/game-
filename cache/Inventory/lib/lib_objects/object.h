#ifndef CYTON_CODE_OBJECT_GAME
#define CYTON_CODE_OBJECT_GAME

#include <iostream>
#include <vector>

// debug and test:
using std::cout, std::endl;


class Object {
/* Example Objects: *these are all objects in the game* */

public:

    Object() {
        this->add_my_type("Object");

        cout << "Object created" << endl;
    }

    ~Object() {
        this->_clear();

        cout << "Object killed" << endl << endl;
    }

    void add_my_type(std::string value) {
        this->my_types.push_back(value);
    }

    void add_type_friend(std::string value) {
        this->types_of_friends.push_back(value);
    }

    void _clear() {
        this->my_res.clear();
        this->my_types.clear();
        this->types_ignore.clear();
        this->types_of_friends.clear();
    }
    void clear();

private:

    // типы за которые меня принимают:
    std::vector<std::string> my_types;

    // типы которые я могу позволить хранить у себя в контейнерах:
    std::vector<std::string> types_of_friends;

    // типы которые я не могу позволить хранить у себя в контейнерах: - я также не могу хранить те вещи которые не может родителский обьект - например сумку в сумке
    std::vector<std::string> types_ignore;

    // ресурсы которые я в себе храню
    std::vector<std::string> my_res;
};

#endif // CYTON_CODE_OBJECT_GAME





// cache:

// may be need use:
/*
    // copy fun:
    Object(const Object * value) {
        this->my_types = value->my_types;
        this->types_ignore = value->types_ignore;
        this->types_of_friends = value->types_of_friends;

    }



    / *TODO:
     *
     * * /
    // public:
    // remove_type(type){my_type.remove(type)}
    // add_type(type){my_type.push_back(type)}
    // is_type(type){my_type.search_type(type)}


geters:
    // std::vector<std::string> get_my_types() {
        // return this->my_types;
    // }

    // std::vector<std::string> get_types_of_friends() {
        // return this->types_of_friends;
    // }

    // std::vector<std::string> get_types_ignore() {
        // return this->types_ignore;
    // }



 *
 * */

