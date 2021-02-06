#include "../include/Musica.h"

struct node
{   
    Musica musica;
    node *next;
};


class List{
    private:
    node *head, *tail;
    public:
    List(){
        head = NULL;
        tail = NULL;
    }
    ~List(){
        node *temp = new node;
        temp = head;
        while (temp->next!=NULL)
        {
            node *next = temp->next;
            delete temp;
            temp = next;
            
        }
        
    }

    void createnode(Musica musica){
        node *temp = new node;
        temp->musica = musica;
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

    void insert_start(Musica musica){
        node *temp = new node;
        temp->musica = musica;
        temp->next = head;
        head = temp;
    }
    
    void insert_position(int pos,Musica musica){
        node *pre = new node;
        node *cur = new node;
        node *temp = new node;

        cur = head;

        for(int c = 1; 1<pos; c++){
            pre = cur;
            cur =cur->next;
        }
        temp->musica = musica;
        pre ->next = temp;
        temp->next = cur;
        
    }

    void delete_first(){
        node *temp = new node;
        temp = head;
        head = head->next;
        delete temp;
    }

    void delete_last(){
        node *previous = new node;
        node *current = new node;
        current= head;
        while(current->next == NULL){
            previous = current;
            current= current->next;
        }
        tail = previous;
        previous->next = NULL;
        delete current;

    }

    void delete_position(int pos){
        node *current = new node;
        node *previous = new node;
        current = head;
        for(int i=1; i<pos;i++){
            previous = current;
            current = current->next;
        }
        previous->next = current->next;
    }

    /*Custom function*/
   Musica search_music(std::string nome){
       node *temp = new node;
       temp = head;
       Musica m;
       while(temp->next!=NULL){
           if(temp->musica.getTitulo()==nome){
               return temp->musica;
           }
       }
        std::cout<<"Sorry! music not found!"<<std::endl;
        return m;
   }


};