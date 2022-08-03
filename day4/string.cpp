class String
{
	protected:
		char* *m_pBuffer; //스트링 버퍼
		//내부 사용 함수	
		void _init();
		void _clear();
		void _copy(const char* lpsz);
	public:
		//constructor, destructor
		//operators
		//other member functions
}

void String:: _init()
{
	m_pBuffer = 0;
}

void String:: _clear()
{
	if(m_pBuffer) //m_pBuffer 할당 되어있을 경우, 해제 및 초기화 진행
		delete [] m_pBuffer;
	_init();
}

void String:: copy(const char* lpsz)
{
	if(lpsz != 0)
		int len = strlen(lpsz);
		m_pBuffer = new char[len + 1];
		if(m_pBuffer)
			strcpy(m_pBuffer, lpsz);
}
