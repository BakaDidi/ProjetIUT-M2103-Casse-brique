#include "Raquette.h"
#include<conio.h>
#include<iostream>

void raquette::update(int Pos_R_X, int Pos_R_Y)
{
	if (getch() == 'q')
	{
		Pos_R_X = Pos_R_X + 1;
		if (Pos_R_X > (Xmax - larg_R))
		{
			Pos_R_X = Xmax - larg_R;
		}
	}
	else if (getch() == 'd')
	{
		Pos_R_X = Pos_R_X - 1;
		if (Pos_R_X > Xmin)
		{
			Pos_R_X = Xmin;
		}
	}
}