#include "Player.hpp"
#include "Captain.hpp"
#include <stdexcept>

using namespace std;

namespace coup{

    Captain::Captain(Game game, string name){
        this->game = game;
        this->name = name;
    }

    void Captain::steal(Player robbed){
        if(robbed.coins() > 0 ){
            robbed.subtract_coins(1);
            this->add_coins(1);
        }
        else{
            throw runtime_error("robbed doesnt have coins");
        }
    }
            
    void Captain::block(Player player){

    }
}