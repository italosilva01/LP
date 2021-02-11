#include "../include/SistemSong.h"

SistemSong::SistemSong(){
    this->defaultPlaylist.setName("unlistSongs");
};

SistemSong::SistemSong(std::string nameSistemSong){
    this->name = nameSistemSong;
};

void SistemSong::addSong(std::string name,std::string artist){
    Song newSong(name,artist);
    defaultPlaylist.setSong(newSong);
}

SistemSong::~SistemSong(){
    defaultPlaylist.~Playlist();
};
