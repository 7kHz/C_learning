{
    char message, key;
    int mask;
    key = '$';
    mask = 1 << 1;
    cin >> message;
    message = message ^ key;
    if (message & mask) {
        cout << u8"Наступаем";
    }
    else {
        cout << u8"Ожидаем";
    }
    cout << message << endl;
    return 0;
}