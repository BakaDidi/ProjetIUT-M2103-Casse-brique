

class Balle
{
public:
	int Pos_B_X;
	int Pos_B_Y;
	void rebondir_R();
	void rebondir_BR();
	void rebondir_M();
	void update(ref int Pos_B_X, ref int Pos_B_Y, int dir);
private:
	int Dir;
	int Vitesse;
};