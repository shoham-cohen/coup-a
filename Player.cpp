#include <stdexcept>
#include "Player.hpp"

using namespace std;

namespace coup{

    void Player::income(){
        this->num_of_coins += 1;
    }

    void Player::foreign_aid(){
        this->num_of_coins += 2;
    }

    void Player::coup(Player player){
    }

    string Player::role(){
        return this->my_role;
    }

    int Player::coins(){
        return this->num_of_coins;
    }

    void Player::add_coins(int to_add){
        this->num_of_coins += to_add;
    }

    void Player::subtract_coins(int to_subtract){
        this->num_of_coins -= to_subtract;
    }
}