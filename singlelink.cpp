#include <iostream>
#include <string>
using namespace std;

Class Node 
{
public:
    int noMhs;
    Node *next;
};

class LinkedList 
{;
    Node *START;

public:
    LinkedList()
    {
        START = NULL;
    }


    void addNode()
    {
        int nim;
        cout << "Masukkan NIM : ";
        cin >> nim;

        Node *newNode = new Node();
        node *nodeBaru = nim;

        if (START == NULL || nim <= START->noMhs)
        {
            if (START != NULL && nim == START->noMhs)
            {
                cout << "nDuplikasi noMhs tidak diizinkan\n";
                return;
            }
        

            nodeBaru->next = START;
            START = nodeBaru;
            return;
        }

