#include <string>
#include "Player.hpp"


namespace coup{

    class Duke:public Player{

        public:
            Duke(Game game, std::string name); //constructor
            void tax(); //take 3 coins
            void block(Player player); //block the foreign aid
    };
}