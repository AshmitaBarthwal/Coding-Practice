//https://www.geeksforgeeks.org/problems/trie-insert-and-search0651/1



// User function template for C++
class Trie {

  unordered_set <string> us;
  public:
    Trie() {}

    void insert(string &word) {
        us.insert(word);
    }

    bool search(string &word) {
        if(us.find(word) != us.end())
            return true;     
     return false;
    }

    bool isPrefix(string &word) {
        int n = word.length();
        for(auto s : us){
            if(s.length()>=n){
                string str = s.substr(0,n);
                if(word == str) return true;
            }
        }
        return false;
};
