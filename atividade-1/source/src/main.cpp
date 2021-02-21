
#include "../include/SistemSong.h"
#include "../include/SistemPlaylist.h"
using namespace std;

int main(){
    SistemSong defaultSistem("defaultSistem");
    Playlist teste("teste");
    Playlist teste02("dlkwkaw");
    SistemPlaylist odoa;
    odoa.setName("dajw");
    odoa.setPlaylist(teste);
    odoa.setPlaylist(teste02);
    odoa.printPlaylist();

    
    odoa.printPlaylist();
    teste02.~Playlist();
    
    return 0;
}