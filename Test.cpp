#include "doctest.h"
#include "Game.hpp"
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"

using namespace std;
using namespace coup;

TEST_CASE("good case"){
    Game game_1{};
    Duke duke{game_1, "Moshe"};
	Assassin assassin{game_1, "Yossi"};
	Ambassador ambassador{game_1, "Meirav"};
	Captain captain{game_1, "Reut"};
	Contessa contessa{game_1, "Gilad"};

    CHECK(game_1.turn() == "Moshe");
    duke.income();
    CHECK(game_1.turn() == "Yossi");
    assassin.income();
	ambassador.income();
	captain.income();
	contessa.foreign_aid();
    CHECK(game_1.turn() == "Moshe");
    CHECK(contessa.coins() == 2);
    CHECK(duke.coins() == 1);
    duke.tax();
    CHECK(duke.coins() == 4);
    CHECK(assassin.role() == "Assassin");
    assassin.income();
    ambassador.income();
    CHECK(game_1.turn() == "Reut");
    CHECK(captain.coins() == 1);
	captain.income();
    CHECK(captain.coins() == 2);
	contessa.foreign_aid();
    duke.block(contessa);
    assassin.coup(captain);
    ambassador.income();
	captain.income();
	contessa.foreign_aid();
    duke.block(contessa);

    CHECK(game_1.players().size() == 4);
}

TEST_CASE("bad case"){

    Game game_2{};
    Duke duke{game_2, "Moshe"};
	Assassin assassin{game_2, "Yossi"};
	Ambassador ambassador{game_2, "Meirav"};
	Captain captain{game_2, "Reut"};
	Contessa contessa{game_2, "Gilad"};
    CHECK_THROWS(game_2.winner());
    CHECK_THROWS(duke.coup(assassin)); //doesnt have 7 num_of_coins
    CHECK_THROWS(captain.income()); //not his turn
    duke.tax();
    CHECK_THROWS(assassin.coup(duke)); //doesnt have 3 num_of_coins
    assassin.income();
    CHECK_THROWS(ambassador.transfer(contessa, assassin)); //contessa has 0 num_of_coins
    ambassador.income();
    CHECK_THROWS(captain.block(duke));
    captain.steal(duke);
    CHECK_THROWS(contessa.block(captain));
    CHECK_THROWS(contessa.coup(captain));
    contessa.income();
    CHECK_THROWS(contessa.income());
}
