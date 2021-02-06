#include "../include/Playlist.h"

Playlist::Playlist(std::string namePlaylist){
    name = namePlaylist;
}
Playlist::Playlist(std::string namePlaylist,Song song){
    name = namePlaylist;
    songs.createnode(song);
}
Playlist::~Playlist(){
    songs.~List();
}

void Playlist::setName(std::string namePlaylist){

    name = namePlaylist;
}
void Playlist::setsongs(Song songsNova){
    songs.createnode(songsNova);

}
std::string Playlist::remove_song(std::string nameSong) {
    songs.delete_song(nameSong);
}
