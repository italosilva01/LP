#include "../include/Playlist.h"

Playlist::Playlist(std::string namePlaylist){
    name = namePlaylist;
}
Playlist::Playlist(std::string namePlaylist,Musica song){
    name = namePlaylist;
    songs.createnode(song);
}
Playlist::~Playlist(){
    songs.~List();
}

void Playlist::setName(std::string namePlaylist){

    name = namePlaylist;
}
void Playlist::setsongs(Musica songsNova){
    songs.createnode(songsNova);

}
