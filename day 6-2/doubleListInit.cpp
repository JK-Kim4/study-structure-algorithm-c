template <class TYPE>
void DoubleList<TYPE>::_init()
{
	m_nNodeHead = new Node;
	m_nNodeTail = new Node;

	m_nNodeHead->pNext = m_pNodeTail;
	m_nNodeHead->pPref = m_NodeHead;

	m_nNodeTail->pNext = m_pNodeTail;
	m_nNodeTail->pPref = m_pNodeHead;

	m_nCount = 0;

}
