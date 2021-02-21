
#include "../include/Song.h"

Song::Song(){
     std::cout<<"deleting music "<<title<<std::endl;

}
Song::Song(std::string t,std::string nome){
    title = t;
    nameArtist = nome;
}
Song::~Song(){
 delete &nameArtist;
 delete &title;
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