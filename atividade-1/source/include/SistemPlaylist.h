#ifndef SISTEMPLAYLIST_H_INCLUDED
#define SISTEMPLAYLIST_H_INCLUDED
#include <iostream>
#include <string>
#include "ListOfPlaylist.h"

class SistemPlaylist
{
private:
    ListOfPlaylist playlists;
    std::string nameSistem;
public:
    SistemPlaylist(/* args */);
    SistemPlaylist(std::string name);
    ~SistemPlaylist();
    void setName(std::string name);
    void setPlaylist(Playlist newPlaylist);
    void deletePlaylist(std::string name);
    void printPlaylist();
};





#endif//SISTEMSONG_H_INCLUDED