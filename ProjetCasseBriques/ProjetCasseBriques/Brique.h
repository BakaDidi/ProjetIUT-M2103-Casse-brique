class Brique
{
public:
	int Pos_BR_X;
	int Pos_BR_Y;
	int Larg_BR;
	int Haut_BR;
	void update(int Pos_B_X, int Pos_B_Y, int Pos_BR_X, int Pos_BR_Y, bool Visible);
private:
	bool Visible;
};