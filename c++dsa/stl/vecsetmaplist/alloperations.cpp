#include<bits/stdc++.h>
using namespace std;
void vectoroperations(){
    vector<int>v;
    int ch,val,pos;
    do{
        cout<<"\n....Vector operations....\n";
        cout<<"1.insert at beginning\n";
        cout<<"2.insert at end\n";
        cout<<"3.insert at a specific position\n";
        cout<<"4.delete at beginning\n";
        cout<<"5.delete at beginning\n";
        cout<<"6.delete at a specific position\n";
        cout<<"7.sort in descending order\n";
        cout<<"8.Display\n";
        cout<<"9.exit\n";\
        cout<<"enter your choice:";
        cin>>ch;
        switch(ch){
            case 1:
            cout<<"enter value to insert at beginning:";
            cin>>val;
            v.insert(v.begin(),val);
            break;
            case 2:
             cout<<"enter value to insert at end:";
            cin>>val;
            v.push_back(val);
            break;
            case 3:
             cout<<"enter value to insert at a specific pos:";
             cin>>pos;
            if(pos>=0 && pos<=v.size()){
                cout<<"enter value to insert:";
                cin>>val;
                v.insert(v.begin()+pos,val);
                cout<<"inserted "<<val<<"at position"<<pos<<".\n";
             }
            else{
            cout <<"invalid pos.\n";
            
            }
            break;
            case 4:
            if(!v.empty()){
                v.erase(v.begin());
                cout<<"deleted from beginning.\n";
            }else{
                cout<<"vector is empty.\n";
            }
            break;
            case 5:
            cout<<"enter position to delete :";
             cin>>pos;
            if(pos>=0 && pos<=v.size()){
                v.erase(v.begin()+pos);
                cout<<"delete "<<val<<"at position"<<pos<<".\n";
             }
            else{
            cout <<"invalid pos.\n";

            
        }
          break;
          case 6:
          if(!v.empty()){
              v.pop_back();
              cout<<"deleted from end.\n";}
          else{
              cout<<"vector is empty.\n";
            }
          break;
          case 7:
          cout<<"sort vector in descending order:.\n";
          sort(v.begin(),v.end(),greater<int>());
          break;
          case 8:
          cout<<"VECTOR ELEMENTS:.\n";
          for(int i:v){
            cout<<i<<" ";
          }
          cout<<endl;
          break;
          case 9:
          return ;
          default:
          cout<<"invalid choice..\n";

        }
    }
    while(ch!=9);
}
void listoperations()
{
    list<int>l;
    int ch,pos,val;
do {
        cout<<"\n....List operations....\n";
        cout<<"1.insert at beginning\n";
        cout<<"2.insert at end\n";
        cout<<"3.insert at a specific position\n";
        cout<<"4.delete at beginning\n";
        cout<<"5.delete at beginning\n";
        cout<<"6.delete at a specific position\n";
        cout<<"7.sort in descending order\n";
        cout<<"8.Display\n";
        cout<<"9.exit\n";\
        cout<<"enter your choice:";
        cin>>ch;
        switch(ch)
        {
             case 1:
            cout<<"enter value to insert at beginning:";
            cin>>val;
            l.push_front(val);
            break;
            case 2:
             cout<<"enter value to insert at end:";
            cin>>val;
            l.push_back(val);
            break;
            case 3:
             cout<<"enter value to insert at a specific pos:";
             cin>>pos;
            if(pos>=0 && pos<=l.size()){
                cout<<"enter value to insert:";
                cin>>val;
                auto it=l.begin();
                advance(it,pos);
                l.insert(it,val);
                cout<<"inserted "<<val<<"at position"<<pos<<".\n";
             }
            else{
            cout <<"invalid pos.\n";
            
            }
            break;
            case 4:
            if(!l.empty()){
                l.pop_front();
                cout<<"deleted from beginning.\n";
            }else{
                cout<<"vector is empty.\n";
            }
            break;
            case 5:
            cout<<"enter position to delete :";
             cin>>pos;
            if(pos>=0 && pos<=l.size()){
                auto it=l.begin();
                advance (it,pos);

                l.erase(it);
                cout<<"delete val at position"<<pos<<".\n";
             }
            else
            {
            cout <<"invalid pos.\n";       
            }
          break;
          case 6:
          if(!l.empty()){
              l.pop_back();
              cout<<"deleted from end.\n";}
          else{
              cout<<"vector is empty.\n";
            }
          break;
          case 7:
          cout<<"sort list in descending order:.\n";
          l.sort(greater <int>());
          break;
          case 8:
          cout<<"LIST ELEMENTS:.\n";
          for(int i:l){
            cout<<i<<" ";
          }
          cout<<endl;
          break;
          case 9:
          return ;
          default:
          cout<<"invalid choice..\n";

        }
    }
    while(ch!=9);
}
void mapoperations(){
    map<int,string>m;
    int ch ,key;
    string value;
    do
    {
        cout<<"\n---Map operations--\n";
        cout<<"1.Insert key-value pair\n";
        cout<<"2.delete key\n";
        cout<<"3.display map\n";
        cout<<"4.exit\n";
        cout<<"enter your choice:";
        cin>>ch;
        switch(ch)
        {
            case 1:
            cout<<"enter key:";
            cin>>key;
            cout<<"enter value:";
            cin>>value;
            m[key]=value;
            break;
            case 2:
            cout<<"enter key to be deleted:";
            cin>>key;
            if(m.erase(key)){
                cout<<"key"<<key<<"deleted.\n";
            }
            else{
                cout<<"key not found.\n";
            }
            break;
            case 3:
            cout<<"map contents:\n";
            for(auto&pair:m) // range-based for loop 
            {
                cout<<pair.first<<":"<<pair.second<<endl;
            }
            break;
            case 4:
            return;
            default:
            cout<<"invalid choice.\n";
        }
    }while(ch!=4);
}
void setoperations(){
    set<int>s;
    int ch,val;
    do
    {
       cout << "\n--- Set Operations ---\n";
        cout << "1. Insert Element\n";
        cout << "2. Delete Element\n";
        cout << "3. Search Element\n";
        cout << "4. Display Elements\n";
        cout << "5. exit\n";
        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch) { 
            case 1:
            cout<<"enter value to insert:.\n";
            cin>>val;
            if(s.insert(val).second){
                cout<<"inserted"<<val<<"into the set.\n";
            }
            else{
                cout<<"value"<<val<<"already exists in the set.\n";
            }
            break;
            case 2:
            cout<<"enter value to be deleted:";
            cin>>val;
            if(s.erase(val)){
                cout<<"deleted"<<val<<"from the set.\n";
            }
                else{
                    cout<<"value"<<val<<"not found in the set.\n";
                    }
                    break;
            case 3:
            cout<<"enter value to search:"; 
            cin>>val;
            if(s.find(val)!=s.end()){
                cout<<"value"<<val<<"is present in set.\n"; 
            }  
            else{
                cout<<"value"<<val<<"is not present in the set.\n";
            }     
            break;
            case 4:
            cout<<"set elements:";
            for(int val:s){
                cout<<val<<" ";
            }
            cout<<endl;
            break;
            case 5:
            return ;
            default:
            cout<<"invalid choice ..\n";
       }
    }while(ch!=5);
}
int main() {
    int choice;

    do {
        cout << "\n--- Main Menu ---\n";
        cout << "1. Vector Operations\n";
        cout << "2. List Operations\n";
        cout << "3. Map Operations\n";
        cout << "4. Set Operations\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                vectoroperations();
                break;
            case 2:
                listoperations();
                break;
            case 3:
                mapoperations();
                break;
            case 4:
                setoperations();
                break;
            case 5:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    return 0;
}