#ifdef CLASSES_HPP
#define CLASSES_HPP
#include <iostream>
#include <string>
class Musica {
    private:
        std::string titulo;
        std::string nomeArtista; 

    public:
        void setTitulo(std::string titulo);
        void setNomeArtista(std::string titulo);
        std::string getTitulo();
        std::string getNomeArtista();

}


#endif//CLASSES_HPP