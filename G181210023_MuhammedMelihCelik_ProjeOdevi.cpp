/****************************************************************************
**                          SAKARYA �N�VERS�TES�
**                B�LG�SAYAR VE B�L���M B�L�MLER� FAK�LTES�
**                   B�LG�SAYAR M�HEND�SL��� B�L�M�
**                      PROGRAMLAMAYA G�R�� DERS�
**
**                 �DEV NUMARASI    : 01
**                 ��RENC� ADI      : Muhammed Melih �elik 
**                 ��RENC� NUMARASI : G181210023   
**                 DERS GRUBU       : 1.��retim A Grubu
****************************************************************************/

#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <fstream>
#include <String>
#include <iomanip>
#include <vector>
#include <sstream>


using namespace std;

// Bildirim ��lemleri ��in Tasarlad���m S�n�f

class Bildirimler {
private:

public:
    Bildirimler(); //kurucu fonk
    ~Bildirimler(); //y�k�c� fonk
    static void urunEklendi(); //�r�n eklenmesi ba�ar�l� olunca gelecek bildirim
    static void urunSilindi(); //�r�n silinmesi ba�ar�l� olunca gelecek bildirim
    static void urunRaporlandi(); //�r�n raporlan�nca gelecek bildirim
    static void urunTekrariYapildi(); //�r�n tekrar� yap�l�nca gelecek uyar� bildirimi
    static void urunBulundu(); //�r�n bulununca gelecek bildirim
    static void projeTekrariYapildi(); //proje tekrar� yap�l�nca gelecek uyar� bildirimi
    static void projeEklendi(); //proje eklenince gelecek bildirim
    static void projeBulundu(); //proje bulununca gelecek bildirim
    static void projeRaporlandi(); //proje raporlan�nca gelecek bildirim
    static void urunGuncellendi(); //�r�n g�ncellenince gelecek bildirim
    static void tutarRaporlandi(); //tutar raporlan�nca gelecek bildirim
};

//Bildirimler s�n�f� kurucu fonksiyonu
Bildirimler::Bildirimler() {

}

//Bildirimler s�n�f� y�k�c� fonksiyonu
Bildirimler::~Bildirimler() {

}

//�r�n eklendikten sonra �a�r�lacak fonksiyon
void Bildirimler::urunEklendi() 
{
    cout << "\n\033[1;32m============================== BILDIRIM ==============================\033[0m\n";
    cout << "\033[1;32mUrun ekleme islemi basarili\033[0m";
    cout << "\n\033[1;32m======================================================================\033[0m\n";
}

//�r�n silindikten sonra �a�r�lacak fonksiyon
void Bildirimler::urunSilindi() {
    cout << "\n\033[1;32m============================== BILDIRIM ==============================\033[0m\n";
    cout << "\033[1;32mUrun silme islemi basarili\033[0m";
    cout << "\n\033[1;32m======================================================================\033[0m\n";
}

//�r�n raporland�ktan sonra �a�r�lacak fonksiyon
void Bildirimler::urunRaporlandi() {
    cout << "\n\033[1;32m============================== BILDIRIM ==============================\033[0m\n";
    cout << "\033[1;32mUrun raporlama islemi basarili\033[0m";
    cout << "\n\033[1;32m======================================================================\033[0m\n";
}

//�r�n eklenirken e�er eklenmek istenen numarada �r�n varsa �a�r�lacak fonksiyon
void Bildirimler::urunTekrariYapildi() {
    cout << "\n\033[1;31m============================== BILDIRIM ==============================\033[0m\n";
    cout << "\033[1;31mVar olan bir Urun No girdiniz lutfen tekrar deneyiniz\033[0m";
    cout << "\n\033[1;31m======================================================================\033[0m\n";
}

//�r�n bulundu�unda �a�r�lacak fonksiyon
void Bildirimler::urunBulundu() {
    cout << "\n\033[1;32m============================== BILDIRIM ==============================\033[0m\n";
    cout << "\033[1;32mUrun Bulundu!\033[0m";
    cout << "\n\033[1;32m======================================================================\033[0m\n";
}

//Proje eklenirken e�er eklenmek istenen numarada proje varsa �a�r�lacak fonksiyon
void Bildirimler::projeTekrariYapildi() 
{
    cout << "\n\033[1;31m============================== BILDIRIM ==============================\033[0m\n";
    cout << "\033[1;31mVar olan bir Proje No girdiniz lutfen tekrar deneyiniz\033[0m";
    cout << "\n\033[1;31m======================================================================\033[0m\n";
}

//Proje eklendikten sonra �a�r�lacak fonksiyon
void Bildirimler::projeEklendi()
{
    cout << "\n\033[1;32m============================== BILDIRIM ==============================\033[0m\n";
    cout << "\033[1;32mProje ekleme islemi basarili\033[0m";
    cout << "\n\033[1;32m======================================================================\033[0m\n";
}

//Proje bulundu�unda �a�r�lacak fonksiyon
void Bildirimler::projeBulundu()
{
    cout << "\n\033[1;32m============================== BILDIRIM ==============================\033[0m\n";
    cout << "\033[1;32mProje Bulundu!\033[0m";
    cout << "\n\033[1;32m======================================================================\033[0m\n";
}

//Proje raporland�ktan sonra �a�r�lacak fonksiyon
void Bildirimler::projeRaporlandi()
{
    cout << "\n\033[1;32m============================== BILDIRIM ==============================\033[0m\n";
    cout << "\033[1;32mProje raporlama islemi basarili\033[0m";
    cout << "\n\033[1;32m======================================================================\033[0m\n";
}

//�r�n g�ncellendikten sonra �a�r�lacak fonksiyon
void Bildirimler::urunGuncellendi()
{
    cout << "\n\033[1;32m============================== BILDIRIM ==============================\033[0m\n";
    cout << "\033[1;32mUrun Guncelleme islemi basarili\033[0m";
    cout << "\n\033[1;32m======================================================================\033[0m\n";
}

//Tutar raporland�ktan sonra �a�r�lacak fonksiyon
void Bildirimler::tutarRaporlandi()
{
    cout << "\n\033[1;32m============================== BILDIRIM ==============================\033[0m\n";
    cout << "\033[1;32mTutar raporlama islemi basarili\033[0m";
    cout << "\n\033[1;32m======================================================================\033[0m\n";
}



// �r�n ��lemleri ��in Tasarlad���m S�n�f

class Urunler {

private:
    //�r�n�n sahip olaca�� �zellikler
    int urunNo;
    string urunAdi;
    string birim;
    double birimFiyati;
    string markasi;

public:
    Urunler(int, string, string, double, string); //Urunler parametreli kurucu fonksiyon
    ~Urunler(); //Urunler y�k�c� fonksiyon
    static boolean urunTekrarKontrol(int); //Urunler.txt'de �r�n mevcut mu diye kontrol edecek
    static void urunEkle(); //Urunler.txt'ye �r�n eklememizi sa�layacak
    static void urunSil(); //Urunler.txt'den �r�n silmemizi sa�layacak
    static void urunAra(); //Urunler.txt'de �r�n aramam�z� sa�layacak
    static void urunRaporla(); //Belli parametrelere g�re �r�n raporlamam�z� sa�layacak.
    static void urunAraOtomatik(int urunNoParametre); //verilen parametredeki �r�n numaras�na g�re �r�n arar
    static int dosyaTara(); //urunler.txt i�erisindeki kay�t say�s�n� tarar, silme i�leminde kulland�m
};

//Urunler parametreli kurucu fonksiyonu
Urunler::Urunler(int _urunNo, string _urunAdi, string _birim, double _birimFiyati, string _markasi) {
    this->urunNo = _urunNo;
    this->urunAdi = _urunAdi;
    this->birim = _birim;
    this->birimFiyati = _birimFiyati;
    this->markasi = _markasi;
}

//Urunler y�k�c� fonksiyonu
Urunler::~Urunler() {

}

//Daha once o numarada urun eklenmis mi diye kontrol edecek olan fonksiyon
boolean Urunler::urunTekrarKontrol(int girilenUrunNo) 
{
    bool durum = true;
    //txt dosyas�ndan kay�tl� verileri �ekerken ge�ici �r�n �zellikleri tan�mlamalar�
    int geciciUrunNo;
    string geciciUrunAdi;
    string geciciBirim;
    double geciciBirimFiyati;
    string geciciMarkasi;

    ifstream DosyaOku("Urunler.txt"); //Urunler dosyas�n� oku
    while (!DosyaOku.eof()) //dosyan�n sonuna gelene kadar
    {
        DosyaOku >> geciciUrunNo >> geciciUrunAdi >> geciciBirim >> geciciBirimFiyati >> geciciMarkasi; //�r�n �zelliklerini oku
        if (girilenUrunNo == geciciUrunNo) { //�r�n numaralar� e�le�irse
            durum = false;
            break;
        }
        else
        {
            durum =  true; //tekrar yap�lmam��t�r
        }
    }
    return durum; //durumu geri d�nd�r bool bir de�er

}

