typeof void *POS;

template <class TYPE> class DoubleList
{
	public:
		enum Exception
		{
			INVALID_POS, EMPTY_LIST
		};

	// constructor, Destructor ...
	// other opertaions ...

	protected:
		struct Node
		{
			TYPE data;
			Node* pNext;
			Node* pPrev;
		};

	Node *m_nNodeHead;
	Node *m_nNodeTail;
	int m_nCount;
}
