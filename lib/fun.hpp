// Autor Dal Bo Yob

#ifndef GAME_FUN
#define GAME_FUN

// find example
// #include <algorithm>    // std::find
#include <iostream>     // std::cout
#include <vector>       // std::vector
#include <string>       // std::string



namespace fun {
    // search in vector
    // using std::find with vector and iterator:
    bool search(const std::vector<std::string> &array, std::string name){
        for (std::string i : array)
            if (i == name)
                return true;
        return false;
        // return std::find(object.begin(), object.end(), name) != object.end();
    }

    // push (back) in vector
    void add(std::vector<std::string> &array, std::string value){
        array.push_back(value);
    }


    // save object in file
    template <class type>
    void save(type *object){
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

#endif // GAME_FUN

