// Autor Dal Bo Yob

#ifndef GAME_OBJECT_TANGIBLE
#define GAME_OBJECT_TANGIBLE

#include "./object.hpp"

class Tangible : public Object
{
/* Example Tangibles: Essence Block Map ... */

    public:

        Tangible()
        {
            this->add_my_type("Tangible");

            cout << "Tangible created" << endl;
        }

        ~Tangible()
        {
            cout << "Tangible killed" << endl;
        }

    private:
        long double X, Y, Z;
};

#endif // GAME_OBJECT_TANGIBLE

