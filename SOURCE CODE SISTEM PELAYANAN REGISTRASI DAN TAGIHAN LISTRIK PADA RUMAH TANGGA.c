#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <math.h>

/* DEKLARASI GLOBAL */

char con;
int i,o=0;
int pil=0;
int k,h,op;
int a;
int jenis,tipe;
int jumlah_lampu,jumlah_televisi,jumlah_pompa,jumlah_setrika,jumlah_airconditioner,jumlah_ricecooker,
jumlah_mesincuci,jumlah_komputerPC,jumlah_kulkas,jumlah_dispenser,jumlah_pemanggangroti,jumlah_microwave,
jumlah_komporlistrik;
float harga_lampu,lama_lampu,harga_televisi,lama_televisi;
float harga_pompa,lama_pompa,harga_setrika,lama_setrika;
float harga_airconditioner,lama_airconditioner,harga_ricecooker,lama_ricecooker;
float harga_mesincuci,lama_mesincuci,harga_komputerPC,lama_komputerPC;
float harga_kulkas,lama_kulkas,harga_dispenser,lama_dispenser;
float harga_pemanggangroti,lama_pemanggangroti,harga_microwave,lama_microwave;
float harga_komporlistrik,lama_komporlistrik;
float jumlah_450,jumlah_900a,jumlah_900b,jumlah_1300,jumlah_2200,jumlah_3500,jumlah_6600;
int sisa_450 = 450,sisa_900a = 900,sisa_900b = 900,sisa_1300 = 1300,sisa_2200 = 2200,sisa_3500 = 3500,sisa_6600=6600;
int meteranawal,meteranakhir,selisihmeteran;
float tagihanbaru,struk_meter;
int hari,bulan,tahun,bulanawal,tahunnawal,jumlahawal,hariakhir,bulanakhir,tahunakhir,
bulansebelumnya,tahunsebelumnya,jumlahakhir,selisihharga,selisihhari,selisihbulan,selisihtahun;
float tagihanlistrik,denda;
float jumlahuang;
int temp_npm;
int struk_npm;
int struk_id;
int digit=0;
float struk_450,struk_900a,struk_900b,struk_1300,struk_2200,struk_3500,struk_6600;


/* UNTUK USER INTERFACE */

void prog_head(); 	//header program
void samadengan(); 	//digunakan untuk header
void listrik(); 	//ASCII listrik
void keluar(); 		//fungsi keluar
void garis(); 		//untuk header
void welcome(); 	//tampilan welcome program
void loading(); 	//tampilan loading
void awalan(); 		//tampilan welcome+loading+listrik
void flashload(); 	//digunakan untuk fungsi keluar

/* MESSAGE WARNING */

void warning01();
void warning02();
void warning03();
void warning04();

/* PROGRAM */


void menu_awal(); 		//berisi pilihan untuk menjalankan program
void help(); 			//menu yang digunakan untuk beberapa bantuan
void help_faq(); 		//isi dari menu help
void help_how(); 		//isi dari menu help
void help_warning(); 	//isi dari menu help
void about(); 			//tentang program, berisi tujuan dan latar belakang pembuatan program
void registrasi(); 		//menu input registrasi
void menu();			//program main menu, dipilih dari program menu awal
void tagihan();			//program perhitungan tagihan dan jumlah tagihan yang harus dibayarkan
void tagihan_pemakaian();	//jenis tagihan 1
void tagihan_meteran();		//jenis tagihan 2
void ringkasan();			//fungsi cek ringkasan data user
void struk();				//pembuatan struk berdasarkan data, serta jumlah tagihan yang harus dibayarkan
void metode();				//metode dalam membayar tagihan-tagihan listrik
int meteran(int meteranakhir, int meteranawal);	//fungsi perhitungan tagihan berdasarkan meteran

/* DATA SIMPAN .............
 Beberapa deklarasi ini digunakan sebagai database atau penyimpanan sementara data user */
 
char nama1[1000]={'0'};
int npm_pass;
char nama2[1000]={'0'};
int npm=0;
int id;
int id_pass;
char jurusan[100]={'0'};
char fakultas[100]={'0'};
char pt[100]={'0'};
char sekolah[100]={'0'};
char sekjur[100]={'0'};
char status1[100]={'M','a','h','a','s','i','s','w','a'};
char status2[100]={'D','o','s','e','n'};
char status3[100]={'S','i','s','w','a'};
char lain[100]={'0'};


/* simply program main */


int main(){


    awalan();

    menu_awal();

    return 0;
}

/*end of main */


/* UNTUK USER INTERFACE */

void prog_head(){


samadengan();
for(i=0;i<27;i++){
printf(" ");
}
printf("PROGRAM MENU PELAYANAN REGISTRASI DAN TAGIHAN LISTRIK RUMAH TANGGA\n");
for(i=0;i<35;i++){
printf(" ");
}
printf("DEPARTEMEN TEKNIK ELEKTRO UNIVERSITAS INDONESIA\n");
for(i=0;i<22;i++){
printf(" ");
}
printf("Programmed by Alfian Firmansyah (1706985874) dan Fahri Alamsyah (1706985943)\n");
garis();


}

void listrik(){

//listrik dinamis dengan delay 5 milisecond

printf("\t\t\t\t\t\t            z$$$$$$$$S\n");Sleep(5);
printf("\t\t\t\t\t\t           d$$$$$$$$H\n");Sleep(5);
printf("\t\t\t\t\t\t          d$$$$$$$$.\n");Sleep(5);
printf("\t\t\t\t\t\t        .d$$$$$$$P\n");Sleep(5);
printf("\t\t\t\t\t\t       .$$$$$$$$P\n");Sleep(5);
printf("\t\t\t\t\t\t      .$$$$$$$$$..PT..PLN.\n");Sleep(5);
printf("\t\t\t\t\t\t     .$$$$$$$$$$$$$$$$$$.\n");Sleep(5);
printf("\t\t\t\t\t\t    z$$$$$$$$$$$$$$$$$P.\n");Sleep(5);
printf("\t\t\t\t\t\t   -**********$$$$$$$P\n");Sleep(5);
printf("\t\t\t\t\t\t             d$$$$$$H\n");Sleep(5);
printf("\t\t\t\t\t\t           .d$$$$$$K\n");Sleep(5);
printf("\t\t\t\t\t\t          .$$$$$$Pk\n");Sleep(5);
printf("\t\t\t\t\t\t         z$$$$$$P\n");Sleep(5);
printf("\t\t\t\t\t\t        d$$$$$$I\n");Sleep(5);
printf("\t\t\t\t\t\t      .d$$$$$$I\n");Sleep(5);
printf("\t\t\t\t\t\t     .$$$$$$$I\n");Sleep(5);
printf("\t\t\t\t\t\t    z$$$$$$$.PT.PLN\n");Sleep(5);
printf("\t\t\t\t\t\t   d$$$$$$$$$$$$$*\n");Sleep(5);
printf("\t\t\t\t\t\t  ^IIIIIIII$$$$.*\n");Sleep(5);
printf("\t\t\t\t\t\t          d$$$*\n");Sleep(5);
printf("\t\t\t\t\t\t         d$$$*\n");Sleep(5);
printf("\t\t\t\t\t\t        d$$.*\n");Sleep(5);
printf("\t\t\t\t\t\t       d$P*\n");Sleep(5);
printf("\t\t\t\t\t\t     .$$I\n");Sleep(5);
printf("\t\t\t\t\t\t    .$PI\n");Sleep(5);
printf("\t\t\t\t\t\t   .$I\n");Sleep(5);
printf("\t\t\t\t\t\t  .P.\n");Sleep(5);
printf("\t\t\t\t\t\t .'  \n");Sleep(5);
printf("\t\t\t\t\t\t/'\n");Sleep(5);


}

void listrik2(){

	//listrik statis

printf("\t\t\t\t\t\t            z$$$$$$$$S\n");
printf("\t\t\t\t\t\t           d$$$$$$$$H\n");
printf("\t\t\t\t\t\t          d$$$$$$$$.\n");
printf("\t\t\t\t\t\t        .d$$$$$$$P\n");
printf("\t\t\t\t\t\t       .$$$$$$$$P\n");
printf("\t\t\t\t\t\t      .$$$$$$$$$..PT..PLN.\n");
printf("\t\t\t\t\t\t     .$$$$$$$$$$$$$$$$$$.\n");
printf("\t\t\t\t\t\t    z$$$$$$$$$$$$$$$$$P.\n");
printf("\t\t\t\t\t\t   -**********$$$$$$$P\n");
printf("\t\t\t\t\t\t             d$$$$$$H\n");
printf("\t\t\t\t\t\t           .d$$$$$$K\n");
printf("\t\t\t\t\t\t          .$$$$$$Pk\n");
printf("\t\t\t\t\t\t         z$$$$$$P\n");
printf("\t\t\t\t\t\t        d$$$$$$I\n");
printf("\t\t\t\t\t\t      .d$$$$$$I\n");
printf("\t\t\t\t\t\t     .$$$$$$$I\n");
printf("\t\t\t\t\t\t    z$$$$$$$.PT.PLN\n");
printf("\t\t\t\t\t\t   d$$$$$$$$$$$$$*\n");
printf("\t\t\t\t\t\t  ^IIIIIIII$$$$.*\n");
printf("\t\t\t\t\t\t          d$$$*\n");
printf("\t\t\t\t\t\t         d$$$*\n");
printf("\t\t\t\t\t\t        d$$.*\n");
printf("\t\t\t\t\t\t       d$P*\n");
printf("\t\t\t\t\t\t     .$$I\n");
printf("\t\t\t\t\t\t    .$PI\n");
printf("\t\t\t\t\t\t   .$I\n");
printf("\t\t\t\t\t\t  .P.\n");
printf("\t\t\t\t\t\t .'  \n");
printf("\t\t\t\t\t\t/'\n");

}

void samadengan(){
printf("=======================================================================================================================\n");

}

void garis(){
printf("-----------------------------------------------------------------------------------------------------------------------\n");
}

void welcome(){
int m;
double n;
char welcome[]= "\t\t\t\t\t\tWELCOME TO OUR PROJECT!\t\t\t\t\t\t\t\t\t\t";


printf("\n\n\n\n\n\n\n\n\n\n\n");
for(m=0;welcome[m]!=NULL;m++){
    printf("%c",welcome[m]);
    for(n=0;n<=9999999;n++){}
}


}

void flashload(){

printf("\n");
printf("\t\t\t\t\t\t\t     ^\n");Sleep(40);
printf("\t\t\t\t\t\t\t    ^^^\n");Sleep(40);
printf("\t\t\t\t\t\t\t   ^^^^^\n");Sleep(40);
printf("\t\t\t\t\t\t\t  ^^^^^^^         THANK YOU..\n");Sleep(40);
printf("\t\t\t\t\t\t\t   ^^^^^          \n");Sleep(40);
printf("\t\t\t\t\t\t\t    ^^^           FOR\n");Sleep(40);
printf("\t\t\t\t\t\t\t     ^            USING\n");Sleep(40);
printf("\t\t\t\t\t\t\t    ^^^           OUR\n");Sleep(40);
printf("\t\t\t\t\t\t\t   ^^^^^          PROGRAM\n");Sleep(40);
printf("\t\t\t\t\t\t\t  ^^^^^^^         :)\n");Sleep(40);
printf("\t\t\t\t\t\t\t   ^^^^^\n");Sleep(40);
printf("\t\t\t\t\t\t\t    ^^^\n");Sleep(40);
printf("\t\t\t\t\t\t\t     ^\n");Sleep(40);

}

void loading(){

	system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tLOADING\n======5%%");
    Sleep(100);
    system("cls");
    Sleep(100);
    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tLOADING\n======================15%%");
    Sleep(100);
    system("cls");
    Sleep(100);
    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tLOADING\n========================16%%");
    Sleep(100);
    system("cls");
    Sleep(100);
    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tLOADING\n=============================17%%");
    Sleep(120);
    system("cls");
    Sleep(120);
    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tLOADING\n================================================39%%");
    Sleep(150);
    system("cls");
    Sleep(150);
    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tLOADING\n================================================================52%%");
    Sleep(200);
    system("cls");
    Sleep(200);
    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tLOADING\n================================================================================60%%");
    Sleep(250);
    system("cls");
    Sleep(250);
    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tLOADING\n======================================================================================================80%%");
    Sleep(300);
    system("cls");
    Sleep(300);
    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tLOADING\n===================================================================================================================97%%");
    Sleep(500);
    system("cls");
    Sleep(500);
    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tLOADING\n====================================================================================================================98%%");
    Sleep(500);
    system("cls");
    Sleep(500);
    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tLOADING\n=====================================================================================================================99%%");
    Sleep(500);
    system("cls");
    Sleep(500);
    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tLOADING\n========================================================================================================================\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t 100%%\n\t\t\t\t\t\t   LOADING SELESAI!\n");
    Sleep(500);
    system("cls");
    Sleep(500);


}

void keluar(){
int m;
double n;
char welcome[]= "\t\t\t\t\t  Anda Berhasil Keluar Dari Program!\t\t\t\t\t\t\t\t\t\t";

system("cls");
printf("\n\n\n\n\n\n\n\n\n");
for(m=0;welcome[m]!=NULL;m++){
    printf("%c",welcome[m]);
    for(n=0;n<=9999999;n++){}
}
flashload();

}

void awalan(){

	system("cls");
 	welcome();
    system("cls");
 	loading();
   	system("cls");
   //	system("color 0e");
   	listrik();
   	Sleep(1000);
   	system("cls");
   	printf(" ");
   	Sleep(200);
   	system("cls");
   //	system("color 06");
   	listrik2();
   	Sleep(300);
  // 	system("color 07");
   	system("cls");

}


/* MESSAGE WARNING */


void warning01(){
printf("  Warning: Angka yang Anda masukkan salah, silakan ulangi kembali. (Code 01)\n");
Sleep(1000);
}

void warning02(){

printf("  Warning: Barang elektronik yang Anda masukkan melebihi batas daya, silakan ulangi kembali. (code 02)\n");
Sleep(1000);
printf("  Keterangan: Tekan ENTER untuk kembali.\n");
getch();
system("cls");

}

void warning03(){

printf("\n  Warning: Lama barang elektronik Anda beroperasi melebihi batas wajar dalam 1 hari yaitu 24 jam, silakan ulangi kembali. (code 03)\n");
Sleep(1000);
printf("  Keterangan: Tekan ENTER untuk kembali.\n");
getch();
system("cls");
}

void warning04(){

printf("\n  Warning: Anda belum mengisi Registrasi, silakan isi terlebih dahulu. (code 04)\n");
Sleep(1000);
printf("  Keterangan: Tekan ENTER, maka Anda akan dialihkan menuju menu Registasi.\n");
getch();
system("cls");
}

/* PROGRAM */

