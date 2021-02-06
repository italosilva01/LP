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
    public:
        Playlist(){};
        Playlist(std::string nomePlaylist);
        Playlist(std::string nomePlaylist,Song musica);
        ~Playlist();
        void setName(std::string nomePlaylist);
        void setsongs(Song musica);
        void remove_music(std::string nameSong);
        
    };
    
    

#endif//PLAYLIST_H_INCLUDED