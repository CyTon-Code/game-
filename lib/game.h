// Autor Dal Bo Yob

#ifndef GAME
#define GAME



// find example
#include <iostream>     // std::cout
#include <algorithm>    // std::find
#include <vector>       // std::vector



namespace game {
	// search in vector
    // using std::find with vector and iterator:
   	bool search(auto *object, std::string name){
		return std::find(object.begin(), object.end(), name) != object.end();
	}

	// push (back) in vrctor
	void add(auto *object, std::string value){
        object.push_back(value);
	}


	// save
	void save(auto *object){
		/*
			file={name}.game
			touch $file // creat file
			save(object, $file)
		*/
	}


	// remove


	// get


	// set


	class Game {
		// map:
	    std::vector<std::string> my_name_blocks_on_map;
	    std::vector<std::mob> my_mobs_on_map;
	    // ... others objects on map


		// TODO add class Objects in objects.h
		// Objects all_objects;
	    // all objects:
        std::vector<std::cell> all_cells;
        std::vector<std::slot> all_slots;
        // ... all types ????
	};
};

/*
#include <iostream>
#include <vector>

// debug and test:
using std::cout, std::endl;

class Object {
/ * Example Objects: *these are all objects in the game* * /

public:

    Object() {
        this->add_my_type("Object");

        cout << "Object created" << endl;
    }

    ~Object() {
        this->clearObject();

        cout << "Object killed" << endl << endl;
    }


    void add_my_type(std::string value) {
        this->my_types.push_back(value);
    }

    void add_type_friend(std::string value) {
        this->types_of_friends.push_back(value);
    }

    void add_type_ignore(std::string value) {
        this->types_ignore.push_back(value);
    }

    void add_my_res(std::string value) {
        this->my_res.push_back(value);
    }


    void clearMyRes() {
        cout << "Object -> my res -> clear" << endl;
        this->my_res.clear();
    }

    void clearMyTypes() {
        cout << "Object -> my types -> clear" << endl;
        this->my_types.clear();
    }
    void clearTypesignore() {
        cout << "Object -> types ignore -> clear" << endl;
        this->types_ignore.clear();
    }
    void clearTypesOfFriends() {
        cout << "Object -> types of friends -> clear" << endl;
        this->types_of_friends.clear();
    }
    void clearObject(){
        this->clearMyRes();
        this->clearMyTypes();
        this->clearTypesignore();
        this->clearTypesOfFriends();
    }

private:
    // имя файла - обьекта:
    std::string name;

    // типы за которые меня принимают:
    std::vector<std::string> my_types;

    // типы которые я могу позволить хранить у себя в контейнерах:
    std::vector<std::string> types_of_friends;

    // типы которые я не могу позволить хранить у себя в контейнерах: - я также не могу хранить те вещи которые не может родителский обьект - например сумку в сумке
    std::vector<std::string> types_ignore;

    // ресурсы которые я в себе храню
    std::vector<std::string> my_res;
};
*/
#endif // GAME


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

    // void save_my_res() {
        // this->my_res.save(name);
    // }

    // void upload_my_res() {
        // this->upload(name);
    // }



 *
 * */

