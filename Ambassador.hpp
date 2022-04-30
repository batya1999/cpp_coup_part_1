#include <iostream>
#include "Player.hpp"

using namespace std;
namespace coup{
    class Ambassador: public Player{
        public:
        Ambassador();
        void transfer(Player duke, Player assassin);
        Ambassador(Game game, string name);
        void block(Player player);

    };
}