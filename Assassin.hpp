#include <iostream>
#include "Player.hpp"

using namespace std;
namespace coup{
    class Assassin : public Player{
        public:
        Assassin();
        Assassin(Game game, string name);
        void coup(Player player);

    };
}