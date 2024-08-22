

#include <iostream>
using namespace std;
int main()
{

	cout << "Tap 1:" << endl << endl;

	srand(time(NULL));

	int num[5] = {};
	for (unsigned int l = 0; l < 5; l++)
	{
		cin >> num[l];
	}
	for (int l = 4; l >= 0; l--)
	{
		cout << num[l] << " ";
	}
	cout << endl;


	cout << "Tap 2:" << endl << endl;

	int arr[20];
	int min = 0;
	int max = 100;
	for (int l = 0; l < 20; l++)
	{
		int random = min + rand() % (max - min + 1);
		arr[l] = random;
	}
	for (int l = 0; l < 20; l += 2)
	{
		cout << arr[l] << " ";
	}
	cout << endl;

	cout << "Tap 3:" << endl << endl;



	int arr1[10] = {};
	min = -20;
	max = 20;

	for (int l = 0; l < 10; l++)
	{
		int random = min + rand() % (max - min + 1);
		arr1[l] = random;
	}
	int mus = 0;
	int say = 0;
	for (int l : arr1) {
		if (l > 0) {
			mus += l;
			say++;
		}
		cout << l << " ";

	}

	int et = mus / say;
	cout << "Musbet ededi orta:" << et;


	cout << endl;



	cout << "Tap 4:" << endl << endl;

	int arr2[20] = {};
	min = -5;
	max = 5;

	for (int l = 0; l < 20; l++)
	{
		int random = min + rand() % (max - min + 1);
		arr2[l] = random;
	}
	int s = 0;
	int m = 0;
	int m = 0;
	for (int l : arr2) {
		if (l > 0) {
			m++;
		}
		else if (l < 0) {
			m++;
		}
		else
			s++;
		cout << l << " ";
	}
	cout << "Musbetlerin sayi: " << m << " menfilerin: " << m << "sifirlarin: " << s;

	cout << endl;



	cout << "Tap 5: " << endl << endl;

	int arr3[10] = {};
	min = 0;
	max = 100;

	for (int l = 0; l < 10; l++)
	{
		int random = min + rand() % (max - min + 1);
		arr3[l] = random;
	}
	int t3 = 0;
	int c3 = 0;
	int s3 = 0;
	for (int l = 0; l < 10; l++) {
		if (l % 2 == 0)
		{
			c3 += arr3[l];
		}
		else {
			t3 += arr3[l];
			s3++;
		}
		cout << arr3[l] << " ";
	}
	int et3 = t3 / s3;
	cout << "tek ededi orta = " << t3 << "  cut ededlerin cemi =" << c3;


	cout << endl;



	cout << "Tap 6:" << endl << endl;



	char arris[10];
	min = 0;
	max = 255;
	int h = 0;
	int r = 0;
	int p = 0;
	for (int l = 0; l < 10; l++)
	{
		int random = min + rand() % (max - min + 1);
		arris[l] = random;
	}

	for (char l : arris)
	{
		cout << l << " ";
		if ((int)l >= 48 && (int)l <= 57)
			r++;
		else if (((int)l >= 65 && (int)l <= 90) || ((int)l >= 97 && (int)l <= 122))
			h++;
		else
			p++;
	}
	cout << endl;
	cout << "Reqemlerin sayi: " << r << endl << "hereflerin sayi:" << h << endl << "punklarin sayi:" << p << endl;

	cout << "Tap 7:" << endl << endl;

	int arr4[50];
	min = 0;
	max = 50;
	for (int l = 0; l < 50; l++)
	{
		int random = min + rand() % (max - min + 1);
		arr4[l] = random;
	}
	int b;
	cin >> b;
	int s = 0;
	for (int l : arr4) {
		cout << l << " ";
		if (b == l)
			s++;

	}
	cout << endl << "Eyni ededlerin: " << s << endl;



	cout << "Tap 8:" << endl << endl;

	int arr5[10];
	min = 0;
	max = 100;
	for (int l = 0; l < 10; l++)
	{
		int random = min + rand() % (max - min + 1);
		arr5[l] = random;
	}
	int u = 0;
	int y = 0;
	int b = 0;
	for (int l : arr5)
	{
		if (l % 3 == 0)
		{
			u++;
		}
		if (l % 5 == 0)
			b++;
		if (l % 7 == 0)
		{
			y++;
		}
		cout << l << " ";

	}
	cout << endl << "Uce bolunen:" << u << " bese bolunen:" << b << " yediyye bolunen: " << y << endl;

	cout << "Tap 9:" << endl << endl;

	int arr6[10];
	min = 0;
	max = 100;
	int ucebese = 0;
	for (int i = 0; i < 10; i++)
	{
		int random = min + rand() % (max - min + 1);
		arr6[i] = random;
	}
	for (int i : arr6)
	{
		cout << i << " ";
		if (i % 3 == 0 && i % 15 != 0)
		{
			ucebese++;
		}
	}
	cout << endl << "Uce bolunur bese bolunmeyen: " << ucebese;
}

