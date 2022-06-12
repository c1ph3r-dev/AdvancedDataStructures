#include <iostream>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <string>
#include <list>

using std::cout;
using std::endl;

/// Linked List
/*
template<class T>
class Node
{
public:
	T value;
	Node* next = nullptr;
};

template<class T>
void printList(Node<T>* n)
{
	while (n)
	{
		std::cout << n->value << std::endl;
		n = n->next;
	}
	std::cout << std::endl;
}

template<class T>
void insertAtTheFront(Node<T>** head, T newValue)
{
	//1. Prepare a new Node
	Node<T>* newNode = new Node<T>();
	newNode->value = newValue;
	//2. Put it in front of current head
	newNode->next = *head;
	//3. Move head of the list to point to the new node
	*head = newNode;
}

template<class T>
void insertAtTheEnd(Node<T>** head, T newValue)
{
	//1. Prepare a new Node
	Node<T>* newNode = new Node<T>();
	newNode->value = newValue;
	newNode->next = nullptr;
	//2. If Linked list is empty, newNode will be a head node
	if (!*head)
	{
		*head = newNode;
		return;
	}
	//3. Find the last node
	Node<T>* n = *head;
	while (n->next != nullptr)
		n = n->next;
	//4. Insert newNode after last node (at the end)
	n->next = newNode;
}

template<class T>
void insertAfter(Node<T>* previous, int newValue)
{
	//1. Check if previous node is a nullptr
	if (!previous)
		throw std::logic_error("previous cannot be a nullptr");
	//2. Prepare a new Node
	Node<T>* newNode = new Node<T>();
	newNode->value = newValue;
	//3. Insert newNode after previous
	newNode->next = previous->next;
	previous->next = newNode;
}

int main()
{
	Node<int>* head = new Node<int>();
	Node<int>* second = new Node<int>();
	Node<int>* third = new Node<int>();

	head->value = 1;
	head->next = second;
	second->value = 2;
	second->next = third;
	third->value = 4;
	third->next = nullptr;

	printList(head);

	// Insert new node at front of list
	insertAtTheFront(&head, -1);
	printList(head);

	// Insert new node at end of list
	insertAtTheEnd(&head, 5);
	printList(head);

	// Insert new node at end of list (with empty linked list)
	Node<int>* newHead = nullptr;
	insertAtTheEnd(&newHead, 1);
	printList(newHead);

	// Insert new node after second
	insertAfter(second, 3);
	printList(head);

	// Error check for insertAfter()
	Node<int>* newNewHead = nullptr;
	try 
	{ 
		insertAfter(newNewHead, 0); 
	}
	catch (std::logic_error e)
	{
		std::cout << e.what() << std::endl;
	}
}
*/

/// Stack
/*
template<class T>
void printStackElements(std::stack<T> stack)
{
	while (!stack.empty())
	{
		std::cout << stack.top() << std::endl;
		stack.pop();
	}
}

int main()
{	//empty, size, push, pop, top
	std::stack<int> testStack;

	if (testStack.empty())
		std::cout << "Stack is empty\n";
	else
		std::cout << "Stack is not empty\n";

	std::cout << "Stack size is " << testStack.size() << std::endl;

	// Adding items to stack
	testStack.push(1);
	testStack.push(2);
	testStack.push(3);

	if (testStack.empty())
		std::cout << "Stack is empty\n";
	else
		std::cout << "Stack is not empty\n";

	std::cout << "Stack size is " << testStack.size() << std::endl;

	// Removing items from stack
	testStack.pop();
	testStack.pop();

	if (testStack.empty())
		std::cout << "Stack is empty\n";
	else
		std::cout << "Stack is not empty\n";

	std::cout << "Stack size is " << testStack.size() << std::endl;

	// Write out elements of stack
	testStack.push(2);
	testStack.push(3);
	printStackElements(testStack);
}
*/

