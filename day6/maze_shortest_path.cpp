void CMaze::ShortestPath()
{
	int i, j = 0;
	int x, y;
	int x1, y1;
	while(m_arrayRecord[i] >= 0)
	{
		x = m_arrayRecord[i];
		y = m_arrayRecord[i+1];
		j = i + 2; //한 좌표는 x, y쌍으로 이루어지기 때문에 +2
		while(m_arrayRecord[j] >= 0)
		{
			x1 = m_arrayRecord[j];
			y1 = m_arrayRecord[j+1];
			if(x == x1 && y == y1)
			{
				j = DeletePath(i, j);
			}
			j += 2;
		}
	i += 2;
	}
}
