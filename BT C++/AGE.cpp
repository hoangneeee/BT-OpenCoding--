#include <iostream>
using namespace std;

//kiem tra nam nhuan
bool checkYear(int year) 
{ 
    // Nếu số năm chia hết cho 400,
    // đó là 1 năm nhuận
    if (year % 400 == 0) 
        return true; 
  
    // Nếu số năm chia hết cho 4 và không chia hết cho 100,
    // đó không là 1 năm nhuận
    if (year % 4 == 0 && year % 100 != 0) 
        return true;
 
    // trường hợp còn lại 
    // không phải năm nhuận
    return false; 
} 

//ham tinh tuoi
void age(int pd, int pm, int py,int bd, int bm, int by)
{
	int d=0, m, y;
	int md[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	y = py - by;	//so nam bang so nam hien tai tru di so nam sinh nhat
	//kiem tra nam nhuan
 	// Năm nhuận là năm chia hết cho 400
	// Năm nhuận là năm chia hết cho 4 nhưng không chia hết cho 100
	for(int i=by;i<=py;i++)
    {
        if(checkYear(i)==true) d++;
    }
	//tinh so thang
	if (pm < bm)
	{
		y--;
		m = 12 - (bm - pm);       
	}
	else
	{m = pm - bm;}
	
	//tinh so ngay
	if (pd < bd)
	{
		m--;
		d += md[pm - 1] - (bd - pd);
	}
	else
	{d = pd - bd;}
    //in ket qua
	cout << "Tuoi cua ban hien tai : \n";
	cout << y << " nam " << m << " thang " << d << " ngay ";
}
int main()
{
	int pd, pm, py, bd, bm, by;
	cout << " Nhap vao ngay hien tai theo dang YYYY MM DD : ";
	cin >> py >> pm >> pd;		//nam thang ngay hien tai
	cout << " Nhap vao ngay sinh nhat cua ban theo dang YYYY MM DD : ";
	cin >> by >> bm >> bd;		//nam thang ngay sinh nhat
	age(pd, pm, py, bd, bm, by);
	
	return 0;
}