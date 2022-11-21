//NAME: RAIYAN MASOOD HRIDDHO
//  ID: 1931117042
//Task-02 from Lab-05_Sorted_List_Array


//sortedtype.h

#ifndef SORTEDTYPE_H_INCLUDED
#define SORTEDTYPE_H_INCLUDED
const int MAX_ITEMS = 5;

template <class ItemType>
class SortedType
{
public :
    SortedType();
    void MakeEmpty();
    bool IsFull();
    bool IsEmpty();
    int LengthIs();
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void RetrieveItem(ItemType&, bool&);
    void ResetList();
    void GetNextItem(ItemType&);
private:
    int length;
    ItemType info[MAX_ITEMS];
    int currentPos;
};
#endif // SORTEDTYPE_H_INCLUDED
