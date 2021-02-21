#ifndef SISTEMSONG_H_INCLUDED
#define SISTEMSONG_H_INCLUDED
#include <iostream>
#include <string>

#include "Playlist.h"
class SistemSong
{
private: 
    List defaultSongs;
    std::string name;
public:
    SistemSong();
    SistemSong(std::string name);
    ~SistemSong();
    //adiciona uma nova música a lista defaultSongs
    void addSong(std::string name,std::string artist);
    // Song* addInPlaylist(std::string name); 
   
};


#endif//SISTEMSONG_H_INCLUDED