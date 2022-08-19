template <class TYPE>
POS DoubleList<TYPE>:InsertBefore(POS pos, const TYPE& newElem)
{
	if(pos == (POS)m_nNodeHead || pos == 0)
		return 0; // 인자로 받은 pos가 head node이거나 존재하지 않을 경우

	Node *pNode = (Node*)pos; 
	Node *pNewNode = new Node;

	pNewNode->data = newElem;
	pNode->pPrev->pNext = pNewNode;
	pNewNode->pPrev = pNode->pPrev;
	pNode->pPrev = pNewNode;
	pNewNove->pNext = pNode;

	m_nCount ++;

	return pNewNode;
}
