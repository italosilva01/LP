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
     std::cout<<"deleting playlist "<<name<<std::endl;
    songs.~List();
}


void Playlist::setName(std::string namePlaylist){

    name = namePlaylist;
}
void Playlist::setSong(std::string name,std::string artist){
    Song newSong(name,artist);
    songs.createnode(newSong);

}

void Playlist::setSong(Song song){
    songs.createnode(song);
}
/*remove_song
Remove uma música da playlista pelo nome
*/
void Playlist::remove_song(std::string nameSong) {
    songs.delete_song(nameSong);
}
/*getControll
retorna qual é um inteiro indicando a posição da proxima musica.*/
int Playlist::getControll(){
    return controll;
}
/*getNextSong
    Retorna a proxima música que irá ser retornada
*/
Song* Playlist::getNextSong(){
    controll = 1+ getControll();
   return songs.next_song(controll);
}

/*printSongs
    imprime todas as musicas da playlist
*/
int Playlist::printSongs(){

     return songs.print_songs(songs.getFist());
};
std::string Playlist::getName(){
    return name;
}