void menu_awal(){



	int ma;
	system("cls");
	prog_head();
	printf("\t\t\t\t\t\t        MENU\n");
	garis();
    printf("\n  Silakan pilih:\n  [1] START\n  [2] HELP\n  [3] ABOUT THIS PROGRAM\n  [4] KELUAR\n");

    printf("  Pilihan Anda: ");
    scanf("%d",&ma);
    switch(ma){
    case(1):
    menu();
    break;
    case(2):
    help();
    break;
    case(3):
    about();
    break;
    case(4):
    keluar();
    break;
    default:
    warning01();
    getchar();
    system("cls");
    return menu_awal();
}
}

void menu(){
	int menu;
head:
system("cls");

prog_head();
printf("\t\t\t\t\t\t      MAIN MENU\n");
garis();
printf("\n  [1] REGISTRASI\n  [2] STATUS PEMAKAIAN LISTRIK ANDA\n  [3] CEK RINGKASAN TAGIHAN LISTRIK ANDA\n  [4] METODE PEMBAYARAN\n  [5] STATUS PEMBAYARAN\n  [6] KEMBALI KE MENU AWAL\n");
printf("  Pilihan Anda: ");
scanf("%d",&menu);
switch(menu){
case(1):
registrasi();
break;
case(2):
	tagihan();
    break;
case(3):
	ringkasan();
    break;
case(4):
	metode();
    break;
case(5):
	struk();
    break;
case(6):
return menu_awal();
break;
default:
    warning01();
    getchar();
    goto head;
}

}

void registrasi(){
balik:
system("cls");

garis();
printf("#\t\t\t\t\t  PENGISIAN FORM REGISTRASI\t\t\t\t\t\t      #\n");
garis();
printf("  Nama Lengkap Anda       : ");
scanf(" %[^\n]s",nama1);
printf("\n");
je:
printf("  Status Anda:\n  [1 Mahasiswa]\n  [2 Dosen]\n  [3 Siswa]\n  [4 Lain-lain]\n");
printf("  Pilihan Anda: ");
scanf(" %i",&pil);
printf("\n");
switch(pil){
	case 1:
	printf("  Jurusan             : ");
	scanf(" %[^\n]s",jurusan);
	printf("  Fakultas            : ");
	scanf(" %[^\n]s",fakultas);
	printf("  Perguruan Tinggi    : ");
	scanf(" %[^\n]s",pt);

	break;
	case 2:
	printf("  Fakultas            : ");
	scanf(" %[^\n]s",fakultas);
	printf("  Perguruan Tinggi    : ");
	scanf(" %[^\n]s",pt);

	break;
	case 3:
	printf("  Sekolah             : ");
	scanf(" %[^\n]s",sekolah);
	printf("  Jurusan (IPA/IPS)   : ");
	scanf(" %[^\n]s",sekjur);

	break;
	case 4:
	printf("  Ketikkan status Anda: ");
	scanf(" %[^\n]s",lain);

	break;
	default:
	warning01();
	system("cls");
	goto je;
}
le:
printf("  NPM/NIP/NISN        : ");
scanf(" %d",&npm);
temp_npm=npm;
struk_npm=npm;
if(temp_npm%1700000000>6000000){
	printf("\n");
	switch(pil){
		case 1:
			printf("\n");
			printf("\n  Nama anda %s dengan NPM %d.\n  Anda merupakan seorang %s dari Fakultas %s %s, Jurusan %s \n",nama1,npm,status1,fakultas,pt,jurusan);
			o=1;
			break;
		case 2:
			printf("\n  Nama anda %s dengan NIP %d.\n  Anda merupakan seorang %s dari Fakultas %s %s.\n",nama1,npm,status2,fakultas,pt);
			o=2;
			break;
		case 3:		
			printf("\n");
			printf("\n  Nama anda %s dengan NISN %d.\n  Anda merupakan seorang %s dari %s jurusan %s.\n",nama1,npm,status3,sekolah,sekjur);
			o=3;
			break;
		case 4:
			printf("\n");
			printf("\n  Nama anda %s dengan No Identitas %d. Anda merupakan seorang %s \n",nama1,npm,lain);
			o=4;
			break;
		default:
			goto le;
	}

mejig:
printf("  Apakah data tersebut benar? [Y/T]: ");
scanf(" %c",&con);
printf("\n");
if(con == 'Y' || con == 'y'){
	id_pass:
	id = rand() % 900 + 100;
	struk_id=id;
	printf("\n");

	if(id > 0 && id<1000){
		printf("  Selamat, ID Anda: %d berhasil terdaftar di sistem kami!\n",id);
		printf("  Keterangan: Tekan Enter untuk submit registrasi Anda.\n");
		getch();
		printf("\n  Registrasi Anda Berhasil!");
		Sleep(500);
		return menu();
	}
	else{
		printf("  Warning: Mohon untuk memasukkan ID Anda sebanyak 3 digit angka, tidak kurang dan tidak lebih (tidak menggunakan simbol). (Code 05)\n");
		printf("  Keterangan: Tekan Enter untuk memasukkan id Anda kembali.\n");
		getch();
		goto id_pass;

	}


}
	else if(con == 'T' || con == 't'){
		printf("  Silakan lakukan pengisian data kembali.\n  Keterangan: Tekan Enter untuk mengisi kembali.\n");
		getch();
		goto balik;
	}
	else{
		printf("  Keterangan: Huruf yang anda masukkan salah, silakan coba lagi.\n");
		goto mejig;
	}
}
	else{
		printf("  Warning: Mohon masukkan NPM dengan maksimal 10 digit angka.\n");
		temp_npm=0;
		goto le;
	}
}

void ringkasan(){

	system("cls");
	prog_head();


	if(!nama1 || !nama2 || !npm){
		warning04();
		return registrasi();

	}
	else{
		printf("  Silakan login terlebih dahulu untuk melanjutkan :) \n");
		li:
		printf("  NPM/NIP/NISN Anda          : ");
		scanf(" %d",&npm_pass);
		printf("  ID tagihan listrik Anda    : ");
		scanf(" %d",&id_pass);
	if (npm_pass==npm && id_pass==id){
   		 printf("\n");
        printf("  Anda Berhasil login!\n");
        Sleep(500);
        system("cls");
        prog_head();
		printf("\n");
	    printf("  Hai %s, akun Anda Sudah Aktif, berikut rincian mengenai tagihan Anda: \n",nama1);
		printf("  Nama                 : %s\n",nama1);
	
	
		if(pil==1){
		printf("  NPM                  : %d\n",npm);
		printf("  Status               : %s\n",status1);
		printf("  Jurusan              : %s\n",jurusan);
		printf("  Fakultas             : %s\n",fakultas);
		printf("  Perguruan Tinggi     : %s\n",pt);
		if(jumlah_450/10>100)
		printf("  Jumlah Tagihan Pemakaian Listrik Anda  : Rp.%0.2f\n",jumlah_450);
	
		if(jumlah_900a/10>100)
		printf("  Jumlah Tagihan Pemakaian Listrik Anda  : Rp.%0.2f\n",jumlah_900a);
	
		if(jumlah_900b/10>100 )
		printf("  Jumlah Tagihan Pemakaian Listrik Anda  : Rp.%0.2f\n",jumlah_900b);
	
		if(jumlah_1300/10>100 )
		printf("  Jumlah Tagihan Pemakaian Listrik Anda  : Rp.%0.2f\n",jumlah_1300);
	
		if(jumlah_2200/10>100 )
		printf("  Jumlah Tagihan Pemakaian Listrik Anda  : Rp.%0.2f\n",jumlah_2200);
	
		if(jumlah_3500/10>100 )
		printf("  Jumlah Tagihan Pemakaian Listrik Anda  : Rp.%0.2f\n",jumlah_3500);
	
		if(jumlah_6600/10>100)
		printf("  Jumlah Tagihan Pemakaian Listrik Anda  : Rp.%0.2f\n",jumlah_6600);
	
		if(tagihanlistrik/10>100){
	    printf("  Jumlah Tagihan Meteran Litrik Anda     : Rp.%0.2f\n",tagihanlistrik);
		}
		o=1;
		}
		if(pil==2){
		printf("  NIP                  : %d\n",npm);
		printf("  Status               : %s\n",status2);
		printf("  Fakultas             : %s\n",fakultas);
		printf("  Perguruan Tinggi     : %s\n",pt);
		if(jumlah_450/10>100)
		printf("  Jumlah Tagihan Pemakaian Listrik Anda  : Rp.%0.2f\n",jumlah_450);
	
		if(jumlah_900a/10>100)
		printf("  Jumlah Tagihan Pemakaian Listrik Anda  : Rp.%0.2f\n",jumlah_900a);
	
		if(jumlah_900b/10>100 )
		printf("  Jumlah Tagihan Pemakaian Listrik Anda  : Rp.%0.2f\n",jumlah_900b);
	
		if(jumlah_1300/10>100 )
		printf("  Jumlah Tagihan Pemakaian Listrik Anda  : Rp.%0.2f\n",jumlah_1300);
	
		if(jumlah_2200/10>100 )
		printf("  Jumlah Tagihan Pemakaian Listrik Anda  : Rp.%0.2f\n",jumlah_2200);
	
		if(jumlah_3500/10>100 )
		printf("  Jumlah Tagihan Pemakaian Listrik Anda  : Rp.%0.2f\n",jumlah_3500);
	
		if(jumlah_6600/10>100)
		printf("  Jumlah Tagihan Pemakaian Listrik Anda  : Rp.%0.2f\n",jumlah_6600);
	
		if(tagihanlistrik/10>100){
	    printf("  Jumlah Tagihan Meteran Litrik Anda     : Rp.%0.2f\n",tagihanlistrik);
		}
	
		o=2;
		}
		if(pil==3){
		printf("  NISN                 : %d\n",npm);
		printf("  Status               : %s\n",status3);
		printf("  Jurusan              : %s\n",sekjur);
		printf("  Sekolah              : %s\n",sekolah);
		if(jumlah_450/10>100)
		printf("  Jumlah Tagihan Pemakaian Listrik Anda  : Rp.%0.2f\n",jumlah_450);
	
		if(jumlah_900a/10>100)
		printf("  Jumlah Tagihan Pemakaian Listrik Anda  : Rp.%0.2f\n",jumlah_900a);
	
		if(jumlah_900b/10>100 )
		printf("  Jumlah Tagihan Pemakaian Listrik Anda  : Rp.%0.2f\n",jumlah_900b);
	
		if(jumlah_1300/10>100 )
		printf("  Jumlah Tagihan Pemakaian Listrik Anda  : Rp.%0.2f\n",jumlah_1300);
	
		if(jumlah_2200/10>100 )
		printf("  Jumlah Tagihan Pemakaian Listrik Anda  : Rp.%0.2f\n",jumlah_2200);
	
		if(jumlah_3500/10>100 )
		printf("  Jumlah Tagihan Pemakaian Listrik Anda  : Rp.%0.2f\n",jumlah_3500);
	
		if(jumlah_6600/10>100)
		printf("  Jumlah Tagihan Pemakaian Listrik Anda  : Rp.%0.2f\n",jumlah_6600);
	
		if(tagihanlistrik/10>100){
	    printf("  Jumlah Tagihan Meteran Litrik Anda     : Rp.%0.2f\n",tagihanlistrik);
		}
	
		o=3;
		}
		if(pil==4){
		printf("  No Identitas         : %d\n",npm);
		printf("  Status               : %s\n",lain);
		if(jumlah_450/10>100)
		printf("  Jumlah Tagihan Pemakaian Listrik Anda  : Rp.%0.2f\n",jumlah_450);
	
		if(jumlah_900a/10>100)
		printf("  Jumlah Tagihan Pemakaian Listrik Anda  : Rp.%0.2f\n",jumlah_900a);
	
		if(jumlah_900b/10>100 )
		printf("  Jumlah Tagihan Pemakaian Listrik Anda  : Rp.%0.2f\n",jumlah_900b);
	
		if(jumlah_1300/10>100 )
		printf("  Jumlah Tagihan Pemakaian Listrik Anda  : Rp.%0.2f\n",jumlah_1300);
	
		if(jumlah_2200/10>100 )
		printf("  Jumlah Tagihan Pemakaian Listrik Anda  : Rp.%0.2f\n",jumlah_2200);
	
		if(jumlah_3500/10>100 )
		printf("  Jumlah Tagihan Pemakaian Listrik Anda  : Rp.%0.2f\n",jumlah_3500);
	
		if(jumlah_6600/10>100)
		printf("  Jumlah Tagihan Pemakaian Listrik Anda  : Rp.%0.2f\n",jumlah_6600);
	
		if(tagihanlistrik/10>100){
	    printf("  Jumlah Tagihan Meteran Litrik Anda     : Rp.%0.2f\n",tagihanlistrik);
		}
		o=4;
		}
	
	
		printf("  Keterangan: Tekan ENTER untuk simpan ringkasan Anda.\n");
	
		getch();
		return menu();
	}
	else{
		printf("  Warning: NPM/ID yang Anda masukkan salah, silakan coba lagi.\n  Keterangan: Tekan ENTER untuk kembali.\n");
		getch();
		system("cls");
		prog_head();
		goto li;
	}
}

}

void about(){
 	system("cls");
    prog_head();
    printf("\t\t\t\t\t\t  ABOUT THIS PROGRAM\n");
    garis();
    printf("\n\tProgram 'PELAYANAN REGISTRASI DAN TAGIHAN LISTRIK RUMAH TANGGA DEPARTEMEN TEKNIK ELEKTRO UNIVERSITAS INDONESIA' merupakan wujud dari project akhir kami dalam mata kuliah Pengantar Teknik Komputer.\n\n\tProgram ini dibuat untuk memudahkan user dalam hal membayar sebuah tagihan listrik rumah tangga. Program ini menyediakan sebuah fitur dimana bisa memprediksikan jumlah tagihan listrik yang hendak dibayarkan sesuai dengan pemakaian listrik rumah, sehingga user diharapkan bisa tepat waktu dalam membayar tagihan listrik, serta dengan adanya program ini user pun dapat menghemat pemakaian listrik rumahnya. \n\n\tDalam rangka memperingati 'EARTH HOUR' yang merupakan sebuah kampanye global untuk mematikan listrik dalam waktu satu jam yang berdampak besar terhadap lingkungan, baik itu dalam perubahan iklim, maupun pemanasan global yang semakin hari semakin meningkat.\n\n\t\t\t\t'Perubahan Sekecil Apapun Bermanfaat Sangat Besar'\n\n\n");
    printf("  Keterangan: tekan ENTER untuk kembali ke menu awal.\n");
	getche();
    return menu_awal();
}

void help_faq(){
	system("cls");
    prog_head();
    printf("\t\t\t\t\t\t         FAQ\n");
    garis();
    printf("  Q: Program hang ketika saya ketik huruf disaat pemilihan menu.\n  A: Hal tersebut karena program kami belum dilengkapi dengan perbandingan integer dan char, Solusi: Force Close Program.\n");
    printf("  Keterangan: Tekan Enter untuk kembali.\n");
	getche();
	return help();
}

