/*
Eetu Salo

Harjoitus 15 (Palautus vko 45)

T�SS� TEHT�V�SS� ON K�YTETT�V� C-kielen primitiivisi� merkkitaulukoita!

Tee ohjelma, joka kysyy k�ytt�j�lt� 17 merkki�
pitk�n merkkijonon (ei v�lily�ntej�).
a) Ohjelma tulostaa merkkijonon k��nteisess� j�rjestyksess� n�yt�lle
(tulostus tyyppi� "cout << mjono1[4];" jne)
b) Ohjelma k��nt�� annetun merkkijonon toiseen
merkkijonoon ja tulostaa sen n�yt�lle
(tulostus tyyppi� "cout << mjono2;")
c) merkkijono voi olla kuinka pitk�
tahansa (max 100 kirjainta).
Sy�tetyn merkkijonon pituutta ei saa
laskea mill��n kirjastofunktiolla
(esim. lenght tms.) Ohjelma
tutkii onko annettu merkkijono
palindromi ja ilmoittaa sen k�ytt�j�lle.
V�lily�nnit jonossa ovat sallittuja.

K�ytt�j� sy�tt�� jonon: ABC_Kissa_kavelee
ohjelma tulostaa: eelevak_assiK_CBA



*/






#include <iostream> 
using namespace std;
int main()
{
	//a) kohta
	char jono[100+1];
	
	int ind;
	cout << "Anna max 100 merkki� pitk� merkkijono: ";
	cin.getline(jono, 100);
	cout << jono << endl;

	/*ind = 16;
	while (ind >= 0)
	{
	cout << jono[ind];
	ind--;
	}
	cout << endl;

	//b) kohta
	char jono2[18];
	int i, j;
	for (i = 0, j = 16; j >= 0; i++, j--)
	{
	jono2[i] = jono[j];
	}
	jono2[i] = '\0';
	cout << jono2 << endl;

	}*/
	//c) kohta
	int i,j, mpituus;
	char jono2[100 + 1];
	char jono3[100 + 1];

	for (i = 0; jono[i] != '\0'; i++);
	mpituus = i;

	for (i = 0, j = 0; i < mpituus; i++ )
	{
		if (jono[i] != ' ')
		{
			jono3[j] = jono[i];
			j++;
		}
	}
	jono3[j] = '\0';
	mpituus = j;
	cout << "Tiivistetty: " << jono3 << endl;

	for (i = 0, j = mpituus - 1; j >= 0; i++, j--)
	{
		jono2[i] = jono3[j];
	}
	jono2[i] = '\0';
	cout << "Pituus: " << mpituus << endl;

	if (!strcmp(jono2, jono3))
		cout << "Palindromi ";
	else
		cout << "Ei palindromi ";
}
