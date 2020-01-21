/* 單向鏈結串列程式 */
#include <iostream>
using namespace std;
typedef struct node {
  int data;
  struct node *next;
} NODE;
class S_List{
    public:
        S_List();
        ~S_List();
        void addNode(int);
        void printList();
    private:
        NODE *head;
        NODE *tail;
};
S_List::S_List(){
    head = NULL;
    tail = NULL;
}
S_List::~S_List(){
    NODE *tmp=head;
    while(tmp!=NULL){
        head=head->next;
        delete tmp;
        tmp=head;
    }
}
void S_List::addNode(int n){
    if(head==NULL){
        head = new NODE;
        tail = head;
    }
    else{
        tail->next = new NODE;
        tail = tail->next;
    }
    tail->data=n;
    tail->next=NULL;
    return;
}
void S_List::printList(){
    NODE *tmp=head;
    while(tmp!=NULL){
        cout<<tmp->data<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
int main(void)
{
    char choice;
    int n;
    S_List L1;
    cout<<"請輸入串列第一個元素的值：";
    cin>>n;
    L1.addNode(n);
    while(1) {
      cout<<"您想加入一個新節點嗎？（y,n）";
      cin>>choice;
      if(choice == 'n') break;
      cout<<"請輸入欲加入串列的值：";
      cin>>n;
      L1.addNode(n);
    }
    L1.printList();
    return 0;
}
