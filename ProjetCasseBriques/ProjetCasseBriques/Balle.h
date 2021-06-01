

class Balle
{
public:
	int Pos_B_X;
	int Pos_B_Y;
	void rebondir_R(int Pos_B_X, int Pos_B_Y, int Pos_R_X, int Pos_R_Y, ref int dir);
	void rebondir_BR(int Pos_B_X, int Pos_B_Y, int Pos_BR_X, int Pos_BR_Y, ref int dir);
	void rebondir_M(int Pos_B_X, int Pos_B_Y, ref int dir);
	void update(ref int Pos_B_X, ref int Pos_B_Y, int dir);
private:
	int Dir;
	int Vitesse;
};