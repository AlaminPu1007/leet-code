#include <bits/stdc++.h>
using namespace std;

/* Initialize a trie node that will hold a self 26 alphabet character reference node */
class Node
{
public:
    Node *links[26];
    bool flag = false;

    bool containsKey(char ch)
    {
        return (links[ch - 'a'] != NULL);
    }

    // put 0 to 26 base pointer address of each character
    void put(char ch, Node *node)
    {
        links[ch - 'a'] = node;
    }

    // return the next node reference or memory address
    Node *getNextNode(char ch)
    {
        return links[ch - 'a'];
    }

    // this method will mark last node pointer flag is true to identify the end of the given word
    void setEnd()
    {
        flag = true;
    }

    // this method will identify the end of the given word
    bool isEnd()
    {
        return flag;
    }
};

class Trie
{
private:
    Node *root;

public:
    Trie()
    {
        root = new Node();
    }

    // insert into root, (O(n)) time complexity
    void insert(string word)
    {
        // make a reference of root node
        Node *node = root;

        for (int i = 0; i < word.size(); i++)
        {
            // check character is already exist
            if (!node->containsKey(word[i]))
            {
                node->put(word[i], new Node());
            }

            // move to reference trie
            node = node->getNextNode(word[i]);
        }

        // finally mark last node flag as a true
        node->setEnd();
    }

    // search specific word, (requires O(word_len)) time complexity
    bool search(string word)
    {
        Node *node = root;

        for (int i = 0; i < word.size(); i++)
        {
            if (!node->containsKey(word[i]))
                return false;

            node = node->getNextNode(word[i]);
        }

        return node->isEnd();
    }
    // search specific prefix, (requires O(prefix_len)) time complexity
    bool startsWith(string prefix)
    {
        Node *node = root;

        for (int i = 0; i < prefix.size(); i++)
        {
            if (!node->containsKey(prefix[i]))
                return false;

            node = node->getNextNode(prefix[i]);
        }

        return true;
    }
};

int main(void)
{
    Trie obj;
    vector<string> arr = {"apple", "apple", "app", "bac"};

    for (auto item : arr)
    {
        obj.insert(item);
    }

    cout << "find out the word -> ";
    for (auto item : arr)
    {
        cout << obj.search(item) << endl;
    }
    return 0;
}
