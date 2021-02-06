#ifndef MUSICA_H_INCLUDED
#define MUSICA_H_INCLUDED
#include <iostream>
#include <string> 

class Musica {

     public:
        void setTitulo(std::string titulo);
        void setNomeArtista(std::string titulo);
        std::string getTitulo();
        std::string getNomeArtista();
        ~Musica(){};
        Musica(){};
        Musica(std::string titulo,std::string nomeArtista);
    private:
        std::string titulo;
        std::string nomeArtista;   
};


#endif//MUSICA_H