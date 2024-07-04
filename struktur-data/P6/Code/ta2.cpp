#include<iostream>
using namespace std;

struct node
{
    int pos;
    string name;
    node *next;
} *front, *newptr, *save, *ptr, *rear;

node *create_new_node(string nama, int posisi);
void insert(node *);
void display(node *);
void delete_node_queue();

int main()
{
    front = rear = NULL;
    string name;
    int count = 1;
    int pil;

    do {
        cout << "---------------------------------------" << endl;
        cout << "1. Tambahkan pasien" << endl;
        cout << "2. Panggil pasien" << endl;
        cout << "3. Tampilkan antrian pasien" << endl;
        cout << "4. Keluar program" << endl;
        cout << "Pilihan = ";
        cin >> pil;

        switch(pil){
            case 1: 
                cout << endl << "Masukkan nama panggilan : ";
                cin >> name;
                newptr = create_new_node(name, count);
                if(newptr == NULL)
                {
                    cout << "Mohon maaf, tidak dapat menambahkan data " <<
                        "pada antrian. Mengakhiri menambahkan pasien..." << endl;
                    break;
                }
                insert(newptr);
                count++;
                cout << "Berhasil menambahkan ke antrian" << endl;
                display(front);
                break;
            case 2: 
                delete_node_queue();
                break;
            case 3: 
                display(front);
                break;
        }
    } while(pil!=4);
    cout << endl << "Keluar dari program...";
    return 0;
}

node *create_new_node(string name, int posisi)
{
    ptr = new node;
    ptr->name = name;
    ptr->pos = posisi;
    ptr->next = NULL;
    return ptr;
}

void insert(node *n)
{
    if(front == NULL)
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
    if(front == NULL)
    {
        cout << endl <<"Antrian pasien telah kosong." << endl << endl;
    }
    else
    {
        cout << endl << "Pasien " << front->pos << " atas nama "
            << front->name << " dipersilahkan memasuki ruang pengobatan."
            << endl << endl;
        ptr = front;
        front = front->next;
    }
}

void display(node *n)
{
    cout << endl << "Antrian saat ini :" << endl;
    while(n != NULL)
    {
        cout <<n->pos << ". " << n->name << endl;
        n = n->next;
    }
    cout << endl;
}