int CMaze::GetShape(int x, int y) // parameter : 좌표
{
	int shape = 0;
	if(m_arrayMaze[y][x] != 0) // 벽이 존재하는 경우에만
	{
		if(y > 0 && m_arrayMaze[y-1][x]) // 위쪽 벽 존재여부
			shape |= UP;
		if(y < MAZE_SIZE -1 && m_arrayMaze[y+1][x]) // 아래 벽 존재 여부
			shape |= DOWN;
		if (x > 0 && m_arrayMaze[y][x-1]) // 왼쪽 벽 존재 여부
			shape |= LEFT;
		if ( x < MAZE_SIZE -1 && m_arrayMaze[y][x+1]) // 오른쪽 벽 존재 여부
			shqpe |= RIGHT;
	}
	return shape;
}
