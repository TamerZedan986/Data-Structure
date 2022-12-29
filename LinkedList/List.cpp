#include"List.hpp"

LinkedList::LinkedList()
{
    head=tail=nullptr;

}
LinkedList::~LinkedList()
{
     Node * temp=head;
        while (head)
        {
            /* code */
            temp=head->next;
            delete head;
            head=temp;
        }

}
void LinkedList::print(void)
{
     Node* temp=head;
        while (temp!=nullptr)
        {
           std::cout<<temp->data<<"\n";
            temp=temp->next;
        }
        std::cout<<"\n";
}
void LinkedList::insert_back(int value)
{
      Node * new_item=new Node(value);
        if(!head){
            head=tail=new_item;
            new_item->next=nullptr;
        }else{
            tail->next=new_item;
            tail=new_item;
        }
}
void LinkedList::insert_front(int value)
{
    Node* new_item=new Node(value);
        new_item->next=head;
        head=new_item;
}
Node* LinkedList::get_nth(int n)
{
     Node* temp=head;
        while(temp&&n!=0)
        {
            n--;
            temp=temp->next;
        }
        if(!temp)
        {
            return nullptr;
        }else{
            return temp;
        }
}
int LinkedList::search (int val)
{
      int count=0;
        Node*temp=head;
        while (temp)
        {
            /* code */
            if(val==temp->data)
                return count;
            count++;
            temp=temp->next;
        }
        return -1;
}
void LinkedList::delete_with_key(int value)
{
      Node*curr=head;
        Node*before=head;
        while(curr)
        {
            if(curr->data==value)
            {
                before->next=curr->next;
                delete curr;
            }
            before=curr;
            curr=curr->next;
        }
}
void LinkedList::reverse(void)
{
     Node*curr=head->next;
        Node*before=head;
        node*temp=curr;
        head->next=nullptr;
        while (curr)
        {   temp=curr->next;
            curr->next=before;
            before=curr;
            curr=temp;
        }
        temp=head;
        head=tail;
        tail=temp;
}