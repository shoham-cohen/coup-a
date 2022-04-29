#include "Ambassador.hpp"
#include "Player.hpp"
#include <stdexcept>

using namespace std;

namespace coup{

    Ambassador::Ambassador(Game game, string name){
            this->game = game;
            this->name = name;
    }
    void Ambassador::transfer(Player robbed, Player robber){
        if(robbed.coins() < 1){
            throw runtime_error("robbed doesnt have coins");
        }
        robber.add_coins(1);
        robber.subtract_coins(1);
    }
    void Ambassador::block(Player captain){

    }
}