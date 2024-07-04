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