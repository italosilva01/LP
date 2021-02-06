#include "../include/Song.h"

struct node
{   
    Song song;
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

    void createnode(Song song){
        node *temp = new node;
        temp->song = song;
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

    void insert_start(Song song){
        node *temp = new node;
        temp->song = song;
        temp->next = head;
        head = temp;
    }
    
    void insert_position(int pos,Song song){
        node *pre = new node;
        node *cur = new node;
        node *temp = new node;

        cur = head;

        for(int c = 1; 1<pos; c++){
            pre = cur;
            cur =cur->next;
        }
        temp->song = song;
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
        while(current->next != NULL){
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
    Song search_song(std::string name){
       node *temp = new node;
       temp = head;
       Song m;
       while(temp->next!=NULL){
           if(temp->song.getTitle()==name){
               return temp->song;
           }
           temp = temp->next;
       }
        std::cout<<"Sorry! music not found!"<<std::endl;
        return m;
   }

   int delete_song(std::string title){

       node *prev = new node;
       node *current = new node;
       current = head;
       int deleted = -1;
       while( current->next!=NULL){
           if (current->song.getTitle() == title){
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
       if (current->song.getTitle() == title){
           tail = prev;
           prev->next = NULL;
           delete current;
           deleted = 0;
       }

       if(deleted ==  0){
            std::cout<<"Song deleted!"<<std::endl;

       }else{
            std::cout<<"Sorry! music not found!"<<std::endl;

       }

        return deleted;
   }


};