/// Queue
/*
template<class T>
void printQueue(std::queue<T> queue)
{
	while (!queue.empty())
	{
		cout << queue.front() << " ";
		queue.pop();
	}
	cout << endl;
}

int main()
{
	std::queue<int> myQueue;
	myQueue.push(1);
	myQueue.push(2);
	myQueue.push(3);

	cout << "Size is " << myQueue.size() << endl;
	cout << "First element is " << myQueue.front() << endl;
	cout << "Last element is " << myQueue.back() << endl;

	cout << "My queue: " << endl;
	printQueue(myQueue);

}
*/

/// Map
/*
int main()
{
	std::map<std::string, std::string> singleDefDictionary;
	singleDefDictionary.insert(std::pair<std::string, std::string>("orange", "die Orange, die Apfelsine"));
	singleDefDictionary.insert(std::pair<std::string, std::string>("banana", "die Banane"));
	singleDefDictionary.insert(std::pair<std::string, std::string>("strawberry", "die Erdbeere"));
	singleDefDictionary.insert(std::pair<std::string, std::string>("apple", "der Apfel"));

	std::unordered_map<std::string, std::string> uSingleDefDictionary;
	uSingleDefDictionary.insert(std::pair<std::string, std::string>("orange", "die Orange, die Apfelsine"));
	uSingleDefDictionary.insert(std::pair<std::string, std::string>("banana", "die Banane"));
	uSingleDefDictionary.insert(std::pair<std::string, std::string>("strawberry", "die Erdbeere"));
	uSingleDefDictionary.insert(std::pair<std::string, std::string>("apple", "der Apfel"));

	cout << "map" << endl;
	for (auto pair : singleDefDictionary)
		cout << pair.first << " - " << pair.second << endl;
	cout << endl;
	cout << "unordered map" << endl;
	for (auto pair : uSingleDefDictionary)
		cout << pair.first << " - " << pair.second << endl;

	cout << endl;
	// Editing value in a map via key
	singleDefDictionary["strawberry"] = "Die Erdbeere";
	for (auto pair : singleDefDictionary)
		cout << pair.first << " - " << pair.second << endl;
	cout << endl;

	// Removing a pair via a key
	singleDefDictionary.erase("apple");
	for (auto pair : singleDefDictionary)
		cout << pair.first << " - " << pair.second << endl;
	cout << endl;

	// Clearing map
	singleDefDictionary.clear();
	for (auto pair : singleDefDictionary)
		cout << pair.first << " - " << pair.second << endl;
	cout << endl << endl << endl;

	/// Pokedex
	std::map<std::string, std::list<std::string>> pokedex;

	std::list<std::string> pikachuAttacks{ "thunder shock", "tail whip", "quick attack" };
	std::list<std::string> charmanderAttacks{ "flamethrower", "scary face" };
	std::list<std::string> chikoritaAttacks{ "razor leaf", "poison powder" };

	pokedex.insert(std::pair<std::string, std::list<std::string>>("Pikachu", pikachuAttacks));
	pokedex.insert(std::pair<std::string, std::list<std::string>>("Charmander", charmanderAttacks));
	pokedex.insert(std::pair<std::string, std::list<std::string>>("Chikorita", chikoritaAttacks));

	for (auto pair : pokedex)
	{
		cout << pair.first << " - ";

		for (auto attack : pair.second)
			cout << attack << ", ";

		cout << endl;
	}
}
*/

