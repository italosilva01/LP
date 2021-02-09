#include "../include/Playlist.h"
Playlist:: Playlist(){
}
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
Playlist::Playlist(int value){
    std::cout<< value<<std::endl;
}


void Playlist::setName(std::string namePlaylist){

    name = namePlaylist;
}
void Playlist::setSong(Song songsNova){
    songs.createnode(songsNova);

}
void Playlist::remove_song(std::string nameSong) {
    songs.delete_song(nameSong);
}
