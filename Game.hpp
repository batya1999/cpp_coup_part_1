#include <iostream>
#pragma once
#include <vector>

using namespace std;
namespace coup{
    class Game{
        private:
            vector<string> curPlayers;
        public:
            Game();
            string turn();
            string winner();
            vector<string> players();


    };
}