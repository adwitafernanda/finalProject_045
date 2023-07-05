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
	void setA(float nilai) {
		this->activity = nilai;
	}
	float getA() {
		return activity;
	}

	void setE(float nilai) {
		this->exercise = nilai; 
	}
	float getE() {
		return exercise;
	}

	void setUA(float nilai) {
		this->tugasAkhir = nilai; 
	}
	float getUA() {
		return tugasAkhir;    
	}
};

};
class Pemrograman : public MataKuliah { 
public:

};
int main() { //isi disini
}