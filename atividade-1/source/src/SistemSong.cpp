#include "../include/SistemSong.h"

SistemSong::SistemSong(){

};

SistemSong::SistemSong(std::string nameSistemSong){
    name = nameSistemSong;
    
};


void SistemSong::addSong(std::string name,std::string artist ){
    Song newSong(name, artist);
    defaultSongs.createnode(newSong);
    
}
// Song SistemSong::addInPlaylist(std::string name){
//     return defaultSongs.search_song(name);
// }; 

SistemSong::~SistemSong(){
    std::cout<<"deleting sistem song "<<name<<std::endl;
    defaultSongs.~List();
};
    