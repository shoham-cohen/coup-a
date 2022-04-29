#include "Duke.hpp"


namespace coup{

    Duke::Duke(Game game, std::string name){
        this->game = game;
        this->name = name;
    }
        
    void Duke::tax(){
        this->num_of_coins += 3;
    }

    void Duke::block(Player player){ //block the foreign aid

    }
}