//Urunler.txt'ye urun eklemimizi saglayacak olan fonksiyon
void Urunler::urunEkle() {

    //dosyaya yazarken once kontrol islemi yap�yorduk ama once elimizde o isimde dosya olmas� gerekli bu yuzden kontrol amacl� dosyay� onden olusturuyoruz
    ofstream dosyaOlustur; 
    dosyaOlustur.open("Urunler.txt", ios::app);
    dosyaOlustur.close();


    //�r�n�n sahip olaca�� �zellikler burada da tan�mland�, kurucuya parametre olarak verilecek sonra
    int _urunNo = 0;
    string _urunAdi;
    string _urunBirim;
    double _urunBirimFiyati;
    string _urunMarkasi;
    cout << "\n=============== YENI URUN KAYDI ===============" << endl;
    cout << "Bilgi 1: Gireceginiz degerler sirasiyla int,string,string,double,string olmalidir" << endl;
    cout << "Bilgi 2: Isimlendirme yaparken Turkce karakter ve bosluk kullanmamaya dikkat ediniz" << endl;
    //�r�n�n sahip olaca�� �zelikler kullan�c�dan al�nd�
    cout << "Urun No giriniz : ";
    cin >> _urunNo; //�r�n no al�nd�

    while (!(Urunler::urunTekrarKontrol(_urunNo))) //urunTekrarKontrol'den ge�ene kadar 
    {
        Bildirimler::urunTekrariYapildi();
        cout << "\nUrun No giriniz : "; //kullan�c�dan farkl� bir Urun no girilmesi sa�land�
        cin >> _urunNo;
    }

    cout << "Urun Adi giriniz : ";
    cin >> _urunAdi; //�r�n ad� al�nd�

    cout << "Birim Turu giriniz : ";
    cin >> _urunBirim; //�r�n birimi al�nd�

    cout << "Birim Fiyati giriniz : ";
    cin >> _urunBirimFiyati; //�r�n birim fiyat� al�nd�

    cout << "Markasini giriniz : ";
    cin >> _urunMarkasi; //�r�n markas� al�nd�

    cout << "==============================================" << endl;


    Urunler* u = new Urunler(_urunNo, _urunAdi, _urunBirim, _urunBirimFiyati, _urunMarkasi); //nesne olu�turuldu
    ofstream DosyaYaz; //dosyaya yazmak i�in
    DosyaYaz.open("Urunler.txt", ios::app);
    DosyaYaz << u->urunNo << " " << u->urunAdi << " " << u->birim << " " << u->birimFiyati << " " << u->markasi << endl; //Dosyaya yaz�ld�
    DosyaYaz.close(); //dosya ile i�imiz bitti�i i�in dosya kapat�ld�
    Bildirimler::urunEklendi();
    delete u; //nesne silindi
}

//�r�n numaras�na g�re �r�n arama i�lemini ger�ekle�tirecek fonksiyon
void Urunler::urunAra() {
    //�r�n�n sahip oldu�u de�erleri tutmak i�in ge�ici olarak tan�mlanan de�i�kenlerim
    int aranacakUrunNo;
    int arananUrunNo;
    string arananUrunAdi;
    string arananUrunBirim;
    double arananUrunBirimFiyati;
    string arananUrunMarkasi;
    cout << "\n=============== URUN ARAMA ===============" << endl;
    cout << "Aranacak urun no: ";
    cin >> aranacakUrunNo; //aranacak �r�n�n numaras� kullan�c�dan al�n�yor
    ifstream aranacakUrunIcinDosyaOku("Urunler.txt"); //urunu aramak icin dosya okunuyor
    while (!aranacakUrunIcinDosyaOku.eof()) //dosya sonuna gelene kadar okuma i�lemi yap�l�yor
    {
        aranacakUrunIcinDosyaOku >> arananUrunNo >> arananUrunAdi >> arananUrunBirim >> arananUrunBirimFiyati >> arananUrunMarkasi;
        if (aranacakUrunNo == arananUrunNo)
        {
            Bildirimler::urunBulundu();
            cout << "\nUrun Detaylari: " << endl;
            cout << "==============================" << endl;
            cout << "Urun No: " << arananUrunNo << endl;
            cout << "Urun Adi: " << arananUrunAdi << endl;
            cout << "Urun Birim: " << arananUrunBirim << endl;
            cout << "Urun Birim Fiyati: " << arananUrunBirimFiyati <<endl;
            cout << "Urun Markasi: " << arananUrunMarkasi << endl;
            cout << "==============================";
            break;
        }
    }
    aranacakUrunIcinDosyaOku.close(); //i�imiz bitince dosyay� kapat�yoruz
}

//Kullan�c�dan de�er alm�yor i�ine parametre olarak �r�n numaras�n� al�yor ve �r�n arama i�lemini ger�ekle�tiriyor
void Urunler::urunAraOtomatik(int urunNoParametre) {
    //�r�n�n sahip oldu�u de�erleri tutmak i�in ge�ici olarak tan�mlanan de�i�kenlerim
    int arananUrunNo;
    string arananUrunAdi;
    string arananUrunBirim;
    double arananUrunBirimFiyati;
    string arananUrunMarkasi;
    ifstream aranacakUrunIcinDosyaOku("Urunler.txt"); //urunu aramak i�in dosya okunuyor
    while (!aranacakUrunIcinDosyaOku.eof()) //dosya sonuna gelene kadar
    {
        aranacakUrunIcinDosyaOku >> arananUrunNo >> arananUrunAdi >> arananUrunBirim >> arananUrunBirimFiyati >> arananUrunMarkasi;
        if (urunNoParametre == arananUrunNo)
        {
            Bildirimler::urunBulundu();
            cout << "\nUrun Detaylari: " << endl;
            cout << "==============================" << endl;
            cout << "Urun No: " << arananUrunNo << endl;
            cout << "Urun Adi: " << arananUrunAdi << endl;
            cout << "Urun Birim: " << arananUrunBirim << endl;
            cout << "Urun Birim Fiyati: " << arananUrunBirimFiyati << endl;
            cout << "Urun Markasi: " << arananUrunMarkasi << endl;
            cout << "==============================";
            break;
        }
    }
    aranacakUrunIcinDosyaOku.close(); //i�imiz bitince dosyay� kapat�yoruz
}

//�r�n silme i�leminde kullan�lacak dosya tarama fonksiyonu, dosyay� tarar ve sat�r sayu�s�n� bularak geriye d�nd�r�r
int Urunler::dosyaTara() {
    int dosyadakiSatirSayisi = 0; //sat�r say�s�n� tutacak olan de�i�kenimi tan�mlad�m ve de�erini 0 olarak ba�latt�m
    int _urunNo;
    string _urunAdi;
    string _urunBirim;
    double _urunBirimFiyati;
    string _urunMarkasi;
    ifstream dosyaTara("Urunler.txt"); //urunler.txt'yi oku
    while (!dosyaTara.eof()) //dosya sonuna kadar oku
    {
        dosyaTara >> _urunNo >> _urunAdi >> _urunBirim >> _urunBirimFiyati >> _urunMarkasi;
        dosyadakiSatirSayisi++; //her sat�r taramada sat�r say�s� bir artt�r�ld�
    }
    return dosyadakiSatirSayisi; //txt'deki bulunan kay�t yani sat�r say�s� geri d�nd�r�ld�
}

//�r�nler listesinden istedi�imiz �r�n numaras�na sahip �r�n� silmemizi sa�layacak olan fonksiyon 
void Urunler::urunSil() {

    int satirSayisi = 0; //Dosyay� okurken d�ng�n�n ne kadar d�nce�ini bu sat�r say�s� ile kontrol ettim
    satirSayisi = dosyaTara(); //dosyaTara() fonksiyonundan d�nen sat�r say�s� de�erini satirSayisi de�i�kenime atad�m
    //�r�nler ile ilgili de�erleri tutacak ge�ici de�i�kenlerim
    int silinecekUrunNo;
    int _urunNo;
    string _urunAdi;
    string _urunBirim;
    double _urunBirimFiyati;
    string _urunMarkasi;
    cout << "\n=============== URUN SILME ===============" << endl;
    cout << "Silinecek urun no: ";
    cin >> silinecekUrunNo; //Kullan�c�ndan silinmesi istenen �r�n�n �r�n numaras� al�nd�
    ifstream silinecekUrunIcinDosyaOku("Urunler.txt"); //urunler.txt okundu
    ofstream geciciUrunDosya("GeciciUrunler.tmp"); //yeni de�erlerin yazd�r�ld��� dosya olusturuldu
    while (satirSayisi != 0) //sat�r say�s� s�f�r olana kadar d�ng� d�ns�n
    {
        satirSayisi--; //her seferinde sat�r� bir azalt
        silinecekUrunIcinDosyaOku >> _urunNo >> _urunAdi >> _urunBirim >> _urunBirimFiyati >> _urunMarkasi; //dosyadan de�erleri oku ge�ici �r�n de�i�kenlerine ata
        if (silinecekUrunNo != _urunNo) //silinecek �r�n numaras� al�nmam�� oldu
        {
                //ge�ici dosyaya silinecek �r�n d���ndaki �r�nler eklendi
                geciciUrunDosya << _urunNo << " " << _urunAdi << " " << _urunBirim << " " << _urunBirimFiyati << " " << _urunMarkasi << endl;
        }
    }
    silinecekUrunIcinDosyaOku.close(); //Dosya ile i�imiz bitti�i i�in kapat�yoruz
    geciciUrunDosya.close(); // Dosya ile i�imiz bitti�i i�in kapat�yoruz
    remove("Urunler.txt"); //eski �r�nler listesi silindi
    rename("GeciciUrunler.tmp", "Urunler.txt"); //ge�ici �r�nler dosyas� as�l dosya oldu Urunler.txt olarak g�ncellendi
}

