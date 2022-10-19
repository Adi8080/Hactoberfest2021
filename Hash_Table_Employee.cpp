#include<iostream>
#include<list>
#include<cstring>
using namespace std;

//Hash table to implement employee information

class HashTable
{
     
    private:
        static const int hashGroups=10000;
        list<pair<int,string>> table[hashGroups];     //List1,Index 0, list 1, List 2, index 2, list 2...
        
    public:
        int key;
        string value;
        bool isEmpty() const;
        int hashFunction(int key);
        void InsertItem(int key,string value);
        void RemoveItem(int key);
        string SearchTable(int key);
        void printTable();
};

bool HashTable::isEmpty() const
{  
    int sum;
    for (int i{};i<hashGroups;i++)
    {
        sum += table[i].size();

    }
    if(!sum)
    {
        return true;
    }
    return false;
}

int HashTable::hashFunction(int key) 
{
    return key%hashGroups;
}

void HashTable::InsertItem(int key, string value)
{
    int hashValue=hashFunction(key);
    auto& cell=table[hashValue];
    auto bItr=begin(cell);
    bool keyExists=false;
    for(; bItr !=end(cell); bItr++)
    {
        if(bItr->first==key)
        {
            keyExists=true;
            bItr->second=value;
            cout<<"[Warning] Key exists. Value replaced"<<endl;
            break;
        }    
        cout<<endl;
    }
    if(!keyExists)
    {
        cell.emplace_back(key,value);
        cout<<endl;
    }
    return;
}

string HashTable::SearchTable(int key)
{
    int hashValue=hashFunction(key);
    auto& cell=table[hashValue];
    auto bItr=begin(cell);
    bool keyExists=false;
    for(;bItr!=end(cell);bItr++)
    {
        if(bItr->first==key)
        {
            keyExists=true;
            cout<<"[Warning]KEy exists. Value replaced"<<bItr->first<<endl;
            break;

        }
        cout<<endl;
    }
    if(!keyExists)
    {
       cout<<bItr->first<<endl;
    }
    return 0;
}

void HashTable::RemoveItem(int key)
{
    int hashValue = hashFunction(key);
    auto& cell=table[hashValue];
    auto bItr=begin(cell);
    bool keyExists=false;
    for(;bItr!=end(cell);bItr++)

    if(bItr->first==key)
    {
        keyExists=true;
        bItr=cell.erase(bItr);
        cout<<"[Information]Item removed and replaced"<<endl;
        break;

    }
    if(!keyExists)
    {
        cout<<"[Warning] KEy not found. Pair not removed"<<endl;

    }
}

void HashTable::printTable()
{
    for (int i{};i<hashGroups; i++)
    {
        if(table[i].size()==0)  continue;

        auto bItr=table[i].begin();
        for(;bItr!=table[i].end();bItr++)
        {
            cout<<"[Information] Key:"<<bItr->first<<"Value: "<<bItr->second<<endl;
        }
    }
    return;

}

int main()
{
    HashTable HT;
    int key;
    string value;

    if(HT.isEmpty())
    {
        cout<<"Correct answer. Good job Hey Buddy"<<endl;

    }

    else
    {
        cout<<"Oh ..Oh..We need to check out code!!"<<endl;
    }
    

int c;
   while(1)
   {
        cout<<"1. Insert element into the table"<<endl;
        cout<<"2. Search element from the key"<<endl;
        cout<<"3. Delete element at a key"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice :";
        cin>>c;

        switch (c)
        {
            case 1:
                cout<<"Enter value of the element to be inserted: ";
                cin>>value;
                cout<<"Enter key at which element to be inserted : ";
                cin>>key;
                int i;
               /* for(i=11111;i>=12111;i++)
                {
                    
                    cout<<i;
                    break;
                }*/
                HT.InsertItem(key, value);
                break;
                
                case 2:
                    cout<<"Enter key element to be searched :"<<endl;
                    cin>>key;

                     if(HT.isEmpty())
                     {
                         cout<<"oh .oh We need to check out code!!"<<key<<endl;
                     }
                     else
                    {
                       
                        cout<<"\n Element at key is :"<<value<<endl;
                        cout<<HT.SearchTable(key)<<endl;
                    }break;

                    case 3:
                        cout<<"Enter the key of the element to be deleted : ";
                        cin>>key;
                        HT.RemoveItem(key);
                        break;

                    case 4:
                        exit(1);
                        break;
                    
                    default:
                        cout<<"OH...Oh We need to check out the input ";
        }

   }

    
    HT.printTable();

    

    if(HT.isEmpty())
    
    {
        cout<<"oh .oh We need to check out code!!"<<endl;
    }
    else
    {
        cout<<"correct answer! good job"<<endl;
    }

    return 0;
}
