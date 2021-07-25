// Autor Dal Bo Yob


# include "./object.h"

# include "./block.h"
# include "./cell.h"
# include "./essence.h"
# include "./fun.h"
# include "./game.h"
// # include "./inventory.h"
# include "./man.h"
# include "./mouse.h"
# include "./not__tangible.h"
# include "./slot.h"
# include "./test__fun.h"

// # include "./.container.h"
# include "./.tangible.h"

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

