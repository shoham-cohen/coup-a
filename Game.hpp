#pragma once
#include <vector>
#include <string>

namespace coup{
    
    class Game{
        
        protected:
            std::vector<std::string> _players; //list of the players
            int turn_var; //holds the position of the current player in the list
    
        public:
            std::vector<std::string> players(); //returns the list of players
            std::string turn(); //returns the name of the current player
            std::string winner(); //returns the winners name if there is one
    };
}