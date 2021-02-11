#include "../include/Playlist.h"
Playlist:: Playlist(){
     controll = 0;
}
Playlist::Playlist(std::string namePlaylist){
    name = namePlaylist;
    controll = 0;
}
Playlist::Playlist(std::string namePlaylist,Song song){
    name = namePlaylist;
    songs.createnode(song);
    controll = 0;
}
Playlist::~Playlist(){
    songs.~List();
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
int Playlist::getControll(){
    return controll;
}
Song* Playlist::getNextSong(){
    controll = 1+ getControll();
   return songs.next_song(controll);
}

int Playlist::printSongs(){

     return songs.print_songs(songs.getFist());
};
// node Playlist::getFirstSong(){
//    return songs.getFist();
//}