//�r�nler listesinden istenen durumlara g�re �r�nlerin raporlanmas�n� sa�layacak olan fonksiyon
void Urunler::urunRaporla() {
    int secim = 0; //secimi tutacak olan de�i�ken
    //ge�ici �r�n �zelliklerini tutacak de�i�ken tan�mlamalar�m
    int raporlananUrunNo = 0;
    string raporlananUrunAdi;
    string raporlananUrunBirim;
    double raporlananUrunBirimFiyati;
    string raporlananUrunMarkasi;
    //burada kullan�c�n�n farkl� raporlamalar� yapabilece�ine dair bir bilgilendirme men�s� mevcut
    cout << "\n=============== URUN RAPORLA ===============" << endl;
    cout << "1) Urun numarasina gore raporla " << endl;
    cout << "2) Birim fiyatina gore raporla" << endl;
    cout << "3) Urun adinin ilk harfine gore raporla" << endl;
    cout << "Bir raporlama islemi seciniz: "; 
    cin >> secim; //kullan�c� men�den bir i�lem se�er ve ona g�re farkl� raporland�rmalar yapabilir
    if (secim == 1)  //se�im bir oldu�u i�in �r�n numaras�na g�re raporland�rma yapar
    {
        cout << "\n=============== URUN NUMARASINA GORE RAPORLA ===============" << endl;
        int urunNoAra;
        cout << "\n Raporlanacak urunun numarasini giriniz: ";
        cin >> urunNoAra;
        ifstream urunNoDosya("Urunler.txt");
        while (!urunNoDosya.eof())
        {
            urunNoDosya >> raporlananUrunNo >> raporlananUrunAdi >> raporlananUrunBirim >> raporlananUrunBirimFiyati >> raporlananUrunMarkasi;
            if (urunNoAra == raporlananUrunNo)
            {
                Bildirimler::urunRaporlandi();
                cout << "\n Raporlanan Urun Detaylari: " << endl;
                cout << "==============================" << endl;
                cout << "Urun No: " << raporlananUrunNo << endl;
                cout << "Urun Adi: " << raporlananUrunAdi << endl;
                cout << "Urun Birim: " << raporlananUrunBirim << endl;
                cout << "Urun Birim Fiyati: " << raporlananUrunBirimFiyati << endl;
                cout << "Urun Markasi: " << raporlananUrunMarkasi << endl;
                cout << "==============================";
            }
        }
        urunNoDosya.close(); //i�imiz bitince dosyay� kapat�yoruz
    }
    else if (secim == 2) //se�im iki oldu�u i�in birim fiyat�na g�re raporland�rma yapar
    {
        //birim fiyat�na g�re raporland�rmada da 3 se�ene�i vard�r bunlar farkl� fiyat aral�klar�na g�re raporland�rma yapabilmeye olanak sa�lar

        int fiyatSecim;
        cout << "\n=============== BIRIM FIYATINA GORE RAPORLA ===============" << endl;
        cout << "1) Birim fiyati 0-1000 arasi olanlar " << endl;
        cout << "2) Birim fiyati 1000-10000 arasi olanlar" << endl;
        cout << "3) Birim fiyati 10000+ olanlar" << endl;
        cin >> fiyatSecim; //kullan�c�dan bir se�im al�n�r
        if (fiyatSecim == 1) //fiyatSecim 1 olursa 0-1000 aras�nda fiyata sahip �r�nler raporlan�r
        {


            ifstream dosyaYaz("Urunler.txt");
            while (!dosyaYaz.eof())
            {
                dosyaYaz >> raporlananUrunNo >> raporlananUrunAdi >> raporlananUrunBirim >> raporlananUrunBirimFiyati >> raporlananUrunMarkasi;
                if (raporlananUrunBirimFiyati <= 1000)
                {
                    Bildirimler::urunRaporlandi();
                    cout << "\n Raporlanan Urun Detaylari: " << endl;
                    cout << "==============================" << endl;
                    cout << "Urun No: " << raporlananUrunNo << endl;
                    cout << "Urun Adi: " << raporlananUrunAdi << endl;
                    cout << "Urun Birim: " << raporlananUrunBirim << endl;
                    cout << "Urun Birim Fiyati: " << raporlananUrunBirimFiyati << endl;
                    cout << "Urun Markasi: " << raporlananUrunMarkasi << endl;
                    cout << "==============================\n";
                }
            }
            dosyaYaz.close(); //i�imiz bitince dosyay� kapat�yoruz
        
        
        }
        else if (fiyatSecim == 2) //fiyatSecim 2 olursa 1000-10000 aras�nda fiyata sahip �r�nler raporlan�r
        {

            ifstream dosyaYaz("Urunler.txt");
            while (!dosyaYaz.eof())
            {
                dosyaYaz >> raporlananUrunNo >> raporlananUrunAdi >> raporlananUrunBirim >> raporlananUrunBirimFiyati >> raporlananUrunMarkasi;
                if (raporlananUrunBirimFiyati > 1000 && raporlananUrunBirimFiyati <= 10000)
                {
                    Bildirimler::urunRaporlandi();
                    cout << "\n Raporlanan Urun Detaylari: " << endl;
                    cout << "==============================" << endl;
                    cout << "Urun No: " << raporlananUrunNo << endl;
                    cout << "Urun Adi: " << raporlananUrunAdi << endl;
                    cout << "Urun Birim: " << raporlananUrunBirim << endl;
                    cout << "Urun Birim Fiyati: " << raporlananUrunBirimFiyati << endl;
                    cout << "Urun Markasi: " << raporlananUrunMarkasi << endl;
                    cout << "==============================\n";
                }
            }
            dosyaYaz.close(); //i�imiz bitince dosyay� kapat�yoruz


        }
        else if (fiyatSecim == 3) //fiyatSecim 3 olursa 10000+ fiyata sahip �r�nler raporlan�r
        {

            ifstream dosyaYaz("Urunler.txt");
            while (!dosyaYaz.eof())
            {
                dosyaYaz >> raporlananUrunNo >> raporlananUrunAdi >> raporlananUrunBirim >> raporlananUrunBirimFiyati >> raporlananUrunMarkasi;
                if (raporlananUrunBirimFiyati > 10000)
                {
                    Bildirimler::urunRaporlandi();
                    cout << "\n Raporlanan Urun Detaylari: " << endl;
                    cout << "==============================" << endl;
                    cout << "Urun No: " << raporlananUrunNo << endl;
                    cout << "Urun Adi: " << raporlananUrunAdi << endl;
                    cout << "Urun Birim: " << raporlananUrunBirim << endl;
                    cout << "Urun Birim Fiyati: " << raporlananUrunBirimFiyati << endl;
                    cout << "Urun Markasi: " << raporlananUrunMarkasi << endl;
                    cout << "==============================\n";
                }
            }
            dosyaYaz.close(); //i�imiz bitince dosyay� kapat�yoruz

        }
        else
        {
            cout << "\n Listeden gecerli bir islem secmediniz! \n";
        }

    }

    else if (secim == 3) //se�im 3 olursa �r�n ad�n�n ilk harfine g�re raporlama yap�l�r
    {
        cout << "\n=============== URUN ADININ ILK HARFINE GORE RAPORLA ===============" << endl;
        char urunIlkHarf;
        cout << "\n Raporlanacak urunun ilk harfini giriniz: ";
        cin >> urunIlkHarf; //kullan�c�dan bir harf al�n�r
        ifstream urunNoDosya("Urunler.txt");
        while (!urunNoDosya.eof())
        {
            urunNoDosya >> raporlananUrunNo >> raporlananUrunAdi >> raporlananUrunBirim >> raporlananUrunBirimFiyati >> raporlananUrunMarkasi;
            if (urunIlkHarf == raporlananUrunAdi[0]) //�r�n ad�n�n ilk harfi o harf ile e�le�en �r�nler listelenir
            {
                Bildirimler::urunRaporlandi();
                cout << "\n Raporlanan Urun Detaylari: " << endl;
                cout << "==============================" << endl;
                cout << "Urun No: " << raporlananUrunNo << endl;
                cout << "Urun Adi: " << raporlananUrunAdi << endl;
                cout << "Urun Birim: " << raporlananUrunBirim << endl;
                cout << "Urun Birim Fiyati: " << raporlananUrunBirimFiyati << endl;
                cout << "Urun Markasi: " << raporlananUrunMarkasi << endl;
                cout << "==============================";
            }
        }
        urunNoDosya.close(); //i�imiz bitince dosyay� kapat�yoruz
    }



}


