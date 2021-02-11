
#include "../include/Playlist.h"
using namespace std;

int main(){
    Song musicOne("chick chick","gilberto");
    Song musicTwo("rapaz","gilberto");
    Song musicThree("sou foda","amigoproducoeseterno");

    Playlist playlistOne("so_as_melhores");
    playlistOne.setSong(musicOne);
    playlistOne.setSong(musicTwo);
    playlistOne.setSong(musicThree);
    
    playlistOne.getNextSong();
    playlistOne.getNextSong();
    playlistOne.printSongs();
    
    return 0;
}