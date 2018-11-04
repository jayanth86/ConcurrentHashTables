#include <list>
using namespace std;

class HashTable 
{ 
    int BUCKET;    // No. of buckets 
  
    // Pointer to an array containing buckets 
    std::list<int> *table;
public: 
    HashTable(int V);  // Constructor 
    // inserts a key into hash table 
    void insertItem(int x); 
    
    // deletes a key from hash table 
    void deleteItem(int key); 
  
    // hash function to map values to key 
    int hashFunction(int x) { 
        return (x % BUCKET); 
    } 
  
    void displayHash(); 
}; 


