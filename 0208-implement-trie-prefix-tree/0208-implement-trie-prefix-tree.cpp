class Trie {
public:
    struct TrieNode{
        bool isEndofword;
        TrieNode* children[26];

        TrieNode(){
            isEndofword = false;
            for(int i = 0; i < 26; i++){
                children[i] = NULL;
            }
        }
    };

    TrieNode* root;

    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* curr = root;
        for(int i = 0; i < word.length(); i++){
            char ch = word[i];
            int idx = ch - 'a';

            if(curr -> children[idx] == NULL){
                curr -> children[idx] = new TrieNode();
            }
            curr = curr -> children[idx];
        }
        curr -> isEndofword = true;
        
    }
    
    bool search(string word) {
        TrieNode* curr = root;
        for(int i = 0; i < word.length(); i++){
            char ch = word[i];
            int idx = ch - 'a';

            if(curr -> children[idx] == NULL){
                return false;
            }
            curr = curr -> children[idx];
        }
        if(curr != NULL && curr -> isEndofword == true) return true;
        return false;
    }
    
    bool startsWith(string prefix) {
        TrieNode* curr = root;
        int i = 0;
        for(; i < prefix.length(); i++){
            char ch = prefix[i];
            int idx = ch - 'a';

            if(curr -> children[idx] == NULL){
                return false;
            }
            curr = curr -> children[idx];
        }
        if(i == prefix.length()) return true;
        return false;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */