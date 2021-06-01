#include "Balle.h"

void Balle::rebondir_R(int Pos_B_X, int Pos_B_Y, int Pos_R_X, int Pos_R_Y, ref int dir)
{
	if ((0 < (Pos_B_X - Pos_R_X) && ((Pos_B_X - Pos_R_X < larg_R))) && ((0 < (Pos_B_Y)) && (Pos_B_Y == Pos_BR_Y)))
	{
		if (dir == 3)
		{
			dir = 1;
		}
		else if (dir == 4)
		{
			dir = 2;
		}
	}

}

void Balle::rebondir_BR(int Pos_B_X, int Pos_B_Y, int Pos_BR_X, int Pos_BR_Y, ref int dir)
{
	if (dir == 1)
	{
		if (Pos_B_X == Pos_BR_X)
		{
			dir = 2;
		}
		else if (Pos_B_Y == Pos_BR_Y)
		{ 
			dir = 3;
		}
	}

	else if (dir == 2)
	{
		if (Pos_B_X == Pos_BR_X + larg_BR)
		{ 
			dir = 1;
		}
		else if (Pos_B_Y == Pos_BR_Y)
		{
			dir = 4;
		}
	}
	
	else if (dir == 3)
	{
		if (Pos_B_X == Pos_BR_X)
		{
			dir = 4;
		}
		else if (Pos_B_Y == Pos_BR_Y + haut)
		{
			dir = 1;
		}
	}

	else if (dir == 4)
	{
		if (Pos_B_X == Pos_BR_X + larg_BR)
		{
			dir = 3;
		}
		else if (Pos_B_Y == Pos_BR_Y + haut_BR)
		{
			dir = 2;
		}
	}
}

void Balle::rebondir_M(int Pos_B_X, int Pos_B_Y, ref int dir)
{
	if (dir == 1)
	{
		if (Pos_B_X == Xmax)
		{
			dir = 2;
		}
		else if (Pos_B_Y == Ymax)
		{
			dir = 3;
		}
	}
	else if (dir == 2)
	{
		if (Pos_B_X == Xmin)
		{
			dir = 1;
		}
		else if (Pos_B_Y == Ymax)
		{
			dir = 4;
		}
	}
	else if (dir == 3)
	{
		if (Pos_B_X == Xmax)
		{
			dir = 4;
		}
	}
	else if (dir == 4)
	{
		if (Pos_B_X == Xmin)
		{
			dir = 3
		}
	}
}

void Balle::update(ref int Pos_B_X, ref int Pos_B_Y, int dir)
{
	if (dir == 1)
	{
		Pos_B_X = Pos_B_X + 1;
		Pos_B_Y = Pos_B_Y + 1;
 	}
	else if (dir == 2) 
	{
		Pos_B_X = Pos_B_X - 1;
		Pos_B_Y = Pos_B_Y + 1;
	}
	else if (dir == 3)
	{
		Pos_B_X = Pos_B_X + 1;
		Pos_B_Y = Pos_B_Y - 1;
	}
	else if (dir == 4)
	{
		Pos_B_X = Pos_B_X - 1;
		Pos_B_Y = Pos_B_Y - 1;
	}
}