struct crypt
{
	char razd[3];
	double plan[10][3];		//Двумерный указатель
	double fact[10][3];
	int kvart;
	int pokazat;
};

//void generatoinNumber(double *mas, int row, int col);
void generationCrypt(crypt *Crypt);
//static double* getMemory(int len);