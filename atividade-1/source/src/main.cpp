
#include <iostream>
#include "../include/Musica.h"
#include "List.cpp"
using namespace std;

int main(){
    Musica aaa("chick chick","gilberto");
    List playlist;
    playlist.createnode(aaa);
    // aaa.setNomeArtista("ruy");
    cout<<aaa.getNomeArtista()<<endl;
    cout<<"dada"<<endl;

    return 0;
}