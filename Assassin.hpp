#include <string>
#include "Player.hpp"


namespace coup{

    class Assassin:public Player{

        public:
            Assassin(Game game, std::string name); //constructor
            void coup(Player player); //speacial coup: cost 3 coins      
    };
}