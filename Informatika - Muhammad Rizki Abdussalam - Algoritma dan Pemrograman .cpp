#include <iostream>

using namespace std;
 
int main()
{
  cout << "##  Tugas 5 Program C++  ##" << endl;
  cout << "=========================================" << endl;

  cout << "nama          : muhammad rizki abdussalam"<< endl;
  cout << "nim           : 5520122045"<< endl; 
  cout << endl;
  cout << "=========================================" << endl;
    string nama;
    char ulangi = 'p', jenis_kelamin;
    int counter = 0 , usia,ganjil = 9,genap = 4,batasganjil = 61,batasgenap = 64;
  
  cout <<"========Soal Ke-1 Bilangan Ganjil========="<<endl;

  cout<<"Soal Nomor"<< ganjil <<"menghitung 25 bilangan ganjil  " << endl;
	 
	 cout<<"35 Bilangan Ganjil adalah"<<endl;
		      for(int rp=ganjil;rp<=20;rp++)
       		if (rp%2!=0)
		      cout << rp << ' ';
        
  cout << endl;
  cout << "=========================================" << endl;
  cout <<"========Soal Ke-2 Bilangan Genap=========="<<endl;
  
  cout<<"Soal Nomor" << genap <<"menghitung 10 bilangan genap " << endl;
	 
	 cout<<"10 Bilangan Genap adalah"<<endl;
		      for(int pe=genap;pe<=20;pe++)
		      if (pe%2==0)
		      cout << pe << ' ' ;

  cout << endl;
  cout << "=========================================" << endl;

  cout <<"===========Soal Ke-3 Perulangan=========="<<endl;
      
     // --- proses input ---
  cout << "Silahkan Masukan Nama Anda ?" << endl;
  cout << "Silahkan jawab: ";
  // menyimpan data ke variabel
  getline(cin,nama);
  
  cout << "Masukan Usia Anda : ";
  cout << "Jawab: ";
  // menyimpan data ke variabel
  cin >> usia;

  

  cout <<"========================================="<<endl;
    // perulangan while
    while(ulangi == 'r'){
    
        cout << "Silahkan Masukan Nama Anda : " << nama <<endl;
        cout << "Masukan Usia Anda : " << usia <<endl;
  cout <<"========================================="<<endl;
     
        cout << "Selamat Datang Mas Ganteng " << nama <<endl;
          
  cout <<"====================================================="<<endl;   
        printf("Apakah kamu ingin mengulangi ?\n");
        printf("Jawab (y/t): ");
        cin >> ulangi;

        // increment counter
        counter++;
    }
     
    printf("\n\n----------\n");
    printf("Perulangan Selesai!\n");
    printf("Kamu mengulanginya sebanyak %i kali.\n", counter);
  cout <<"====================================================="<<endl;
    
    return 0;

}

  
    
