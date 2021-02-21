#include "../include/ListOfPlaylist.h"

ListOfPlaylist::ListOfPlaylist(){
    head = NULL;
    tail = NULL;
}

ListOfPlaylist::~ListOfPlaylist(){
    while (head !=NULL)
    {
        if(head->next != NULL){
            nodePlaylist *next = head->next;
           
            delete head;
            head = next;
        }else{
            head = NULL;
        }
    }
    
    
}

void ListOfPlaylist::createnode(Playlist playlist){
    nodePlaylist *temp = new nodePlaylist;
    temp->playlist = playlist;
    temp->next = NULL;

    if(head==NULL){
        head = temp;
        tail = temp;
        temp = NULL;
    }else{
        tail->next = temp;
        tail = temp;
    }
}

void ListOfPlaylist::insert_start(Playlist playlist){
    nodePlaylist *temp = new nodePlaylist;
    temp->playlist = playlist;
    temp->next = head;
    head = temp;
}

void ListOfPlaylist::insert_position(int pos,Playlist playlist){
    nodePlaylist *pre = new nodePlaylist;
    nodePlaylist *cur = new nodePlaylist;
    nodePlaylist *temp = new nodePlaylist;

    cur = head;

    for(int c = 1; 1<pos; c++){
        pre = cur;
        cur =cur->next;
    }
    temp->playlist = playlist;
    pre ->next = temp;
    temp->next = cur;
    
}

void ListOfPlaylist::delete_first(){
    nodePlaylist *temp = new nodePlaylist;
    temp = head;
    head = head->next;
    delete temp;
}

void ListOfPlaylist::delete_last(){
    nodePlaylist *previous = new nodePlaylist;
    nodePlaylist *current = new nodePlaylist;
    current= head;
    while(current->next != NULL){
        previous = current;
        current= current->next;
    }
    tail = previous;
    previous->next = NULL;
    delete current;

}

void ListOfPlaylist::delete_position(int pos){
    nodePlaylist *current = new nodePlaylist;
    nodePlaylist *previous = new nodePlaylist;
    current = head;
    for(int i=1; i<pos;i++){
        previous = current;
        current = current->next;
    }
    previous->next = current->next;
}

int ListOfPlaylist::print_playlist(nodePlaylist* node){
    std::cout<<node->playlist.getName()<<std::endl;
    if(node->next==NULL){
        return 0;
    }else{
        print_playlist(node->next);
    } 
    return 0;
}

/*
delete_playlist
busca uma música por um nome. Caso exista, deleta a música da lista


*/
int ListOfPlaylist::delete_playlist(std::string name){

    nodePlaylist *prev = new nodePlaylist;
    nodePlaylist *current = new nodePlaylist;
    current = head;
    int deleted = -1;
    while( current->next!=NULL){
        if (current->playlist.getName() == name){
            if(current==head){
                delete_first();
                deleted = 0;
                break;
            }else{
                prev->next = current->next;
                delete current;
                deleted = 0;
                break;
            }
            
        }else{
        prev = current;
        current = current->next;
        }
        
    }
    if (deleted == -1 && current->playlist.getName() == name){
        tail = prev;
        prev->next = NULL;
        delete current;
        deleted = 0;
    }

    if(deleted ==  0){
        std::cout<<"Playlist deleted!"<<std::endl;

    }else{
        std::cout<<"Sorry! playlist not found!"<<std::endl;

    }

    return deleted;
}
// /*getFist
//     Retorna o endereço head 


nodePlaylist* ListOfPlaylist::getFist(){
    return head;
}

/*--------------------------*/
/*CUSTOM FUNCTION*/
/*--------------------------*/

/* serch_song*/
/*descrição : Função percorre a list em busca de uma musica com o mesmo nome do parâmetro name. 
retorna : Se a música existir na list retorna a música, caso contrário, retorna uma música vázia.

*/
// Playlist* search_playlist(std::string name){
//     nodePlaylist *temp = new nodePlaylist;
//     temp = head;
    
//     while(temp->next!=NULL){
//         if(temp->playlist.getName()==name){
//             return &temp->playlist;
//         }
//         temp = temp->next;
//     }
//     std::cout<<"Sorry! music not found!"<<std::endl;
//     return NULL;
// }



//     /*print_playlist
//     Responsável por imprimir todas as playlist de forma recursiva
// */




