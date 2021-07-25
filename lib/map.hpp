// Autor Dal Bo Yob

#ifndef GAME_OBJECT_NOT__TANGIBLE_MAP
#define GAME_OBJECT_NOT__TANGIBLE_MAP

#include "./not__tangible.hpp"

class Map : public NotTangible
{
/* Example Maps: Map ... */

    public:

    Map()
    {
        this->add_my_type("Map");

        cout << "Map created" << endl;
    }

    ~Map()
    {
        cout << "Map killed" << endl;
    }

    private:
        // map:
        std::vector<std::string> my_name_blocks_on_map;
        std::vector<std::string> my_name_mobs_on_map;
        // ... others objects on map
};

#endif // GAME_OBJECT_NOT__TANGIBLE_MAP

