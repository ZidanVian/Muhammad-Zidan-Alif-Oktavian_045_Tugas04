#include <iostream>
#include <conio.h>
using namespace std;

main()
{
	int i, j, Jumlah_SMT, MatKul, SKS, SMT, Nilai_MatKul;
	char Nilai, yn;
	float IPK, ip, Nilai_Akhir, Semua_SKS;
	string Nama_MatKul;
	
	start:
	cout<<" Program Penghitung IPK Mahasiswa"<<endl<<endl;
	cout<<" Berapa Semester Anda Lalui? ";cin>>Jumlah_SMT;
	
	for (i=1;i<=Jumlah_SMT;i++){
		cout<<"\n Berapa Jumlah Mata Kuliah Semester "<<i<<" Anda : ";cin>>MatKul;
		for (j=1;j<=MatKul;j++){
			cout<<" Apa Mata Kuliah Ke-"<<j<<"? ";cin>>Nama_MatKul;
			cout<<" Berapa Jumlah SKS Mata Kuliah Ke-"<<j<<" Anda? ";cin>>SKS;
			cout<<" Apa Grade Nilai Mata Kuliah Ke-"<<j<<" Anda ? ";cin>>Nilai;
			cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
			
			if (Nilai=='A'||Nilai=='a'){
				Nilai_MatKul=4*SKS;
			}
			else if (Nilai=='B'||Nilai=='b') {
            	Nilai_MatKul=3*SKS;
          	}
          	else if (Nilai=='C'||Nilai=='c') {
            	Nilai_MatKul=2*SKS;
          	}
          	else if (Nilai=='D'||Nilai=='d') {
            	Nilai_MatKul=1*SKS;
          	}
          	else if (Nilai=='E'||Nilai=='e') {
            	Nilai_MatKul=0*SKS;
          	}
          	else {
            	cout<<" Input Tidak Sesuai!\n";
          	}
          	Nilai_Akhir=Nilai_Akhir+Nilai_MatKul;
          	Semua_SKS=Semua_SKS+SKS;         
		}
			ip=Nilai_Akhir/Semua_SKS;
			cout<<" Total IP Anda adalah : "<<ip<<endl<<endl;		
	}
	if(Jumlah_SMT==1){
		IPK=ip;
		cout<<" Jumlah IPK Anda Adalah "<<IPK;
	}
	else if(Jumlah_SMT>=1&&Jumlah_SMT<=14){
		ip=ip+SMT;
		IPK=ip/Semua_SKS;
		cout<<" Jumlah IPK Anda Adalah "<<IPK;
	}
	cout<<" Kembali ke Menu? (Y/N) ";cin>>yn;
	if (yn=='Y'||yn=='y'){
		goto start;
	}	
	else if (yn=='N'||yn=='n'){
		goto end;
	}
	end:
		cout<<" Terima kasih Telah Menggunakan Program ini "<<endl<<endl;

	getch();
}