void help_how(){
	system("cls");
    prog_head();
    printf("\t\t\t\t\t\t     How to Use Program\n");
    garis();
    printf("\n\n  1. Program Menu Pelayanan Registrasi dan Tagihan Listrik untuk memulai tekan start pada menu awal.\n");
	printf("  2. Terdapat menu registrasi untuk meregistrasi akun dengan mengisi nama dan NPM,\n     dengan begitu Anda bisa login di sistem kami\n");
	printf("  3. Lakukanlah pengisian tagihan listrik Anda dengan masuk ke menu status tagihan listrik\n     dan isi sesuai dengan keadaan sistem listrik Anda.\n");
	printf("  4. Setelah Anda melakukan pengisian tagihan listrik, Anda bisa mengecek ringkasan \n     listrik dengan masuk ke Menu Ringkasan.\n");
	printf("  5. Setelah itu, Anda bisa membayar tagihan dengan beberapa Metode Pembayaran yang kami sediakan.\n");
	printf("  6. Setelah Anda selesai dengan pengisian registrasi dan tagihan, \n     Anda bisa mencetak Struk sebagai bukti pembayaran tagihan Anda.\n");
	printf("\n\n  Terima Kasih Anda telah menggunakan Program Kami.  \n");
	printf("  Keterangan: Tekan Enter untuk kembali\n");
	getche();
	return help();
}

void help_warning(){
	system("cls");
    prog_head();
    printf("\t\t\t\t\t\t     Warning Messages\n");
    garis();
    printf("  Code 01 : Ketika angka yang Anda masukkan tidak sesuai dengan pilihan yang ada\n");
    printf("  Code 02 : Ketika pada menu tagihan, barang elektronik Anda melebihi batas daya.\n");
    printf("  Code 03 : Ketika pada menu tagihan, Anda memasukkan durasi lebih dari 24 jam dalam 1 hari\n");
    printf("  Code 04 : Ketika Anda masuk ke menu yang membutuhkan login, namun Anda belum meregistrasi.\n");
	printf("  \n\n  Keterangan: Tekan Enter untuk kembali.\n");
	getch();
	return help();
}

void help(){
	system("cls");
    prog_head();
    printf("\t\t\t\t\t\t    MENU HELP\n");
    garis();
    printf("\n  [1] Frequently Asked Questions\n  [2] Warning Messages\n  [3] How to Use Program\n  [4] Kembali\n");
    printf("  Pilihan Anda: ");
    scanf(" %d",&i);
    switch(i){

    	case 1:
	    	help_faq();
	    	break;
    	case 2:
	    	help_warning();
	    	break;
    	case 3:
	    	help_how();
	    	break;
    	case 4:
	    	return menu_awal();
	    	break;
		default:
			warning01();
			printf("  Keterangan: Tekan Enter untuk kembali.\n");
			getche();
			return help();

	}

}

void tagihan(){

  	system("cls");
	prog_head();
    printf("\t\t\t\t\t\tSistem Tagihan Listrik\n");                 //Nama Program
  	garis();


  	if(!nama1 || !nama2 || !npm){
		warning04();
		return registrasi();
    }
	else{
        printf("  Silakan login terlebih dahulu untuk melanjutkan :) \n");
        li:
        printf("  NPM Anda                   : ");
        scanf(" %d",&npm_pass);
        printf("  ID tagihan listrik Anda    : ");
        scanf(" %d",&id_pass);
        if (npm_pass==npm && id_pass==id){
            printf("\n");
            printf("  Anda Berhasil login!\n");
            Sleep(500);
            system("cls");
            prog_head();
            printf("\n");
            printf("\n  Pilih Tipe Pembayaran Listrikmu :\n  <1> Prabayar\n  <2> Pascabayar\n  <3> Kembali Ke Menu Utama\n");
            printf("  Pilihan Anda : ");
            scanf("%d",&tipe);
            switch(tipe){
            case (1):
            tipe = 1;
            break;
            case (2):
            tipe = 2;
            break;
            case (3):
            return menu();
            break;
            default:
			warning01();
			system("cls");
			return tagihan();
            }
        }
        else{
		printf("  Warning: NPM/ID yang Anda masukkan salah, silakan coba lagi.\n  Keterangan: Tekan ENTER untuk kembali.\n");

getch();

		system("cls");
		prog_head();
		goto li;
        }
	}



	jenis_tagihan:
	system("cls");
	prog_head();
    printf("\t\t\t\t\t\tSistem Tagihan Listrik\n");                 //Nama Program
  	garis();
  	printf("\n  [1] Tagihan berdasarkan pemakaian\n  [2] Tagihan berdasarkan meteran\n");
	printf("  Pilihan Anda: ");
	scanf("%d",&op);

	switch(op){

		case 1:
		tagihan_pemakaian();
		break;
		case 2:
		tagihan_meteran();
		break;
		default:
		warning01();
		printf("  Keterangan: Tekan ENTER untuk kembali.\n");

getch();
		system("cls");
		goto jenis_tagihan;
	}

}

