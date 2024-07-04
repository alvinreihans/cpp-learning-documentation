#include <iostream>
using namespace std;

struct node
{
    string nama;
    int noAntrian;
    node *next;
} * front, *newptr, *save, *ptr, *rear;
void delete_node_queue();
node *create_new_node(string nama, int noAntrian);
void insert(node *);
void display(node *);

int main()
{
    front = rear = NULL;
    string nama;
    int noAntrian;
    char ch = 'y', check = 1;
    int pilihan;
    int count = 0;

    while (check == '1')
    {
        cout << "Antrian Dokter Alysa" << endl;
        cout << "1. Menambah Antrian Pasien" << endl;
        cout << "2. Menghapus Antrian Pasien" << endl;
        cout << "3. Melihat Daftar Antrian" << endl;
        cout << "4. Mengakhiri Program" << endl;
        cout << "5. Masukan Pilihan Anda: " << endl;
        cin >> pilihan;
        cout << endl;

        if (pilihan == 1)
        {
            do
            {
                count++;
                cout << "No Antrian Pasien" << endl;
                cout << "Program Menambah Antrian Pasien" << endl;
                cout << "Nama Pasien      :";
                cin >> nama;
                cout << "No Antrian Pasien:";
                cin >> noAntrian;

                newptr = create_new_node(nama, noAntrian);
                if (newptr == NULL)
                {
                    cout << "Maaf, tidak dapat menambhakan antrian. " << endl;
                    exit(1);
                }
                insert(newptr);
                cout << "Antrian berhasil ditambahkan" << endl;
                cout << "Apakah Anda ingin menambhakan antrian lagi? (y/n) ";
                cin >> ch;
                cout << endl;
            } while (ch == 'y' || ch == 'Y');
        }
        else if (pilihan == 2)
        {
            do
            {
                cout << "Apakah Anda ingin menghapus antrian? (y/n)";
                cin >> ch;
                if (ch == 'y' || ch == 'Y')
                    ;
                {
                    delete_node_queue();
                }
                cout << endl;
            } while (ch == 'y' || ch == 'Y');
        }
        else if (pilihan == 3)
        {
            display(front);
        }
        else if (pilihan == 4)
        {
            cout << "Program Telah Berakhir";
            return 0;
        }
        else
        {
            cout << "Pilihan tidak sesuai  " << endl;
        }
        cout << endl;

        return 0;
    }

    node *create_new_node (string nama, int noAntrian)
    {
        ptr = new node;
        ptr->nama = nama;
        ptr->noAntrian = noAntrian;
        ptr->next = NULL;
        return ptr;
    }

    void insert(node * n)
    {
        if (front == NULL)
        {
            front = rear = n;
        }
        else
        {
            rear->next = n;
            rear = n;
        }
    }

    void delete_node_queue()
    {
        if (front == NULL)
        {
            cout << "Underflow! Keluar Program" << endl;
            exit(2);
        }
        ptr = front;
        cout << "Menghapus Antrian dengan data: " << endl;
        cout << "Nama Pasien    : " << ptr->nama << endl;
        cout << "No Antrian     : " << ptr->noAntrian << endl;
        front = front->next;
    }

    void display(node * n)
    {
        int i = 1;
        cout << "Antrian Sekarang" << endl;
        while (n != NULL)
        {
            COUT << "antrian ke     : " << n->noAntrian << endl;
            cout << "Nama Pasien    : " << n->nama << endl;
            n = n->next;
            i++ cout << endl;
        }
    }
