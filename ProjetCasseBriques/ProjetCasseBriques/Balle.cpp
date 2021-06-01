#include "Balle.h"

void Balle::rebondir_R()
{
}

void Balle::rebondir_BR()
{
}

void Balle::rebondir_M()
{
}

void Balle::update(ref int Pos_B_X, ref int Pos_B_Y, int dir)
{
	if dir == 1
	{
		Pos_B_X = Pos_B_X + 1;
		Pos_B_Y = Pos_B_Y + 1;
 	}
	else if dir == 2 
	{
		Pos_B_X = Pos_B_X - 1;
		Pos_B_Y = Pos_B_Y + 1;
	}
	else if dir == 3
	{
		Pos_B_X = Pos_B_X + 1;
		Pos_B_Y = Pos_B_Y - 1;
	}
	else if dir == 4
	{
		Pos_B_X = Pos_B_X - 1;
		Pos_B_Y = Pos_B_Y - 1;
	}
}


