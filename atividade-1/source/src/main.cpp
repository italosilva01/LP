
#include <iostream>
#include "../include/Song.h"
#include "List.cpp"
using namespace std;

int main(){
    Song musicOne("chick chick","gilberto");
    Song musicTwo("rapaz","gilberto");
    Song musicThree("sou foda","amigoproducoeseterno");

    List playlist;
    playlist.createnode(musicOne);
    playlist.createnode(musicTwo);
    playlist.createnode(musicThree);

    // Song search = playlist.search_song("a");
    playlist.delete_song("sou foda");
    playlist.createnode(musicThree);

    
    return 0;
}