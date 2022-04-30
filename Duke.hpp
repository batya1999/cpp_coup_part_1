#include <iostream>
#include "Player.hpp"

using namespace std;
namespace coup{
    class Duke: public Player{
        public:
        Duke();
        Duke(Game game, string name);
        void tax();
        void block(Player player);


    };
}