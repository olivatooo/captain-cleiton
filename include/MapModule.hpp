//
// Created by olivato on 07/05/18.
//

#ifndef CAPTAIN_CLEITON_MAPMODULE_H
#define CAPTAIN_CLEITON_MAPMODULE_H


#include <SFML/Graphics/Texture.hpp>
#include "Floor.hpp"
#include "Rigidbody.hpp"
#include "Listaestatica.hpp"
#include "Config.hpp"

using namespace sf;
class MapModule {
public:
    MapModule(Listaestatica<Rigidbody> *wall_and_floor,
              Listaestatica<Rigidbody> *obstacles,
              Rigidbody* player,
              Listaestatica<Rigidbody> *monsters);
    void changeRoom(TileMap *m);
    void loadFiles();
private:
    Floor * floor;
    Listaestatica<Rigidbody>* wall_and_floor;
    Listaestatica<Rigidbody>* obstacles;
    Listaestatica<Rigidbody>* monsters;
    Rigidbody* player;
    Texture tx_rock;
    Texture tx_floor;
    Texture tx_wall;
};


#endif //CAPTAIN_CLEITON_MAPMODULE_H
