//https://www.geeksforgeeks.org/problems/lru-cache/1



class LRUCache 
{
  private:
    int capacity;
    list<pair<int, int>> cache; // Doubly Linked List: {key, value}
    unordered_map<int, list<pair<int, int>>::iterator> mp; // Key -> Node in List
  public:
    // Constructor for initializing the cache capacity with the given value.
    LRUCache(int cap) 
    {
        capacity = cap;
    }

    // Function to return value corresponding to the key.
    int get(int key) 
    {
        if (mp.find(key) == mp.end()) return -1; // Key not found
        auto it = mp[key];                       // Get iterator from map
        int value = it->second;
        cache.erase(it);                         // Remove from current position
        cache.push_front({key, value});          // Move to front (most recently used)
        mp[key] = cache.begin();                 // Update map
        return value;
    }

    // Function for storing key-value pair.
    void put(int key, int value) 
    {
        if (mp.find(key) != mp.end()) {          // If key exists
            cache.erase(mp[key]);                // Remove old entry
        } else if (cache.size() == capacity) {   // Cache is full
            mp.erase(cache.back().first);        // Remove LRU from map
            cache.pop_back();                    // Remove LRU from list
        }
        cache.push_front({key, value});          // Add new entry to front
        mp[key] = cache.begin();                 // Update map
    }
};