// Proje ��lemleri ��in Tasarlad���m S�n�f

class Projeler {

private:
    //Projenin sahip olaca�� �zellikler
    int projeNo;
    string projeAdi;
    string yurutuFirma;
    string projeSorumlusu;
    string projeKontroloru;

public:
    Projeler(int, string, string, string, string); //Projeler parametreli kurucu fonksiyon
    ~Projeler(); //Projeler y�k�c� fonksiyon
    static boolean projeTekrarKontrol(int); //Projeler.txt'de proje mevcut mu diye kontrol edecek
    static void projeEkle(); //Projeler.txt'ye �r�n eklememizi sa�layacak
    static void projeSil(); //Projeler.txt'den �r�n silmemizi sa�layacak
    static void projeAra(); //Projeler.txt'den �r�n aramam�z� sa�layacak
    static void projeRaporla(); //Belli parametrelere g�re projeleri raporlamam�z� sa�layacak
    static int dosyaTara(); //projeler.txt i�erisindeki kay�t say�s�n� tarar silme i�lemine kulland�m
};

//Projeler parametreli kurucu fonksiyonu
Projeler::Projeler(int _projeNo,string _projeAdi,string _yurutucuFirma, string _projeSorumlusu,string _projeKontroloru)
{
    this->projeNo = _projeNo;
    this->projeAdi = _projeAdi;
    this->yurutuFirma = _yurutucuFirma;
    this->projeSorumlusu = _projeSorumlusu;
    this->projeKontroloru = _projeKontroloru;

}

//Projeler y�k�c� fonksiyon
Projeler::~Projeler() {

}


//Projeler.txt i�erisinde parametre olarak ald��� proje numaras�na sahip bir proje eklenmi� mi diye kontrol eder
boolean Projeler::projeTekrarKontrol(int girilenProjeNo) {

    bool durum = true; //durum kontrol� i�in tan�mlanan durum isminde bool de�i�kenim
    //txt dosyas�ndan kay�tl� verileri �ekerken ge�ici proje �zellikleri tan�mlamalar�
    int geciciProjeNo;
    string geciciProjeAdi;
    string geciciYurutucuFirma;
    string geciciProjeSorumlusu;
    string geciciProjeKontrolloru;

    ifstream DosyaOku("Projeler.txt"); //Projeler dosyas�n� oku
    while (!DosyaOku.eof()) //dosyan�n sonuna gelene kadar
    {
        DosyaOku >> geciciProjeNo >> geciciProjeAdi >> geciciYurutucuFirma >> geciciProjeSorumlusu >> geciciProjeKontrolloru; //proje �zelliklerini oku
        if (girilenProjeNo == geciciProjeNo) { //proje numaralar� e�le�irse
            durum = false;
            break;
        }
        else
        {
            durum = true; //tekrar yap�lmam��t�r
        }
    }
    return durum; //durumu geri d�nd�r�r

}

//Projeler.txt i�erisine proje eklememizi sa�layacak olan fonksiyon
void Projeler::projeEkle()
{
    //dosyaya yazarken once kontrol islemi yap�yorduk ama once elimizde o isimde dosya olmas� gerekli bu yuzden kontrol amacl� dosyay� onden olusturuyoruz
    ofstream dosyaOlustur;
    dosyaOlustur.open("Projeler.txt", ios::app);
    dosyaOlustur.close(); //dosya ile i�imiz bitti kapatal�m

    //Projenin sahip olaca�� �zellikler burada da tan�mland�, kurucuya parametre olarak verilecek daha sonras�nda
    int _projeNo = 0;
    string _projeAdi;
    string _yurutuFirma;
    string _projeSorumlusu;
    string _projeKontroloru;
    cout << "\n=============== YENI PROJE KAYDI ===============" << endl;
    cout << "Bilgi 1: Gireceginiz degerler sirasiyla int,string,string,string,string olmalidir" << endl;
    cout << "Bilgi 2: Isimlendirme yaparken Turkce karakter ve bosluk kullanmamaya dikkat ediniz" << endl;
    //Projenin sahip olaca�� �zelikler kullan�c�dan al�nd�
    cout << "Proje No giriniz : ";
    cin >> _projeNo; //proje no al�nd�

    while (!(Projeler::projeTekrarKontrol(_projeNo))) //projeTekrarKontrol'den ge�ene kadar 
    {
        Bildirimler::projeTekrariYapildi();
        cout << "\nProje No giriniz : "; //kullan�c�dan farkl� bir proje no girilmesi sa�land�
        cin >> _projeNo;
    }

    cout << "Proje Adi giriniz : ";
    cin >> _projeAdi; //proje ad� al�nd�

    cout << "Yurutucu Firmayi giriniz : ";
    cin >> _yurutuFirma; //yurutucu firma al�nd�

    cout << "Proje Sorumlusunu giriniz : ";
    cin >> _projeSorumlusu; //proje sorumlusu al�nd�

    cout << "Proje Kontrolorunu giriniz : ";
    cin >> _projeKontroloru; //proje kontroloru al�nd�

    cout << "==============================================" << endl;


    Projeler* p = new Projeler(_projeNo, _projeAdi, _yurutuFirma, _projeSorumlusu, _projeKontroloru); //nesne olu�turuldu
    ofstream DosyaYaz; //dosyaya yazmak i�in
    DosyaYaz.open("Projeler.txt", ios::app);
    DosyaYaz << p->projeNo << " " << p->projeAdi << " " << p->yurutuFirma << " " << p->projeSorumlusu << " " << p->projeKontroloru << endl; //dosyaya proje bilgileri yaz�ld�
    DosyaYaz.close(); //dosya ile i�imiz bitti kapat�yoruz
    Bildirimler::projeEklendi();
    delete p;

}

//Projeler.txt i�erisinden proje aram�m�z� sa�layacak olan fonksiyon
void Projeler::projeAra()
{
    //proje ile ilgili bilgileri tutacak dosya okumada kullanaca��m�z ge�ici de�i�kenlerimi tan�mlad�m
    int aranacakProjeNo;
    int arananProjeNo;
    string arananProjeAdi;
    string arananYurutucuFirma;
    string arananProjeSorumlusu;
    string arananProjeKontroloru;
    cout << "\n=============== PROJE ARAMA ===============" << endl;
    cout << "Aranacak proje no: ";
    cin >> aranacakProjeNo; //aranacak projenin, proje numaras� kullan�c�dan al�nd�
    ifstream aranacakProjeIcinDosyaOku("Projeler.txt"); //Projeler.txt okuma modunda a��ld�
    while (!aranacakProjeIcinDosyaOku.eof()) //dosya sonuna gelene kadar d�ng� devam etsin
    {
        aranacakProjeIcinDosyaOku >> arananProjeNo >> arananProjeAdi >> arananYurutucuFirma >> arananProjeSorumlusu >> arananProjeKontroloru;
        if (aranacakProjeNo == arananProjeNo) //aramak i�in kullan�c�dan ald���m�z proje numaras� ve txt i�erisindeki bir proje numaras� e�le�irse
        {
            Bildirimler::projeBulundu(); //Proje bulundu bildirimi ekrana gelsin
            cout << "\nProje Detaylari: " << endl;
            cout << "==============================" << endl;
            cout << "Proje No: " << arananProjeNo << endl;
            cout << "Proje Adi: " << arananProjeAdi << endl;
            cout << "Proje Yurutucu Firma: " << arananYurutucuFirma << endl;
            cout << "Proje Sorumlusu: " << arananProjeSorumlusu << endl;
            cout << "Proje Kontroloru: " << arananProjeKontroloru << endl;
            cout << "==============================";
            break; //ve art�k d�ng�den ��k
        }
    }
    aranacakProjeIcinDosyaOku.close(); //i�imiz bitince dosyay� kapat�yoruz
}

