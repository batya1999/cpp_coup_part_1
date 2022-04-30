#include "Game.hpp"
#include <iostream>
using namespace std;
namespace coup{
    Game::Game(){

    }
    string Game::turn(){
        return "";
    }
    string Game::winner(){
        return "";
    }
    vector<string>Game::players(){
        return this->curPlayers;
    }
}