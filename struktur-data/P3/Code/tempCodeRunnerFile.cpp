            }
        }
    }
    printArray(temporaryArray, arrayLength);

    while(l <= r && flag == 0)
    {
        m = (l+r)/2;
        cout << endl << "Data tengah: " << m << endl;
        if (temporaryArray[m] == search)
        {
            flag = 1;
        }
        else if (search < temporaryArray[m])
        {
            cout << "Mencari di kiri..." << endl;
            r = m-1;
        }
        else
        {
        cout << "Mencari di kanan..." << endl;
        l = m+1;
        }
    }

    if(flag == 1)
    {
        cout << "Data " << temporaryArray[m] << " ditemukan pada indeks ke-" << m << endl;
    } 
    else
    {
        cout << "Data TIDAK ditemukan" << endl;
    }
}

void inputArrayELement(int dataInput[], int arrayLength)
{
    cout << endl;
    for(int i = 0; i < arrayLength; i++)
    {
        cout << "Masukkan data ke-" << i+1 << ": ";
        cin >> dataInput[i];
    }
    cout << endl;
}

void printArray(int dataInput[], int arrayLength)
{
    cout << endl;
    cout << "   ";
    for(int i = 0; i < arrayLength; i++)
    {
        cout << dataInput[i] << " ";
	}
    cout << endl;
}