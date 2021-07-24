// Autor Dal Bo Yob

#ifndef GAME_FUNCTIONS
#define GAME_FUNCTIONS

// find example
// #include <iostream>     // std::cout
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


    // save object in file
    void save(auto *object){
        /*
            file={name}.game
            touch $file // creat file
            save(object, $file)
        */
    }


    // load object from file


    // remove


    // get


    // set
};

#endif // GAME_FUNCTIONS

