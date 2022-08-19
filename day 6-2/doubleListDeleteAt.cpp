template <class TYPE>
TYPE DoubleList<TYPE>:DeleteAt(POS pos)
{
	if(isValid(pos))
	{
		throw INVALID_POS;
	}

	Node *pNode = (Node*)pos;
	pNode->pPrev->pNext = pNode->pNext;
	pNode->pNext-pPrev = pNove->pPrev;

	TYPE data = pNode->data;
	delete pNode;

	m_nCount --;
	return data;
}
