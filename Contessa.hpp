#include <string>
#include "Player.hpp"


namespace coup{

    class Contessa:public Player{

        public:
            Contessa(Game game, std::string name); //constructors
            void block(Player player); //block the coup of the assassian
    };
}