#ifndef PLAYLIST_H_INCLUDED
#define PLAYLIST_H_INCLUDED
#include <iostream>
#include <string>
#include "../src/List.cpp"
    class Playlist
    {
    private:
        std::string name;
        List songs;
        int controll;
    public:
        Playlist();
        Playlist(std::string nomePlaylist);
        Playlist(std::string nomePlaylist,Song musica);
        ~Playlist();
        void setName(std::string nomePlaylist);
        void setSong(std::string name,std::string artist);
        void setSong(Song song);
        std::string getName();
        void remove_song(std::string nameSong);
        int getControll();
        Song * getNextSong();
        int printSongs();
        node* getFirstSong();
    };
    
    

#endif//PLAYLIST_H_INCLUDED