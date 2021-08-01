#include<iostream>
#include<list>
#include<string>
#include<unordered_map>
using namespace std;

//Creating class Node concidering it as a item ;
class Node
{
public:
    string key;
    int value;
    Node(string key,int value)
    {

        this->key=key;
        this->value=value;
    }


};

class LRUCache
{
public:
    int maxSize;

    list<Node> l;

    unordered_map<string,list<Node>:: iterator > m;
    LRUCache(int maxSize)
    {

        this->maxSize=maxSize>1?maxSize:1;

    }
    void insertKeyValue(string key,int value)
    {
        // case :when item is already present in hashmap;
        if(m.count(key)!=0)
        {

            auto it=m[key];

            it->value=value;
        }
        else{

            if(l.size()==maxSize)
            {
                //Check if Cache is full or not
                //remove the least recently used item from cache

                Node last=l.back();

                m.erase(last.key);  //remove from hash map

                l.pop_back();  //remove from linked list

            }
            Node n(key,value);
            l.push_front(n);
            m[key]=l.begin();



        }




    }
    int *getValue(string key)

    {
        //case : if key is present in Cache
        if(m.count(key)!=0)
        {
            auto it=m[key];


            int value=it->value;

            //updating least recent use by adding at the top of cache
            l.push_front(*it);

            l.erase(it);

            m[key]=l.begin();

            return &l.begin()->value;

        }


    }
    string mostRecentKey()
    {
      return l.front().key;

    }
};