void tagihan_pemakaian(){
	system("cls");
	prog_head();
    printf("\t\t\t\t\t\tSistem Tagihan Listrik\n");                 //Nama Program
  	garis();



    printf("\n  Pilih Kategori Listrikmu : \n");                    //Pilih kategorinya
    printf("  1. 450Va Subsidi\n");
    printf("  2. 900Va Subsidi\n");
    printf("  3. 900Va Non-Subsidi\n");
    printf("  4. 1300Va Non-Subsidi\n");
    printf("  5. 2200Va Non-Subsidi\n");
    printf("  6. 3500Va Non-Subsidi\n");
    printf("  7. 6600Va Non-Subsidi\n");
    printf("  8. Kembali\n");
    printf("  Pilihan Anda : ");
    scanf("%d", &jenis);

    switch(jenis)
    {
    case 1:
        system("cls");
		prog_head();
  	 	printf("\t\t\t\t\t\tSistem Tagihan Listrik\n");                 //Nama Program
  		garis();
        printf("  Masukkan Apa yang kamu pakai : \n");            //benda yang dipakai dirumah//
        printf("  1. Lampu 50Watt\n");
        printf("  2. Televisi 100Watt\n");
        printf("  3. Mesin Pompa Air 125Watt\n");
        printf("  4. Setrika 200Watt\n");
        printf("  Daya awal Anda: 450Va\n");
        printf("  Masukkan Jumlah Lampu                : ");
        scanf("%i",&jumlah_lampu);
        sisa_450=sisa_450-(jumlah_lampu*50);
        printf("\n  Sisa daya Anda: %d\n",sisa_450);
        printf("  Masukkan Jumlah Televisi             : ");
        scanf("%i",&jumlah_televisi);
        sisa_450=sisa_450-(jumlah_televisi*100);
        printf("\n  Sisa daya Anda: %d\n",sisa_450);
        printf("  Masukkan Jumlah Mesin Pompa Air      : ");
        scanf("%i",&jumlah_pompa);
        sisa_450=sisa_450-(jumlah_pompa*125);
        printf("\n  Sisa daya Anda: %d\n",sisa_450);
        printf("  Masukkan Jumlah Setrika              : ");
        scanf("%i",&jumlah_setrika);
        sisa_450=sisa_450-(jumlah_setrika*200);
        printf("\n  Sisa daya Anda: %d\n",sisa_450);
        sisa_450=450;
            if(jumlah_lampu*50>450 || jumlah_televisi*100>450|| jumlah_pompa*125>450 || jumlah_setrika*200>450  ||
			jumlah_lampu*50+jumlah_televisi*100>450 || jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125>450 || 
			jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200>450){
                    warning02();
                    return tagihan();
            }

            else{
            lama:
            printf("  Masukkan lama lampu              : ");
            scanf("%f",&lama_lampu);
            harga_lampu = lama_lampu*jumlah_lampu*50;
            printf("  harga_lampu: %2.f\n",harga_lampu);
            printf("  Masukkan lama televisi           : ");
            scanf("%f",&lama_televisi);
            harga_televisi = lama_televisi*jumlah_televisi*100;
            printf("  harga_televisi: %2.f\n",harga_televisi);
            printf("  Masukkan lama pompa              : ");
            scanf("%f",&lama_pompa);
            harga_pompa = lama_pompa*jumlah_pompa*125;
            printf("  harga_pompa: %2.f\n", harga_pompa);
            printf("  Masukkan lama setrika            : ");
            scanf("%f",&lama_setrika);
            harga_setrika = lama_setrika*jumlah_setrika*200;
            printf("  harga_setrika: %2.f\n", harga_setrika);

            if(lama_lampu>24 || lama_pompa>24 || lama_setrika>24 || lama_televisi>24){
                warning03();
                prog_head();
                printf("\t\t\t\t\t\tSistem Tagihan Listrik\n");
                garis();
                goto lama;
            }
            else{
            	if(tipe==1){
		jumlah_450=harga_lampu+harga_televisi+harga_pompa+harga_setrika;
      	jumlah_450=jumlah_450*500/1000*30;
      	jumlah_450=jumlah_450+(jumlah_450*10/100);
      	printf("\n  Jumlah harga Prabayar (+PPN): Rp. %0.2f",jumlah_450);
      }
      	else{
      	jumlah_450=harga_lampu+harga_televisi+harga_pompa+harga_setrika;
      	jumlah_450=jumlah_450*400/1000*30;
      	jumlah_450=jumlah_450+(jumlah_450*10/100);
      	printf("\n  Jumlah harga Pascabayar (+PPN): Rp. %0.2f",jumlah_450);
      }

                        printf("\n  Save dengan tekan ENTER!");

getch();
                        printf("\n  Harga Tersimpan!");
                        Sleep(500);
                        system("cls");
                        return menu();
            }
            }
        break;
    case 2:
    	system("cls");
		prog_head();
  	 	printf("\t\t\t\t\t\tSistem Tagihan Listrik\n");                 //Nama Program
  		garis();
        printf("  Masukkan Apa yang kamu pakai : \n");//benda yang dipakai dirumah//
        printf("1. Lampu 50Watt\n");
        printf("2. Televisi 100Watt\n");
        printf("3. Mesin Pompa Air 125Watt\n");
        printf("4. Setrika 200Watt\n");
        printf("5. Air Conditioner 500Watt\n");
        printf("  Masukkan Jumlah Lampu: ");
        scanf("%i",&jumlah_lampu);
        sisa_900a=sisa_900a-(jumlah_lampu*50);
        printf("\n  Sisa daya Anda: %d\n",sisa_900a);
        printf("  Masukkan Jumlah Televisi : ");
        scanf("%i",&jumlah_televisi);
        sisa_900a=sisa_900a-(jumlah_televisi*100);
        printf("\n  Sisa daya Anda: %d\n",sisa_900a);
        printf("  Masukkan Jumlah Mesin Pompa Air :");
        scanf("%i",&jumlah_pompa);
        sisa_900a=sisa_900a-(jumlah_pompa*125);
        printf("\n  Sisa daya Anda: %d\n",sisa_900a);
        printf("  Masukkan Jumlah Setrika : ");
        scanf("%i",&jumlah_setrika);
        sisa_900a=sisa_900a-(jumlah_setrika*200);
        printf("\n  Sisa daya Anda: %d\n",sisa_900a);
        printf("  Masukkan jumlah Air Conditioner : ");
        scanf("%i",&jumlah_airconditioner);
        sisa_900a=sisa_900a-(jumlah_airconditioner*500);
        printf("\n  Sisa daya Anda: %d\n",sisa_900a);
        sisa_900a=900;

            if(jumlah_lampu*50>900 || jumlah_televisi*100>900|| jumlah_pompa*125>900 || jumlah_setrika*200>900 || 
			jumlah_airconditioner*500>900 || jumlah_lampu*50+jumlah_televisi*100>900 || jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125>900 || 
			jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200>900 || 
			jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200+jumlah_airconditioner*500>900){
                    warning02();
                    return tagihan();
            }

            else{
            lama1:
            printf("  Masukkan lama lampu : ");
            scanf("%f",&lama_lampu);
            harga_lampu = lama_lampu*jumlah_lampu*50;
            printf("  harga_lampu: %2.f\n",harga_lampu);
            printf("  Masukkan lama televisi: ");
            scanf("%f",&lama_televisi);
            harga_televisi = lama_televisi*jumlah_televisi*100;
            printf("  harga_televisi: %2.f\n",harga_televisi);
            printf("  Masukkan lama pompa  : ");
            scanf("%f",&lama_pompa);
            harga_pompa = lama_pompa*jumlah_pompa*125;
            printf("  harga_pompa: %2.f\n", harga_pompa);
            printf("  Masukkan lama setrika : ");
            scanf("%f",&lama_setrika);
            harga_setrika = lama_setrika*jumlah_setrika*200;
            printf("  harga_setrika: %2.f\n", harga_setrika);
            printf("  Masukkan lama Air Conditioner : ");
            scanf("%f",&lama_airconditioner);
            harga_airconditioner = lama_airconditioner*jumlah_airconditioner*500;
            printf("  harga_airconditioner: %2.f\n", harga_airconditioner);

            if(lama_lampu>24 || lama_pompa>24 || lama_setrika>24 || lama_televisi>24 || lama_airconditioner>24){
               warning03();
                prog_head();
                printf("\t\t\t\t\t\tSistem Tagihan Listrik\n");
                garis();
                goto lama1;
            }
            else{

        if(tipe=1){
    	jumlah_900a=harga_lampu+harga_televisi+harga_pompa+harga_setrika+harga_airconditioner;
      jumlah_900a=jumlah_900a*1250/1000*30;
      jumlah_900a=jumlah_900a+(jumlah_900a*10/100);
      printf("\n  Jumlah harga Prabayar (+PPN): Rp. %0.2f",jumlah_900a);
  		}
  		else{

      jumlah_900a=harga_lampu+harga_televisi+harga_pompa+harga_setrika+harga_airconditioner;
      jumlah_900a=jumlah_900a*1100/1000*30;
      jumlah_900a=jumlah_900a+(jumlah_900a*10/100);
      printf("\n  Jumlah harga Pascabayar (+PPN): Rp. %0.2f",jumlah_900a);
  }

                        printf("\n  Save dengan tekan ENTER!");

getch();
                        printf("\n  Harga Tersimpan!");
                        Sleep(500);
                        system("cls");
                        return menu();
            }
            }
        break;
    case 3:
    	system("cls");
		prog_head();
  	 	printf("\t\t\t\t\t\tSistem Tagihan Listrik\n");                 //Nama Program
  		garis();
        printf("  Masukkan Apa yang kamu pakai : \n");//benda yang dipakai dirumah//
        printf("  1. Lampu 50Watt\n");
        printf("  2. Televisi 100Watt\n");
        printf("  3. Mesin Pompa Air 125Watt\n");
        printf("  4. Setrika 200Watt\n");
        printf("  5. Air Conditioner 500Watt\n");
        printf("  Masukkan Jumlah Lampu: ");
        scanf("%i",&jumlah_lampu);
        sisa_900b=sisa_900b-(jumlah_lampu*50);
        printf("\n  Sisa daya Anda: %d\n",sisa_900b);
        printf("  Masukkan Jumlah Televisi : ");
        scanf("%i",&jumlah_televisi);
        sisa_900b=sisa_900b-(jumlah_televisi*100);
        printf("\n  Sisa daya Anda: %d\n",sisa_900b);
        printf("  Masukkan Jumlah Mesin Pompa Air :");
        scanf("%i",&jumlah_pompa);
        sisa_900b=sisa_900b-(jumlah_pompa*125);
        printf("\n  Sisa daya Anda: %d\n",sisa_900b);
        printf("  Masukkan Jumlah Setrika : ");
        scanf("%i",&jumlah_setrika);
        sisa_900b=sisa_900b-(jumlah_setrika*200);
        printf("\n  Sisa daya Anda: %d\n",sisa_900b);
        printf("  Masukkan jumlah Air Conditioner : ");
        scanf("%i",&jumlah_airconditioner);
        sisa_900b=sisa_900b-(jumlah_airconditioner*500);
        printf("\n  Sisa daya Anda: %d\n",sisa_900b);
        sisa_900b=900;


            if(jumlah_lampu*50>900 || jumlah_televisi*100>900|| jumlah_pompa*125>900 || jumlah_setrika*200>900 || jumlah_airconditioner*500>900 || 
			jumlah_lampu*50+jumlah_televisi*100>900 || jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125>900 || 
			jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200>900 || 
			jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200+jumlah_airconditioner*500>900){
                   warning02();
                    return menu();
            }

            else{
            lama2:
            printf("  Masukkan lama lampu : ");
            scanf("%f",&lama_lampu);
            harga_lampu = lama_lampu*jumlah_lampu*50;
            printf("  harga_lampu: %2.f\n",harga_lampu);
            printf("  Masukkan lama televisi: ");
            scanf("%f",&lama_televisi);
            harga_televisi = lama_televisi*jumlah_televisi*100;
            printf("  harga_televisi: %2.f\n",harga_televisi);
            printf("  Masukkan lama pompa  : ");
            scanf("%f",&lama_pompa);
            harga_pompa = lama_pompa*jumlah_pompa*125;
            printf("  harga_pompa: %2.f\n", harga_pompa);
            printf("  Masukkan lama setrika : ");
            scanf("%f",&lama_setrika);
            harga_setrika = lama_setrika*jumlah_setrika*200;
            printf("  harga_setrika: %2.f\n", harga_setrika);
            printf("  Masukkan lama Air Conditioner : ");
            scanf("%f",&lama_airconditioner);
            harga_airconditioner = lama_airconditioner*jumlah_airconditioner*500;
            printf("  harga_airconditioner: %2.f\n", harga_airconditioner);

            if(lama_lampu>24 || lama_pompa>24 || lama_setrika>24 || lama_televisi>24 || lama_airconditioner>24){
               warning03();
               prog_head();
                printf("\t\t\t\t\t\tSistem Tagihan Listrik\n");
                garis();
                goto lama2;
            }
            else{
            	if(tipe==1){
    	jumlah_900b=harga_lampu+harga_televisi+harga_pompa+harga_setrika+harga_airconditioner;
      jumlah_900b=jumlah_900b*1450/1000*30;
      jumlah_900b=jumlah_900b+(jumlah_900b*10/100);
      printf("\nJumlah harga Prabayar (+PPN): Rp. %0.2f",jumlah_900b);
  }
  		else{
      jumlah_900b=harga_lampu+harga_televisi+harga_pompa+harga_setrika+harga_airconditioner;
      jumlah_900b=jumlah_900b*1200/1000*30;
      jumlah_900b=jumlah_900b+(jumlah_900b*10/100);
      printf("\nJumlah harga Pascabayar (+PPN): Rp. %0.2f",jumlah_900b);
		}
                        printf("\nSave dengan tekan ENTER!");

getch();
                        printf("\nHarga Tersimpan!");
                        Sleep(500);
                        system("cls");
                        return menu();
            }
            }
        break;
    case 4:
    	system("cls");
		prog_head();
  	 	printf("\t\t\t\t\t\tSistem Tagihan Listrik\n");                 //Nama Program
  		garis();
        printf("Masukkan Apa yang kamu pakai : \n");//benda yang dipakai dirumah//
        printf("1. Lampu 50Watt\n");
        printf("2. Televisi 100Watt\n");
        printf("3. Mesin Pompa Air 125Watt\n");
        printf("4. Setrika 200Watt\n");
        printf("5. Air Conditioner 500Watt\n");
        printf("6. Rice Cooker 275 Watt\n");
        printf("7. Mesin Cuci 300Watt\n");
        printf("  Masukkan Jumlah Lampu : ");
        scanf("%i",&jumlah_lampu);
        sisa_1300=sisa_1300-(jumlah_lampu*50);
        printf("\n  Sisa daya Anda: %d\n",sisa_1300);
        printf("  Masukkan Jumlah Televisi : ");
        scanf("%i",&jumlah_televisi);
        sisa_1300=sisa_1300-(jumlah_televisi*100);
        printf("\n  Sisa daya Anda: %d\n",sisa_1300);
        printf("  Masukkan Jumlah Mesin Pompa Air :");
        scanf("%i",&jumlah_pompa);
        sisa_1300=sisa_1300-(jumlah_pompa*125);
        printf("\n  Sisa daya Anda: %d\n",sisa_1300);
        printf("  Masukkan Jumlah Setrika : ");
        scanf("%i",&jumlah_setrika);
        sisa_1300=sisa_1300-(jumlah_setrika*200);
        printf("\n  Sisa daya Anda: %d\n",sisa_1300);
        printf("  Masukkan jumlah Air Conditioner : ");
        scanf("%i",&jumlah_airconditioner);
        sisa_1300=sisa_1300-(jumlah_airconditioner*500);
        printf("\n  Sisa daya Anda: %d\n",sisa_1300);
        sisa_900a=900;
        printf("  Masukkan Jumlah Rice Cooker : ");
        scanf("%i",&jumlah_ricecooker);
        sisa_1300=sisa_1300-(jumlah_ricecooker*275);
        printf("\n  Sisa daya Anda: %d\n",sisa_1300);
        printf("  Masukkan Mesin Cuci : ");
        scanf("%i",&jumlah_mesincuci);
        sisa_1300=sisa_1300-(jumlah_mesincuci*375);
        printf("\n  Sisa daya Anda: %d\n",sisa_1300);
        sisa_1300=1300;



            if(jumlah_lampu*50>1300 || jumlah_televisi*100>1300|| jumlah_pompa*125>1300 || jumlah_setrika*200>1300 || jumlah_airconditioner*500>1300 || 
			jumlah_lampu*50+jumlah_televisi*100>1300 || jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125>1300 || 
			jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200>900 || 
			jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200+jumlah_airconditioner*500>1300 || 
			jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200+jumlah_airconditioner*500+jumlah_ricecooker*275>1300,
			jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200+jumlah_airconditioner*500+jumlah_ricecooker*275>1300 || 
			jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200+jumlah_airconditioner*500+jumlah_ricecooker*275+jumlah_mesincuci*300>1300){
                    warning02();
                    return tagihan();
            }

            else{
            lama3:
            printf("Masukkan lama lampu : ");
            scanf("%f",&lama_lampu);
            harga_lampu = lama_lampu*jumlah_lampu*50;
            printf("harga_lampu: %2.f\n",harga_lampu);
            printf("Masukkan lama televisi: ");
            scanf("%f",&lama_televisi);
            harga_televisi = lama_televisi*jumlah_televisi*100;
            printf("harga_televisi: %2.f\n",harga_televisi);
            printf("Masukkan lama pompa  : ");
            scanf("%f",&lama_pompa);
            harga_pompa = lama_pompa*jumlah_pompa*125;
            printf("harga_pompa: %2.f\n", harga_pompa);
            printf("Masukkan lama setrika : ");
            scanf("%f",&lama_setrika);
            harga_setrika = lama_setrika*jumlah_setrika*200;
            printf("harga_setrika: %2.f\n", harga_setrika);
            printf("Masukkan lama Air Conditioner : ");
            scanf("%f",&lama_airconditioner);
            harga_airconditioner = lama_airconditioner*jumlah_airconditioner*500;
            printf("harga_airconditioner: %2.f\n", harga_airconditioner);
            printf("Masukkan lama rice cooker : ");
            scanf("%f",&lama_ricecooker);
            harga_ricecooker=lama_ricecooker*jumlah_ricecooker*275;
            printf("harga_ricecooker: %2.f\n", harga_ricecooker);
            printf("Masukkan lama mesin cuci : ");
            scanf("%f",&lama_mesincuci);
            harga_mesincuci=lama_mesincuci*jumlah_mesincuci*300;
            printf("harga_mesincuci: %2.f\n",harga_mesincuci);

            if(lama_lampu>24 || lama_pompa>24 || lama_setrika>24 || lama_televisi>24 || lama_airconditioner>24 || lama_ricecooker>24 || lama_mesincuci>24){
                warning03();
                prog_head();
                printf("\t\t\t\t\t\tSistem Tagihan Listrik\n");
                garis();
                goto lama3;
            }
            else{
            	if(tipe==1){
        jumlah_1300=harga_lampu+harga_televisi+harga_pompa+harga_setrika+harga_airconditioner+harga_ricecooker+harga_mesincuci;
      jumlah_1300=jumlah_1300*1650/1000*30;
      jumlah_1300=jumlah_1300+(jumlah_1300*10/100);
      printf("\nJumlah harga Prabayar (+PPN): Rp. %0.2f",jumlah_1300);
  	}
  	else{
      jumlah_1300=harga_lampu+harga_televisi+harga_pompa+harga_setrika+harga_airconditioner+harga_ricecooker+harga_mesincuci;
      jumlah_1300=jumlah_1300*1400/1000*30;
      jumlah_1300=jumlah_1300+(jumlah_1300*10/100);
      printf("\nJumlah harga Pascabayar (+PPN): Rp. %0.2f",jumlah_1300);
  	}

                        printf("\nSave dengan tekan ENTER!");

getch();

                        printf("\nHarga Tersimpan!");
                        Sleep(500);
                        system("cls");
                        return menu();
            }
            }
        break;
    case 5:
    	system("cls");
		prog_head();
  	 	printf("\t\t\t\t\t\tSistem Tagihan Listrik\n");                 //Nama Program
  		garis();
        printf("Masukkan Apa yang kamu pakai : \n");//benda yang dipakai dirumah//
        printf("1. Lampu 50Watt\n");
        printf("2. Televisi 100Watt\n");
        printf("3. Mesin Pompa Air 125Watt\n");
        printf("4. Setrika 200Watt\n");
        printf("5. Air Conditioner 500Watt\n");
        printf("6. Rice Cooker 275 Watt\n");
        printf("7. Mesin Cuci 300Watt\n");
        printf("7. Komputer PC 260 Watt\n");
        printf("8. Kulkas 150Watt\n");
        printf("  Masukkan Jumlah Lampu : ");
        scanf("%i",&jumlah_lampu);
        sisa_2200=sisa_2200-(jumlah_lampu*50);
        printf("\n  Sisa daya Anda: %d\n",sisa_1300);
        printf("  Masukkan Jumlah Televisi : ");
        scanf("%i",&jumlah_televisi);
        sisa_2200=sisa_2200-(jumlah_televisi*100);
        printf("\n  Sisa daya Anda: %d\n",sisa_2200);
        printf("  Masukkan Jumlah Mesin Pompa Air :");
        scanf("%i",&jumlah_pompa);
        sisa_2200=sisa_2200-(jumlah_pompa*125);
        printf("\n  Sisa daya Anda: %d\n",sisa_2200);
        printf("  Masukkan Jumlah Setrika : ");
        scanf("%i",&jumlah_setrika);
        sisa_2200=sisa_2200-(jumlah_setrika*200);
        printf("\n  Sisa daya Anda: %d\n",sisa_1300);
        printf("  Masukkan jumlah Air Conditioner : ");
        scanf("%i",&jumlah_airconditioner);
        sisa_2200=sisa_2200-(jumlah_airconditioner*500);
        printf("\n  Sisa daya Anda: %d\n",sisa_2200);
        printf("  Masukkan Jumlah Rice Cooker : ");
        scanf("%i",&jumlah_ricecooker);
        sisa_2200=sisa_2200-(jumlah_ricecooker*275);
        printf("\n  Sisa daya Anda: %d\n",sisa_2200);
        printf("  Masukkan Mesin Cuci : ");
        scanf("%i",&jumlah_mesincuci);
        sisa_2200=sisa_2200-(jumlah_mesincuci*375);
        printf("\n  Sisa daya Anda: %d\n",sisa_2200);
        printf("Masukkan jumlah Komputer PC : ");
        scanf("%i",&jumlah_komputerPC);
        sisa_2200=sisa_2200-(jumlah_komputerPC*260);
        printf("\n  Sisa daya Anda:  %d\n",sisa_2200);
        printf("Masukkan jumlah Kulkas : ");
        scanf("%i",&jumlah_kulkas);
        sisa_2200=sisa_2200-(jumlah_kulkas*150);
        printf("\n  Sisa daya Anda:   %d\n",sisa_2200);
        sisa_2200=2200;



            if(jumlah_lampu*50>2200 || jumlah_televisi*100>2200|| jumlah_pompa*125>2200 || jumlah_setrika*200>2200 || 
			jumlah_airconditioner*500>2200 || jumlah_lampu*50+jumlah_televisi*100>2200 || jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125>2200 || 
			jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200>2200 || 
			jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200+jumlah_airconditioner*500>2200 || 
			jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200+jumlah_airconditioner*500+jumlah_ricecooker*275>2200,
			jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200+jumlah_airconditioner*500+jumlah_ricecooker*275>2200 || 
			jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200+jumlah_airconditioner*500+jumlah_ricecooker*275+jumlah_mesincuci*300>2200 || 
			jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200+jumlah_airconditioner*500+jumlah_ricecooker*275+jumlah_mesincuci*300+jumlah_komputerPC*260>2200 || 
			jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200+jumlah_airconditioner*500+jumlah_ricecooker*275+jumlah_mesincuci*300+jumlah_komputerPC*260+jumlah_kulkas*150>2200){
                    warning02();
                    return tagihan();
            }

            else{
            lama4:
            printf("Masukkan lama lampu : ");
            scanf("%f",&lama_lampu);
            harga_lampu = lama_lampu*jumlah_lampu*50;
            printf("harga_lampu: %2.f\n",harga_lampu);
            printf("Masukkan lama televisi: ");
            scanf("%f",&lama_televisi);
            harga_televisi = lama_televisi*jumlah_televisi*100;
            printf("harga_televisi: %2.f\n",harga_televisi);
            printf("Masukkan lama pompa  : ");
            scanf("%f",&lama_pompa);
            harga_pompa = lama_pompa*jumlah_pompa*125;
            printf("harga_pompa: %2.f\n", harga_pompa);
            printf("Masukkan lama setrika : ");
            scanf("%f",&lama_setrika);
            harga_setrika = lama_setrika*jumlah_setrika*200;
            printf("harga_setrika: %2.f\n", harga_setrika);
            printf("Masukkan lama Air Conditioner : ");
            scanf("%f",&lama_airconditioner);
            harga_airconditioner = lama_airconditioner*jumlah_airconditioner*500;
            printf("harga_airconditioner: %2.f\n", harga_airconditioner);
            printf("Masukkan lama rice cooker : ");
            scanf("%f",&lama_ricecooker);
            harga_ricecooker=lama_ricecooker*jumlah_ricecooker*275;
            printf("harga_ricecooker: %2.f\n", harga_ricecooker);
            printf("Masukkan lama mesin cuci : ");
            scanf("%f",&lama_mesincuci);
            harga_mesincuci=lama_mesincuci*jumlah_mesincuci*300;
            printf("harga_mesincuci: %2.f\n",harga_mesincuci);
            printf("Masukkan lama komputer PC : ");
            scanf("%f",&lama_komputerPC);
            harga_komputerPC=lama_komputerPC*jumlah_komputerPC*260;
            printf("harga_komputerPC: %2.f\n", harga_komputerPC);
            printf("Masukkan lama kulkas : ");
            scanf("%f",&lama_kulkas);
            harga_kulkas=lama_kulkas*jumlah_kulkas*150;
            printf("harga_kulkas: %2.f\n",harga_kulkas);

            if(lama_lampu>24 || lama_pompa>24 || lama_setrika>24 || lama_televisi>24 || lama_airconditioner>24 || lama_ricecooker>24 || lama_mesincuci>24 || lama_komputerPC>24 || lama_kulkas>24){
                warning03();
                prog_head();
                printf("\t\t\t\t\t\tSistem Tagihan Listrik\n");
                garis();
                goto lama4;
            }
            else{

	  if(tipe==1){
	  jumlah_2200=harga_lampu+harga_televisi+harga_pompa+harga_setrika+harga_airconditioner+harga_ricecooker+harga_mesincuci+harga_komputerPC+harga_kulkas;
      jumlah_2200=jumlah_2200*1800/1000*30;
         jumlah_2200=jumlah_2200+(jumlah_2200*10/100);
      printf("\nJumlah harga Prabayar (+PPN): Rp. %0.2f",jumlah_2200);
  	}
  	else{
      jumlah_2200=harga_lampu+harga_televisi+harga_pompa+harga_setrika+harga_airconditioner+harga_ricecooker+harga_mesincuci+harga_komputerPC+harga_kulkas   ;
      jumlah_2200=jumlah_2200*1500/1000*30;
      jumlah_2200=jumlah_2200+(jumlah_2200*10/100);
	  printf("\nJumlah harga Pascabayar (+PPN): Rp. %0.2f",jumlah_2200);
}

                        printf("\nSave dengan tekan ENTER!");

getch();
                        printf("\nHarga Tersimpan!");
                        Sleep(500);
                        system("cls");
                        return menu();
            }
            }
        break;
    case 6:
    	system("cls");
		prog_head();
  	 	printf("\t\t\t\t\t\tSistem Tagihan Listrik\n");                 //Nama Program
  		garis();
        printf("Masukkan Apa yang kamu pakai : \n");//benda yang dipakai dirumah//
        printf("1. Lampu 50Watt\n");
        printf("2. Televisi 100Watt\n");
        printf("3. Mesin Pompa Air 125Watt\n");
        printf("4. Setrika 200Watt\n");
        printf("5. Air Conditioner 500Watt\n");
        printf("6. Rice Cooker 275 Watt\n");
        printf("7. Mesin Cuci 300Watt\n");
        printf("8. Komputer PC 260 Watt\n");
        printf("9. Kulkas 150Watt\n");
        printf("10. Dispenser 190Watt\n");
        printf("11. Pemanggang Roti 450Watt\n");
        printf("  Masukkan Jumlah Lampu : ");
        scanf("%i",&jumlah_lampu);
        sisa_3500=sisa_3500-(jumlah_lampu*50);
        printf("\n  Sisa daya Anda: %d\n",sisa_3500);
        printf("  Masukkan Jumlah Televisi : ");
        scanf("%i",&jumlah_televisi);
        sisa_3500=sisa_3500-(jumlah_televisi*100);
        printf("\n  Sisa daya Anda: %d\n",sisa_3500);
        printf("  Masukkan Jumlah Mesin Pompa Air :");
        scanf("%i",&jumlah_pompa);
        sisa_3500=sisa_3500-(jumlah_pompa*125);
        printf("\n  Sisa daya Anda: %d\n",sisa_3500);
        printf("  Masukkan Jumlah Setrika : ");
        scanf("%i",&jumlah_setrika);
        sisa_3500=sisa_3500-(jumlah_setrika*200);
        printf("\n  Sisa daya Anda: %d\n",sisa_3500);
        printf("  Masukkan jumlah Air Conditioner : ");
        scanf("%i",&jumlah_airconditioner);
        sisa_3500=sisa_3500-(jumlah_airconditioner*500);
        printf("\n  Sisa daya Anda: %d\n",sisa_3500);
        printf("  Masukkan Jumlah Rice Cooker : ");
        scanf("%i",&jumlah_ricecooker);
        sisa_3500=sisa_3500-(jumlah_ricecooker*275);
        printf("\n  Sisa daya Anda: %d\n",sisa_3500);
        printf("  Masukkan Mesin Cuci : ");
        scanf("%i",&jumlah_mesincuci);
        sisa_3500=sisa_3500-(jumlah_mesincuci*375);
        printf("\n  Sisa daya Anda: %d\n",sisa_3500);
        printf("  Masukkan jumlah Komputer PC : ");
        scanf("%i",&jumlah_komputerPC);
        sisa_3500=sisa_3500-(jumlah_komputerPC*260);
        printf("\n  Sisa daya Anda:  %d\n",sisa_3500);
        printf("  Masukkan jumlah Kulkas : ");
        scanf("%i",&jumlah_kulkas);
        sisa_3500=sisa_3500-(jumlah_kulkas*150);
        printf("\n  Sisa daya Anda:   %d\n",sisa_3500);
        printf("  Masukkan Jumlah Dispenser : ");
        scanf("%i",&jumlah_dispenser);
        sisa_3500=sisa_3500-(jumlah_dispenser*190);
        printf("\n  Sisa daya Anda:   %d\n",sisa_3500);
        printf("  Masukkan Jumlah Pemanggang Roti : ");
        scanf("%i",&jumlah_pemanggangroti);
        sisa_3500=sisa_3500-(jumlah_pemanggangroti*450);
        printf("\n  Sisa daya Anda:   %d\n",sisa_3500);
        sisa_3500=3500;



            if(jumlah_lampu*50>3500 || jumlah_televisi*100>3500|| jumlah_pompa*125>3500 || jumlah_setrika*200>3500 || jumlah_airconditioner*500>3500 || jumlah_lampu*50+jumlah_televisi*100>3500 || jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125>3500 || jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200>3500 || jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200+jumlah_airconditioner*500>3500 || jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200+jumlah_airconditioner*500+jumlah_ricecooker*275>3500,jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200+jumlah_airconditioner*500+jumlah_ricecooker*275>3500 || jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200+jumlah_airconditioner*500+jumlah_ricecooker*275+jumlah_mesincuci*300>3500 || jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200+jumlah_airconditioner*500+jumlah_ricecooker*275+jumlah_mesincuci*300+jumlah_komputerPC*260>3500 || jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200+jumlah_airconditioner*500+jumlah_ricecooker*275+jumlah_mesincuci*300+jumlah_komputerPC*260+jumlah_kulkas*150>3500
               || jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200+jumlah_airconditioner*500+jumlah_ricecooker*275+jumlah_mesincuci*300+jumlah_komputerPC*260+jumlah_kulkas*150+jumlah_dispenser*190>3500 || jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200+jumlah_airconditioner*500+jumlah_ricecooker*275+jumlah_mesincuci*300+jumlah_komputerPC*260+jumlah_kulkas*150+jumlah_dispenser*190+jumlah_pemanggangroti*450>3500 ){
                    warning02();
                    return tagihan();
            }

            else{
            lama5:
            printf("Masukkan lama lampu : ");
            scanf("%f",&lama_lampu);
            harga_lampu = lama_lampu*jumlah_lampu*50;
            printf("harga_lampu: %2.f\n",harga_lampu);
            printf("Masukkan lama televisi: ");
            scanf("%f",&lama_televisi);
            harga_televisi = lama_televisi*jumlah_televisi*100;
            printf("harga_televisi: %2.f\n",harga_televisi);
            printf("Masukkan lama pompa  : ");
            scanf("%f",&lama_pompa);
            harga_pompa = lama_pompa*jumlah_pompa*125;
            printf("harga_pompa: %2.f\n", harga_pompa);
            printf("Masukkan lama setrika : ");
            scanf("%f",&lama_setrika);
            harga_setrika = lama_setrika*jumlah_setrika*200;
            printf("harga_setrika: %2.f\n", harga_setrika);
            printf("Masukkan lama Air Conditioner : ");
            scanf("%f",&lama_airconditioner);
            harga_airconditioner = lama_airconditioner*jumlah_airconditioner*500;
            printf("harga_airconditioner: %2.f\n", harga_airconditioner);
            printf("Masukkan lama rice cooker : ");
            scanf("%f",&lama_ricecooker);
            harga_ricecooker=lama_ricecooker*jumlah_ricecooker*275;
            printf("harga_ricecooker: %2.f\n", harga_ricecooker);
            printf("Masukkan lama mesin cuci : ");
            scanf("%f",&lama_mesincuci);
            harga_mesincuci=lama_mesincuci*jumlah_mesincuci*300;
            printf("harga_mesincuci: %2.f\n",harga_mesincuci);
            printf("Masukkan lama komputer PC : ");
            scanf("%f",&lama_komputerPC);
            harga_komputerPC=lama_komputerPC*jumlah_komputerPC*260;
            printf("harga_komputerPC: %2.f\n", harga_komputerPC);
            printf("Masukkan lama kulkas : ");
            scanf("%f",&lama_kulkas);
            harga_kulkas=lama_kulkas*jumlah_kulkas*150;
            printf("harga_kulkas: %2.f\n",harga_kulkas);
            printf("Masukkan lama dispenser : ");
            scanf("%f",&lama_dispenser);
            harga_dispenser=lama_dispenser*jumlah_dispenser*190;
            printf("harga_dispenser: %2.f\n",harga_dispenser);
            printf("Masukkan lama pemanggang roti : ");
            scanf("%f",&lama_pemanggangroti);
            harga_pemanggangroti=lama_pemanggangroti*jumlah_pemanggangroti*450;
            printf("harga_pemanggangroti: %2.f",harga_pemanggangroti);

            if(lama_lampu>24 || lama_pompa>24 || lama_setrika>24 || lama_televisi>24 || lama_airconditioner>24 || lama_ricecooker>24 || lama_mesincuci>24 || lama_komputerPC>24 || lama_kulkas>24 || lama_dispenser>24 || lama_pemanggangroti>24){
               warning03();
               prog_head();
                printf("\t\t\t\t\t\tSistem Tagihan Listrik\n");
                garis();
                goto lama5;
            }
            else{
            	if(tipe==1){
      jumlah_3500=harga_lampu+harga_televisi+harga_pompa+harga_setrika+harga_airconditioner+harga_ricecooker+harga_mesincuci+harga_komputerPC+harga_kulkas+harga_dispenser+harga_pemanggangroti;
      jumlah_3500=jumlah_3500*1950/1000*30;
      jumlah_3500=jumlah_3500+(jumlah_3500*10/100);
      printf("\nJumlah harga Prabayar (+PPN): Rp. %0.2f",jumlah_3500);
  }
  	else{
      jumlah_3500=harga_lampu+harga_televisi+harga_pompa+harga_setrika+harga_airconditioner+harga_ricecooker+harga_mesincuci+harga_komputerPC+harga_kulkas+harga_dispenser+harga_pemanggangroti;
      jumlah_3500=jumlah_3500*1850/1000*30;
      jumlah_3500=jumlah_3500+(jumlah_3500*10/100);
	  printf("\nJumlah harga Pascabayar (+PPN): Rp. %0.2f",jumlah_3500);
		}
                        printf("\nSave dengan tekan ENTER!");

getch();
                        printf("\nHarga Tersimpan!");
                        Sleep(500);
                        system("cls");
                        return menu();
            }
            }
        break;
    case 7:
    	system("cls");
		prog_head();
  	 	printf("\t\t\t\t\t\tSistem Tagihan Listrik\n");                 //Nama Program
  		garis();
        printf("Masukkan Apa yang kamu pakai : \n");//benda yang dipakai dirumah//
        printf("1. Lampu 50Watt\n");
        printf("2. Televisi 100Watt\n");
        printf("3. Mesin Pompa Air 125Watt\n");
        printf("4. Setrika 200Watt\n");
        printf("5. Air Conditioner 500Watt\n");
        printf("6. Rice Cooker 275 Watt\n");
        printf("7. Mesin Cuci 300Watt\n");
        printf("8. Komputer PC 260 Watt\n");
        printf("9. Kulkas 150Watt\n");
        printf("10. Dispenser 190Watt\n");
        printf("11. Pemanggang Roti 450Watt\n");
        printf("12. Microwave 600Watt\n");
        printf("13. Kompor Listrik 450 Watt\n");
        printf("  Masukkan Jumlah Lampu: ");
        scanf("%i",&jumlah_lampu);
        sisa_6600=sisa_6600-(jumlah_lampu*50);
        printf("\n  Sisa daya Anda: %d\n",sisa_6600);
        printf("  Masukkan Jumlah Televisi : ");
        scanf("%i",&jumlah_televisi);
        sisa_6600=sisa_6600-(jumlah_televisi*100);
        printf("\n  Sisa daya Anda: %d\n",sisa_6600);
        printf("  Masukkan Jumlah Mesin Pompa Air :");
        scanf("%i",&jumlah_pompa);
        sisa_6600=sisa_6600-(jumlah_pompa*125);
        printf("\n  Sisa daya Anda: %d\n",sisa_6600);
        printf("  Masukkan Jumlah Setrika : ");
        scanf("%i",&jumlah_setrika);
        sisa_6600=sisa_6600-(jumlah_setrika*200);
        printf("\n  Sisa daya Anda: %d\n",sisa_6600);
        printf("  Masukkan jumlah Air Conditioner : ");
        scanf("%i",&jumlah_airconditioner);
        sisa_6600=sisa_6600-(jumlah_airconditioner*500);
        printf("\n  Sisa daya Anda: %d\n",sisa_6600);
        printf("  Masukkan Jumlah Rice Cooker : ");
        scanf("%i",&jumlah_ricecooker);
        sisa_6600=sisa_6600-(jumlah_ricecooker*275);
        printf("\n  Sisa daya Anda: %d\n",sisa_6600);
        printf("  Masukkan Mesin Cuci : ");
        scanf("%i",&jumlah_mesincuci);
        sisa_6600=sisa_6600-(jumlah_mesincuci*375);
        printf("\n  Sisa daya Anda: %d\n",sisa_6600);
        printf("  Masukkan jumlah Komputer PC : ");
        scanf("%i",&jumlah_komputerPC);
        sisa_6600=sisa_6600-(jumlah_komputerPC*260);
        printf("\n  Sisa daya Anda:  %d\n",sisa_6600);
        printf("  Masukkan jumlah Kulkas : ");
        scanf("%i",&jumlah_kulkas);
        sisa_6600=sisa_6600-(jumlah_kulkas*150);
        printf("\n  Sisa daya Anda:   %d\n",sisa_6600);
        printf("  Masukkan Jumlah Dispenser : ");
        scanf("%i",&jumlah_dispenser);
        sisa_6600=sisa_6600-(jumlah_dispenser*190);
        printf("\n  Sisa daya Anda:   %d\n",sisa_6600);
        printf("  Masukkan Jumlah Pemanggang Roti : ");
        scanf("%i",&jumlah_pemanggangroti);
        sisa_6600=sisa_6600-(jumlah_pemanggangroti*450);
        printf("\n  Sisa daya Anda:   %d\n",sisa_6600);
        printf("  Masukkan Jumlah Microwave : ");
        scanf("%i",&jumlah_microwave);
        sisa_6600=sisa_6600-(jumlah_microwave*600);
        printf("\n  Sisa daya Anda:   %d\n",sisa_6600);
        printf("  Masukkan Jumlah Kompor Listrik : ");
        scanf("%i",&jumlah_komporlistrik);
        sisa_6600=sisa_6600-(jumlah_komporlistrik*600);
        printf("\n  Sisa daya Anda:   %d\n",sisa_6600);
        sisa_6600=6600;

            if(jumlah_lampu*50>6600 || jumlah_televisi*100>6600|| jumlah_pompa*125>6600 || jumlah_setrika*200>6600 || jumlah_airconditioner*500>6600 || jumlah_lampu*50+jumlah_televisi*100>6600 || jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125>6600 || jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200>6600 || jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200+jumlah_airconditioner*500>6600 || jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200+jumlah_airconditioner*500+jumlah_ricecooker*275>6600,jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200+jumlah_airconditioner*500+jumlah_ricecooker*275>6600 || jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200+jumlah_airconditioner*500+jumlah_ricecooker*275+jumlah_mesincuci*300>6600 || jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200+jumlah_airconditioner*500+jumlah_ricecooker*275+jumlah_mesincuci*300+jumlah_komputerPC*260>6600 || jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200+jumlah_airconditioner*500+jumlah_ricecooker*275+jumlah_mesincuci*300+jumlah_komputerPC*260+jumlah_kulkas*150>6600
               || jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200+jumlah_airconditioner*500+jumlah_ricecooker*275+jumlah_mesincuci*300+jumlah_komputerPC*260+jumlah_kulkas*150+jumlah_dispenser*190>6600 || jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200+jumlah_airconditioner*500+jumlah_ricecooker*275+jumlah_mesincuci*300+jumlah_komputerPC*260+jumlah_kulkas*150+jumlah_dispenser*190+jumlah_pemanggangroti*450>6600 || jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200+jumlah_airconditioner*500+jumlah_ricecooker*275+jumlah_mesincuci*300+jumlah_komputerPC*260+jumlah_kulkas*150+jumlah_dispenser*190+jumlah_pemanggangroti*450+jumlah_microwave*600>6600 || jumlah_lampu*50+jumlah_televisi*100+jumlah_pompa*125+jumlah_setrika*200+jumlah_airconditioner*500+jumlah_ricecooker*275+jumlah_mesincuci*300+jumlah_komputerPC*260+jumlah_kulkas*150+jumlah_dispenser*190+jumlah_pemanggangroti*450+jumlah_microwave*600+jumlah_komporlistrik*450>6600 ){
                    warning02();
                    return tagihan();
            }

            else{
            lama6:
            printf("Masukkan lama lampu : ");
            scanf("%f",&lama_lampu);
            harga_lampu = lama_lampu*jumlah_lampu*50;
            printf("harga_lampu: %2.f\n",harga_lampu);
            printf("Masukkan lama televisi: ");
            scanf("%f",&lama_televisi);
            harga_televisi = lama_televisi*jumlah_televisi*100;
            printf("harga_televisi: %2.f\n",harga_televisi);
            printf("Masukkan lama pompa  : ");
            scanf("%f",&lama_pompa);
            harga_pompa = lama_pompa*jumlah_pompa*125;
            printf("harga_pompa: %2.f\n", harga_pompa);
            printf("Masukkan lama setrika : ");
            scanf("%f",&lama_setrika);
            harga_setrika = lama_setrika*jumlah_setrika*200;
            printf("harga_setrika: %2.f\n", harga_setrika);
            printf("Masukkan lama Air Conditioner : ");
            scanf("%f",&lama_airconditioner);
            harga_airconditioner = lama_airconditioner*jumlah_airconditioner*500;
            printf("harga_airconditioner: %2.f\n", harga_airconditioner);
            printf("Masukkan lama rice cooker : ");
            scanf("%f",&lama_ricecooker);
            harga_ricecooker=lama_ricecooker*jumlah_ricecooker*275;
            printf("harga_ricecooker: %2.f\n", harga_ricecooker);
            printf("Masukkan lama mesin cuci : ");
            scanf("%f",&lama_mesincuci);
            harga_mesincuci=lama_mesincuci*jumlah_mesincuci*300;
            printf("harga_mesincuci: %2.f\n",harga_mesincuci);
            printf("Masukkan lama komputer PC : ");
            scanf("%f",&lama_komputerPC);
            harga_komputerPC=lama_komputerPC*jumlah_komputerPC*260;
            printf("harga_komputerPC: %2.f\n", harga_komputerPC);
            printf("Masukkan lama kulkas : ");
            scanf("%f",&lama_kulkas);
            harga_kulkas=lama_kulkas*jumlah_kulkas*150;
            printf("harga_kulkas: %2.f\n",harga_kulkas);
            printf("Masukkan lama dispenser : ");
            scanf("%f",&lama_dispenser);
            harga_dispenser=lama_dispenser*jumlah_dispenser*190;
            printf("harga_dispenser: %2.f\n",harga_dispenser);
            printf("Masukkan lama pemanggang roti : ");
            scanf("%f",&lama_pemanggangroti);
            harga_pemanggangroti=lama_pemanggangroti*jumlah_pemanggangroti*450;
            printf("harga_pemanggangroti: %2.f\n",harga_pemanggangroti);
            printf("Masukkan lama Microwave : ");
            scanf("%f",&lama_microwave);
            harga_microwave=lama_microwave*jumlah_microwave*600;
            printf("harga_microwave: %2.f\n",harga_microwave);
            printf("Masukkan lama kompor listrik : ");
            scanf("%f",&lama_komporlistrik);
            harga_komporlistrik=lama_komporlistrik*jumlah_komporlistrik*450;
            printf("harga_komporlistrik : %2.f\n",harga_komporlistrik);

            if(lama_lampu>24 || lama_pompa>24 || lama_setrika>24 || lama_televisi>24 || lama_airconditioner>24 || lama_ricecooker>24 || lama_mesincuci>24 || lama_komputerPC>24 || lama_kulkas>24 || lama_dispenser>24 || lama_pemanggangroti>24 || lama_microwave>24 || lama_komporlistrik>24){
                warning03();
                prog_head();
                printf("\t\t\t\t\t\tSistem Tagihan Listrik\n");
                garis();
                goto lama6;
            }
            else{
            	if(tipe==1){
      jumlah_6600=harga_lampu+harga_televisi+harga_pompa+harga_setrika+harga_airconditioner+harga_ricecooker+harga_mesincuci+harga_komputerPC+harga_kulkas+harga_dispenser+harga_pemanggangroti+harga_microwave+harga_komporlistrik;
      jumlah_6600=jumlah_6600*2400/1000*30;
      jumlah_6600=jumlah_6600+(jumlah_6600*10/100);
      printf("\nJumlah harga Prabayar (+PPN): Rp. %0.2f",jumlah_6600);
  		}
  		else{
      jumlah_6600=harga_lampu+harga_televisi+harga_pompa+harga_setrika+harga_airconditioner+harga_ricecooker+harga_mesincuci+harga_komputerPC+harga_kulkas+harga_dispenser+harga_pemanggangroti+harga_microwave+harga_komporlistrik;
      jumlah_6600=jumlah_6600*2000/1000*30;
      jumlah_6600=jumlah_6600+(jumlah_6600*10/100);
	  printf("\nJumlah harga Pascabayar (+PPN): Rp. %0.2f",jumlah_6600);
}

                        printf("\nSave dengan tekan ENTER!");

getch();
                        printf("\nHarga Tersimpan!");
                        Sleep(500);
                        system("cls");
                        return menu();
            }
            }
        break;
        case 8:
        return tagihan();
        break;

    default:
        warning01(); //Statement kode salah
        printf("Keterangan: Tekan ENTER untuk kembali.");

getch();

        system("cls");
    return tagihan();
    }

}

