#include "Player.hpp"
#include "Assassin.hpp"

namespace coup{

    Assassin::Assassin(Game game, std::string name){ //constructor
        this->game = game;
        this->name = name;
    }
    void Assassin::coup(Player player){ //speacial coup: cost 3 coins 

    }     
}