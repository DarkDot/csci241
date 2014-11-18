template <class T>
void buildList(vector<T>& set, const char* fileName)
{
//This function should read items from an input file and put them into a vector. The first argument to this function is a reference to a vector object that will be used to store the items. The second argument is a C-style string containing the full pathname of the input file.

//The function should first open the file for input, then read items from the file using the >> operator one at a time until end of file, inserting them into the vector. Finally, it should close the input file. Here's some pseudocode for the logic:

    T item;
    ifstream inFile;

    inFile.open(fileName);
    if (!inFile)
    {
        cout << endl << "File "<<inFile<<" not found"<<endl;
        exit(1);                //running away now!
    }
    
    inFile>>item;

    while (inFile)
    {
        set.push_back(item);
        inFile>>item;
    }
    
    inFile.close();
}

template <class T>
void printList(const vector<T>& set, int itemWidth, int numPerLine){
    for (int i=0; i<(int)set.size();i++)
    {
        if (!(i%numPerLine))
            cout<<endl;
        cout<<setw(itemWidth)<<set[i];
    }
    cout<<endl;
}

template <class T>
bool lessThan(const T& item1, const T& item2)
{
    return (item1 < item2);
}

template <class T>
bool greaterThan(const T& item1, const T& item2)
{
    reuturn (item1 > item2);
}