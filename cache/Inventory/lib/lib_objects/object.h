#ifndef CYTON_CODE_OBJECT_CPP
#define CYTON_CODE_OBJECT_CPP

#include <iostream>
#include <vector>

// debug and test:
using std::cout, std::endl;


class Object {
/* Example Objects: *these are all objects in the game* */

public:

    Object() {
        this->my_types.push_back("Object");

        cout << "Object created" << endl;
    }

    ~Object() {
        this->_clear();

        cout << "Object killed" << endl << endl;
    }

    std::vector<std::string> get_my_types() {
        return this->my_types;
    }

    std::vector<std::string> get_types_of_friends() {
        return this->types_of_friends;
    }

    std::vector<std::string> get_types_ignore() {
        return this->types_ignore;
    }

    void add_my_type(std::string value){
        this->my_types.push_back(value);
    }

private:

    // типы за которые меня принимают:
    std::vector<std::string> my_types;

    // типы которые я могу позволить хранить у себя в контейнерах:
    std::vector<std::string> types_of_friends;

    // типы которые я не могу позволить хранить у себя в контейнерах:
    std::vector<std::string> types_ignore;

    void _clear() {
        this->my_types.clear();
        this->types_ignore.clear();
        this->types_of_friends.clear();
    }
};

#endif // CYTON_CODE_OBJECT_CPP



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


 *
 * */
