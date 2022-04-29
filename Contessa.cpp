#include "Player.hpp"
#include "Contessa.hpp"
#include <stdexcept>

using namespace std;

namespace coup{

    Contessa::Contessa(Game game, string name){
        this->game = game;
        this->name = name;
    }

    void Contessa::block(Player player){

    }
}