#ifndef PLAYLIST_H_INCLUDED
#define PLAYLIST_H_INCLUDED
#include <iostream>
#include <string>
#include "../src/List.cpp"
    class Playlist
    {
    private:
        std::string nome;
        List musicas;
    public:
        Playlist(){};
        Playlist(std::string nomePlaylist);
        Playlist(std::string nomePlaylist,Musica musica);
        ~Playlist();
        void setNome();
        void setMusica();
    };
    
    

#endif//PLAYLIST_H_INCLUDED