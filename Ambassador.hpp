#include <string>
#include "Player.hpp"


namespace coup{

    class Ambassador:public Player{

        public:
            Ambassador(Game game, std::string name); //constructor
            void transfer(Player robbed, Player robber);  //transfer from player a to player b 1 coin
            void block(Player captain); //block the steal
    };
}