/// Doubly Linked List
/*
template <typename T>
class Node
{
public:
	T value;
	Node* next = nullptr;
	Node* previous = nullptr;
};

template<class T>
void insertAtTheFront(Node<T>** head, T newValue)
{
	//1. Prepare a new Node
	Node<T>* newNode = new Node<T>();
	newNode->value = newValue;
	//2. Put it in front of current head
	newNode->next = *head;
	//3. Reference newNode as previous for old head
	*head->previous = newNode;
	//4. Move head of the list to point to the new node
	*head = newNode;
}

template<class T>
void insertAtTheEnd(Node<T>** head, T newValue)
{
	//1. Prepare a new Node
	Node<T>* newNode = new Node<T>();
	newNode->value = newValue;
	newNode->next = nullptr;
	//2. If Linked list is empty, newNode will be a head node
	if (!*head)
	{
		*head = newNode;
		return;
	}
	//3. Find the last node
	Node<T>* n = *head;
	while (n->next != nullptr)
		n = n->next;
	//4. Insert newNode after last node (at the end)
	n->next = newNode;
	//5. Reference old last node as previous
	newNode->previous = n;
}

template<class T>
void insertAfter(Node<T>* previous, int newValue)
{
	//1. Check if previous node is a nullptr
	if (!previous)
		throw std::logic_error("previous cannot be a nullptr");
	//2. Prepare a new Node
	Node<T>* newNode = new Node<T>();
	newNode->value = newValue;
	//3. Insert newNode after previous
	newNode->next = previous->next;
	previous->next = newNode;
	//5. Reference old last node as previous
	newNode->previous = previous;
}

template<class T>
void insertBefore(Node<T> next, int newValue)
{
	//1. Check if next node is a nullptr
	if (!next)
		throw std::logic_error("previous cannot be a nullptr");
	//2. Prepare a new Node
	Node<T>* newNode = new Node<T>();
	newNode->value = newValue;
	//3. Set previous as next->previous
	newNode->previous = next->previous;
	//4. Insert newNode before next
	newNode->next = next;
	next->previous = newNode;
}

template<class T>
void printForward(Node<T>* head) 
{
	Node<T>* traverser = head;
	while (traverser != nullptr)
	{
		cout << traverser->value << endl;
		traverser = traverser->next;
	}
	cout << endl;
}

template<class T>
void printBackward(Node<T>* tail)
{
	Node<T>* traverser = tail;
	while (traverser != nullptr)
	{
		cout << traverser->value << endl;
		traverser = traverser->previous;
	}
	cout << endl;
}

int main()
{
	Node<int>* head;
	Node<int>* tail;

	// add first node
	Node<int>* node = new Node<int>();
	node->value = 4;
	head = node;
	tail = node;
	// add second node
	node = new Node<int>();
	node->value = 5;
	node->previous = tail;
	tail->next = node;
	tail = node;
	// add third node
	node = new Node<int>();
	node->value = 6;
	node->previous = tail;
	tail->next = node;
	tail = node;
	// add fourth node
	node = new Node<int>();
	node->value = 7;
	node->previous = tail;
	tail->next = node;
	tail = node;

	printForward(head);
	printBackward(tail);
}
*/

/// Tree and DFS algorithms (Also traversing via recursion)
template<class T>
class Node
{
public:
	T data;
	Node* left;
	Node* right;
};

template<class T>
Node<T>* createNode(T data)
{
	//1. Create a new node
	Node<T>* newNode = new Node<T>();
	//2. Set the data of the node
	newNode->data = data;
	//3. Set left and right child nodes
	newNode->left = nullptr;
	newNode->right = nullptr;
	//4. Return reference of this node
	return newNode;
}

// Preorder DFS traversal algorithm
template<class T>
void printTreePreOrder(Node<T>* root)
{
	if (root == nullptr) return;

	cout << root->data << endl;
	printTreePreOrder(root->left);
	printTreePreOrder(root->right);
}

// Inorder DFS traversal algorithm
template<class T>
void printTreeInOrder(Node<T>* root)
{
	if (root == nullptr) return;

	printTreeInOrder(root->left);
	cout << root->data << endl;
	printTreeInOrder(root->right);
}

template<class T>
void printTreePostOrder(Node<T>* root)
{
	if (root == nullptr) return;

	printTreePostOrder(root->left);
	printTreePostOrder(root->right);
	cout << root->data << endl;
}

int main()
{
	// Level 1
	auto root = createNode(1);
	// Level 2
	root->left = createNode(2);
	root->right = createNode(3);
	// Level 3
	root->left->left = createNode(4);
	root->left->right = createNode(5);
	root->right->left = createNode(6);
	root->right->right = createNode(7);
	// Level 4
	root->left->right->left = createNode(9);
	root->right->right->left = createNode(15);

	printTreePreOrder(root);
	cout << endl;
	printTreeInOrder(root);
	cout << endl;
	printTreePostOrder(root);
}