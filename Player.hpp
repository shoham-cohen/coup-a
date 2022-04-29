#pragma once
#include "Game.hpp"
#include <string>

namespace coup{

    class Player{

        protected:
            std::string name;
            int num_of_coins;
            Game game;
            std::string my_role;
            int last_command; //0 == income, 1 == foreign_aid, 2 == coup, 3 == speacial command (tax/steal...)
            int is_alive; //0 if dead, 1 if alive

        public:
            void income(); //take one coin
            void foreign_aid(); //take two coins
            void coup(Player player); //eliminate a player
            std::string role(); //returns the player's role
            int coins(); // returns the amount of coins the player has
            void add_coins(int to_add);
            void subtract_coins(int to_subtract);
    };
}