#ifndef SONG_H_INCLUDED
#define SONG_H_INCLUDED
#include <iostream>
#include <string> 

class Song {

     public:
        void setTitle(std::string title);
        void setNameArtist(std::string title);
        std::string getTitle();
        std::string getNameArtist();
        ~Song(){};
        Song(){};
        Song(std::string title,std::string nameArtist);
    private:
        std::string title;
        std::string nameArtist;   
};


#endif//MUSICA_H