#include<iostream>
#include "lru.cpp"

using namespace std;




int main()
{


LRUCache lru(3);

lru.insertKeyValue("mango",10);

lru.insertKeyValue("apple",20);

lru.insertKeyValue("guava",30);

cout<<lru.mostRecentKey()<<endl;

lru.insertKeyValue("mango",40);

cout<<lru.mostRecentKey()<<endl;

lru.insertKeyValue("banana",20);

if(lru.getValue("apple")==NULL)
{

    cout<<"apple doesn't exist";
}


if(lru.getValue("guava")==NULL)
{

    cout<<"guava doesn't exist";
}


if(lru.getValue("banana")==NULL)
{

    cout<<"banana doesn't exist";
}

if(lru.getValue("mango")==NULL)
{

    cout<<"mango doesn't exist";
}





return 0;


}

