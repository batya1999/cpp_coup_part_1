#include <iostream>
#include "Game.hpp"
#pragma once
using namespace std;
namespace coup{
    class Player{
        protected:
            Game game;
            int _coins;
            string name;
            string _role;


        public:
            Player();
            Player(Game game, string name);
            void foreign_aid();
            void income();
            int coins();
            string role();
            void coup(Player player);
    };
}