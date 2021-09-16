/*
 * @lc app=leetcode id=208 lang=cpp
 *
 * [208] Implement Trie (Prefix Tree)
 */

// @lc code=start
class Trie
{
public:
    class TrieNode
    {
    public:
        TrieNode *child[26];
        bool isEnd = false;
    };
    TrieNode *root;
    /** Initialize your data structure here. */
    Trie()
    {
        root = new TrieNode();
    }

    /** Inserts a word into the trie. */
    void insert(string word)
    {
        TrieNode *curr = root;
        for (auto i : word)
        {
            if (curr->child[i - 'a'] == NULL)
                curr->child[i - 'a'] = new TrieNode();
            curr = curr->child[i - 'a'];
        }
        curr->isEnd = true;
    }

    /** Returns if the word is in the trie. */
    bool search(string word)
    {
        TrieNode *curr = root;
        for (auto i : word)
        {
            if (curr->child[i - 'a'] == NULL)
                return false;
            curr = curr->child[i - 'a'];
        }
        if (curr->isEnd)
            return true;
        return false;
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix)
    {
        TrieNode *curr = root;
        for (auto i : prefix)
        {
            if (curr->child[i - 'a'] == NULL)
                return false;
            curr = curr->child[i - 'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
// @lc code=end