//Projeler.txt i�indeki bilgileri belli parametrelere g�re filtreleyip g�rmemizi sa�layacak olan fonksiyon
void Projeler::projeRaporla()
{
    //raporlama t�r� i�in se�imimizi tutacak olan de�i�ken
    int secim = 0;
    //proje �zelliklerini tutacak olan de�i�kenlerimi tan�ml�yorum yine
    int raporlananProjeNo = 0;
    string raporlananProjeAdi;
    string raporlananYurutucuFirma;
    string raporlananProjeSorumlusu;
    string raporlananProjeKontroloru;
    //farkl� t�rde raporlama se�eneklerimi men�de kullan�c�ya g�steriyorum
    cout << "\n=============== PROJE RAPORLA ===============" << endl;
    cout << "1) Proje numarasina gore raporla " << endl;
    cout << "2) Proje adinin ilk harfine gore raporla" << endl;
    cout << "3) Proje sorumlusunun ilk harfine gore raporla" << endl;
    cout << "Bir raporlama islemi seciniz: ";
    cin >> secim; //Kullan�c�dan bir raporlama t�r� se�mesini istiyorum ve bu de�eri kullan�c�dan al�yorum
    if (secim == 1) { //secim 1 olursa proje numaras�na g�re projeler raporlan�r 
        cout << "\n=============== PROJE NUMARASINA GORE RAPORLA ===============" << endl;
        int projeNoAra;
        cout << "\n Raporlanacak projenin numarasini giriniz: ";
        cin >> projeNoAra;
        ifstream projeNoDosya("Projeler.txt");
        while (!projeNoDosya.eof())
        {
            projeNoDosya >> raporlananProjeNo >> raporlananProjeAdi >> raporlananYurutucuFirma >> raporlananProjeSorumlusu >> raporlananProjeKontroloru;
            if (projeNoAra == raporlananProjeNo)
            {
                Bildirimler::urunRaporlandi();
                cout << "\n Raporlanan Proje Detaylari: " << endl;
                cout << "==============================" << endl;
                cout << "Proje No: " << raporlananProjeNo << endl;
                cout << "Proje Adi: " << raporlananProjeAdi << endl;
                cout << "Proje Yurutucu Firma: " << raporlananYurutucuFirma << endl;
                cout << "Proje Sorumlusu: " << raporlananProjeSorumlusu << endl;
                cout << "Proje Kontroloru: " << raporlananProjeKontroloru << endl;
                cout << "==============================";
            }
        }
        projeNoDosya.close(); //i�imiz bitince dosyay� kapat�yoruz
    }
    else if (secim == 2) //secim 2 olursa proje ad�n�n ilk harfine g�re raporlan�r
    {
        cout << "\n=============== PROJE ADININ ILK HARFINE GORE RAPORLA ===============" << endl;
        char projeIlkHarf;
        cout << "\n Raporlanacak projenin ilk harfini giriniz: ";
        cin >> projeIlkHarf; //kullan�c�dan raporlanmas�n� istedi�i proje ilk harfi istendi
        ifstream projeDosya("Projeler.txt");
        while (!projeDosya.eof())
        {
            projeDosya >> raporlananProjeNo >> raporlananProjeAdi >> raporlananYurutucuFirma >> raporlananProjeSorumlusu >> raporlananProjeKontroloru;
            if (projeIlkHarf == raporlananProjeAdi[0]) //kullan�c�dan al�nan harf ile dosyadaki proje isimlerinin ilk harfi ayn� ise raporlar
            {
                Bildirimler::urunRaporlandi(); //�r�n raporland� bildirimi ekranda g�sterilir
                cout << "\n Raporlanan Proje Detaylari: " << endl;
                cout << "==============================" << endl;
                cout << "Proje No: " << raporlananProjeNo << endl;
                cout << "Proje Adi: " << raporlananProjeAdi << endl;
                cout << "Proje Yurutucu Firma: " << raporlananYurutucuFirma << endl;
                cout << "Proje Sorumlusu: " << raporlananProjeSorumlusu << endl;
                cout << "Proje Kontroloru: " << raporlananProjeKontroloru << endl;
                cout << "==============================";
            }
        }
        projeDosya.close(); //i�imiz bitince dosyay� kapat�yoruz
    }
    else if (secim == 3) //secim 3 olursa proje sorumlusunun ilk harfine g�re raporlar
    {
        cout << "\n=============== PROJE SORUMLUSUNUN ILK HARFINE GORE RAPORLA ===============" << endl;
        char sorumluIlkHarf;
        cout << "\n Raporlanacak proje sorumlusunun ilk harfini giriniz: ";
        cin >> sorumluIlkHarf; //raporlanmas� istenen sorumlu ilk harfi al�n�r
        ifstream projeDosya("Projeler.txt");
        while (!projeDosya.eof())
        {
            projeDosya >> raporlananProjeNo >> raporlananProjeAdi >> raporlananYurutucuFirma >> raporlananProjeSorumlusu >> raporlananProjeKontroloru;
            if (sorumluIlkHarf == raporlananProjeSorumlusu[0]) //al�nan harf ile dosyadaki herhangi bir proje sorumlusu ilk harfi ayn� ise raporlar
            {
                Bildirimler::urunRaporlandi(); //�r�n raporland� bildirimi ekranda g�sterilir
                cout << "\n Raporlanan Proje Detaylari: " << endl;
                cout << "==============================" << endl;
                cout << "Proje No: " << raporlananProjeNo << endl;
                cout << "Proje Adi: " << raporlananProjeAdi << endl;
                cout << "Proje Yurutucu Firma: " << raporlananYurutucuFirma << endl;
                cout << "Proje Sorumlusu: " << raporlananProjeSorumlusu << endl;
                cout << "Proje Kontroloru: " << raporlananProjeKontroloru << endl;
                cout << "==============================";
            }
        }
        projeDosya.close(); //i�imiz bitince dosyay� kapat�yoruz
    }

}

//Projeler.txt'yi taray�p i�erisindeki kay�t say�s�n� yani sat�r say�s�n� geri d�nd�recek olan fonksiyon
int Projeler::dosyaTara() 
{
    int dosyadakiSatirSayisi = 0; //sat�r say�s� de�eri 0 olarak ba�lat�ld�
    //dosyadan okuma s�ras�nda proje ile ilgili de�erleri tutacak olan de�i�kenler
    int _projeNo;
    string _projeAdi;
    string _yurutucuFirma;
    string _projeSorumlusu;
    string _projeKontroloru;
    ifstream dosyaTara("Projeler.txt"); //okumak i�in Projeler.txt'i a� 
    while (!dosyaTara.eof()) //Dosya sonuna gelene kadar tara
    {
        dosyaTara >> _projeNo >> _projeAdi >> _yurutucuFirma >> _projeSorumlusu >> _projeKontroloru;
        dosyadakiSatirSayisi++;
    }
    return dosyadakiSatirSayisi; //dosyadaki sat�r say�s�n� yani kay�t say�s�n� geriye d�nd�r

}

//Projeler.txt i�erisinden kullan�c�dan al�nan proje no'ya g�re silme i�lemi yapmam�z� sa�layan fonksiyon
void Projeler::projeSil()
{
    boolean kontrol = true; //projenin silinip silinemeyece�ini kontrol edecek olan de�i�ken

    //proje dosyas�ndaki �zellikler i�in
    int satirSayisi = 0;
    satirSayisi = dosyaTara();
    int silinecekProjeNo;
    int _projeNo;
    string _projeAdi;
    string _yurutucuFirma;
    string _projeSorumlusu;
    string _projeKontroloru;

    //hakedi� dosyas�ndaki �zellikler i�in
    int _hProjeNo;
    int _hHakedisDonemi;
    string _hUrunNolar;
    string _hUrunAdetleri;
    string _hUrunFiyatlari;
    cout << "\n=============== PROJE SILME ===============" << endl;
    cout << "Silinecek proje no: ";
    cin >> silinecekProjeNo;
    ifstream silinecekProjeIcinDosyaOku("Projeler.txt");
    ofstream geciciProjeDosya("GeciciProjeler.tmp");

    ifstream hakedisDosyaOku("Hakedisler.txt");
    while (!hakedisDosyaOku.eof()) //hakedis dosyas�n� dosya sonuna kadar okuyoruz
    {
        hakedisDosyaOku >> _hProjeNo >> _hHakedisDonemi >> _hUrunNolar >> _hUrunAdetleri >> _hUrunFiyatlari;
        if (_hProjeNo == silinecekProjeNo) //e�er silmek istedi�imiz proje no ile hakedi�i verilen proje no ayn� ise
        {
            cout << "Hakedisi verilmis proje silinemez!" << endl; //Proje silinemez bildirimi gelir
            kontrol = false; //kontrol'e false atan�r
            break; //d�ng�den ��k�l�r
        }
        else {
        }
    }

    //e�er hakedi�i verilmemi� ise kontrol'� zaten true'dur ve if blo�u �al���r
    if (kontrol == true)
    {

        while (satirSayisi != 0) //sat�r say�s� 0 olana kadar
        {
            satirSayisi--; //her ad�mda bir azalacak �ekilde
            silinecekProjeIcinDosyaOku >> _projeNo >> _projeAdi >> _yurutucuFirma >> _projeSorumlusu >> _projeKontroloru; //proje bilgileri dosyadan okunur
            if (silinecekProjeNo != _projeNo) //silinmesi istenen proje numaras� e�it olmad��� s�rece
            {
                //ge�ici proje dosyama proje bilgilerini yazd�r�yorum
                geciciProjeDosya << _projeNo << " " << _projeAdi << " " << _yurutucuFirma << " " << _projeSorumlusu << " " << _projeKontroloru << endl;
            }
        }
        silinecekProjeIcinDosyaOku.close(); //Dosya ile i�imiz bitti�i i�in kapat�yoruz
        geciciProjeDosya.close(); // Dosya ile i�imiz bitti�i i�in kapat�yoruz
        remove("Projeler.txt"); //eski proje bilgilerini tutan dosyay� siliyorum
        rename("GeciciProjeler.tmp", "Projeler.txt"); //ge�i�i olarak olu�turulan ve yeni bilgileri i�eren dosyam� as�l dosyam olacak �ekilde g�ncelliyorum
    }
}



