
#include "../include/Song.h"

Song::Song(std::string t,std::string nome){
    title = t;
    nameArtist = nome;
}
void Song::setTitle(std::string titulo){
    title = titulo;
}
void
Song::setNameArtist(std::string x){
    nameArtist = x;
}

std::string
Song::getTitle(){
    return title;
}

std::string
Song::getNameArtist(){
    return nameArtist;
}