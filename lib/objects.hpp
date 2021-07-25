// Autor Dal Bo Yob


#ifndef GAME_OBJECTS
#define GAME_OBJECTS

class Objects  {
/* Objects: store all objects in game */


public:
    Objects() {
        cout << "Objects created" << endl;
    }

    ~Objects() {
        cout << "Objects killed" << endl << endl;
    }

    // Objects all_objects;
    // all objects:
    std::vector<Cell> all_cells;
    std::vector<Slot> all_slots;
    // ... all types ????
};

#endif // GAME_OBJECTS