// Hakedi� ��lemleri ��in Tasarlad���m S�n�f

class Hakedis {

private:
    //Hakedisin sahip olaca�� �zellikler
    int projeNo;
    int hakedisDonemi;
    //di�erleri dosyalardan gelecek
public:
    Hakedis(int,int); //Hakedis parametreli kurucu fonksiyon
    ~Hakedis(); //Hakedis y�k�c� fonksiyon
    static void hakedisEkle(); //bir proje icin hakedis eklememizi saglayan fonksiyon
    static void urunleriListele(); //bir proje icin verilen hakedisteki urunleri listeleyecek fonksiyon
    static void urunlerdeAra(); //bir proje icin verilen hakedisteki urunlerde arama yapacak fonksiyon
    static void tutarRaporla(); //bir proje i�in verilen hakedisteki tutar� raporlamam�z� sa�lar
    static void urunGuncelle(); //bir proje icin verilen hakedisteki urunleri guncellemek icin
    static void urunSil(); //bir proje icin verilen hakedisteki urunleri silmek icin
    static void stringRegex(std::string const& str, const char delim,std::vector<std::string>& out); //numara,adet ve fiyatlar� regexlemek i�in
};

//Hakedis parametreli kurucu fonksiyon
Hakedis::Hakedis(int _projeNo,int _hakedisDonemi) 
{
    this->projeNo = _projeNo;
    this->hakedisDonemi = _hakedisDonemi;
}

//Hakedis y�k�c� fonksiyon
Hakedis::~Hakedis()
{

}

//Hakedisler.txt'ye hakedi� eklememizi sa�layacak olan fonksiyon
void Hakedis::hakedisEkle()
{
    //hakedi� dosyas�na eklenecek de�erleri tutan de�i�kenlerim
    int _projeNo = 0;
    int _hakedisDonemi = 0;
    string urunNolar;
    string urunAdetleri;
    string urunFiyatlari;

    cout << "\n=============== YENI HAKEDIS KAYDI ===============" << endl;
    cout << "Hakedisin verilecegi proje no: ";
    cin >> _projeNo; //kullan�c�dan hakedi�i verilmesi istenen proje numaras� al�nd�
    cout << "Hakedis donemi (1-2-3-...): ";
    cin >> _hakedisDonemi; //kullan�c�dan o projenin hakedi� d�nemi al�nd�
    cout << "\nHakedis'e urun ekle: ";
    while (true)
    {
        //Urunler.txt i�erisindeki bilgilerin al�n�p listelenmesi i�in tan�mlad���m de�i�kenler
        int arananUrunNo;
        string arananUrunAdi;
        string arananUrunBirim;
        double arananUrunBirimFiyati;
        string arananUrunMarkasi;
        cout << "\n=================================== Mevcut Urunler Ve Gerekli Detaylari ===================================" << endl;
        cout << "_____________________________________________________________________________________________________________________";
        ifstream aranacakUrunIcinDosyaOku("Urunler.txt"); //Urunler.txt okundu
        while (!aranacakUrunIcinDosyaOku.eof()) //dosya sonuna gelene kadar 
        {
            aranacakUrunIcinDosyaOku >> arananUrunNo >> arananUrunAdi >> arananUrunBirim >> arananUrunBirimFiyati >> arananUrunMarkasi;
            cout << "\nUrun no: " << setw(4) << arananUrunNo << setw(25) << "Urun adi: " << setw(10) << arananUrunAdi << "      Urun Birim: " << setw(10) << arananUrunBirim << setw(30)<< " Urun Birim Fiyati: " << arananUrunBirimFiyati<< setw(10) << endl;
            cout << "_____________________________________________________________________________________________________________________";
        }
        aranacakUrunIcinDosyaOku.close(); //i�imiz bitince dosyay� kapat�yoruz

        string no = "0"; //numara varsay�lan 0 string de�er olarak tan�mland�
        cout << "\nYukaridaki urun listesinden hakedisin verilecegi projeye, projede kullanilan urunleri ekleyelim...\n" << endl;
        cout << "1)Urun Ekleme Islemi" << endl;
        cout << "2)Urun Ekleme Islemini Bitir" << endl;
        int urunSecim = 0; //yukar�daki iki i�lenden biri se�ilecek
        cout << "Islem Seciniz: ";
        cin >> urunSecim; //se�im kullan�c�dan al�nd�
        if (urunSecim == 1)
        {
            cout << "\nHakedise eklenecek projede kullanilan urun no: ";
            cin >> no; //projede kullan�lan �r�nlerden birinin numaras� al�nd�
            urunNolar += no;
            urunNolar += "/";
            string adet = "0";
            cout << "\nHakedise eklencek projede kullanilan o urunun adet miktari: ";
            cin >> adet; //projede kullan�lan bu �r�n�n ka� adet kullan�ld��� al�nd�
            urunAdetleri += adet;
            urunAdetleri += "/";
            string fiyat = "0";
            cout << "\nHakedise eklencek projede kullanilan o urunun fiyati: ";
            cin >> fiyat; //projede kullan�lan bu �r�n�n fiyat� al�nd�
            urunFiyatlari += fiyat;
            urunFiyatlari += "/";
        }
        else if (urunSecim == 2) //i�lemi bitirmek i�in d�ng�den ��k�ld�
        {
            break;
        }

    }

    //Hakedis nesnesi olusturuldu al�nan de�erler parametre olarak verildi
    Hakedis* h = new Hakedis(_projeNo,_hakedisDonemi);
    ofstream DosyaYaz; //dosyaya yazmak i�in
    DosyaYaz.open("Hakedisler.txt", ios::app);
    DosyaYaz << h->projeNo << " " <<  h->hakedisDonemi << " " << urunNolar << " " << urunAdetleri << " " <<urunFiyatlari <<  endl; //al�nan t�m bilgiler Hakedisler.txt'ye yaz�ld�
    DosyaYaz.close(); //dosya ile i�imiz bitti�i i�in kapat�yoruz
    delete h; //nesnemizi siliyoruz

}

//Hakedisleri okurken string ifadeleri regexlemek i�in kullanaca��m fonksiyon
void Hakedis::stringRegex(string const& str, const char delim,
    vector<string>& out)
{
    stringstream ss(str);
    string s;
    while (getline(ss, s, delim)) {
        out.push_back(s);
    }
}

//Hakedi�i verilen projedeki �r�nleri listelememizi sa�layacak olan fonksiyon
void Hakedis::urunleriListele()
{
    int i = 0; //d�ng�de kullanaca��m de�i�kenim
    int urunler[100]; //bir tamsay� �r�n dizisi tan�mlad�m
    //hakedi� dosyas�ndaki bilgileri tutacak olan de�i�kenlerim
    int _projeNo = 0;
    int _hakedisDonemi = 0;
    string urunNolar;
    string urunAdetleri;
    string urunFiyatlari;
    int listeleNo;
    cout << "Kac numarali proje icin verilen hakedisteki urunleri listeleyeceksiniz: ";
    cin >> listeleNo; //kullan�c�dan �r�nlerinin listelenmesi istenen proje numaras� al�nd�
    ifstream hakedisDosyaOku("Hakedisler.txt"); //Hakedisler.txt'yi oku
    while (!hakedisDosyaOku.eof()) //dosya sonuna kadar
    {
        hakedisDosyaOku >> _projeNo >> _hakedisDonemi >> urunNolar >> urunAdetleri >> urunFiyatlari;
        if (_projeNo == listeleNo) //e�er aranan proje numaras� ile dosyadaki herhangi bir proje numaras� ayn� ise
        {
            string s = urunNolar; //o sat�rdaki �r�n numaralar� stringi al�n�r
            const char ayirmaIsareti = '/'; // '/' i�aretine g�re ay�r�l�r
            vector<string> out;
            Hakedis::stringRegex(s, ayirmaIsareti, out);
            i = 0;
            for (auto &s:out)
            {
                urunler[i] = stoi(s); //urunler dizisinin indislerine o numaralar yerle�tirilir
                i++; //bizim urun indeksimizi tutacak ayn� zamanda burdan urun say�s�n� da bilebiliriz
            }
        }
    }
    cout << "\nProje icin hakedise eklenen toplamda " << i << " adet urun bulundu!";
    cout << "\n" << listeleNo << " numarali proje icin hakedise eklenen urunler: " << endl;
    for (int j = 0; j < i; j++) //Hakedi�e eklenmi� �r�nleri listeler
    {
        cout << j+1 << ".urun'un urun numarasi: " <<  urunler[j] << endl;
    }

}

