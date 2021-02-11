#ifndef SISTEMSONG_H_INCLUDED
#define SISTEMSONG_H_INCLUDED
#include <iostream>
#include <string>

#include "Playlist.h"
class SistemSong
{
private:
   Playlist defaultPlaylist;
    std::string name;
public:
    SistemSong();
    SistemSong(std::string name);
    ~SistemSong();
    void addSong(std::string name,std::string artist );

};


#endif//SISTEMSONG_H_INCLUDED