int meteran(int meteranakhir, int meteranawal){
printf("\nMasukan Meteran Awal : ");
scanf("%d",&meteranawal);
printf("Masukan Meteran Akhir: ");
scanf("%d",&meteranakhir);
return (meteranakhir-meteranawal);
}

void tagihan_meteran(){

    //DEKLARASI//

  //ALGORITMA METERAN//

  system("cls");
  prog_head();
  printf("\t\t\t\t\tTAGIHAN LISTRIK BERDASARKAN SURVEI METERAN     \n");
  garis();
  printf("\n");
    printf("  1. DATA PELANGGAN\n") ;
    printf("  2. CEK TAGIHAN TERAKHIR\n");
    printf("  3. PEMBAYARAN TAGIHAN\n");
    printf("  4. KEMBALI\n");
    printf("\n  Masukan Pilihan : "); scanf("%d",&h);

    switch(h){

	case 1:

	printf("  Nama                 : %s\n",nama1);

	switch(o){
	case 1:
	printf("  NPM                  : %d\n",npm);
	printf("  Status               : %s\n",status1);
	printf("  Jurusan              : %s\n",jurusan);
	printf("  Fakultas             : %s\n",fakultas);
	printf("  Perguruan Tinggi     : %s\n",pt);
	break;
	case 2:
	printf("  NIP                  : %d\n",npm);
	printf("  Status               : %s\n",status2);
	printf("  Fakultas             : %s\n",fakultas);
	printf("  Perguruan Tinggi     : %s\n",pt);
	break;
	case 3:
	printf("  NISN                 : %d\n",npm);
	printf("  Status               : %s\n",status3);
	printf("  Jurusan              : %s\n",sekjur);
	printf("  Sekolah              : %s\n",sekolah);
	break;
	case 4:
	printf("  No Identitas         : %d\n",npm);
	printf("  Status               : %s\n",lain);
	break;
	default:
		printf("yeah");
		getch();
		return tagihan_meteran();

	}

	printf("  Keterangan: Tekan ENTER untuk kembali.\n");

    getch();
	return tagihan_meteran();
    break;

      case 2:

    system("cls");
    prog_head();
    printf("\t\t\t\t\t\tCEK JUMLAH TAGIHAN\n");
    garis();
    printf("\n");
    printf("  Jumlah tagihan Anda sebesar: \n");
    garis();
	if(jumlah_450/10>100)
	printf("  Jumlah Tagihan Anda\t: Rp.%0.2f\n",jumlah_450);

	if(jumlah_900a/10>100)
	printf("  Jumlah Tagihan Anda\t: Rp.%0.2f\n",jumlah_900a);

	if(jumlah_900b/10>100 )
	printf("  Jumlah Tagihan Anda\t: Rp.%0.2f\n",jumlah_900b);

	if(jumlah_1300/10>100 )
	printf("  Jumlah Tagihan Anda\t: Rp.%0.2f\n",jumlah_1300);

	if(jumlah_2200/10>100 )
	printf("  Jumlah Tagihan Anda\t: Rp.%0.2f\n",jumlah_2200);

	if(jumlah_3500/10>100 )
	printf("  Jumlah Tagihan Anda\t: Rp.%0.2f\n",jumlah_3500);

	if(jumlah_6600/10>100)
	printf("  Jumlah Tagihan Anda\t: Rp.%0.2f\n",jumlah_6600);

	else{
	printf("  ANDA BELUM MEMILIKI TAGIHAN, SILAKAN MENGISI TAGIHAN ANDA TERLEBIH DAHULU\n");
	}
	garis();
	printf("\n");

	printf("  Keterangan: Tekan ENTER untuk kembali.\n");
	getch();
	return tagihan_meteran();
    break;

      case 3: {
	  printf("\n    PEMBAYARAN TAGIHAN\n");
                   printf("   --------------------\n");
                selisihmeteran= meteran(meteranakhir,meteranawal);

                if(selisihmeteran<=100){
				tagihanbaru=selisihmeteran*2000;
				printf("  Harga Per Meter     : Rp 2.000,00\n");
				}

                else if((selisihmeteran>100) &&(selisihmeteran<=200)){
                tagihanbaru=selisihmeteran*3000;
                 printf("  Harga Per Meter     : Rp 3.000,00\n");
                }
                else{
                tagihanbaru=selisihmeteran*3500;
                printf("  Harga Per Meter      : Rp 3.500,00\n");
				}
                printf("  Selisih Meteran      : %d \n",selisihmeteran);
                printf("  Tagihan              : Rp %0.0f,00 \n",tagihanbaru);
                printf("  Tanggal Pembayaran Terakhir (Contoh: 08 <enter> 05 <enter> 1998 <enter>): \n");
                printf("  Tanggal              : ");
				scanf(" %d",&hari);
				printf("  Bulan                : ");
				scanf(" %d",&bulan);
				printf("  Tahun                : ");
				scanf(" %d",&tahun);


                printf("  Tanggal Pembayaran Sekarang (Contoh: 11 <enter> 01 <enter> 1999 <enter>): \n");
                printf("  Tanggal              : ");
				scanf("%d",&hariakhir);
				printf("  Bulan                : ");
				scanf("%d",&bulanakhir);
				printf("  Tahun                : ");
				scanf("%d",&tahunakhir);

				selisihhari=hariakhir-hari;
				tahunnawal=tahun;
				tahunsebelumnya=tahunakhir;
				selisihtahun=(tahunsebelumnya-tahunnawal)*365;
				bulanawal=bulan;
				bulansebelumnya=bulanakhir;
				selisihbulan=(bulansebelumnya-bulanawal)*30;



                selisihharga=selisihhari+selisihbulan+selisihtahun;

				if(selisihharga<=30)
                { tagihanlistrik=tagihanbaru;
                        printf("  Masa Waktu Tenggang Hari Pembayaran    : %d Hari\n",selisihharga);
                        printf("  Total Tagihan Anda                     : Rp %0.2f,00\n",tagihanlistrik);
                        printf("  Jumlah Uang Yang Anda Bayarkan         : ");
						scanf("%f",&jumlahuang);
                        if(jumlahuang>tagihanlistrik){
						printf("  Kembalian                   :Rp %0.2f,00\n",jumlahuang-tagihanlistrik);
						}
                        else{
						printf("  Warning: Maaf Uang Anda Kurang Rp %0.00f,00...!!\n",tagihanlistrik-jumlahuang);
						}
                 }

                else if(selisihharga>30 && selisihharga<=60)
                {
				printf("  Denda Sebesar 10%% dari total Tagihan: Rp.%0.0f,00\n",tagihanbaru*0.1);
                tagihanlistrik=tagihanbaru+(tagihanbaru*0.1);
                        printf("  Tenggang Hari Pembayaran            : %d Hari\n",selisihharga);
                        printf("  Total Tagihan Anda                  : Rp %0.2f,00\n",tagihanlistrik);
                        printf("  Jumlah Uang                         : ");
						scanf("%f",&jumlahuang);
                        if(jumlahuang>tagihanlistrik)
                        {
						printf("  Kembalian                           :Rp %0.2f,00\n",jumlahuang-tagihanlistrik); }
                        else
                        {
						printf("  Maaf Uang Anda Kurang Rp %0.00f,00...!!\n",tagihanlistrik-jumlahuang);}
                }

                else if(selisihharga>60 && selisihharga<=90)
                { tagihanlistrik=tagihanbaru+(tagihanbaru*0.2);
                		printf("  Denda Sebesar 20%% dari total Tagihan: Rp %0.2f,00\n",tagihanbaru*0.2);
                        printf("  Tenggang Hari Pembayaran            : %d Hari\n",selisihharga);
                        printf("  Total Tagihan Anda Sekarang         : Rp %0.2f,00\n",tagihanlistrik);
                        printf("  Jumlah Uang                         : ");
						scanf("%f",&jumlahuang);
                        if(jumlahuang>tagihanlistrik)
                        {printf("  Kembalian                          :Rp %0.2f,00\n",jumlahuang-tagihanlistrik); }
                        else
                        {printf("  Maaf Uang Anda Kurang Rp %0.00f,00...!!\n",tagihanlistrik-jumlahuang);}

                }

                else if(selisihharga>90 && selisihharga<=120)
                {
						printf("  Denda Sebesar 30%% dari total Tagihan: Rp %0.2f,00\n",tagihanbaru*0.3);
                tagihanlistrik=tagihanbaru+(tagihanbaru*0.3);
                        printf("  Tenggang Hari Pembayaran            : %d Hari\n",selisihharga);
                        printf("  Total Tagihan Anda                  : Rp %0.2f,00\n",tagihanlistrik);
                        printf("  Jumlah Uang                         : ");
					    scanf("%f",&jumlahuang);
                        if(jumlahuang>tagihanlistrik)
                       {
					   	printf("  Kembalian                  :Rp %0.2f,00\n",jumlahuang-tagihanlistrik); }
                        else
                       {printf("  Maaf Uang Anda Kurang Rp %0.2f,00...!!\n",tagihanlistrik-jumlahuang);}
                }
                else
                {
                printf("  \nTenggang Hari Pembayaran Anda	: %d Hari\n",selisihharga);
				printf("  Jika masa tenggang hari pembayaran Anda lebih dari 120 hari,\n  dimohon segera menghubungi pihak kami untuk informasi lebih lanjut dalam perihal pembayaran tagihan Anda,\n");
				printf("  Kami mohon maaf untuk sementara listrik Anda akan dilakukan Pemutusan (jika sudah terlampau lebih dari 365 hari).\n");
				}
                printf(" \n\n  >> TERIMA KASIH <<\n");
                printf("  Keterangan: Tekan ENTER untuk kembali");

getch();
                return tagihan_meteran();
             }
			 break;
			 case 4:
			 	return menu();
			 	break;
        default:
		warning01();
		printf("  Keterangan: Tekan ENTER untuk kembali.\n");

getch();
		system("cls");
		return tagihan_meteran();

     }

getch();

   }

