#include <bits/stdc++.h>
using namespace std;

/* Initialize a trie node that will hold a self 26 alphabet character reference node */
class Node
{
public:
    Node *links[26];
    bool flag = false;

    // check contains a character
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

    // check a valid word
    bool isEnd()
    {
        return flag;
    }
};

// create a trie dsa
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
    void insertIntoTrie(string word)
    {
        int n = word.size();

        Node *node = root;

        for (int i = 0; i < n; i++)
        {
            if (!node->containsKey(word[i]))
                node->put(word[i], new Node());

            // move to reference trie
            node = node->getNextNode(word[i]);
        }

        // finally mark last node flag as a true
        node->setEnd();
    }

public:
    // search specific word, (requires O(word_len)) time complexity
    string isValidWord(string word)
    {
        int n = word.size();
        Node *node = root;

        for (int i = 0; i < n; i++)
        {
            if (!node->containsKey(word[i]))
                return word;

            // move to reference trie
            node = node->getNextNode(word[i]);

            // it it's a valid word
            if (node->isEnd())
                return word.substr(0, i + 1);
        }

        return word;
    }
};

class Solution
{
public:
    string replaceWords(vector<string> &dictionary, string sentence)
    {
        int n = sentence.size(), m = dictionary.size();
        string res = "";

        istringstream sStream(sentence);

        // initialized a trie
        Trie tr;

        for (auto item : dictionary)
            tr.insertIntoTrie(item);

        string word;

        while (getline(sStream, word, ' '))
        {
            res += tr.isValidWord(word) + " ";
        }

        // remove extra space
        res.pop_back();

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<string> dictionary = {"a", "b", "c"};
    string sentence = "aadsfasf absbs bbab cadsfafs";
    cout << obj.replaceWords(dictionary, sentence) << endl;
    return 0;
}