
#include <iostream>
#include "../include/Song.h"
#include "List.cpp"
using namespace std;

int main(){
    Song musicOne("chick chick","gilberto");
    Song musicTwo("rapaz","gilberto");
    List playlist;
    playlist.createnode(musicOne);
    playlist.createnode(musicTwo);
    Song search = playlist.search_music("rapaz");

    // aaa.setNomeArtista("ruy");

    return 0;
}