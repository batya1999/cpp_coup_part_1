#include <iostream>
#include "Player.hpp"

using namespace std;
namespace coup{
    class Captain: public Player{
        public:
         Captain();
         Captain(Game game, string name);   
         void block(Player player);
         void steal(Player player);
    };
}