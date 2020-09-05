#include <iostream>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

class Trie{



struct Trienode
{
  char val;
  int count;
  int end;

  Trienode *child[26]; 


};
Trienode *root;

Trienode *getnode(int index)
{

	Trienode *newnode = new Trienode;
	newnode->val = 'a' + index;
	newnode->count = newnode->end = 0;

	for(int i=0; i<26; ++i)
	
		newnode->child[i] = NULL;

	return newnode;


}

public:

// Insitiallizing tree with nodes here 

Trie() // contructor
{

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  root = getnode('{'-'a');



}

// search fn
bool search(string word)
{
 
Trienode *curr = root;
int index;

for (int i=0; word[i] != '\0'; ++i )
  {
  	index = word[i]-'a';
  	if(curr->child[index] == NULL)
  		return false;
  	curr = curr->child[index];


  }

  return (curr->end > 0);

}

// insert fn
void insert(string word)
{
   Trienode *curr = root;
   int index;

   for (int i=0; word[i] != '\0'; ++i)
   {
   	index = word[i]-'a';
   	if (curr->child[index] == NULL)
   		curr->child[index] = getnode(index);
   	curr->child[index]->count += 1;
   	curr = curr->child[index];

   }
curr->end += 1;

}


bool startsWith(string prefix)

{
  
  Trienode *curr = root;
  int index;



  for(int i=0; prefix[i] != '\0'; ++i)
  {
  	index = prefix[i]-'a';
  	if (curr->child[index] == NULL)
  		return false;
  	curr = curr->child[index];

  }

return (curr->count > 0);

}

};



int main()
{
  string word, prefix;
  Trie *ob = new Trie();
  ob->insert(word);
  bool param_2 = ob->search(word);
  bool param_3 = ob->startsWith(prefix); 




}


// DSA: Traversing tree
// Time : O(len(longest string)*Queries)
// Space : O(217B to no. of Nodes)