//Hakedi�i verilmi� projedeki �r�nlerin ayr�nt�l� bilgilerini g�rmemizi sa�layacak olan fonksiyon
void Hakedis::urunlerdeAra() 
{
    int i = 0; //d�ng�de kullanaca��m de�i�kenim
    int urunler[100]; //bir tamsay� �r�n dizisi tan�mlad�m
    //hakedi� dosyas�ndaki bilgileri tutacak olan de�i�kenlerim
    int _projeNo = 0;
    int _hakedisDonemi = 0;
    string urunNolar;
    string urunAdetleri;
    string urunFiyatlari;
    int listeleNo; 
    cout << "Kac numarali proje icin verilen hakedisteki urunleri listeleyeceksiniz: ";
    cin >> listeleNo; //kullan�c�dan �r�nlerinin listelenmesi istenen proje numaras� al�nd�
    ifstream hakedisDosyaOku("Hakedisler.txt"); //Hakedisler.txt'yi oku
    while (!hakedisDosyaOku.eof()) //dosya sonuna kadar
    {
        hakedisDosyaOku >> _projeNo >> _hakedisDonemi >> urunNolar >> urunAdetleri >> urunFiyatlari;
        if (_projeNo == listeleNo) //e�er aranan proje numaras� ile dosyadaki herhangi bir proje numaras� ayn� ise
        {
            string s = urunNolar; //o sat�rdaki �r�n numaralar� stringi al�n�r
            const char ayirmaIsareti = '/'; // '/' i�aretine g�re ay�r�l�r
            vector<string> out;
            Hakedis::stringRegex(s, ayirmaIsareti, out);
            i = 0;
            for (auto &s:out)
            {
                urunler[i] = stoi(s); //urunler dizisinin indislerine o numaralar yerle�tirilir
                i++; //bizim urun indeksimiz tutacak ayn� zamanda burdan urun say�s�n� da bilebiliriz
            }
        }
    }
    cout << "\nProje icin hakedise eklenen toplamda " << i << " adet urun bulundu!";
    cout << "\n" << listeleNo << " numarali proje icin hakedise eklenen urunler: " << endl;
    for (int j = 0; j < i; j++) //T�m �r�nleri d�ng� ile d�ner
    {
        Urunler::urunAraOtomatik(urunler[j]); //indislerdeki �r�n numara de�elerini urunAraOtomatik() fonksiyonu i�ine parametre olarak g�nderip �r�nleri ayr�nt�l� arar
    }
}

//Hakedis.txt icerisinden secilen projede kullan�lan �r�nlerin silinmesini sa�lar
void Hakedis::urunSil()
{
    //hakedi� dosyas�ndaki bilgileri tutacak olan de�i�kenlerim
    int _projeNo = 0;
    int _hakedisDonemi = 0;
    string urunNolar;
    string urunAdetleri;
    string urunFiyatlari;
    int listeleNo;
    int donemNo;
    cout << "Kac numarali proje icin verilen hakedisteki urunleri guncelleyeceksiniz: ";
    cin >> listeleNo; //kullan�c�dan �r�nlerinin g�ncellenmesi istenen proje numaras� al�nd�
    cout << "Projenin donemi hangi donem(1-2-3...): ";
    cin >> donemNo; //o projenin d�nem numaras� al�nd�
    ifstream hakedisDosyaOku("Hakedisler.txt"); //Hakedisler.txt'yi oku
    ofstream geciciHakedisDosya("GeciciHakedisler.tmp");
    while (!hakedisDosyaOku.eof())
    {
        hakedisDosyaOku >> _projeNo >> _hakedisDonemi >> urunNolar >> urunAdetleri >> urunFiyatlari;
        if (_projeNo != listeleNo && donemNo != _hakedisDonemi) // al�nan de�erler dosyadaki de�erlere e�it de�ilse tekrar yaz
        {
            geciciHakedisDosya << _projeNo << " " << _hakedisDonemi << " " << urunNolar << " " << urunAdetleri << " " << urunFiyatlari << endl;
        }
        else //e�it ise de�erleri "0" �eklinde g�ncelle
        {
            geciciHakedisDosya << _projeNo << " " << _hakedisDonemi << " " << "0" << " " << "0" << " " << "0" << endl;
            break;
        }
    }
    hakedisDosyaOku.close(); //dosya ile i�imiz bitti kapat�yorum
    geciciHakedisDosya.close(); //dosya ile i�imiz bitti kapat�yorum
    remove("Hakedisler.txt"); //eski hakedi�ler listesi silindi
    rename("GeciciHakedisler.tmp", "Hakedisler.txt"); //ge�ici hakedi�ler dosyas� as�l dosya oldu Hakedisler.txt olarak g�ncellendi
    Bildirimler::urunSilindi(); //�r�n silindi bildirimi
}

//Hakedis.txt icerisinden secilen projede kullan�lan �r�nlerin g�ncellenmesini sa�lar
void Hakedis::urunGuncelle()
{
    int i = 0; //d�ng�de kullanaca��m de�i�kenim
    int urunler[100]; //bir tamsay� �r�n dizisi tan�mlad�m
    //hakedi� dosyas�ndaki bilgileri tutacak olan de�i�kenlerim
    int _projeNo = 0;
    int _hakedisDonemi = 0;
    string urunNolar;
    string urunAdetleri;
    string urunFiyatlari;
    string _urunNolar;
    string _urunAdetleri;
    string _urunFiyatlari;
    int listeleNo;
    int donemNo;
    cout << "Kac numarali proje icin verilen hakedisteki urunleri guncelleyeceksiniz: ";
    cin >> listeleNo; //kullan�c�dan �r�nlerinin g�ncellenmesi istenen proje numaras� al�nd�
    cout << "Projenin donemi hangi donem(1-2-3...): ";
    cin >> donemNo; //o projenin d�nem numaras� al�nd�

    while (true)
    {

        string no = "0"; //numara varsay�lan 0 string de�er olarak tan�mland�
        cout << "\nYukaridaki urun listesinden hakedisin verilecegi projeye, projede kullanilan urunleri ekleyelim...\n" << endl;
        cout << "1)Urun Ekleme Islemi" << endl;
        cout << "2)Urun Ekleme Islemini Bitir" << endl;
        int urunSecim = 0; //yukar�daki iki i�lenden biri se�ilecek
        cout << "Islem Seciniz: ";
        cin >> urunSecim; //se�im kullan�c�dan al�nd�
        if (urunSecim == 1)
        {
            cout << "\nHakedise eklenecek projede kullanilan guncel urun no: ";
            cin >> no; //projede kullan�lan �r�nlerden birinin numaras� al�nd�
            _urunNolar += no;
            _urunNolar += "/";
            string adet = "0";
            cout << "\nHakedise eklencek projede kullanilan o urunun guncel adet miktari: ";
            cin >> adet; //projede kullan�lan bu �r�n�n ka� adet kullan�ld��� al�nd�
            _urunAdetleri += adet;
            _urunAdetleri += "/";
            string fiyat = "0";
            cout << "\nHakedise eklencek projede kullanilan o urunun guncel fiyati: ";
            cin >> fiyat; //projede kullan�lan bu �r�n�n fiyat� al�nd�
            _urunFiyatlari += fiyat;
            _urunFiyatlari += "/";
        }
        else if (urunSecim == 2) //i�lemi bitirmek i�in d�ng�den ��k�ld�
        {
            break;
        }
    }

    ifstream hakedisDosyaOku("Hakedisler.txt"); //Hakedisler.txt'yi oku
    ofstream geciciHakedisDosya("GeciciHakedisler.tmp");
    while (!hakedisDosyaOku.eof())
    {
        hakedisDosyaOku >> _projeNo >> _hakedisDonemi >> urunNolar >> urunAdetleri >> urunFiyatlari;
        if (_projeNo != listeleNo && donemNo != _hakedisDonemi) // al�nan de�erler dosyadaki de�erlere e�it de�ilse tekrar yaz
        {
            geciciHakedisDosya << _projeNo << " " << _hakedisDonemi << " " << urunNolar << " " << urunAdetleri << " " << urunFiyatlari << endl;
        }
        else //e�it ise yani bu da g�ncellemek istedi�imiz de�er oluyor g�ncel de�erleri ata onlar� yaz
        {
            urunNolar = _urunNolar;
            urunAdetleri = _urunAdetleri;
            urunFiyatlari = _urunFiyatlari;
            geciciHakedisDosya << _projeNo << " " << _hakedisDonemi << " " << urunNolar << " " << urunAdetleri << " " << urunFiyatlari << endl;
            break;
        }
    }
    hakedisDosyaOku.close();
    geciciHakedisDosya.close();
    remove("Hakedisler.txt"); //eski hakedi�ler listesi silindi
    rename("GeciciHakedisler.tmp", "Hakedisler.txt"); //ge�ici hakedi�ler dosyas� as�l dosya oldu Hakedisler.txt olarak g�ncellendi

}

