
#include <iostream>
#include "../include/Musica.h"
#include "List.cpp"
using namespace std;

int main(){
    Musica musicOne("chick chick","gilberto");
    Musica musicTwo("rapaz","gilberto");
    List playlist;
    playlist.createnode(musicOne);
    playlist.createnode(musicTwo);
    Musica search = playlist.search_music("rapaz");

    // aaa.setNomeArtista("ruy");

    return 0;
}