void struk(){
system("cls");

struk_450=jumlah_450;          //menyamakan variable, sehingga variable lama tidak berubah
struk_900a=jumlah_900a;
struk_900b=jumlah_900b;
struk_1300=jumlah_1300;
struk_2200=jumlah_2200;
struk_3500=jumlah_3500;
struk_6600=jumlah_6600;
struk_meter=tagihanlistrik;


if(tipe==1 && op==1){
digit=0; //reset counter digit angka

printf("\t\t\t\t.============================================.\n");
printf("\t\t\t\t|          STRUK PEMBELIAN LISTRIK           |\n");
printf("\t\t\t\t|             PEMAKAIAN PRABAYAR             |\n");
printf("\t\t\t\t|--------------------------------------------|\n");
printf("\t\t\t\t| NPM       : %d",struk_npm);for(i=0;i<21;i++){printf(" ");}printf("|\n");
printf("\t\t\t\t| NO. ID    : %d",struk_id);for(i=0;i<28;i++){printf(" ");}printf("|\n");
printf("\t\t\t\t| NAMA      : %s",nama1);for(i=0;i<31-strlen(nama1);i++){printf(" ");}printf("|\n");
printf("\t\t\t\t| TARIF     : ");
if(jenis==1){printf("450Va Subsidi");for(i=0;i<18;i++){printf(" ");}printf("|\n");}
if(jenis==2){printf("900Va Subsidi");for(i=0;i<18;i++){printf(" ");}printf("|\n");}
if(jenis==3){printf("900Va Non-Subsidi");for(i=0;i<14;i++){printf(" ");}printf("|\n");}
if(jenis==4){printf("1300Va Non-Subsidi");for(i=0;i<13;i++){printf(" ");}printf("|\n");}
if(jenis==5){printf("2200Va Non-Subsidi");for(i=0;i<13;i++){printf(" ");}printf("|\n");}
if(jenis==6){printf("3500Va Non-Subsidi");for(i=0;i<13;i++){printf(" ");}printf("|\n");}
if(jenis==7){printf("6600Va Non-Subsidi");for(i=0;i<13;i++){printf(" ");}printf("|\n");}

printf("\t\t\t\t|--------------------------------------------|\n");
printf("\t\t\t\t|                   BARCODE                  |\n");
printf("\t\t\t\t| ||| || | | | || | ||||||| | || ||||| || || |\n");
printf("\t\t\t\t|--------------------------------------------|\n");
printf("\t\t\t\t| JML KWH   : ");

	if(struk_450/10>100){struk_450=struk_450/450;printf("%0.2f",struk_450);while(struk_450>0){struk_450=(struk_450-(fmod(struk_450,10)))/10;digit++;}for(i=0;i<28-digit;i++){printf(" ");}printf("|\n");}
	if(struk_900a/10>100){struk_900a=struk_900a/900;printf("%0.2f",struk_900a);while(struk_900a>0){struk_900a=(struk_900a-(fmod(struk_900a,10)))/10;digit++;}for(i=0;i<28-digit;i++){printf(" ");}printf("|\n");}
	if(struk_900b/10>100 ){struk_900b=struk_900b/900;printf("%0.2f",struk_900b);while(struk_900b>0){struk_900b=(struk_900b-(fmod(struk_900b,10)))/10;digit++;}for(i=0;i<28-digit;i++){printf(" ");}printf("|\n");}
	if(struk_1300/10>100 ){struk_1300=struk_1300/1300;printf("%0.2f",struk_1300);while(struk_1300>0){struk_1300=(struk_1300-(fmod(struk_1300,10)))/10;digit++;}for(i=0;i<28-digit;i++){printf(" ");}printf("|\n");}
	if(struk_2200/10>100 ){struk_2200=struk_2200/2200;printf("%0.2f",struk_2200);while(struk_2200>0){struk_2200=(struk_2200-(fmod(struk_2200,10)))/10;digit++;}for(i=0;i<28-digit;i++){printf(" ");}printf("|\n");}
	if(struk_3500/10>100 ){struk_3500=struk_3500/3500;printf("%0.2f",struk_3500);while(struk_3500>0){struk_3500=(struk_3500-(fmod(struk_3500,10)))/10;digit++;}for(i=0;i<28-digit;i++){printf(" ");}printf("|\n");}
	if(struk_6600/10>100){struk_6600=struk_6600/6600;printf("%0.2f",struk_6600);while(struk_6600>0){struk_6600=(struk_6600-(fmod(struk_6600,10)))/10;digit++;}for(i=0;i<28-digit;i++){printf(" ");}printf("|\n");}

printf("\t\t\t\t| RP BAYAR  : Rp.");
	digit=0;
	if(jumlah_450/10>100){printf("%0.2f",jumlah_450);while(jumlah_450>0){jumlah_450=(jumlah_450-(fmod(jumlah_450,10)))/10;digit++;}for(i=0;i<25-digit;i++){printf(" ");}printf("|\n");}
	if(jumlah_900a/10>100){printf("%0.2f",jumlah_900a);while(jumlah_900a>0){jumlah_900a=(jumlah_900a-(fmod(jumlah_900a,10)))/10;digit++;}for(i=0;i<25-digit;i++){printf(" ");}printf("|\n");}
	if(jumlah_900b/10>100 ){printf("%0.2f",jumlah_900b);while(jumlah_900b>0){jumlah_900b=(jumlah_900b-(fmod(jumlah_900b,10)))/10;digit++;}for(i=0;i<25-digit;i++){printf(" ");}printf("|\n");}
	if(jumlah_1300/10>100 ){printf("%0.2f",jumlah_1300);while(jumlah_1300>0){jumlah_1300=(jumlah_1300-(fmod(jumlah_1300,10)))/10;digit++;}for(i=0;i<25-digit;i++){printf(" ");}printf("|\n");}
	if(jumlah_2200/10>100 ){printf("%0.2f",jumlah_2200);while(jumlah_2200>0){jumlah_2200=(jumlah_2200-(fmod(jumlah_2200,10)))/10;digit++;}for(i=0;i<25-digit;i++){printf(" ");}printf("|\n");}
	if(jumlah_3500/10>100 ){printf("%0.2f",jumlah_3500);while(jumlah_3500>0){jumlah_3500=(jumlah_3500-(fmod(jumlah_3500,10)))/10;digit++;}for(i=0;i<25-digit;i++){printf(" ");}printf("|\n");}
	if(jumlah_6600/10>100){printf("%0.2f",jumlah_6600);while(jumlah_6600>0){jumlah_6600=(jumlah_6600-(fmod(jumlah_6600,10)))/10;digit++;}for(i=0;i<25-digit;i++){printf(" ");}printf("|\n");}


printf("\t\t\t\t|--------------------------------------------|\n");
printf("\t\t\t\t|                                            |\n");
printf("\t\t\t\t|                                            |\n");
printf("\t\t\t\t|                TERIMA KASIH                |\n");
printf("\t\t\t\t| SIMPAN STRUK INI SEBAGAI BUKTI PEMBAYARAN  |\n");
printf("\t\t\t\t|          YANG SAH, MOHON DISIMPAN          |\n");
printf("\t\t\t\t|                                            |\n");
printf("\t\t\t\t|       INFORMASI LEBIH LANJUT SILAKAN,      |\n");
printf("\t\t\t\t|        HUBUNGI CALL CENTER KAMI: 123       |\n");
printf("\t\t\t\t|                                            |\n");
printf("\t\t\t\t|                                            |\n");
printf("\t\t\t\t|                                            |\n");
printf("\t\t\t\t'============================================'\n");
printf("\n  Keterangan: Segera cetak struk ini.\n");

getch();
return menu();
}


if(tipe==1 && op==2 ){
	digit=0;
printf("\t\t\t\t.============================================.\n");
printf("\t\t\t\t|          STRUK PEMBELIAN LISTRIK           |\n");
printf("\t\t\t\t|              METERAN PRABAYAR              |\n");
printf("\t\t\t\t|--------------------------------------------|\n");
printf("\t\t\t\t| NPM       : %d",struk_npm);for(i=0;i<21;i++){printf(" ");}printf("|\n");
printf("\t\t\t\t| NO. ID    : %d",struk_id);for(i=0;i<28;i++){printf(" ");}printf("|\n");
printf("\t\t\t\t| NAMA      : %s",nama1);for(i=0;i<31-strlen(nama1);i++){printf(" ");}printf("|\n");
printf("\t\t\t\t|--------------------------------------------|\n");
printf("\t\t\t\t|                   BARCODE                  |\n");
printf("\t\t\t\t| ||| || | | | || | ||||||| | || ||||| || || |\n");
printf("\t\t\t\t|--------------------------------------------|\n");
printf("\t\t\t\t| TARIF     : -                              |\n");
printf("\t\t\t\t| JML KWH   : -                              |\n");
printf("\t\t\t\t| RP BAYAR  : Rp.%0.2f",tagihanlistrik);
while(tagihanlistrik>0){
tagihanlistrik=(tagihanlistrik-(fmod(tagihanlistrik,10)))/10;
digit++;
}
for(i=0;i<25-digit;i++)
{printf(" ");}printf("|\n");
printf("\t\t\t\t|--------------------------------------------|\n");
printf("\t\t\t\t|                                            |\n");
printf("\t\t\t\t|                                            |\n");
printf("\t\t\t\t|                TERIMA KASIH                |\n");
printf("\t\t\t\t| SIMPAN STRUK INI SEBAGAI BUKTI PEMBAYARAN  |\n");
printf("\t\t\t\t|          YANG SAH, MOHON DISIMPAN          |\n");
printf("\t\t\t\t|                                            |\n");
printf("\t\t\t\t|       INFORMASI LEBIH LANJUT SILAKAN,      |\n");
printf("\t\t\t\t|        HUBUNGI CALL CENTER KAMI: 123       |\n");
printf("\t\t\t\t|                                            |\n");
printf("\t\t\t\t|                                            |\n");
printf("\t\t\t\t|                                            |\n");
printf("\t\t\t\t'============================================'\n");
printf("\n  Keterangan: Struk sudah tercetak.\n");

getch();

return menu();
}

if(op==1 && tipe==2){
	digit=0;
printf("\t\t\t\t.============================================.\n");
printf("\t\t\t\t|          STRUK PEMBELIAN LISTRIK           |\n");
printf("\t\t\t\t|            PEMAKAIAN PASCABAYAR            |\n");
printf("\t\t\t\t|--------------------------------------------|\n");
printf("\t\t\t\t| NPM       : %d",struk_npm);for(i=0;i<21;i++){printf(" ");}printf("|\n");
printf("\t\t\t\t| NO. ID    : %d",struk_id);for(i=0;i<28;i++){printf(" ");}printf("|\n");
printf("\t\t\t\t| NAMA      : %s",nama1);for(i=0;i<31-strlen(nama1);i++){printf(" ");}printf("|\n");
printf("\t\t\t\t| TARIF     : ");
if(jenis==1){printf("450Va Subsidi");for(i=0;i<18;i++){printf(" ");}printf("|\n");}
if(jenis==2){printf("900Va Subsidi");for(i=0;i<18;i++){printf(" ");}printf("|\n");}
if(jenis==3){printf("900Va Non-Subsidi");for(i=0;i<14;i++){printf(" ");}printf("|\n");}
if(jenis==4){printf("1300Va Non-Subsidi");for(i=0;i<13;i++){printf(" ");}printf("|\n");}
if(jenis==5){printf("2200Va Non-Subsidi");for(i=0;i<13;i++){printf(" ");}printf("|\n");}
if(jenis==6){printf("3500Va Non-Subsidi");for(i=0;i<13;i++){printf(" ");}printf("|\n");}
if(jenis==7){printf("6600Va Non-Subsidi");for(i=0;i<13;i++){printf(" ");}printf("|\n");}

printf("\t\t\t\t|--------------------------------------------|\n");
printf("\t\t\t\t|                   BARCODE                  |\n");
printf("\t\t\t\t| ||| || | | | || | ||||||| | || ||||| || || |\n");
printf("\t\t\t\t|--------------------------------------------|\n");
printf("\t\t\t\t| JML KWH   : ");

	if(struk_450/10>100){struk_450=struk_450/450;printf("%0.2f",struk_450);while(struk_450>0){struk_450=(struk_450-(fmod(struk_450,10)))/10;digit++;}for(i=0;i<28-digit;i++){printf(" ");}printf("|\n");}
	if(struk_900a/10>100){struk_900a=struk_900a/900;printf("%0.2f",struk_900a);while(struk_900a>0){struk_900a=(struk_900a-(fmod(struk_900a,10)))/10;digit++;}for(i=0;i<28-digit;i++){printf(" ");}printf("|\n");}
	if(struk_900b/10>100 ){struk_900b=struk_900b/900;printf("%0.2f",struk_900b);while(struk_900b>0){struk_900b=(struk_900b-(fmod(struk_900b,10)))/10;digit++;}for(i=0;i<28-digit;i++){printf(" ");}printf("|\n");}
	if(struk_1300/10>100 ){struk_1300=struk_1300/1300;printf("%0.2f",struk_1300);while(struk_1300>0){struk_1300=(struk_1300-(fmod(struk_1300,10)))/10;digit++;}for(i=0;i<28-digit;i++){printf(" ");}printf("|\n");}
	if(struk_2200/10>100 ){struk_2200=struk_2200/2200;printf("%0.2f",struk_2200);while(struk_2200>0){struk_2200=(struk_2200-(fmod(struk_2200,10)))/10;digit++;}for(i=0;i<28-digit;i++){printf(" ");}printf("|\n");}
	if(struk_3500/10>100 ){struk_3500=struk_3500/3500;printf("%0.2f",struk_3500);while(struk_3500>0){struk_3500=(struk_3500-(fmod(struk_3500,10)))/10;digit++;}for(i=0;i<28-digit;i++){printf(" ");}printf("|\n");}
	if(struk_6600/10>100){struk_6600=struk_6600/6600;printf("%0.2f",struk_6600);while(struk_6600>0){struk_6600=(struk_6600-(fmod(struk_6600,10)))/10;digit++;}for(i=0;i<28-digit;i++){printf(" ");}printf("|\n");}

printf("\t\t\t\t| RP BAYAR  : Rp.");
	digit=0;
	if(jumlah_450/10>100){printf("%0.2f",jumlah_450);while(jumlah_450>0){jumlah_450=(jumlah_450-(fmod(jumlah_450,10)))/10;digit++;}for(i=0;i<25-digit;i++){printf(" ");}printf("|\n");}
	if(jumlah_900a/10>100){printf("%0.2f",jumlah_900a);while(jumlah_900a>0){jumlah_900a=(jumlah_900a-(fmod(jumlah_900a,10)))/10;digit++;}for(i=0;i<25-digit;i++){printf(" ");}printf("|\n");}
	if(jumlah_900b/10>100 ){printf("%0.2f",jumlah_900b);while(jumlah_900b>0){jumlah_900b=(jumlah_900b-(fmod(jumlah_900b,10)))/10;digit++;}for(i=0;i<25-digit;i++){printf(" ");}printf("|\n");}
	if(jumlah_1300/10>100 ){printf("%0.2f",jumlah_1300);while(jumlah_1300>0){jumlah_1300=(jumlah_1300-(fmod(jumlah_1300,10)))/10;digit++;}for(i=0;i<25-digit;i++){printf(" ");}printf("|\n");}
	if(jumlah_2200/10>100 ){printf("%0.2f",jumlah_2200);while(jumlah_2200>0){jumlah_2200=(jumlah_2200-(fmod(jumlah_2200,10)))/10;digit++;}for(i=0;i<25-digit;i++){printf(" ");}printf("|\n");}
	if(jumlah_3500/10>100 ){printf("%0.2f",jumlah_3500);while(jumlah_3500>0){jumlah_3500=(jumlah_3500-(fmod(jumlah_3500,10)))/10;digit++;}for(i=0;i<25-digit;i++){printf(" ");}printf("|\n");}
	if(jumlah_6600/10>100){printf("%0.2f",jumlah_6600);while(jumlah_6600>0){jumlah_6600=(jumlah_6600-(fmod(jumlah_6600,10)))/10;digit++;}for(i=0;i<25-digit;i++){printf(" ");}printf("|\n");}


printf("\t\t\t\t|--------------------------------------------|\n");
printf("\t\t\t\t|                                            |\n");
printf("\t\t\t\t|                                            |\n");
printf("\t\t\t\t|                TERIMA KASIH                |\n");
printf("\t\t\t\t| SIMPAN STRUK INI SEBAGAI BUKTI PEMBAYARAN  |\n");
printf("\t\t\t\t|          YANG SAH, MOHON DISIMPAN          |\n");
printf("\t\t\t\t|                                            |\n");
printf("\t\t\t\t|       INFORMASI LEBIH LANJUT SILAKAN,      |\n");
printf("\t\t\t\t|        HUBUNGI CALL CENTER KAMI: 123       |\n");
printf("\t\t\t\t|                                            |\n");
printf("\t\t\t\t|                                            |\n");
printf("\t\t\t\t|                                            |\n");
printf("\t\t\t\t'============================================'\n");
printf("\n  Keterangan: Struk sudah tercetak.\n");

getch();
return menu();
}

if(tipe==2 && op==2){
	digit=0;
printf("\t\t\t\t.============================================.\n");
printf("\t\t\t\t|          STRUK PEMBELIAN LISTRIK           |\n");
printf("\t\t\t\t|             METERAN PASCABAYAR             |\n");
printf("\t\t\t\t|--------------------------------------------|\n");
printf("\t\t\t\t| NPM       : %d",struk_npm);for(i=0;i<21;i++){printf(" ");}printf("|\n");
printf("\t\t\t\t| NO. ID    : %d",struk_id);for(i=0;i<28;i++){printf(" ");}printf("|\n");
printf("\t\t\t\t| NAMA      : %s",nama1);for(i=0;i<31-strlen(nama1);i++){printf(" ");}printf("|\n");
printf("\t\t\t\t|--------------------------------------------|\n");
printf("\t\t\t\t|                   BARCODE                  |\n");
printf("\t\t\t\t| ||| || | | | || | ||||||| | || ||||| || || |\n");
printf("\t\t\t\t|--------------------------------------------|\n");
printf("\t\t\t\t| TARIF     : -                              |\n");
printf("\t\t\t\t| JML KWH   : -                              |\n");
printf("\t\t\t\t| RP BAYAR  : Rp.%0.2f",tagihanlistrik);while(tagihanlistrik>0){tagihanlistrik=(tagihanlistrik-(fmod(tagihanlistrik,10)))/10;digit++;}for(i=0;i<25-digit;i++){printf(" ");}printf("|\n");
printf("\t\t\t\t|--------------------------------------------|\n");
printf("\t\t\t\t|                                            |\n");
printf("\t\t\t\t|                                            |\n");
printf("\t\t\t\t|                TERIMA KASIH                |\n");
printf("\t\t\t\t| SIMPAN STRUK INI SEBAGAI BUKTI PEMBAYARAN  |\n");
printf("\t\t\t\t|          YANG SAH, MOHON DISIMPAN          |\n");
printf("\t\t\t\t|                                            |\n");
printf("\t\t\t\t|       INFORMASI LEBIH LANJUT SILAKAN,      |\n");
printf("\t\t\t\t|        HUBUNGI CALL CENTER KAMI: 123       |\n");
printf("\t\t\t\t|                                            |\n");
printf("\t\t\t\t|                                            |\n");
printf("\t\t\t\t|                                            |\n");
printf("\t\t\t\t'============================================'\n");
printf("\n  Keterangan: Struk sudah tercetak.\n");

getch();
return menu();
}
else{

	printf("\n\n\n\n\n\n\n\n  This is so dark, isn't it?\n  It's because there's a problem with this page, please get out of here!\n");

getch();
	return menu();
}

}