//Hakedis.txt icerisinden secilen projenin o d�neme ait hakedis tutar�n� raporlamam�z� sa�lar
void Hakedis::tutarRaporla()
{
    int i = 0; //d�ng�de kullanaca��m de�i�kenim
    int urunler[100]; //bir tamsay� �r�n dizisi tan�mlad�m
    int adetler[100]; //bir tamsay� adet dizisi tan�mlad�m
    int fiyatlar[100]; //bir tamsay� fiyat dizisi tan�mlad�m
    int tutar = 0; //her d�ng�de �r�n*adet*fiyat tutar� tutacak de�i�ken
    int toplam = 0;
    //hakedi� dosyas�ndaki bilgileri tutacak olan de�i�kenlerim
    int _projeNo = 0;
    int _hakedisDonemi = 0;
    string urunNolar;
    string urunAdetleri;
    string urunFiyatlari;
    int listeleNo;
    int donemNo;
    cout << "Kac numarali proje icin verilen hakedisteki urunlerin toplam tutarini raporlayacaksiniz: ";
    cin >> listeleNo; //kullan�c�dan �r�nlerinin listelenmesi istenen proje numaras� al�nd�
    cout << "Projenin donemi hangi donem(1-2-3...): ";
    cin >> donemNo;
    ifstream hakedisDosyaOku("Hakedisler.txt"); //Hakedisler.txt'yi oku
    while (!hakedisDosyaOku.eof()) //dosya sonuna gelene kadar
    {
        hakedisDosyaOku >> _projeNo >> _hakedisDonemi >> urunNolar >> urunAdetleri >> urunFiyatlari;
        if (_projeNo == listeleNo && donemNo == _hakedisDonemi)
        {
            const char ayirmaIsareti = '/'; // '/' i�aretine g�re ayr�l�r
            string adet = urunAdetleri; //�r�n adetlerini tutacak de�i�ken
            vector<string> adetcikti;
            Hakedis::stringRegex(adet, ayirmaIsareti, adetcikti);
            i = 0;
            for (auto& adet : adetcikti)
            {
                adetler[i] = stoi(adet); //urunler dizisinin indislerine o adetler yerle�tirilir
                i++; //bizim urun indeksimiz tutacak ayn� zamanda burdan urun say�s�n� da bilebiliriz
            }

            string fiyat = urunFiyatlari; //�r�n fiyatlar�n� tutacak de�i�ken
            vector<string> fiyatcikti;
            Hakedis::stringRegex(fiyat, ayirmaIsareti, fiyatcikti);
            i = 0;
            for (auto& fiyat : fiyatcikti)
            {
                fiyatlar[i] = stoi(fiyat); //urunler dizisinin indislerine o adetler yerle�tirilir
                i++; //bizim urun indeksimiz tutacak ayn� zamanda burdan urun say�s�n� da bilebiliriz
            }

            for (int j = 0; j < i; j++) 
            {
                tutar = 1*adetler[j] * fiyatlar[j]; // o �r�n numaras�na ait �r�n adeti ile fiyat�n� �arpar tutar'a e�itler
                toplam += tutar; //tutar miktar�n� da toplam'a ekler
            }
        }
    }
    Bildirimler::tutarRaporlandi(); //tutar raporland� bildirimi
    cout << "\n" << listeleNo << " numarali projenin " << donemNo << ". donemi " << "icin hakedise eklenen urunlerin toplam tutari: " << toplam << " TL'dir." << endl;

}


//Men� ��lemleri ��in Tasarlad���m S�n�f
class Menu
{
public:
    Menu(); //Menu kurucu fonksiyonu
    ~Menu(); //Menu y�k�c� fonksiyonu

private:

};

//main k�sm�nda �a�r�lacak olan t�m i�lemlerin ger�ekle�tirilece�i Menu kurucu fonksiyonu
Menu::Menu()
{
    //Kullan�c� bilgilendiriliyor
    cout << "=============== INSAAT ODEME YONETIM SISTEMINE HOS GELDINIZ ===============" << endl;
    while (true)
    {
        cout << "1) Urunler ile ilgili islemler" << endl;
        cout << "2) Projeler ile ilgili islemler" << endl;
        cout << "3) Hakedis'in verilmesi ile ilgili islemler" << endl;
        cout << "4) Programi sonlandir" << endl;
        int menuSecim;
        cout << "Yukaridaki islemlerden birini seciniz: ";
        cin >> menuSecim; //kullan�c�dan bir se�im al�n�yor
        if (menuSecim == 1) //se�im 1 olursa �r�n ile ilgili i�lemlere y�nlendiriliyor
        {
            cout << "\n========== URUNLER ILE ILGILI ISLEMLER ==========" << endl;
            cout << "1) Urun Ekle" << endl;
            cout << "2) Urun Ara" << endl;
            cout << "3) Urun Raporla" << endl;
            cout << "4) Urun Sil" << endl;
            int urunIslemSecim;
            cout << "Yukaridaki islemlerden birini seciniz: ";
            cin >> urunIslemSecim;
            cout << endl;
            if (urunIslemSecim == 1)
            {
                Urunler::urunEkle();
                cout << endl;
            }
            else if (urunIslemSecim == 2)
            {
                Urunler::urunAra();
                cout << endl;
            }
            else if (urunIslemSecim == 3)
            {
                Urunler::urunRaporla();
                cout << endl;
            }
            else if (urunIslemSecim == 4)
            {
                Urunler::urunSil();
                cout << endl;
            }
            else
            {
                cout << "Listeden gecerli bir islem secilmemistir!" << endl;
            }
        }
        else if (menuSecim == 2) //se�im 2 olursa projeler ile ilgili i�lemlere y�nlendiriyor
        {
            cout << "\n========== PROJELER ILE ILGILI ISLEMLER ==========" << endl;
            cout << "1) Proje Ekle" << endl;
            cout << "2) Proje Ara" << endl;
            cout << "3) Proje Raporla" << endl;
            cout << "4) Proje Sil" << endl;
            int projeIslemSecim;
            cout << "Yukaridaki islemlerden birini seciniz: ";
            cin >> projeIslemSecim;
            cout << endl;
            if (projeIslemSecim == 1)
            {
                Projeler::projeEkle();
                cout << endl;
            }
            else if (projeIslemSecim == 2)
            {
                Projeler::projeAra();
                cout << endl;
            }
            else if (projeIslemSecim == 3)
            {
                Projeler::projeRaporla();
                cout << endl;
            }
            else if (projeIslemSecim == 4)
            {
                Projeler::projeSil();
                cout << endl;
            }
            else
            {
                cout << "Listeden gecerli bir islem secilmemistir!" << endl;
            }
        }
        else if (menuSecim == 3) //se�im 3 olursa hakedi� ile ilgili i�lemlere y�nlendiriliyor
        {
            cout << "\n========== HAKEDIS ILE ILGILI ISLEMLER ==========" << endl;
            cout << "1) Projeye Hakedis Ekle" << endl;
            cout << "2) Projedeki Urunleri Listele" << endl;
            cout << "3) Projedeki Urunlerde Ara" << endl;
            cout << "4) Projedeki Urunleri Guncelle" << endl;
            cout << "5) Projedeki Urunleri Sil" << endl;
            cout << "6) Projedeki Urunlerin Donemine Gore Hakedis Tutarini Raporla" << endl;
            int hakedisIslemSecim;
            cout << "Yukaridaki islemlerden birini seciniz: ";
            cin >> hakedisIslemSecim;
            cout << endl;
            if (hakedisIslemSecim == 1)
            {
                Hakedis::hakedisEkle();
                cout << endl;
            }
            else if (hakedisIslemSecim == 2)
            {
                Hakedis::urunleriListele();
                cout << endl;
            }
            else if (hakedisIslemSecim == 3)
            {
                Hakedis::urunlerdeAra();
                cout << endl;
            }
            else if (hakedisIslemSecim == 4)
            {
                Hakedis::urunGuncelle();
                cout << endl;
            }
            else if (hakedisIslemSecim == 5)
            {
                Hakedis::urunSil();
                cout << endl;
            }
            else if (hakedisIslemSecim == 6)
            {
                Hakedis::tutarRaporla();
                cout << endl;
            }
            else
            {
                cout << "Listeden gecerli bir islem secilmemistir!" << endl;
            }
        }
        else if (menuSecim == 4)
        {
            break; //d�ng�den ��kar otomatik olarak program sonlanm�� olur.
        }
        else
        {
            cout << "\nListeden gecerli bir islem secilmemistir!\n" << endl;
        }
    }


}

//Menu y�k�c� fonksiyonu
Menu::~Menu()
{
}


int main()
{
    Menu* menuGetir = new Menu();
}