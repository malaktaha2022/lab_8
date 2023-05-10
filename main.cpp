#include <iostream>
using namespace std;

class photo{
private:
    int id;
    string title;
    string remarks;
    string type;
    string privacy;
};

class Tag{
private:
    int id;
    string name;
    string remarks;
};

class Album{
private:
    int id;
    string title;
    string remarks;
public:
    Album createAlbum();
};

class Member{
private:
    int id;
    string name;
    string address;
    string contact;
};

class Location{
private:
    int id;
    string name;
    string remarks;
};

int main()
{


    return 0;
};
