#ifndef LISTOFPLAYLIST_H_INCLUDED
#define LISTOFPLAYLIST_H_INCLUDED
#include <iostream>
#include <string>
#include "Playlist.h"
struct nodePlaylist
{   
    Playlist playlist; 
    nodePlaylist *next;
};

class ListOfPlaylist
{
private:
    nodePlaylist *head, *tail;

public:
    ListOfPlaylist();
    ~ListOfPlaylist();
    void createnode(Playlist playlist);
    void insert_start(Playlist Playlist);
    void insert_position(int pos,Playlist playlist);
    void delete_first();
    void delete_last();
    void delete_position(int pos);
    int delete_playlist(std::string name);
    int print_playlist(nodePlaylist* node);
    nodePlaylist* getFist();
};
#endif