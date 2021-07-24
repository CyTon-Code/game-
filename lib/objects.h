// Autor Dal Bo Yob

#ifndef GAME_OBJECTS
#define GAME_OBJECTS

# include "./object.h"

# include "./block.h"
# include "./cell.h"
# include "./essence.h"
# include "./inventory.h"
# include "./man.h"
# include "./mouse.h"
# include "./not__tangible.h"
# include "./slot.h"

// # include "./.container.h"


class Objects  {
public:
	// Objects all_objects;
	// all objects:
	std::vector<std::cell> all_cells;
	std::vector<std::slot> all_slots;
	// ... all types ????
}

#endif // GAME_OBJECTS

