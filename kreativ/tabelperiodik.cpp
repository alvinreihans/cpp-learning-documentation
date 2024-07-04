#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <iomanip.h>
#include <windows.h>
#include <stdlib.h>
#include <dos.h>
//-----------deklarasi------------
char nama_unsur[118][4] = {
    {"  H"},
    {" He"},
    {" Li"},
    {" Be"},
    {"  B"},
    {"  C"},
    {"  N"},
    {"  O"},
    {"  F"},
    {" Ne"},
    {" Na"},
    {" Mg"},
    {" Al"},
    {" Si"},
    {"  P"},
    {"  S"},
    {" Cl"},
    {" Ar"},
    {"  K"},
    {" Ca"},
    {" Sc"},
    {" Ti"},
    {"  V"},
    {" Cr"},
    {" Mn"},
    {" Fe"},
    {" Co"},
    {" Ni"},
    {" Cu"},
    {" Zn"},
    {" Ga"},
    {" Ge"},
    {" As"},
    {" Se"},
    {" Br"},
    {" Kr"},
    {" Rb"},
    {" Sr"},
    {"  Y"},
    {" Zr"},
    {" Nb"},
    {" Mo"},
    {" Tc"},
    {" Ru"},
    {" Rh"},
    {" Pd"},
    {" Ag"},
    {" Cd"},
    {" In"},
    {" Sn"},
    {" Sb"},
    {" Te"},
    {"  I"},
    {" Xe"},
    {" Cs"},
    {" Ba"},
    {" La"},
    {" Ce"},
    {" Pr"},
    {" Nd"},
    {" Pm"},
    {" Sm"},
    {" Eu"},
    {" Gd"},
    {" Tb"},
    {" Dy"},
    {" Ho"},
    {" Er"},
    {" Tm"},
    {" Yb"},
    {" Lu"},
    {" Hf"},
    {" Ta"},
    {"  W"},
    {" Re"},
    {" Os"},
    {" Ir"},
    {" Pt"},
    {" Au"},
    {" Hg"},
    {" Ti"},
    {" Pb"},
    {" Bi"},
    {" Po"},
    {" At"},
    {" Rn"},
    {" Fr"},
    {" Ra"},
    {" Ac"},
    {" Th"},
    {" Pa"},
    {"  U"},
    {" Np"},
    {" Pu"},
    {" Am"},
    {" Cm"},
    {" Bk"},
    {" Cf"},
    {" Es"},
    {" Fm"},
    {" Md"},
    {" No"},
    {" Lr"},
    {" Rf"},
    {" Db"},
    {" Sg"},
    {" Bh"},
    {" Hs"},
    {" Mt"},
    {" Ds"},
    {"Uuu"},
    {"Uub"},
    {"Uut"},
    {"Uuq"},
    {"Uup"},
    {"Uuh"},
    {"Uus"},
    {"Uuo"},
};
char nama_lengkap_unsur[118][15] =
    {
        {"Hydrogen"}, {"Helium"}, {"Lithium"}, {"Beryllium"}, {"Boron"}, {"Carbon"}, {"Nitrogen"}, {"Oxygen"}, {"Fluorine"}, {"Neon"}, {"Sodium"}, {"Magnesium"}, {"Aluminium"}, {"Silicon"}, {"Phosphorus"}, {"Sulphur"}, {"Chlorine"}, {"Argon"}, {"Potassium"}, {"Calcium"}, {"Scandium"}, {"Titanium"}, {"Vanadium"}, {"Chromium"}, {"Manganese"}, {"Iron"}, {"Cobalt"}, {"Nickel"}, {"Copper"}, {"Zinc"}, {"Gallium"}, {"Germanium"}, {"Arsenic"}, {"Selenium"}, {"Bromine"}, {"Krypton"}, {"Rubidium"}, {"Strontium"}, {"Yttrium"}, {"Zirconium"}, {"Niobium"}, {"Molybdenum"}, {"Techenium"}, {"Ruthenium"}, {"Rhodium"}, {"Palladium"}, {"Silver"}, {"Cadmium"}, {"Indium"}, {"Tin"}, {"Antimony"}, {"Tellurium"}, {"Iodine"}, {"Xenon"}, {"Cesium"}, {"Barium"}, {"Lanthanum"}, {"Cerium"}, {"Praseodymium"}, {"Neodymium"}, {"Prometium"}, {"Samarium"}, {"Europium"}, {"Gadolinium"}, {"Terbium"}, {"Dysprosium"}, {"Holmium"}, {"Erbium"}, {"Thulium"}, {"Ytterbium"}, {"Lutetium"}, {"Hafnium"}, {"Tantalum"}, {"Tungsten"}, {"Rhenium"}, {"Osmium"}, {"Iridium"}, {"Platinum"}, {"Gold"}, {"Mercury"}, {"Thallium"}, {"Lead"}, {"Bismuth"}, {"Polonium"}, {"Astatine"}, {"Radon"}, {"Francium"}, {"Radium"}, {"Actinium"}, {"Thorium"}, {"Protactinium"}, {"Uranium"}, {"Neptunium"}, {"Plutonium"}, {"Americium"}, {"Curium"}, {"Berkelium"}, {"Californium"}, {"Einsteinium"}, {"Fermium"}, {"Mendelevium"}, {"Nobelium"}, {"Lawrencium"}, {"Rutherfordium"}, {"Dubinium"}, {"Seaborgium"}, {"Bohrium"}, {"Hassium"}, {"Meitnerium"}, {"Darmstadtium"}, {"Roentgenium"}, {"Ununbium"}, {"Ununtrium"}, {"Ununquadium"}, {"Ununpentium"}, {"Ununhexium"}, {"Ununseptium"}, {"Ununoctium"}};
