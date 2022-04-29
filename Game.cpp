#include "Game.hpp"
#include "Player.hpp"
#include <stdexcept>

using namespace std;

namespace coup{

    vector<string> Game::players(){
        return this->_players;
    }

    string Game::turn(){
        return "nice";
    }

    string Game::winner(){
        if(this->_players.size() == 1){
            return this->_players.at(0);
        }
        throw runtime_error("the game is not over yet");
    }

}