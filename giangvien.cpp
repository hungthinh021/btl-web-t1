#include<bits/stdc++.h>
using namespace std;
class Nguoi{
	protected:
		string ten,gt;
		int tuoi;
		double namsinh;
	public: 
		void input(){
			cout << "Nhap ten: "; cin.ignore(); getline(cin,ten);
			cout << "Nhap tuoi: "; cin >> tuoi;
			cout << "Nhap nam sinh: "; cin >> namsinh;
			cout << "Nhap gioi tinh: "; cin.ignore(); getline(cin,gt);
		}
		void output(){
			cout << ten << " / " << tuoi << " / " << namsinh << " / " << gt << " / ";
		}
};
class giangvien : public Nguoi{
	private:
		int mgv;
		int snkn;
		float hsl;
		int tt,tl;
	public:
		void Nhap(){
			cout << "Nhap ma giang vien: "; cin >> mgv;
			cout << "Nhap so nam kinh nghiem: "; cin >> snkn;
			cout << "Nhap so thuong them: "; cin >> tt;
		}
		void Xuat(){
			cout << mgv << " / " << snkn;
		}
		void luong(int m){
			if(snkn > 20){
				hsl = 3;
				tl=3*m + tt;
				cout << "Tong luong la: " << tl;
			}
			else if(snkn > 10 && snkn < 20){
				hsl = 2;
				tl= 2*m + tt;
				cout << "Tong luong la: " << tl;
			}
			else{
				hsl = 2;
				tl= m + tt;
				cout << "Tong luong la: " << tl;
			} 
		}
	};
int main(){
	giangvien a[10];
	int n;
	cout << "Nhap so giang vien: ";
	cin >> n;
	for(int i=0;i<n;i++){
		a[i].input();
		a[i].Nhap();
	}
	for(int i=0;i<n;i++){
		a[i].output();
		a[i].Xuat();
	}
	int lcb;
	cout << "Nhap luong co ban: ";
	cin >> lcb;
	for(int i=0;i<n;i++){
		a[i].luong(lcb);
	}
}
