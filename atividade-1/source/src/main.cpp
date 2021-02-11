
#include "../include/SistemSong.h"
using namespace std;

int main(){
    SistemSong defaultSistem;
    defaultSistem.addSong("chick chick","gilberto");
    Song musicTwo("rapaz","gilberto");
    Song musicThree("sou foda","amigoproducoeseterno");
    Playlist unlistedSongs("unlisted_songs");

    Playlist playlistOne("so_as_melhores");
    playlistOne.setSong(musicTwo);
    playlistOne.setSong(musicThree);
    
    playlistOne.getNextSong();
    playlistOne.getNextSong();
    playlistOne.printSongs();
    
    return 0;
}