void metode(){
    system("cls");
    prog_head();
    printf("\t\t\t\t\t\t\tMETODE PEMBAYARAN\n");
    garis();
	printf("\n  <1> MANDIRI\n  <2> BRI\n  <3> BNI\n  <4> E-Banking\n  <5> Teller\n  <6> SMS Banking MANDIRI\n  <7> Kembali Ke Menu");
	printf("\n  Pilihan Anda : ");
	scanf("%d", &k);
	switch(k){

	case 1:
	system("cls");
    prog_head();
    printf("\t\t\t\t\t\t ATM BANK MANDIRI\n");
    garis();
	printf("\n");
	printf("\n  a. Pilih menu PEMBAYARAN / PEMBELIAN pada menu utama ATM Bank Mandiri.\n  b. Kemudian pilih sub menu MULTI PAYMENT.\n  c. Masukkan kode UNIVERSITAS INDONESIA 141 yang dapat dilihat pada DAFTAR KODE pada layar\n  d. Memasukkan/mengetik Nomor ID yang didapatkan dari Registrasi.\n  e. PILIH 1 untuk item pembayaran.\n  f. Muncul konfirmasi Nama Pembayar dan Jumlah Pembayaran, kemudian PILIH  'Ya'.\n  g. Simpan cetakan/bukti transaksi.\n");
	printf("\n  Keterangan: Tekan ENTER untuk kembali.\n");

getch();
	return metode();
 	break;
 	case 2:
	system("cls");
    prog_head();
    printf("\t\t\t\t\t\t ATM BANK BRI\n");
    garis();
	printf("\n");
	printf("\n  a. Pilih menu PEMBAYARAN / PEMBELIAN pada menu utama ATM Bank BRI.\n  b. Kemudian pilih PERUSAHAAN.\n  c. Masukkan kode 141 atau pilih Daftar Kode yang dapat dilihat pada DAFTAR KODE pada layar\n  d. Memasukkan/mengetik NOMOR BILLING yang didapatkan dari UPBJJ.\n  e. Muncul konfirmasi Nama Pembayar dan Jumlah Pembayaran, kemudian PILIH  'Ya'.\n  f. Simpan cetakan/bukti transaksi.\n");
 	printf("\n  Keterangan: Tekan ENTER untuk kembali.\n");

getch();

	return metode();
 	break;
 	case 3:
 	system("cls");
    prog_head();
    printf("\t\t\t\t\t\t ATM BANK BNI\n");
    garis();
	printf("\n");
	printf("\n  a. Masukan kartu Anda.\n  b. Masukan Kode Pin Anda.\n  c. Silahkan memilih bahasa layanan\n  d. Silahkan memilih transaksi lainnya\n  e. Silahkan memilih menu pembayaran.\n  f. Silahkan masukan kode institusi UI yaiu 0115 dan kode pembayaran sesuai yang diinginkan.\n  g. Masukan Nomor ID Yang didapatkan dari registrasi.\n  h. Pilih jenis rekening yang Anda gunakan\n  i. Transaksi selesai, simpan cetakan/bukti transaksi\n");
 	printf("\n  Keterangan: Tekan ENTER untuk kembali.\n");

getch();
	return metode();
 	break;
 	case 4:
 	system("cls");
    prog_head();
    printf("\t\t\t\t\t\t E-BANKING\n");
    garis();
	printf("\n  a. Akses ke situs Bank Mandiri www.bankmandiri.co.id lalu login (masukkan user id dan password).\n  b. Setelah itu masuk menu utama, klik pembayaran dan pilih MULTI PAYMENT.\n  c. Pilih rekening pembayaran dan pilih kode perusahaan 141 UNIVERSITAS INDONESIA.\n  d. Memasukkan/mengetik NOMOR BILLING yang didapatkan dari UPBJJ UT, lalu klik LANJUTKAN.\n  e. Setelah muncul profil dibayar dan data tagihan, pilih tagihan apa yang akan dibayarkan.\n  f. Saat muncul tampilan konfirmasi, masukkan PIN Mandiri yang muncul pada token lalu klik KIRIM.\n  g. Simpan tanda terima dalam bentuk file atau cetak.\n");
 	printf("\n  Keterangan: Tekan ENTER untuk kembali.\n");

getch();
	return metode();
 	break;
 	case 5:
	system("cls");
    prog_head();
    printf("\t\t\t\t\t\t TRANSAKSI Melalui TELLER\n");
    garis();

   printf("\n  Pembayaran dapat dilakukan di seluruh cabang Bank Mandiri/BRI/BNI di seluruh Indonesia Fleksibilitas Pembayaran :\n");
   printf("  a. Apabila pembayar tidak memilik rekening atau kartu ATM Mandiri/BRI/BNI,\n");
   printf("  pembayaran tetap dilakukan secara tunai di teller pada cabang   Bank\n");
   printf("  Mandiri/BRI/BNI terdekat.\n");
   printf("  FORMULIR SETORAN (FFO-079) - Aplikasi setoran/transfer/bayar tagihan listrik\n");

	printf("  1. Kolom NAMA Penerima isikan Universitas INDONESIA.\n");
	printf("  2. Kolom NOMOR REKENING Penerima tidak diisi (dikosongkan).\n");
	printf("  3. Kolom NAMA Pengirim:\n");
	printf("     - Isikan Nama Mahasiswa.\n");
	printf("  4. Kolom ALAMAT & NOMOR TELEPON Pengirim:\n");
	printf("     - Isikan Alamat & Nomor Telepon Mahasiswa (optional).\n");
	printf("  5. Kolom TUJUAN TRANSAKSI :\n");
	printf("     - Isikan Pembayaran Universitas INDONESIA.\n");
	printf("  6. Kolom BERITA UNTUK PENERIMA:\n");
	printf("     - menuliskan NOMOR ID yang didapatkan dari Registrasi.\n");
	printf("\n  Keterangan: Tekan ENTER untuk kembali.\n");

getch();
	return metode();
	break;

	case 6:
	system("cls");
    prog_head();
    printf("\t\t\t\t\t\t TRANSAKSI Melalui SMS BANKING\n");
    garis();
	printf("  SMS BANKING BANK MANDIRI:\n");
	printf("  Untuk melihat tagihan:\n");
	printf("  Ketik :\n");
	printf("  TGH<spasi>UT<spasi> <nomor id>;\n");
	printf("  kirim ke 3355\n");
	printf("  Untuk pembayaran tagihan:\n");
	printf("  Ketik :\n");
	printf("  BYR<spasi> TagihanListrik<spasi> <nomor id>;\n");
	printf("  kirim ke 3355\n");
	printf("\n  Keterangan: Tekan ENTER untuk kembali.\n");

getch();

	return metode();
	break;

	case 7:
	return menu();
	break;

	default:
	warning01();
	printf("  Keterangan: Tekan ENTER untuk kembali.\n");

getch();
	system("cls");
	return metode();
	}



}













































