class Raquette
{
	public:
		int Pos_R_X;
		int Pos_R_Y;
		int larg_R;
		void update(int Pos_R_X, int Pos_R_Y);

	private:
		int vitesse;

	public Raquette(int largeur,int vitesseRaquette)
	{
		vitesse = vitesseRaquette;
		larg_R = largeur;
		Pos_R_X = 50;
		Pos_R_Y = 30;
	}
};