        Node<int>* head=new Node();
        Node<int>* list3=head;
        
        while(h1!=NULL && h2!=NULL){
        if(h1->data<h2->data){
            list3->next=new Node(h1->data);
            h1=h1->next;
        }
        else{
            list3->next=new Node(h2->data);
            h2=h2->next;
        }
       
        list3=list3->next;

        }
        while(h2!=NULL){
            list3->next=new Node(h2->data);
            h2=h2->next;
            list3=list3->next;
        }
        while(h1!=NULL){
            list3->next=new Node(h1->data);
            h1=h1->next;
            list3=list3->next;
        }


        return head->next;