#include <string>
#include "Player.hpp"

namespace coup{

    class Captain:public Player{

        public:
            Captain(Game game, std::string name); //constructor
            void steal(Player robbed); //steal from other player 1 coin
            void block(Player player); //block the steal
            
    };
}