char golongan[118][3] =
    {"1", "18",
     "1", "2", "13", "14", "15", "16", "17", "18",
     "1", "2", "13", "14", "15", "16", "17", "18",
     "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18",
     "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18",
     "1", "2", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18",
     "1", "2", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18"};
char periode[118][2] =
    {{"1"}, {"1"}, {"2"}, {"2"}, {"2"}, {"2"}, {"2"}, {"2"}, {"2"}, {"2"}, {"3"}, {"3"}, {"3"}, {"3"}, {"3"}, {"3"}, {"3"}, {"3"}, {"4"}, {"4"}, {"4"}, {"4"}, {"4"}, {"4"}, {"4"}, {"4"}, {"4"}, {"4"}, {"4"}, {"4"}, {"4"}, {"4"}, {"4"}, {"4"}, {"4"}, {"4"}, {"5"}, {"5"}, {"5"}, {"5"}, {"5"}, {"5"}, {"5"}, {"5"}, {"5"}, {"5"}, {"5"}, {"5"}, {"5"}, {"5"}, {"5"}, {"5"}, {"5"}, {"5"}, {"6"}, {"6"}, {"6"}, {"6"}, {"6"}, {"6"}, {"6"}, {"6"}, {"6"}, {"6"}, {"6"}, {"6"}, {"6"}, {"6"}, {"6"}, {"6"}, {"6"}, {"6"}, {"6"}, {"6"}, {"6"}, {"6"}, {"6"}, {"6"}, {"6"}, {"6"}, {"6"}, {"6"}, {"6"}, {"6"}, {"6"}, {"6"}, {"7"}, {"7"}, {"7"}, {"7"}, {"7"}, {"7"}, {"7"}, {"7"}, {"7"}, {"7"}, {"7"}, {"7"}, {"7"}, {"7"}, {"7"}, {"7"}, {"7"}, {"7"}, {"7"}, {"7"}, {"7"}, {"7"}, {"7"}, {"7"}, {"7"}, {"7"}, {"7"}, {"7"}, {"7"}, {"7"}, {"7"}, {"7"}};
char massa_atom[118][12] =
    {{"1.004"}, {"4.002"}, {"6.941"}, {"9.012"}, {"10.811"}, {"12.0107"}, {"14.00674"}, {"15.9994"}, {"18.9984032"}, {"20.1797"}, {"22.989770"}, {"24.3050"}, {"26.981538"}, {"28.0855"}, {"30.973761"}, {"32.066"}, {"35.453"}, {"39.948"}, {"39.0983"}, {"40.078"}, {"44.955910"}, {"47.867"}, {"50.9415"}, {"51.9961"}, {"54.938049"}, {"55.8457"}, {"58.933200"}, {"58.6934"}, {"63.546"}, {"65.409"}, {"69.723"}, {"72.64"}, {"74.92160"}, {"78.96"}, {"79.904"}, {"83.798"}, {"85.4678"}, {"87.62"}, {"88.90585"}, {"91.224"}, {"92.90638"}, {"95.94"}, {"98"}, {"101.07"}, {"102.90550"}, {"106.42"}, {"107.8682"}, {"112.411"}, {"114.818"}, {"118.710"}, {"121.760"}, {"127.60"}, {"126.90447"}, {"131.293"}, {"132.90545"}, {"137.327"}, {"138.9055"}, {"140.116"}, {"140.90765"}, {"144.24"}, {"145"}, {"150.36"}, {"151.964"}, {"157.25"}, {"158.92534"}, {"162.500"}, {"164.93032"}, {"167.259"}, {"168.93421"}, {"173.04"}, {"174.967"}, {"178.49"}, {"180.9479"}, {"183.84"}, {"186.207"}, {"190.23"}, {"192.217"}, {"195.078"}, {"196.96655"}, {"200.59"}, {"204.9833"}, {"207.2"}, {"208.98038"}, {"209"}, {"210"}, {"222"}, {"223"}, {"226"}, {"227"}, {"232.0381"}, {"231.03588"}, {"238.02891"}, {"237"}, {"244"}, {"243"}, {"247"}, {"247"}, {"251"}, {"252"}, {"257"}, {"258"}, {"259"}, {"262"}, {"261"}, {"262"}, {"266"}, {"264"}, {"269"}, {"268"}, {"271"}, {"272"}, {"285"}, {"284"}, {"289"}, {"288"}, {"292"}, {"-"}, {"-"}};
char elemen[118][17] = {
    {"non metal"}, {"gas"}, {"alkali tanah"}, {"alkaline tanah"}, {"metaloid"}, {"non metal"}, {"non metal"}, {"non metal"}, {"halogen"}, {"gas"}, {"alkali tanah"}, {"alkaline tanah"}, {"logam lain"}, {"metaloid"}, {"non metal"}, {"non metal"}, {"halogen"}, {"gas"}, {"alkali tanah"}, {"alkaline tanah"}, {"logam transisi"}, {"logam transisi"}, {"logam transisi"}, {"logam transisi"}, {"logam transisi"}, {"logam transisi"}, {"logam transisi"}, {"logam transisi"}, {"logam transisi"}, {"logam transisi"}, {"logam lain"}, {"metloid"}, {"metaloid"}, {"non metal"}, {"halogen"}, {"gas"}, {"alkali tanah"}, {"alkaline tanah"}, {"logam transisi"}, {"logam transisi"}, {"logam transisi"}, {"logam transisi"}, {"logam transisi"}, {"logam transisi"}, {"logam transisi"}, {"logam transisi"}, {"logam transisi"}, {"logam transisi"}, {"logam lain"}, {"logam lain"}, {"metaloid"}, {"metaloid"}, {"halogen"}, {"gas"}, {"alkali tanah"}, {"alkaline tanah"}, {"Seri Lanthanide"}, {"Seri Lanthanide"}, {"Seri Lanthanide"}, {"Seri Lanthanide"}, {"Seri Lanthanide"}, {"Seri Lanthanide"}, {"Seri Lanthanide"}, {"Seri Lanthanide"}, {"Seri Lanthanide"}, {"Seri Lanthanide"}, {"Seri Lanthanide"}, {"Seri Lanthanide"}, {"Seri Lanthanide"}, {"Seri Lanthanide"}, {"Seri Lanthanide"}, {"logam transisi"}, {"logam transisi"}, {"logam transisi"}, {"logam transisi"}, {"logam transisi"}, {"logam transisi"}, {"logam transisi"}, {"logam transisi"}, {"logam transisi"}, {"logam lain"}, {"logam lain"}, {"logam lain"}, {"metaloid"}, {"halogen"}, {"gas"}, {"alkali tanah"}, {"alkaline tanah"}, {"Seri Actinide"}, {"Seri Actinide"}, {"Seri Actinide"}, {"Seri Actinide"}, {"Seri Actinide"}, {"Seri Actinide"}, {"Seri Actinide"}, {"Seri Actinide"}, {"Seri Actinide"}, {"Seri Actinide"}, {"Seri Actinide"}, {"Seri Actinide"}, {"Seri Actinide"}, {"Seri Actinide"}, {"Seri Actinide"}, {"logam transisi"}, {"logam transisi"}, {"logam transisi"}, {"logam transisi"}, {"logam transisi"}, {"logam transisi"}, {"logam transisi"}, {"logam transisi"}, {"logam transisi"}, {"belum ditemukan"}, {"belum ditemukan"}, {"belum ditemukan"}, {"belum ditemukan"}, {"belum ditemukan"}, {"belum ditemukan"}};
char jumlah_neutron[118][4] =
    {{"0"}, {"2"}, {"4"}, {"5"}, {"6"}, {"6"}, {"7"}, {"8"}, {"10"}, {"10"}, {"12"}, {"12"}, {"14"}, {"14"}, {"16"}, {"16"}, {"18"}, {"22"}, {"20"}, {"20"}, {"24"}, {"26"}, {"28"}, {"28"}, {"30"}, {"30"}, {"32"}, {"31"}, {"35"}, {"35"}, {"39"}, {"41"}, {"42"}, {"45"}, {"45"}, {"48"}, {"48"}, {"50"}, {"50"}, {"51"}, {"52"}, {"54"}, {"55"}, {"57"}, {"58"}, {"60"}, {"61"}, {"64"}, {"66"}, {"67"}, {"71"}, {"74"}, {"74"}, {"77"}, {"78"}, {"81"}, {"82"}, {"82"}, {"82"}, {"84"}, {"84"}, {"88"}, {"89"}, {"93"}, {"94"}, {"97"}, {"98"}, {"99"}, {"100"}, {"103"}, {"104"}, {"106"}, {"108"}, {"110"}, {"111"}, {"114"}, {"115"}, {"117"}, {"118"}, {"121"}, {"123"}, {"125"}, {"126"}, {"125"}, {"125"}, {"136"}, {"136"}, {"138"}, {"138"}, {"142"}, {"140"}, {"146"}, {"144"}, {"150"}, {"153"}, {"153"}, {"150"}, {"153"}, {"153"}, {"157"}, {"157"}, {"157"}, {"159"}, {"157"}, {"157"}, {"157"}, {"155"}, {"157"}, {"157"}, {"159"}, {"161"}, {"165"}, {'-'}, {'-'}, {'-'}, {'-'}, {'-'}, {'-'}};
char bentuk_atom[118][15] =
    {{"Hexagonal"}, {"Hexagonal"}, {"Cubic"}, {"Hexagonal"}, {"Rhombohedral"}, {"Hexagonal"}, {"Hexagonal"}, {"Cubic"}, {"Cubic"}, {"Cubic"}, {"Cubic"}, {"Hexagonal"}, {"Cubic"}, {"Cubic"}, {"Monoclinic"}, {"Orthorhombic"}, {"Orthorhombic"}, {"Cubic"}, {"Cubic"}, {"Cubic"}, {"Hexagonal"}, {"Hexagonal"}, {"Cubic"}, {"Cubic"}, {"Cubic"}, {"Cubic"}, {"Hexagonal"}, {"Cubic"}, {"Cubic"}, {"Hexagonal"}, {"Orthorhombic"}, {"Cubic"}, {"Rhombohedral"}, {"Hexagonal"}, {"Orthorhombic"}, {"Cubic"}, {"Cubic"}, {"Cubic"}, {"Hexagonal"}, {"Hexagonal"}, {"Cubic"}, {"Cubic"}, {"Hexagonal"}, {"Hexagonal"}, {"Cubic"}, {"Cubic"}, {"Cubic"}, {"Hexagonal"}, {"Tetragonal"}, {"Tetragonal"}, {"Rhombohedral"}, {"Hexagonal"}, {"Orthorhombic"}, {"Cubic"}, {"Cubic"}, {"Cubic"}, {"Hexagonal"}, {"Cubic"}, {"Hexagonal"}, {"Hexagonal"}, {"Hexagonal"}, {"Rhombohedral"}, {"Cubic"}, {"Hexagonal"}, {"Hexagonal"}, {"Hexagonal"}, {"Hexagonal"}, {"Hexagonal"}, {"Hexagonal"}, {"Cubic"}, {"Hexagonal"}, {"Hexagonal"}, {"Cubic"}, {"Cubic"}, {"Hexagonal"}, {"Hexagonal"}, {"Cubic"}, {"Cubic"}, {"Cubic"}, {"Rhombohedral"}, {"Hexagonal"}, {"Cubic"}, {"Rhombohedral"}, {"Monoclinic"}, {"Unknown"}, {"Cubic"}, {"Cubic"}, {"Cubic"}, {"Cubic"}, {"Cubic"}, {"Orthorhombic"}, {"Orthorhombic"}, {"Orthorhombic"}, {"Monoclinic"}, {"Hexagonal"}, {"Unknown"}, {"Unknown"}, {"Unknown"}, {"Unknown"}, {"Unknown"}, {"Unknown"}, {"Unknown"}, {"Unknown"}, {"Unknown"}, {"Unknown"}, {"Unknown"}, {"Unknown"}, {"Unknown"}, {"Unknown"}, {"Unknown"}, {"Unknown"}, {"Unknown"}, {'-'}, {'-'}, {'-'}, {'-'}, {'-'}, {'-'}};
//-----------------------------------fungsi
tampilan();
pencarian();
informasi();
//-----------------------------------struct
struct
{
    unsigned long int a; // a= untuk mencari data dalam array
    unsigned int pilih;  // pilih= untuk menentukan menu
} data;
//-----------------------------------------fungsi utama-----------------------------------------------------------
void main()
{
    system("cls");
    system("color 3E");
    cout << endl
         << endl
         << endl;
    cout << "\t\t     #   # ### #    ##  ##  #   # ###  \n";
    cout << "\t\t     #   # #   #   #   #  # ## ## #     \n";
    cout << "\t\t     # # # ### #   #   #  # # # # ###   \n";
    cout << "\t\t     # # # #   #   #   #  # #   # #     \n";
    cout << "\t\t      # #  ### ###  ##  ##  #   # ###   \n\n";
    cout << "\t\t         SSSSSS   PPPPPPP   UU   UU  \n";
    cout << "\t\t         SS  SS   PP   PP   UU   UU  \n";
    cout << "\t\t         SS       PP   PP   UU   UU  \n";
    cout << "\t\t         SSSSSS   PPPPPPP   UU   UU  \n";
    cout << "\t\t             SS   PP        UUUUUUU  \n";
    cout << "\t\t         SSSSSS   PP        UUUUUUU  \n\n";
    cout << "\t\t                                     \n\n";
    cout << "\t\t(S I S T E M     P E R I O D I K     U N S U R)\n\n"
         << endl;
    getche();
kembali:
    tampilan();
    pencarian();
    informasi();
    while (data.pilih != 2)
        goto kembali;
}
//----------------------- fungsi pemberi warna-----------------
void setcolor(unsigned short color) // fungsi untuk pemberian warna
{
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE); // membuat objek hCon
    SetConsoleTextAttribute(hCon, color);          // program untuk merubah warna,color akan diganti dengan nilai i nantinya
}
//---------------------------------------tampilan unsur--------------------------------------------------------------
tampilan()
{
    unsigned int i, n; // i= urutan array n=golongan tabel
    system("cls");
    system("color f0");
    //-------------------golongan
    for (n = 1; n < 10; n++)
    {
        setcolor(11);
        printf("|  %d", n);
    }
    for (n = 10; n < 19; n++) // aku tulis lagi biar lurus per golongan
    {
        printf("| %d", n);
    }
    cout << "|";
    cout << " <-GOL ";
    cout << endl;
    //--------------------penatann unsur dalam tabel perodik unsur
    for (i = 0; i < 1; i++) // H
    {
        setcolor(160);
        cout << "|";
        cout << nama_unsur[i];
        cout << "|";
    }
    cout << "\t\t\t\t\t\t\t\t    ";
    for (i = 1; i < 2; i++) // He-------------
    {
        cout << "|";
        cout << nama_unsur[i];
        cout << "|";
    }
    cout << "  (1) ";
    cout << endl;

    for (i = 2; i < 4; i++) // Li,Be
    {
        setcolor(176);
        cout << "|";
        cout << nama_unsur[i];
    }
    cout << "|";
    cout << "\t\t\t\t\t";
    for (i = 4; i < 10; i++) // B,N,O,F,Ne---------
    {
        cout << "|";
        cout << nama_unsur[i];
    }
    cout << "|";
    cout << "  (2) ";
    cout << endl;
    for (i = 10; i < 12; i++) // Na,Mg
    {
        setcolor(192);
        cout << "|";
        cout << nama_unsur[i];
    }
    cout << "|";
    cout << "\t\t\t\t\t";
    for (i = 12; i < 18; i++) // Al,Si,P,S,Cl,Ar------
    {
        cout << "|";
        cout << nama_unsur[i];
    }
    cout << "|";
    cout << "  (3) ";
    cout << endl;
    for (i = 18; i < 36; i++) // 19-36 Kr ------------
    {
        setcolor(208);
        cout << "|";
        cout << nama_unsur[i];
    }
    cout << "|";
    cout << "  (4) ";
    cout << endl;
    for (i = 36; i < 54; i++) // 37-54 Xe -----------
    {
        setcolor(224);
        cout << "|";
        cout << nama_unsur[i];
    }
    cout << "|";
    cout << "  (5) ";
    cout << endl;
    for (i = 54; i < 57; i++) // 55-57
    {
        setcolor(240);
        cout << "|";
        cout << nama_unsur[i];
    }
    for (i = 71; i < 86; i++) // 72-86 Rn ------------
    {
        setcolor(287);
        cout << "|";
        cout << nama_unsur[i];
    }
    cout << "|";
    cout << "  (6) ";
    cout << endl;
    for (i = 86; i < 89; i++) // 87-89
    {
        setcolor(209);
        cout << "|";
        cout << nama_unsur[i];
    }
    for (i = 103; i < 118; i++) // 104-118 Uuo --------
    {
        setcolor(112);
        cout << "|";
        cout << nama_unsur[i];
    }
    cout << "|";
    cout << "  (7) ";
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "        (La)------->";
    for (i = 57; i < 71; i++) // 58-71 Lu----------------
    {
        setcolor(94);
        cout << "|";
        cout << nama_unsur[i];
    }
    cout << "|  ";
    cout << endl;
    cout << "        (Ac)------->";
    for (i = 89; i < 103; i++) // 90-103 Lr---------------
    {
        setcolor(95);
        cout << "|";
        cout << nama_unsur[i];
    }
    cout << "|  ";
    cout << endl;
    return 0;
}
//----------------------------------fungsi pencarian unsur--------------------------------------------------
pencarian()
{
pencarian:
    setcolor(240);
    cout << endl;
    cout << "\t+---------------------------------------------------" << endl
         << "\t|" << endl;
    cout << "\t|masukkan nomer atom yang ingin anda cari : ";
    cin >> data.a;
    if (data.a > 118 || data.a < 1)
    {
        setcolor(207);
        cout << "\n\t|cobalah memasukkan nomer atom 1 sampai 118" << endl
             << "\t|";
        cout << "\n\t|tekan enter melanjutkan" << endl
             << "\t|";
        getche();
        goto pencarian;
        cout << endl;
    }
    if ((data.a >= 1) || (data.a <= 118))
    {
        cout << "\t|nomer atom ";
        cout << data.a;
        data.a--;
        cout << "\t adalah unsur : ";
        cout << nama_unsur[data.a] << endl;
    }

    return 0;
}
//-----------------------------fungsi informasi------------------------------------------------------------
informasi()
{
lagi:
    setcolor(240);
    cout << "\t|\n";
    cout << "\t+---------------------------------------------------" << endl
         << "\t|" << endl;
    cout << "\t|tekan 1 untuk melihat informasi tentang unsur" << nama_unsur[data.a] << endl;
    cout << "\t|tekan 2 untuk keluar" << endl;
    cout << "\t|" << endl;
    cout << "\t|anda memilih : ";
    cin >> data.pilih;
    cout << "\t|\n";
    switch (data.pilih)
    {
    case 1:
    {
        cout << "\t+---------------------------------------------------\n\t|\n";
        cout << "\t| simbol             | " << nama_unsur[data.a];
        cout << "\n\t| Nama		     | " << nama_lengkap_unsur[data.a];
        cout << "\n\t| Golongan           | " << golongan[data.a];
        cout << "\n\t| Periode            | " << periode[data.a];
        cout << "\n\t| Massa Atom         | " << massa_atom[data.a];
        cout << "\n\t| Elemen             | " << elemen[data.a];
        cout << "\n\t| Jumlah Neutron     | " << jumlah_neutron[data.a];
        cout << "\n\t| Bentuk Atom        | " << bentuk_atom[data.a];
        cout << "\n\t|\n\t+---------------------------------------------------\n";
        cout << "\ttekan sembarang tombol untuk mencari unsur lagi" << endl;
        getche();
        system("cls");
        return 0;
        break;
    }
    case 2:
    {

        system("color 10");
        system("color 2a");
        system("color 3b");
        system("color 4d");
        system("color 5c");
        system("color 6e");
        system("color 7f");
        system("color 8c");
        system("color 9b");
        system("color e0");
        cout << "\t|" << endl;
        cout << "\t+---------------------------------------------------" << endl;
        cout << "\t| TERIMA KASIH TELAH MENGUNJUNGI PROGRAM KAMI" << endl;
        cout << "\t+---------------------------------------------------" << endl
             << "\t";
        return 0;
        break;
    }
    default:
    {
        cout << "\t|" << endl;
        cout << "\t|cobalah untuk memilih menu yang tersedia\n";
        cout << "\t|tekan 1 atau 2\n";
        cout << "\t|ekan enter untuk melanjutkan";
        getche();
        goto lagi;
        break;
    }
    }
    return 0;
    getch();
}