#include "../include/Playlist.h"

Playlist::Playlist(std::string nomePlaylist){
    nome = nomePlaylist;
}
Playlist::Playlist(std::string nomePlaylist,Musica musica){
    nome = nomePlaylist;
    musicas.createnode(musica);
}
Playlist::~Playlist(){
    musicas.~List();
}

