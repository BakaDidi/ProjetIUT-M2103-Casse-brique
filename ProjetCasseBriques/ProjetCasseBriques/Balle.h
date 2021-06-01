

class Balle
{
public:
	int Pos_B_X;
	int Pos_B_Y;
	void rebondir_R();
	void Balle::rebondir_BR(int Pos_B_X, int Pos_B_Y, int Pos_BR_X, int Pos_BR_Y, ref int dir);
	void rebondir_M();
	void update(ref int Pos_B_X, ref int Pos_B_Y, int dir);
private:
	int Dir;
	int Vitesse;
};