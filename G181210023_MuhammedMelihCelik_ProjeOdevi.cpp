/****************************************************************************
**                          SAKARYA ÜNÝVERSÝTESÝ
**                BÝLGÝSAYAR VE BÝLÝÞÝM BÝLÝMLERÝ FAKÜLTESÝ
**                   BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ
**                      PROGRAMLAMAYA GÝRÝÞ DERSÝ
**
**                 ÖDEV NUMARASI    : 01
**                 ÖÐRENCÝ ADI      : Muhammed Melih Çelik 
**                 ÖÐRENCÝ NUMARASI : G181210023   
**                 DERS GRUBU       : 1.Öðretim A Grubu
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

// Bildirim Ýþlemleri Ýçin Tasarladýðým Sýnýf

class Bildirimler {
private:

public:
    Bildirimler(); //kurucu fonk
    ~Bildirimler(); //yýkýcý fonk
    static void urunEklendi(); //ürün eklenmesi baþarýlý olunca gelecek bildirim
    static void urunSilindi(); //ürün silinmesi baþarýlý olunca gelecek bildirim
    static void urunRaporlandi(); //ürün raporlanýnca gelecek bildirim
    static void urunTekrariYapildi(); //ürün tekrarý yapýlýnca gelecek uyarý bildirimi
    static void urunBulundu(); //ürün bulununca gelecek bildirim
    static void projeTekrariYapildi(); //proje tekrarý yapýlýnca gelecek uyarý bildirimi
    static void projeEklendi(); //proje eklenince gelecek bildirim
    static void projeBulundu(); //proje bulununca gelecek bildirim
    static void projeRaporlandi(); //proje raporlanýnca gelecek bildirim
    static void urunGuncellendi(); //ürün güncellenince gelecek bildirim
    static void tutarRaporlandi(); //tutar raporlanýnca gelecek bildirim
};

//Bildirimler sýnýfý kurucu fonksiyonu
Bildirimler::Bildirimler() {

}

//Bildirimler sýnýfý yýkýcý fonksiyonu
Bildirimler::~Bildirimler() {

}

//Ürün eklendikten sonra çaðrýlacak fonksiyon
void Bildirimler::urunEklendi() 
{
    cout << "\n\033[1;32m============================== BILDIRIM ==============================\033[0m\n";
    cout << "\033[1;32mUrun ekleme islemi basarili\033[0m";
    cout << "\n\033[1;32m======================================================================\033[0m\n";
}

//Ürün silindikten sonra çaðrýlacak fonksiyon
void Bildirimler::urunSilindi() {
    cout << "\n\033[1;32m============================== BILDIRIM ==============================\033[0m\n";
    cout << "\033[1;32mUrun silme islemi basarili\033[0m";
    cout << "\n\033[1;32m======================================================================\033[0m\n";
}

//Ürün raporlandýktan sonra çaðrýlacak fonksiyon
void Bildirimler::urunRaporlandi() {
    cout << "\n\033[1;32m============================== BILDIRIM ==============================\033[0m\n";
    cout << "\033[1;32mUrun raporlama islemi basarili\033[0m";
    cout << "\n\033[1;32m======================================================================\033[0m\n";
}

//Ürün eklenirken eðer eklenmek istenen numarada ürün varsa çaðrýlacak fonksiyon
void Bildirimler::urunTekrariYapildi() {
    cout << "\n\033[1;31m============================== BILDIRIM ==============================\033[0m\n";
    cout << "\033[1;31mVar olan bir Urun No girdiniz lutfen tekrar deneyiniz\033[0m";
    cout << "\n\033[1;31m======================================================================\033[0m\n";
}

//Ürün bulunduðunda çaðrýlacak fonksiyon
void Bildirimler::urunBulundu() {
    cout << "\n\033[1;32m============================== BILDIRIM ==============================\033[0m\n";
    cout << "\033[1;32mUrun Bulundu!\033[0m";
    cout << "\n\033[1;32m======================================================================\033[0m\n";
}

//Proje eklenirken eðer eklenmek istenen numarada proje varsa çaðrýlacak fonksiyon
void Bildirimler::projeTekrariYapildi() 
{
    cout << "\n\033[1;31m============================== BILDIRIM ==============================\033[0m\n";
    cout << "\033[1;31mVar olan bir Proje No girdiniz lutfen tekrar deneyiniz\033[0m";
    cout << "\n\033[1;31m======================================================================\033[0m\n";
}

//Proje eklendikten sonra çaðrýlacak fonksiyon
void Bildirimler::projeEklendi()
{
    cout << "\n\033[1;32m============================== BILDIRIM ==============================\033[0m\n";
    cout << "\033[1;32mProje ekleme islemi basarili\033[0m";
    cout << "\n\033[1;32m======================================================================\033[0m\n";
}

//Proje bulunduðunda çaðrýlacak fonksiyon
void Bildirimler::projeBulundu()
{
    cout << "\n\033[1;32m============================== BILDIRIM ==============================\033[0m\n";
    cout << "\033[1;32mProje Bulundu!\033[0m";
    cout << "\n\033[1;32m======================================================================\033[0m\n";
}

//Proje raporlandýktan sonra çaðrýlacak fonksiyon
void Bildirimler::projeRaporlandi()
{
    cout << "\n\033[1;32m============================== BILDIRIM ==============================\033[0m\n";
    cout << "\033[1;32mProje raporlama islemi basarili\033[0m";
    cout << "\n\033[1;32m======================================================================\033[0m\n";
}

//Ürün güncellendikten sonra çaðrýlacak fonksiyon
void Bildirimler::urunGuncellendi()
{
    cout << "\n\033[1;32m============================== BILDIRIM ==============================\033[0m\n";
    cout << "\033[1;32mUrun Guncelleme islemi basarili\033[0m";
    cout << "\n\033[1;32m======================================================================\033[0m\n";
}

//Tutar raporlandýktan sonra çaðrýlacak fonksiyon
void Bildirimler::tutarRaporlandi()
{
    cout << "\n\033[1;32m============================== BILDIRIM ==============================\033[0m\n";
    cout << "\033[1;32mTutar raporlama islemi basarili\033[0m";
    cout << "\n\033[1;32m======================================================================\033[0m\n";
}



// Ürün Ýþlemleri Ýçin Tasarladýðým Sýnýf

class Urunler {

private:
    //Ürünün sahip olacaðý özellikler
    int urunNo;
    string urunAdi;
    string birim;
    double birimFiyati;
    string markasi;

public:
    Urunler(int, string, string, double, string); //Urunler parametreli kurucu fonksiyon
    ~Urunler(); //Urunler yýkýcý fonksiyon
    static boolean urunTekrarKontrol(int); //Urunler.txt'de ürün mevcut mu diye kontrol edecek
    static void urunEkle(); //Urunler.txt'ye ürün eklememizi saðlayacak
    static void urunSil(); //Urunler.txt'den ürün silmemizi saðlayacak
    static void urunAra(); //Urunler.txt'de ürün aramamýzý saðlayacak
    static void urunRaporla(); //Belli parametrelere göre ürün raporlamamýzý saðlayacak.
    static void urunAraOtomatik(int urunNoParametre); //verilen parametredeki ürün numarasýna göre ürün arar
    static int dosyaTara(); //urunler.txt içerisindeki kayýt sayýsýný tarar, silme iþleminde kullandým
};

//Urunler parametreli kurucu fonksiyonu
Urunler::Urunler(int _urunNo, string _urunAdi, string _birim, double _birimFiyati, string _markasi) {
    this->urunNo = _urunNo;
    this->urunAdi = _urunAdi;
    this->birim = _birim;
    this->birimFiyati = _birimFiyati;
    this->markasi = _markasi;
}

//Urunler yýkýcý fonksiyonu
Urunler::~Urunler() {

}

//Daha once o numarada urun eklenmis mi diye kontrol edecek olan fonksiyon
boolean Urunler::urunTekrarKontrol(int girilenUrunNo) 
{
    bool durum = true;
    //txt dosyasýndan kayýtlý verileri çekerken geçici ürün özellikleri tanýmlamalarý
    int geciciUrunNo;
    string geciciUrunAdi;
    string geciciBirim;
    double geciciBirimFiyati;
    string geciciMarkasi;

    ifstream DosyaOku("Urunler.txt"); //Urunler dosyasýný oku
    while (!DosyaOku.eof()) //dosyanýn sonuna gelene kadar
    {
        DosyaOku >> geciciUrunNo >> geciciUrunAdi >> geciciBirim >> geciciBirimFiyati >> geciciMarkasi; //ürün özelliklerini oku
        if (girilenUrunNo == geciciUrunNo) { //ürün numaralarý eþleþirse
            durum = false;
            break;
        }
        else
        {
            durum =  true; //tekrar yapýlmamýþtýr
        }
    }
    return durum; //durumu geri döndür bool bir deðer

}

//Urunler.txt'ye urun eklemimizi saglayacak olan fonksiyon
void Urunler::urunEkle() {

    //dosyaya yazarken once kontrol islemi yapýyorduk ama once elimizde o isimde dosya olmasý gerekli bu yuzden kontrol amaclý dosyayý onden olusturuyoruz
    ofstream dosyaOlustur; 
    dosyaOlustur.open("Urunler.txt", ios::app);
    dosyaOlustur.close();


    //Ürünün sahip olacaðý özellikler burada da tanýmlandý, kurucuya parametre olarak verilecek sonra
    int _urunNo = 0;
    string _urunAdi;
    string _urunBirim;
    double _urunBirimFiyati;
    string _urunMarkasi;
    cout << "\n=============== YENI URUN KAYDI ===============" << endl;
    cout << "Bilgi 1: Gireceginiz degerler sirasiyla int,string,string,double,string olmalidir" << endl;
    cout << "Bilgi 2: Isimlendirme yaparken Turkce karakter ve bosluk kullanmamaya dikkat ediniz" << endl;
    //Ürünün sahip olacaðý özelikler kullanýcýdan alýndý
    cout << "Urun No giriniz : ";
    cin >> _urunNo; //ürün no alýndý

    while (!(Urunler::urunTekrarKontrol(_urunNo))) //urunTekrarKontrol'den geçene kadar 
    {
        Bildirimler::urunTekrariYapildi();
        cout << "\nUrun No giriniz : "; //kullanýcýdan farklý bir Urun no girilmesi saðlandý
        cin >> _urunNo;
    }

    cout << "Urun Adi giriniz : ";
    cin >> _urunAdi; //ürün adý alýndý

    cout << "Birim Turu giriniz : ";
    cin >> _urunBirim; //ürün birimi alýndý

    cout << "Birim Fiyati giriniz : ";
    cin >> _urunBirimFiyati; //ürün birim fiyatý alýndý

    cout << "Markasini giriniz : ";
    cin >> _urunMarkasi; //ürün markasý alýndý

    cout << "==============================================" << endl;


    Urunler* u = new Urunler(_urunNo, _urunAdi, _urunBirim, _urunBirimFiyati, _urunMarkasi); //nesne oluþturuldu
    ofstream DosyaYaz; //dosyaya yazmak için
    DosyaYaz.open("Urunler.txt", ios::app);
    DosyaYaz << u->urunNo << " " << u->urunAdi << " " << u->birim << " " << u->birimFiyati << " " << u->markasi << endl; //Dosyaya yazýldý
    DosyaYaz.close(); //dosya ile iþimiz bittiði için dosya kapatýldý
    Bildirimler::urunEklendi();
    delete u; //nesne silindi
}

//Ürün numarasýna göre ürün arama iþlemini gerçekleþtirecek fonksiyon
void Urunler::urunAra() {
    //ürünün sahip olduðu deðerleri tutmak için geçici olarak tanýmlanan deðiþkenlerim
    int aranacakUrunNo;
    int arananUrunNo;
    string arananUrunAdi;
    string arananUrunBirim;
    double arananUrunBirimFiyati;
    string arananUrunMarkasi;
    cout << "\n=============== URUN ARAMA ===============" << endl;
    cout << "Aranacak urun no: ";
    cin >> aranacakUrunNo; //aranacak ürünün numarasý kullanýcýdan alýnýyor
    ifstream aranacakUrunIcinDosyaOku("Urunler.txt"); //urunu aramak icin dosya okunuyor
    while (!aranacakUrunIcinDosyaOku.eof()) //dosya sonuna gelene kadar okuma iþlemi yapýlýyor
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
    aranacakUrunIcinDosyaOku.close(); //iþimiz bitince dosyayý kapatýyoruz
}

//Kullanýcýdan deðer almýyor içine parametre olarak ürün numarasýný alýyor ve ürün arama iþlemini gerçekleþtiriyor
void Urunler::urunAraOtomatik(int urunNoParametre) {
    //ürünün sahip olduðu deðerleri tutmak için geçici olarak tanýmlanan deðiþkenlerim
    int arananUrunNo;
    string arananUrunAdi;
    string arananUrunBirim;
    double arananUrunBirimFiyati;
    string arananUrunMarkasi;
    ifstream aranacakUrunIcinDosyaOku("Urunler.txt"); //urunu aramak için dosya okunuyor
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
    aranacakUrunIcinDosyaOku.close(); //iþimiz bitince dosyayý kapatýyoruz
}

//Ürün silme iþleminde kullanýlacak dosya tarama fonksiyonu, dosyayý tarar ve satýr sayuýsýný bularak geriye döndürür
int Urunler::dosyaTara() {
    int dosyadakiSatirSayisi = 0; //satýr sayýsýný tutacak olan deðiþkenimi tanýmladým ve deðerini 0 olarak baþlattým
    int _urunNo;
    string _urunAdi;
    string _urunBirim;
    double _urunBirimFiyati;
    string _urunMarkasi;
    ifstream dosyaTara("Urunler.txt"); //urunler.txt'yi oku
    while (!dosyaTara.eof()) //dosya sonuna kadar oku
    {
        dosyaTara >> _urunNo >> _urunAdi >> _urunBirim >> _urunBirimFiyati >> _urunMarkasi;
        dosyadakiSatirSayisi++; //her satýr taramada satýr sayýsý bir arttýrýldý
    }
    return dosyadakiSatirSayisi; //txt'deki bulunan kayýt yani satýr sayýsý geri döndürüldü
}

//Ürünler listesinden istediðimiz ürün numarasýna sahip ürünü silmemizi saðlayacak olan fonksiyon 
void Urunler::urunSil() {

    int satirSayisi = 0; //Dosyayý okurken döngünün ne kadar dönceðini bu satýr sayýsý ile kontrol ettim
    satirSayisi = dosyaTara(); //dosyaTara() fonksiyonundan dönen satýr sayýsý deðerini satirSayisi deðiþkenime atadým
    //Ürünler ile ilgili deðerleri tutacak geçici deðiþkenlerim
    int silinecekUrunNo;
    int _urunNo;
    string _urunAdi;
    string _urunBirim;
    double _urunBirimFiyati;
    string _urunMarkasi;
    cout << "\n=============== URUN SILME ===============" << endl;
    cout << "Silinecek urun no: ";
    cin >> silinecekUrunNo; //Kullanýcýndan silinmesi istenen ürünün ürün numarasý alýndý
    ifstream silinecekUrunIcinDosyaOku("Urunler.txt"); //urunler.txt okundu
    ofstream geciciUrunDosya("GeciciUrunler.tmp"); //yeni deðerlerin yazdýrýldýðý dosya olusturuldu
    while (satirSayisi != 0) //satýr sayýsý sýfýr olana kadar döngü dönsün
    {
        satirSayisi--; //her seferinde satýrý bir azalt
        silinecekUrunIcinDosyaOku >> _urunNo >> _urunAdi >> _urunBirim >> _urunBirimFiyati >> _urunMarkasi; //dosyadan deðerleri oku geçici ürün deðiþkenlerine ata
        if (silinecekUrunNo != _urunNo) //silinecek ürün numarasý alýnmamýþ oldu
        {
                //geçici dosyaya silinecek ürün dýþýndaki ürünler eklendi
                geciciUrunDosya << _urunNo << " " << _urunAdi << " " << _urunBirim << " " << _urunBirimFiyati << " " << _urunMarkasi << endl;
        }
    }
    silinecekUrunIcinDosyaOku.close(); //Dosya ile iþimiz bittiði için kapatýyoruz
    geciciUrunDosya.close(); // Dosya ile iþimiz bittiði için kapatýyoruz
    remove("Urunler.txt"); //eski ürünler listesi silindi
    rename("GeciciUrunler.tmp", "Urunler.txt"); //geçici ürünler dosyasý asýl dosya oldu Urunler.txt olarak güncellendi
}

//Ürünler listesinden istenen durumlara göre ürünlerin raporlanmasýný saðlayacak olan fonksiyon
void Urunler::urunRaporla() {
    int secim = 0; //secimi tutacak olan deðiþken
    //geçici ürün özelliklerini tutacak deðiþken tanýmlamalarým
    int raporlananUrunNo = 0;
    string raporlananUrunAdi;
    string raporlananUrunBirim;
    double raporlananUrunBirimFiyati;
    string raporlananUrunMarkasi;
    //burada kullanýcýnýn farklý raporlamalarý yapabileceðine dair bir bilgilendirme menüsü mevcut
    cout << "\n=============== URUN RAPORLA ===============" << endl;
    cout << "1) Urun numarasina gore raporla " << endl;
    cout << "2) Birim fiyatina gore raporla" << endl;
    cout << "3) Urun adinin ilk harfine gore raporla" << endl;
    cout << "Bir raporlama islemi seciniz: "; 
    cin >> secim; //kullanýcý menüden bir iþlem seçer ve ona göre farklý raporlandýrmalar yapabilir
    if (secim == 1)  //seçim bir olduðu için ürün numarasýna göre raporlandýrma yapar
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
        urunNoDosya.close(); //iþimiz bitince dosyayý kapatýyoruz
    }
    else if (secim == 2) //seçim iki olduðu için birim fiyatýna göre raporlandýrma yapar
    {
        //birim fiyatýna göre raporlandýrmada da 3 seçeneði vardýr bunlar farklý fiyat aralýklarýna göre raporlandýrma yapabilmeye olanak saðlar

        int fiyatSecim;
        cout << "\n=============== BIRIM FIYATINA GORE RAPORLA ===============" << endl;
        cout << "1) Birim fiyati 0-1000 arasi olanlar " << endl;
        cout << "2) Birim fiyati 1000-10000 arasi olanlar" << endl;
        cout << "3) Birim fiyati 10000+ olanlar" << endl;
        cin >> fiyatSecim; //kullanýcýdan bir seçim alýnýr
        if (fiyatSecim == 1) //fiyatSecim 1 olursa 0-1000 arasýnda fiyata sahip ürünler raporlanýr
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
            dosyaYaz.close(); //iþimiz bitince dosyayý kapatýyoruz
        
        
        }
        else if (fiyatSecim == 2) //fiyatSecim 2 olursa 1000-10000 arasýnda fiyata sahip ürünler raporlanýr
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
            dosyaYaz.close(); //iþimiz bitince dosyayý kapatýyoruz


        }
        else if (fiyatSecim == 3) //fiyatSecim 3 olursa 10000+ fiyata sahip ürünler raporlanýr
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
            dosyaYaz.close(); //iþimiz bitince dosyayý kapatýyoruz

        }
        else
        {
            cout << "\n Listeden gecerli bir islem secmediniz! \n";
        }

    }

    else if (secim == 3) //seçim 3 olursa ürün adýnýn ilk harfine göre raporlama yapýlýr
    {
        cout << "\n=============== URUN ADININ ILK HARFINE GORE RAPORLA ===============" << endl;
        char urunIlkHarf;
        cout << "\n Raporlanacak urunun ilk harfini giriniz: ";
        cin >> urunIlkHarf; //kullanýcýdan bir harf alýnýr
        ifstream urunNoDosya("Urunler.txt");
        while (!urunNoDosya.eof())
        {
            urunNoDosya >> raporlananUrunNo >> raporlananUrunAdi >> raporlananUrunBirim >> raporlananUrunBirimFiyati >> raporlananUrunMarkasi;
            if (urunIlkHarf == raporlananUrunAdi[0]) //ürün adýnýn ilk harfi o harf ile eþleþen ürünler listelenir
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
        urunNoDosya.close(); //iþimiz bitince dosyayý kapatýyoruz
    }



}


// Proje Ýþlemleri Ýçin Tasarladýðým Sýnýf

class Projeler {

private:
    //Projenin sahip olacaðý özellikler
    int projeNo;
    string projeAdi;
    string yurutuFirma;
    string projeSorumlusu;
    string projeKontroloru;

public:
    Projeler(int, string, string, string, string); //Projeler parametreli kurucu fonksiyon
    ~Projeler(); //Projeler yýkýcý fonksiyon
    static boolean projeTekrarKontrol(int); //Projeler.txt'de proje mevcut mu diye kontrol edecek
    static void projeEkle(); //Projeler.txt'ye ürün eklememizi saðlayacak
    static void projeSil(); //Projeler.txt'den ürün silmemizi saðlayacak
    static void projeAra(); //Projeler.txt'den ürün aramamýzý saðlayacak
    static void projeRaporla(); //Belli parametrelere göre projeleri raporlamamýzý saðlayacak
    static int dosyaTara(); //projeler.txt içerisindeki kayýt sayýsýný tarar silme iþlemine kullandým
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

//Projeler yýkýcý fonksiyon
Projeler::~Projeler() {

}


//Projeler.txt içerisinde parametre olarak aldýðý proje numarasýna sahip bir proje eklenmiþ mi diye kontrol eder
boolean Projeler::projeTekrarKontrol(int girilenProjeNo) {

    bool durum = true; //durum kontrolü için tanýmlanan durum isminde bool deðiþkenim
    //txt dosyasýndan kayýtlý verileri çekerken geçici proje özellikleri tanýmlamalarý
    int geciciProjeNo;
    string geciciProjeAdi;
    string geciciYurutucuFirma;
    string geciciProjeSorumlusu;
    string geciciProjeKontrolloru;

    ifstream DosyaOku("Projeler.txt"); //Projeler dosyasýný oku
    while (!DosyaOku.eof()) //dosyanýn sonuna gelene kadar
    {
        DosyaOku >> geciciProjeNo >> geciciProjeAdi >> geciciYurutucuFirma >> geciciProjeSorumlusu >> geciciProjeKontrolloru; //proje özelliklerini oku
        if (girilenProjeNo == geciciProjeNo) { //proje numaralarý eþleþirse
            durum = false;
            break;
        }
        else
        {
            durum = true; //tekrar yapýlmamýþtýr
        }
    }
    return durum; //durumu geri döndürür

}

//Projeler.txt içerisine proje eklememizi saðlayacak olan fonksiyon
void Projeler::projeEkle()
{
    //dosyaya yazarken once kontrol islemi yapýyorduk ama once elimizde o isimde dosya olmasý gerekli bu yuzden kontrol amaclý dosyayý onden olusturuyoruz
    ofstream dosyaOlustur;
    dosyaOlustur.open("Projeler.txt", ios::app);
    dosyaOlustur.close(); //dosya ile iþimiz bitti kapatalým

    //Projenin sahip olacaðý özellikler burada da tanýmlandý, kurucuya parametre olarak verilecek daha sonrasýnda
    int _projeNo = 0;
    string _projeAdi;
    string _yurutuFirma;
    string _projeSorumlusu;
    string _projeKontroloru;
    cout << "\n=============== YENI PROJE KAYDI ===============" << endl;
    cout << "Bilgi 1: Gireceginiz degerler sirasiyla int,string,string,string,string olmalidir" << endl;
    cout << "Bilgi 2: Isimlendirme yaparken Turkce karakter ve bosluk kullanmamaya dikkat ediniz" << endl;
    //Projenin sahip olacaðý özelikler kullanýcýdan alýndý
    cout << "Proje No giriniz : ";
    cin >> _projeNo; //proje no alýndý

    while (!(Projeler::projeTekrarKontrol(_projeNo))) //projeTekrarKontrol'den geçene kadar 
    {
        Bildirimler::projeTekrariYapildi();
        cout << "\nProje No giriniz : "; //kullanýcýdan farklý bir proje no girilmesi saðlandý
        cin >> _projeNo;
    }

    cout << "Proje Adi giriniz : ";
    cin >> _projeAdi; //proje adý alýndý

    cout << "Yurutucu Firmayi giriniz : ";
    cin >> _yurutuFirma; //yurutucu firma alýndý

    cout << "Proje Sorumlusunu giriniz : ";
    cin >> _projeSorumlusu; //proje sorumlusu alýndý

    cout << "Proje Kontrolorunu giriniz : ";
    cin >> _projeKontroloru; //proje kontroloru alýndý

    cout << "==============================================" << endl;


    Projeler* p = new Projeler(_projeNo, _projeAdi, _yurutuFirma, _projeSorumlusu, _projeKontroloru); //nesne oluþturuldu
    ofstream DosyaYaz; //dosyaya yazmak için
    DosyaYaz.open("Projeler.txt", ios::app);
    DosyaYaz << p->projeNo << " " << p->projeAdi << " " << p->yurutuFirma << " " << p->projeSorumlusu << " " << p->projeKontroloru << endl; //dosyaya proje bilgileri yazýldý
    DosyaYaz.close(); //dosya ile iþimiz bitti kapatýyoruz
    Bildirimler::projeEklendi();
    delete p;

}

//Projeler.txt içerisinden proje aramýmýzý saðlayacak olan fonksiyon
void Projeler::projeAra()
{
    //proje ile ilgili bilgileri tutacak dosya okumada kullanacaðýmýz geçici deðiþkenlerimi tanýmladým
    int aranacakProjeNo;
    int arananProjeNo;
    string arananProjeAdi;
    string arananYurutucuFirma;
    string arananProjeSorumlusu;
    string arananProjeKontroloru;
    cout << "\n=============== PROJE ARAMA ===============" << endl;
    cout << "Aranacak proje no: ";
    cin >> aranacakProjeNo; //aranacak projenin, proje numarasý kullanýcýdan alýndý
    ifstream aranacakProjeIcinDosyaOku("Projeler.txt"); //Projeler.txt okuma modunda açýldý
    while (!aranacakProjeIcinDosyaOku.eof()) //dosya sonuna gelene kadar döngü devam etsin
    {
        aranacakProjeIcinDosyaOku >> arananProjeNo >> arananProjeAdi >> arananYurutucuFirma >> arananProjeSorumlusu >> arananProjeKontroloru;
        if (aranacakProjeNo == arananProjeNo) //aramak için kullanýcýdan aldýðýmýz proje numarasý ve txt içerisindeki bir proje numarasý eþleþirse
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
            break; //ve artýk döngüden çýk
        }
    }
    aranacakProjeIcinDosyaOku.close(); //iþimiz bitince dosyayý kapatýyoruz
}

//Projeler.txt içindeki bilgileri belli parametrelere göre filtreleyip görmemizi saðlayacak olan fonksiyon
void Projeler::projeRaporla()
{
    //raporlama türü için seçimimizi tutacak olan deðiþken
    int secim = 0;
    //proje özelliklerini tutacak olan deðiþkenlerimi tanýmlýyorum yine
    int raporlananProjeNo = 0;
    string raporlananProjeAdi;
    string raporlananYurutucuFirma;
    string raporlananProjeSorumlusu;
    string raporlananProjeKontroloru;
    //farklý türde raporlama seçeneklerimi menüde kullanýcýya gösteriyorum
    cout << "\n=============== PROJE RAPORLA ===============" << endl;
    cout << "1) Proje numarasina gore raporla " << endl;
    cout << "2) Proje adinin ilk harfine gore raporla" << endl;
    cout << "3) Proje sorumlusunun ilk harfine gore raporla" << endl;
    cout << "Bir raporlama islemi seciniz: ";
    cin >> secim; //Kullanýcýdan bir raporlama türü seçmesini istiyorum ve bu deðeri kullanýcýdan alýyorum
    if (secim == 1) { //secim 1 olursa proje numarasýna göre projeler raporlanýr 
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
        projeNoDosya.close(); //iþimiz bitince dosyayý kapatýyoruz
    }
    else if (secim == 2) //secim 2 olursa proje adýnýn ilk harfine göre raporlanýr
    {
        cout << "\n=============== PROJE ADININ ILK HARFINE GORE RAPORLA ===============" << endl;
        char projeIlkHarf;
        cout << "\n Raporlanacak projenin ilk harfini giriniz: ";
        cin >> projeIlkHarf; //kullanýcýdan raporlanmasýný istediði proje ilk harfi istendi
        ifstream projeDosya("Projeler.txt");
        while (!projeDosya.eof())
        {
            projeDosya >> raporlananProjeNo >> raporlananProjeAdi >> raporlananYurutucuFirma >> raporlananProjeSorumlusu >> raporlananProjeKontroloru;
            if (projeIlkHarf == raporlananProjeAdi[0]) //kullanýcýdan alýnan harf ile dosyadaki proje isimlerinin ilk harfi ayný ise raporlar
            {
                Bildirimler::urunRaporlandi(); //ürün raporlandý bildirimi ekranda gösterilir
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
        projeDosya.close(); //iþimiz bitince dosyayý kapatýyoruz
    }
    else if (secim == 3) //secim 3 olursa proje sorumlusunun ilk harfine göre raporlar
    {
        cout << "\n=============== PROJE SORUMLUSUNUN ILK HARFINE GORE RAPORLA ===============" << endl;
        char sorumluIlkHarf;
        cout << "\n Raporlanacak proje sorumlusunun ilk harfini giriniz: ";
        cin >> sorumluIlkHarf; //raporlanmasý istenen sorumlu ilk harfi alýnýr
        ifstream projeDosya("Projeler.txt");
        while (!projeDosya.eof())
        {
            projeDosya >> raporlananProjeNo >> raporlananProjeAdi >> raporlananYurutucuFirma >> raporlananProjeSorumlusu >> raporlananProjeKontroloru;
            if (sorumluIlkHarf == raporlananProjeSorumlusu[0]) //alýnan harf ile dosyadaki herhangi bir proje sorumlusu ilk harfi ayný ise raporlar
            {
                Bildirimler::urunRaporlandi(); //ürün raporlandý bildirimi ekranda gösterilir
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
        projeDosya.close(); //iþimiz bitince dosyayý kapatýyoruz
    }

}

//Projeler.txt'yi tarayýp içerisindeki kayýt sayýsýný yani satýr sayýsýný geri döndürecek olan fonksiyon
int Projeler::dosyaTara() 
{
    int dosyadakiSatirSayisi = 0; //satýr sayýsý deðeri 0 olarak baþlatýldý
    //dosyadan okuma sýrasýnda proje ile ilgili deðerleri tutacak olan deðiþkenler
    int _projeNo;
    string _projeAdi;
    string _yurutucuFirma;
    string _projeSorumlusu;
    string _projeKontroloru;
    ifstream dosyaTara("Projeler.txt"); //okumak için Projeler.txt'i aç 
    while (!dosyaTara.eof()) //Dosya sonuna gelene kadar tara
    {
        dosyaTara >> _projeNo >> _projeAdi >> _yurutucuFirma >> _projeSorumlusu >> _projeKontroloru;
        dosyadakiSatirSayisi++;
    }
    return dosyadakiSatirSayisi; //dosyadaki satýr sayýsýný yani kayýt sayýsýný geriye döndür

}

//Projeler.txt içerisinden kullanýcýdan alýnan proje no'ya göre silme iþlemi yapmamýzý saðlayan fonksiyon
void Projeler::projeSil()
{
    boolean kontrol = true; //projenin silinip silinemeyeceðini kontrol edecek olan deðiþken

    //proje dosyasýndaki özellikler için
    int satirSayisi = 0;
    satirSayisi = dosyaTara();
    int silinecekProjeNo;
    int _projeNo;
    string _projeAdi;
    string _yurutucuFirma;
    string _projeSorumlusu;
    string _projeKontroloru;

    //hakediþ dosyasýndaki özellikler için
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
    while (!hakedisDosyaOku.eof()) //hakedis dosyasýný dosya sonuna kadar okuyoruz
    {
        hakedisDosyaOku >> _hProjeNo >> _hHakedisDonemi >> _hUrunNolar >> _hUrunAdetleri >> _hUrunFiyatlari;
        if (_hProjeNo == silinecekProjeNo) //eðer silmek istediðimiz proje no ile hakediþi verilen proje no ayný ise
        {
            cout << "Hakedisi verilmis proje silinemez!" << endl; //Proje silinemez bildirimi gelir
            kontrol = false; //kontrol'e false atanýr
            break; //döngüden çýkýlýr
        }
        else {
        }
    }

    //eðer hakediþi verilmemiþ ise kontrol'ü zaten true'dur ve if bloðu çalýþýr
    if (kontrol == true)
    {

        while (satirSayisi != 0) //satýr sayýsý 0 olana kadar
        {
            satirSayisi--; //her adýmda bir azalacak þekilde
            silinecekProjeIcinDosyaOku >> _projeNo >> _projeAdi >> _yurutucuFirma >> _projeSorumlusu >> _projeKontroloru; //proje bilgileri dosyadan okunur
            if (silinecekProjeNo != _projeNo) //silinmesi istenen proje numarasý eþit olmadýðý sürece
            {
                //geçici proje dosyama proje bilgilerini yazdýrýyorum
                geciciProjeDosya << _projeNo << " " << _projeAdi << " " << _yurutucuFirma << " " << _projeSorumlusu << " " << _projeKontroloru << endl;
            }
        }
        silinecekProjeIcinDosyaOku.close(); //Dosya ile iþimiz bittiði için kapatýyoruz
        geciciProjeDosya.close(); // Dosya ile iþimiz bittiði için kapatýyoruz
        remove("Projeler.txt"); //eski proje bilgilerini tutan dosyayý siliyorum
        rename("GeciciProjeler.tmp", "Projeler.txt"); //geçiçi olarak oluþturulan ve yeni bilgileri içeren dosyamý asýl dosyam olacak þekilde güncelliyorum
    }
}



// Hakediþ Ýþlemleri Ýçin Tasarladýðým Sýnýf

class Hakedis {

private:
    //Hakedisin sahip olacaðý özellikler
    int projeNo;
    int hakedisDonemi;
    //diðerleri dosyalardan gelecek
public:
    Hakedis(int,int); //Hakedis parametreli kurucu fonksiyon
    ~Hakedis(); //Hakedis yýkýcý fonksiyon
    static void hakedisEkle(); //bir proje icin hakedis eklememizi saglayan fonksiyon
    static void urunleriListele(); //bir proje icin verilen hakedisteki urunleri listeleyecek fonksiyon
    static void urunlerdeAra(); //bir proje icin verilen hakedisteki urunlerde arama yapacak fonksiyon
    static void tutarRaporla(); //bir proje için verilen hakedisteki tutarý raporlamamýzý saðlar
    static void urunGuncelle(); //bir proje icin verilen hakedisteki urunleri guncellemek icin
    static void urunSil(); //bir proje icin verilen hakedisteki urunleri silmek icin
    static void stringRegex(std::string const& str, const char delim,std::vector<std::string>& out); //numara,adet ve fiyatlarý regexlemek için
};

//Hakedis parametreli kurucu fonksiyon
Hakedis::Hakedis(int _projeNo,int _hakedisDonemi) 
{
    this->projeNo = _projeNo;
    this->hakedisDonemi = _hakedisDonemi;
}

//Hakedis yýkýcý fonksiyon
Hakedis::~Hakedis()
{

}

//Hakedisler.txt'ye hakediþ eklememizi saðlayacak olan fonksiyon
void Hakedis::hakedisEkle()
{
    //hakediþ dosyasýna eklenecek deðerleri tutan deðiþkenlerim
    int _projeNo = 0;
    int _hakedisDonemi = 0;
    string urunNolar;
    string urunAdetleri;
    string urunFiyatlari;

    cout << "\n=============== YENI HAKEDIS KAYDI ===============" << endl;
    cout << "Hakedisin verilecegi proje no: ";
    cin >> _projeNo; //kullanýcýdan hakediþi verilmesi istenen proje numarasý alýndý
    cout << "Hakedis donemi (1-2-3-...): ";
    cin >> _hakedisDonemi; //kullanýcýdan o projenin hakediþ dönemi alýndý
    cout << "\nHakedis'e urun ekle: ";
    while (true)
    {
        //Urunler.txt içerisindeki bilgilerin alýnýp listelenmesi için tanýmladýðým deðiþkenler
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
        aranacakUrunIcinDosyaOku.close(); //iþimiz bitince dosyayý kapatýyoruz

        string no = "0"; //numara varsayýlan 0 string deðer olarak tanýmlandý
        cout << "\nYukaridaki urun listesinden hakedisin verilecegi projeye, projede kullanilan urunleri ekleyelim...\n" << endl;
        cout << "1)Urun Ekleme Islemi" << endl;
        cout << "2)Urun Ekleme Islemini Bitir" << endl;
        int urunSecim = 0; //yukarýdaki iki iþlenden biri seçilecek
        cout << "Islem Seciniz: ";
        cin >> urunSecim; //seçim kullanýcýdan alýndý
        if (urunSecim == 1)
        {
            cout << "\nHakedise eklenecek projede kullanilan urun no: ";
            cin >> no; //projede kullanýlan ürünlerden birinin numarasý alýndý
            urunNolar += no;
            urunNolar += "/";
            string adet = "0";
            cout << "\nHakedise eklencek projede kullanilan o urunun adet miktari: ";
            cin >> adet; //projede kullanýlan bu ürünün kaç adet kullanýldýðý alýndý
            urunAdetleri += adet;
            urunAdetleri += "/";
            string fiyat = "0";
            cout << "\nHakedise eklencek projede kullanilan o urunun fiyati: ";
            cin >> fiyat; //projede kullanýlan bu ürünün fiyatý alýndý
            urunFiyatlari += fiyat;
            urunFiyatlari += "/";
        }
        else if (urunSecim == 2) //iþlemi bitirmek için döngüden çýkýldý
        {
            break;
        }

    }

    //Hakedis nesnesi olusturuldu alýnan deðerler parametre olarak verildi
    Hakedis* h = new Hakedis(_projeNo,_hakedisDonemi);
    ofstream DosyaYaz; //dosyaya yazmak için
    DosyaYaz.open("Hakedisler.txt", ios::app);
    DosyaYaz << h->projeNo << " " <<  h->hakedisDonemi << " " << urunNolar << " " << urunAdetleri << " " <<urunFiyatlari <<  endl; //alýnan tüm bilgiler Hakedisler.txt'ye yazýldý
    DosyaYaz.close(); //dosya ile iþimiz bittiði için kapatýyoruz
    delete h; //nesnemizi siliyoruz

}

//Hakedisleri okurken string ifadeleri regexlemek için kullanacaðým fonksiyon
void Hakedis::stringRegex(string const& str, const char delim,
    vector<string>& out)
{
    stringstream ss(str);
    string s;
    while (getline(ss, s, delim)) {
        out.push_back(s);
    }
}

//Hakediþi verilen projedeki ürünleri listelememizi saðlayacak olan fonksiyon
void Hakedis::urunleriListele()
{
    int i = 0; //döngüde kullanacaðým deðiþkenim
    int urunler[100]; //bir tamsayý ürün dizisi tanýmladým
    //hakediþ dosyasýndaki bilgileri tutacak olan deðiþkenlerim
    int _projeNo = 0;
    int _hakedisDonemi = 0;
    string urunNolar;
    string urunAdetleri;
    string urunFiyatlari;
    int listeleNo;
    cout << "Kac numarali proje icin verilen hakedisteki urunleri listeleyeceksiniz: ";
    cin >> listeleNo; //kullanýcýdan ürünlerinin listelenmesi istenen proje numarasý alýndý
    ifstream hakedisDosyaOku("Hakedisler.txt"); //Hakedisler.txt'yi oku
    while (!hakedisDosyaOku.eof()) //dosya sonuna kadar
    {
        hakedisDosyaOku >> _projeNo >> _hakedisDonemi >> urunNolar >> urunAdetleri >> urunFiyatlari;
        if (_projeNo == listeleNo) //eðer aranan proje numarasý ile dosyadaki herhangi bir proje numarasý ayný ise
        {
            string s = urunNolar; //o satýrdaki ürün numaralarý stringi alýnýr
            const char ayirmaIsareti = '/'; // '/' iþaretine göre ayýrýlýr
            vector<string> out;
            Hakedis::stringRegex(s, ayirmaIsareti, out);
            i = 0;
            for (auto &s:out)
            {
                urunler[i] = stoi(s); //urunler dizisinin indislerine o numaralar yerleþtirilir
                i++; //bizim urun indeksimizi tutacak ayný zamanda burdan urun sayýsýný da bilebiliriz
            }
        }
    }
    cout << "\nProje icin hakedise eklenen toplamda " << i << " adet urun bulundu!";
    cout << "\n" << listeleNo << " numarali proje icin hakedise eklenen urunler: " << endl;
    for (int j = 0; j < i; j++) //Hakediþe eklenmiþ ürünleri listeler
    {
        cout << j+1 << ".urun'un urun numarasi: " <<  urunler[j] << endl;
    }

}

//Hakediþi verilmiþ projedeki ürünlerin ayrýntýlý bilgilerini görmemizi saðlayacak olan fonksiyon
void Hakedis::urunlerdeAra() 
{
    int i = 0; //döngüde kullanacaðým deðiþkenim
    int urunler[100]; //bir tamsayý ürün dizisi tanýmladým
    //hakediþ dosyasýndaki bilgileri tutacak olan deðiþkenlerim
    int _projeNo = 0;
    int _hakedisDonemi = 0;
    string urunNolar;
    string urunAdetleri;
    string urunFiyatlari;
    int listeleNo; 
    cout << "Kac numarali proje icin verilen hakedisteki urunleri listeleyeceksiniz: ";
    cin >> listeleNo; //kullanýcýdan ürünlerinin listelenmesi istenen proje numarasý alýndý
    ifstream hakedisDosyaOku("Hakedisler.txt"); //Hakedisler.txt'yi oku
    while (!hakedisDosyaOku.eof()) //dosya sonuna kadar
    {
        hakedisDosyaOku >> _projeNo >> _hakedisDonemi >> urunNolar >> urunAdetleri >> urunFiyatlari;
        if (_projeNo == listeleNo) //eðer aranan proje numarasý ile dosyadaki herhangi bir proje numarasý ayný ise
        {
            string s = urunNolar; //o satýrdaki ürün numaralarý stringi alýnýr
            const char ayirmaIsareti = '/'; // '/' iþaretine göre ayýrýlýr
            vector<string> out;
            Hakedis::stringRegex(s, ayirmaIsareti, out);
            i = 0;
            for (auto &s:out)
            {
                urunler[i] = stoi(s); //urunler dizisinin indislerine o numaralar yerleþtirilir
                i++; //bizim urun indeksimiz tutacak ayný zamanda burdan urun sayýsýný da bilebiliriz
            }
        }
    }
    cout << "\nProje icin hakedise eklenen toplamda " << i << " adet urun bulundu!";
    cout << "\n" << listeleNo << " numarali proje icin hakedise eklenen urunler: " << endl;
    for (int j = 0; j < i; j++) //Tüm ürünleri döngü ile döner
    {
        Urunler::urunAraOtomatik(urunler[j]); //indislerdeki ürün numara deðelerini urunAraOtomatik() fonksiyonu içine parametre olarak gönderip ürünleri ayrýntýlý arar
    }
}

//Hakedis.txt icerisinden secilen projede kullanýlan ürünlerin silinmesini saðlar
void Hakedis::urunSil()
{
    //hakediþ dosyasýndaki bilgileri tutacak olan deðiþkenlerim
    int _projeNo = 0;
    int _hakedisDonemi = 0;
    string urunNolar;
    string urunAdetleri;
    string urunFiyatlari;
    int listeleNo;
    int donemNo;
    cout << "Kac numarali proje icin verilen hakedisteki urunleri guncelleyeceksiniz: ";
    cin >> listeleNo; //kullanýcýdan ürünlerinin güncellenmesi istenen proje numarasý alýndý
    cout << "Projenin donemi hangi donem(1-2-3...): ";
    cin >> donemNo; //o projenin dönem numarasý alýndý
    ifstream hakedisDosyaOku("Hakedisler.txt"); //Hakedisler.txt'yi oku
    ofstream geciciHakedisDosya("GeciciHakedisler.tmp");
    while (!hakedisDosyaOku.eof())
    {
        hakedisDosyaOku >> _projeNo >> _hakedisDonemi >> urunNolar >> urunAdetleri >> urunFiyatlari;
        if (_projeNo != listeleNo && donemNo != _hakedisDonemi) // alýnan deðerler dosyadaki deðerlere eþit deðilse tekrar yaz
        {
            geciciHakedisDosya << _projeNo << " " << _hakedisDonemi << " " << urunNolar << " " << urunAdetleri << " " << urunFiyatlari << endl;
        }
        else //eþit ise deðerleri "0" þeklinde güncelle
        {
            geciciHakedisDosya << _projeNo << " " << _hakedisDonemi << " " << "0" << " " << "0" << " " << "0" << endl;
            break;
        }
    }
    hakedisDosyaOku.close(); //dosya ile iþimiz bitti kapatýyorum
    geciciHakedisDosya.close(); //dosya ile iþimiz bitti kapatýyorum
    remove("Hakedisler.txt"); //eski hakediþler listesi silindi
    rename("GeciciHakedisler.tmp", "Hakedisler.txt"); //geçici hakediþler dosyasý asýl dosya oldu Hakedisler.txt olarak güncellendi
    Bildirimler::urunSilindi(); //ürün silindi bildirimi
}

//Hakedis.txt icerisinden secilen projede kullanýlan ürünlerin güncellenmesini saðlar
void Hakedis::urunGuncelle()
{
    int i = 0; //döngüde kullanacaðým deðiþkenim
    int urunler[100]; //bir tamsayý ürün dizisi tanýmladým
    //hakediþ dosyasýndaki bilgileri tutacak olan deðiþkenlerim
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
    cin >> listeleNo; //kullanýcýdan ürünlerinin güncellenmesi istenen proje numarasý alýndý
    cout << "Projenin donemi hangi donem(1-2-3...): ";
    cin >> donemNo; //o projenin dönem numarasý alýndý

    while (true)
    {

        string no = "0"; //numara varsayýlan 0 string deðer olarak tanýmlandý
        cout << "\nYukaridaki urun listesinden hakedisin verilecegi projeye, projede kullanilan urunleri ekleyelim...\n" << endl;
        cout << "1)Urun Ekleme Islemi" << endl;
        cout << "2)Urun Ekleme Islemini Bitir" << endl;
        int urunSecim = 0; //yukarýdaki iki iþlenden biri seçilecek
        cout << "Islem Seciniz: ";
        cin >> urunSecim; //seçim kullanýcýdan alýndý
        if (urunSecim == 1)
        {
            cout << "\nHakedise eklenecek projede kullanilan guncel urun no: ";
            cin >> no; //projede kullanýlan ürünlerden birinin numarasý alýndý
            _urunNolar += no;
            _urunNolar += "/";
            string adet = "0";
            cout << "\nHakedise eklencek projede kullanilan o urunun guncel adet miktari: ";
            cin >> adet; //projede kullanýlan bu ürünün kaç adet kullanýldýðý alýndý
            _urunAdetleri += adet;
            _urunAdetleri += "/";
            string fiyat = "0";
            cout << "\nHakedise eklencek projede kullanilan o urunun guncel fiyati: ";
            cin >> fiyat; //projede kullanýlan bu ürünün fiyatý alýndý
            _urunFiyatlari += fiyat;
            _urunFiyatlari += "/";
        }
        else if (urunSecim == 2) //iþlemi bitirmek için döngüden çýkýldý
        {
            break;
        }
    }

    ifstream hakedisDosyaOku("Hakedisler.txt"); //Hakedisler.txt'yi oku
    ofstream geciciHakedisDosya("GeciciHakedisler.tmp");
    while (!hakedisDosyaOku.eof())
    {
        hakedisDosyaOku >> _projeNo >> _hakedisDonemi >> urunNolar >> urunAdetleri >> urunFiyatlari;
        if (_projeNo != listeleNo && donemNo != _hakedisDonemi) // alýnan deðerler dosyadaki deðerlere eþit deðilse tekrar yaz
        {
            geciciHakedisDosya << _projeNo << " " << _hakedisDonemi << " " << urunNolar << " " << urunAdetleri << " " << urunFiyatlari << endl;
        }
        else //eþit ise yani bu da güncellemek istediðimiz deðer oluyor güncel deðerleri ata onlarý yaz
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
    remove("Hakedisler.txt"); //eski hakediþler listesi silindi
    rename("GeciciHakedisler.tmp", "Hakedisler.txt"); //geçici hakediþler dosyasý asýl dosya oldu Hakedisler.txt olarak güncellendi

}

//Hakedis.txt icerisinden secilen projenin o döneme ait hakedis tutarýný raporlamamýzý saðlar
void Hakedis::tutarRaporla()
{
    int i = 0; //döngüde kullanacaðým deðiþkenim
    int urunler[100]; //bir tamsayý ürün dizisi tanýmladým
    int adetler[100]; //bir tamsayý adet dizisi tanýmladým
    int fiyatlar[100]; //bir tamsayý fiyat dizisi tanýmladým
    int tutar = 0; //her döngüde ürün*adet*fiyat tutarý tutacak deðiþken
    int toplam = 0;
    //hakediþ dosyasýndaki bilgileri tutacak olan deðiþkenlerim
    int _projeNo = 0;
    int _hakedisDonemi = 0;
    string urunNolar;
    string urunAdetleri;
    string urunFiyatlari;
    int listeleNo;
    int donemNo;
    cout << "Kac numarali proje icin verilen hakedisteki urunlerin toplam tutarini raporlayacaksiniz: ";
    cin >> listeleNo; //kullanýcýdan ürünlerinin listelenmesi istenen proje numarasý alýndý
    cout << "Projenin donemi hangi donem(1-2-3...): ";
    cin >> donemNo;
    ifstream hakedisDosyaOku("Hakedisler.txt"); //Hakedisler.txt'yi oku
    while (!hakedisDosyaOku.eof()) //dosya sonuna gelene kadar
    {
        hakedisDosyaOku >> _projeNo >> _hakedisDonemi >> urunNolar >> urunAdetleri >> urunFiyatlari;
        if (_projeNo == listeleNo && donemNo == _hakedisDonemi)
        {
            const char ayirmaIsareti = '/'; // '/' iþaretine göre ayrýlýr
            string adet = urunAdetleri; //ürün adetlerini tutacak deðiþken
            vector<string> adetcikti;
            Hakedis::stringRegex(adet, ayirmaIsareti, adetcikti);
            i = 0;
            for (auto& adet : adetcikti)
            {
                adetler[i] = stoi(adet); //urunler dizisinin indislerine o adetler yerleþtirilir
                i++; //bizim urun indeksimiz tutacak ayný zamanda burdan urun sayýsýný da bilebiliriz
            }

            string fiyat = urunFiyatlari; //ürün fiyatlarýný tutacak deðiþken
            vector<string> fiyatcikti;
            Hakedis::stringRegex(fiyat, ayirmaIsareti, fiyatcikti);
            i = 0;
            for (auto& fiyat : fiyatcikti)
            {
                fiyatlar[i] = stoi(fiyat); //urunler dizisinin indislerine o adetler yerleþtirilir
                i++; //bizim urun indeksimiz tutacak ayný zamanda burdan urun sayýsýný da bilebiliriz
            }

            for (int j = 0; j < i; j++) 
            {
                tutar = 1*adetler[j] * fiyatlar[j]; // o ürün numarasýna ait ürün adeti ile fiyatýný çarpar tutar'a eþitler
                toplam += tutar; //tutar miktarýný da toplam'a ekler
            }
        }
    }
    Bildirimler::tutarRaporlandi(); //tutar raporlandý bildirimi
    cout << "\n" << listeleNo << " numarali projenin " << donemNo << ". donemi " << "icin hakedise eklenen urunlerin toplam tutari: " << toplam << " TL'dir." << endl;

}


//Menü Ýþlemleri Ýçin Tasarladýðým Sýnýf
class Menu
{
public:
    Menu(); //Menu kurucu fonksiyonu
    ~Menu(); //Menu yýkýcý fonksiyonu

private:

};

//main kýsmýnda çaðrýlacak olan tüm iþlemlerin gerçekleþtirileceði Menu kurucu fonksiyonu
Menu::Menu()
{
    //Kullanýcý bilgilendiriliyor
    cout << "=============== INSAAT ODEME YONETIM SISTEMINE HOS GELDINIZ ===============" << endl;
    while (true)
    {
        cout << "1) Urunler ile ilgili islemler" << endl;
        cout << "2) Projeler ile ilgili islemler" << endl;
        cout << "3) Hakedis'in verilmesi ile ilgili islemler" << endl;
        cout << "4) Programi sonlandir" << endl;
        int menuSecim;
        cout << "Yukaridaki islemlerden birini seciniz: ";
        cin >> menuSecim; //kullanýcýdan bir seçim alýnýyor
        if (menuSecim == 1) //seçim 1 olursa ürün ile ilgili iþlemlere yönlendiriliyor
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
        else if (menuSecim == 2) //seçim 2 olursa projeler ile ilgili iþlemlere yönlendiriyor
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
        else if (menuSecim == 3) //seçim 3 olursa hakediþ ile ilgili iþlemlere yönlendiriliyor
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
            break; //döngüden çýkar otomatik olarak program sonlanmýþ olur.
        }
        else
        {
            cout << "\nListeden gecerli bir islem secilmemistir!\n" << endl;
        }
    }


}

//Menu yýkýcý fonksiyonu
Menu::~Menu()
{
}


int main()
{
    Menu* menuGetir = new Menu();
}