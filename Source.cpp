#include<iostream>
using namespace std;
int main()
{
	double yasam, milligelir,gelismemis,ortagelismis,cokgelismis,gelismislikorani;
	cout << "Ortalama yasam suresini giriniz ";
	cin >> yasam;
	cout << endl;
	cout << "Ortalama milli geliri giriniz ";
	cin >> milligelir;
	cout << endl;
	double a = yasam;
	double b = milligelir;
	double gercekgelismis[3];
	double azyasam, ortayasam, cokyasam, azgelir, ortagelir, cokgelir;
	if (yasam <= 55)
		azyasam = 1;
	else if (yasam > 55 && yasam < 70)
		azyasam = (70 - a) / 15;
	else if (yasam > 70)
		azyasam = 0;

	if (yasam <= 55)
		ortayasam = 0;
	else if (yasam > 55 && yasam <= 70)
		ortayasam = 1 - ((70 - a) / 15);
	else if (yasam > 70 && yasam <= 90)
		ortayasam = ((90 - a) / 20);
	else if (yasam > 90)
		ortayasam = 0;

	if (yasam <= 70)
		cokyasam = 0;
	else if (yasam > 70 && yasam <= 90)
		cokyasam = 1 - ((90 - a) / 20);
	else if (yasam > 90)
		cokyasam = 1;

	if (milligelir <= 10)
		azgelir = 1;
	else if (milligelir > 10 && milligelir <= 25)
		azgelir = (25 - b) / 15;
	else if (milligelir > 25)
		azgelir = 0;

	if (milligelir <= 10)
		ortagelir = 0;
	else if (milligelir > 10 && milligelir <= 25)
		ortagelir = 1 - ((25 - b) / 15);
	else if (milligelir > 25 && milligelir <= 35)
		ortagelir = (35 - b) / 10;
	else if (milligelir > 35)
		ortagelir = 0;

	if (milligelir <= 25)
		cokgelir = 0;
	else if (milligelir > 25 && milligelir <= 35)
		cokgelir = 1 - ((35 - b) / 10);
	else if (milligelir > 35)
		cokgelir = 1;



	cout << "az gelirlik orani : " << azgelir << endl;
	cout << "orta gelirlik orani : " << ortagelir << endl;
	cout << "yuksek gelirlik orani : " << cokgelir << endl;
	cout << "az yasam orani : " << azyasam << endl;
	cout << "orta yasam orani : " << ortayasam << endl;
	cout << "uzun yasam orani : " << cokyasam << endl;

	double gelismis[3][3];
	
		if (azgelir <= azyasam)
			gelismis[0][0] = azgelir;
		else
		{
			gelismis[0][0] = azyasam;
		}
		//cout << "Ulke gelismemistir";
	
	
		if (azgelir <= ortayasam)
			gelismis[0][1] = azgelir;
		else
		{
			gelismis[0][1] = ortayasam;
		}
		//cout << "Ulke gelismemistir";
	
	
		if (ortagelir <= azyasam)
			gelismis[1][0] = ortagelir;
		else
		{
			gelismis[1][0] = azyasam;
		}
		//cout << "Ulke gelismemistir";
	
		if (ortagelir <= ortayasam)
			gelismis[1][1] = ortagelir;
		else
		{
			gelismis[1][1] = ortayasam;
		}
		//cout << "Ulke gelismistir";

		if (ortagelir <= cokyasam)
			gelismis[1][2] = ortagelir;
		else
		{
			gelismis[1][2] = cokyasam;
		}
		//cout << "Ulke cok gelismistir";

		if (cokgelir <= ortayasam)
			gelismis[2][1] = cokgelir;
		else
		{
			gelismis[2][1] = ortayasam;
		}
		//cout << "Ulke cok gelismistir";

		if (cokyasam <= azgelir)
			gelismis[0][2] = cokyasam;
		else
		{
			gelismis[0][2] = azgelir;
		}
		//cout << "Ulke gelismistir";

		if (cokgelir <= azyasam)
			gelismis[2][0] = cokgelir;
		else
		{
			gelismis[2][0] = azyasam;
		}
		//cout << "Ulke gelismistir";

		if (cokgelir <= cokyasam)
			gelismis[2][2] = cokgelir;
		else
		{
			gelismis[2][2] = cokyasam;
		}
		//cout << "Ulke gelismistir";

		cout << endl;
		for (int i = 0;i < 3;i++)
		{
			for (int j = 0;j < 3;j++)
			{
				cout << gelismis[i][j]<<"\t";

			}
			cout << endl;
		}
		cout << endl;

		if (gelismis[0][0] >= gelismis[1][0])
			gercekgelismis[0] = gelismis[0][0];
		else
		{
			gercekgelismis[0] = gelismis[1][0];
		}
		if (gercekgelismis[0] <= gelismis[0][1])
			gercekgelismis[0] = gelismis[0][1];
		

		if (gelismis[0][2] >= gelismis[1][1])
			gercekgelismis[1] = gelismis[0][2];
		else
		{
			gercekgelismis[1] = gelismis[1][1];
		}
		if (gercekgelismis[1] <= gelismis[2][0])
			gercekgelismis[1] = gelismis[2][0];

		if (gelismis[1][2] >= gelismis[2][1])
			gercekgelismis[2] = gelismis[1][2];
		else
		{
			gercekgelismis[2] = gelismis[2][1];
		}
		if (gercekgelismis[2] <= gelismis[2][2])
			gercekgelismis[2] = gelismis[2][2];

		cout << "min-max degerleri " << endl << endl;
		gelismemis = gercekgelismis[0];
		ortagelismis = gercekgelismis[1];
		cokgelismis = gercekgelismis[2];
		
		cout << "Gelismemis : " << gelismemis << endl;
		cout << "Gelismis : " << ortagelismis << endl;
		cout << "Cok gelismis " << cokgelismis << endl << endl;

		gelismislikorani = ((gelismemis * 12) + (ortagelismis * 50) + (cokgelismis * 85));
		gelismislikorani /= (gelismemis + ortagelismis + cokgelismis);
		cout << "Ulkenin gelismislik duzeyi orani " << gelismislikorani << "'dir.";

		//minimum az gelismis 12'dir.
		//max cok gelismis 85'dir.

	system("pause");
	return 0;
}