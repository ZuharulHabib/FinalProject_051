#include <iostream>
using namespace std;
class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;
public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}
	virtual float hitungNilaiAkhir() { return 0; }
	virtual void cekKelulusan() { return 0; }
	virtual void input() { return 0; }
	void setPresensi(float nilai) {
		this->presensi = nilai;
	}
	float getPresensi() {
		return presensi;
	}
	float setPresensi() {
		return presensi:
	}
	float cekKelulusan() {
		return Kelulusan;
	}
	float hitungNilaiAkhir() {
		return NilaiAkhir;
};
class Pemrograman : public MataKuliah { //isi disini
	void input() {
		int p, l;
		cout << "persegipanjang dibuat" << endl;
		cout << "masukkan panjang : ";
		cin >> p;
		setX(p);
		cout << "masukkan lebar : ";
		cin >> l;
		setY(l);
	}
	float getPresensi(int p, int l) {
		return p * l;
	}
	float setPresensi(int p, int l) {
		return 2 * (p + l);
	}
	float hitungNilaiAkhir(int p, int l) {
		return 2 * (p + l);

	void cekKelulusan() {
		float keliling = (getX(), getY());
		cout << "Luas persegipanjang = " << luas(getX(), getY()) << endl;
		cout << "Keliling persegipanjang = " << keliling << endl;

		if (keliling > 40)
			cout << "Ukuran persegipanjang adalah Besar" << endl;
		else if (keliling < 20)
			cout << "Ukuran persegipanjang adalah Sedang" << endl;
		else if (keliling < 10)
			cout << "Ukuran persegipanjang adalah Kecil" << endl;
	}
}
};
int main() { //isi disini
	MataKuliah* obj;
	
}
}