#include <iostream>
#include <iterator>
#include <set>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

int Recherche(int element, set<int> s1)
{
    int T = 0;
    if (s1.count(element))
        return T = 1;
    else
        return T;
}

int Recherche1(int element, set<int>::iterator begin, set<int>::iterator end)
{
    int t1 = 0;
    for (set<int>::iterator setIterator = begin; setIterator != end; setIterator++)
    {
        if (*setIterator == element)
        {
            return t1 = 1;
        }
    }
    return t1;
}

template <typename Iterable, typename element, typename Iterator, typename Begin, typename End>
int Recherche3(Iterable field, Iterator iterator, element target, Begin begin, End end)
{
    int t2 = 0;
    for (
        iterator = begin;
        iterator != end;
        iterator++)
    {
        if (*iterator == target)
        {
            return t2 = 1;
        }
    }
    return t2;
}

int main()
{
    set<int> s1;
    set<int>::iterator it;
    int i, valeur;
    for (i = 1; i < 101; ++i)
    {
        s1.insert(i);
    }
    cout << "entrer la valeur de l'element a cherche"
         << "\t";
    cin >> valeur;

    cout << "first method" << endl;
    if (Recherche(valeur, s1) == 1)
        cout << "element existe\n"
             << endl;

    else
        cout << "element not existe\n"
             << endl;
    cout << "second method" << endl;
    if (Recherche1(valeur, s1.begin(), s1.end()) == 1)
        cout << "element existe\n"
             << endl;
    else
        cout << "element not existe\n"
             << endl;

    cout << "template method" << endl;
    if (Recherche3(s1, it, valeur, s1.begin(), s1.end()) == 1)
    {
        cout << "element existe\n"
             << endl;
    }
    else
    {
        cout << "element not existe\n"
             << endl;
    }

    cout << "template method using vector string\n";
    vector<string> vec1 = {"hello"};
    vector<string>::iterator vectorIterator;
    if (Recherche3(vec1, vectorIterator, "hello", vec1.begin(), vec1.end()))
    {
        cout << "hello existe\n"
             << endl;
    }
    else
    {
        cout << "hello not existe\n"
             << endl;
    }

    cout << "template method using int list\n";
    list<int> list1;
    list<int>::iterator it1;
    for (int i = 1; i < 101; i++)
    {
        list1.push_back(i);
    }
    if (Recherche3(list1, it1, valeur, list1.begin(), list1.end()) == 1)
    {
        cout << "element existe\n"
             << endl;
    }
    else
    {
        cout << "element not existe\n"
             << endl;
    }

    cout << "template method using float array\n";
    float Table[100];
    float *TableIterator = Table;
    for (int i = 1; i < 101; i++)
    {
        Table[i - 1] = i;
    }
    if (Recherche3(Table, TableIterator, valeur, &Table[0], &Table[100]) == 1)
    {
        cout << "element existe\n"
             << endl;
    }
    else
    {
        cout << "element not existe\n"
             << endl;
    }

    return 0;
}