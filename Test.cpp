
#include "doctest.h"
#include <iostream>
#include "Game.hpp"
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include <vector>
using namespace coup;
using namespace std;



TEST_CASE("coins check")
{
    Game game{};
    Captain captain(game, "A");
    Assassin assassin(game, "B");
    Ambassador ambassador(game, "C");
    Duke duke(game, "D");
    Contessa contessa(game, "E");
    assassin.income();
    contessa.income();
    captain.income();
    for(int l=0; l<4; l++){      
              
        ambassador.income();
        captain.income();
    }

    for(int k=0; k<9; k++){      

        contessa.income();
        duke.income();
    }
    CHECK(duke.coins() == 9);
    CHECK(assassin.coins() == 1);
    CHECK(ambassador.coins() == 4);
    CHECK(captain.coins() == 5);
    CHECK(contessa.coins() == 10);
    for(int i=0; i<10; i++){
        duke.foreign_aid();
        assassin.income();
        ambassador.income();
        captain.income();
        contessa.income();
    }
    CHECK(duke.coins() == 21);
    CHECK(assassin.coins() == 11);
    CHECK(ambassador.coins() == 11);
    CHECK(captain.coins() == 11);
    CHECK(contessa.coins() == 11);
}

TEST_CASE("coup function - delete a member")
{
   Game game{};
    Captain captain(game, "A");
    Assassin assassin(game, "B");
    Ambassador ambassador(game, "C");
    Duke duke(game, "D");
    Contessa contessa(game, "E");
    for(int j=0; j<5; j++){
        ambassador.income();
        contessa.income();      
        duke.income(); 
    }
    assassin.income();
    ambassador.income();
    contessa.income();
    captain.income();
    duke.income();
    vector<string> players = game.players();
    vector<string> compare = {"A", "B", "C", "D", "E"}; 
    CHECK(players.size() == 5);
    CHECK(players == compare);
    assassin.foreign_aid();
    ambassador.foreign_aid();
    contessa.foreign_aid();
    captain.foreign_aid();
    duke.foreign_aid();
    CHECK(duke.coins() == 8);
    CHECK(assassin.coins() == 3);
    CHECK(ambassador.coins() == 8);
    CHECK(captain.coins() == 3);
    CHECK(contessa.coins() == 8);
    duke.coup(ambassador);
    vector<string> players1 = game.players();
    vector<string> compare1 = {"A", "B", "D", "E"}; 
    CHECK(players1 == compare1);
    duke.coup(assassin);
    vector<string> players2 = game.players();
    vector<string> compare2 = {"A", "D", "E"}; 
    CHECK(players2 == compare2);
    captain.coup(duke);
    vector<string> players3 = game.players();
    vector<string> compare3 = {"A", "E"}; 
    CHECK(players3 == compare3);
}