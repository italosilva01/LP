#include "../include/SistemPlaylist.h"

SistemPlaylist::SistemPlaylist(){
    
};
SistemPlaylist::SistemPlaylist(std::string name){
    setName(name);
};
SistemPlaylist::~SistemPlaylist(){
};
void SistemPlaylist::setName(std::string name){
    nameSistem = name;
};
void SistemPlaylist::setPlaylist(Playlist newPlaylist){
    playlists.createnode(newPlaylist);
}
void SistemPlaylist::deletePlaylist(std::string name){
    playlists.delete_playlist(name);
}

void SistemPlaylist::printPlaylist(){
    playlists.print_playlist(playlists.getFist());
}