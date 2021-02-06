
#include "../include/Musica.h"

Musica::Musica(std::string t,std::string nome){
    titulo = t;
    nomeArtista = nome;
}
void Musica::setTitulo(std::string titulo){
    titulo = titulo;
}
void
Musica::setNomeArtista(std::string x){
    nomeArtista = x;
}

std::string
Musica::getTitulo(){
    return titulo;
}

std::string
Musica::getNomeArtista(){
    return nomeArtista;
}