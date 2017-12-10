#include <iostream>
#include <cstring>
using namespace std;

class B_class{
    char author[80];
public:
    void put_author(char *s) {strcpy(author, s); }
    void show_author() {cout << author << endl; }
};

class D_class : public B_class {
    char title[80];
public:
    void put_title(char *num) {strcpy(title, num);}
    void show_title() {
        cout << "Title: " << title << endl;
    }
};


int main()
{
    B_class *p;
    B_class b_ob;

    D_class *dp;
    D_class d_ob;

    p = &b_ob;  // ����� ������� �������� ������

    // ������ � ������ B_class ����� ���������
    p->put_author("Emile Zola");

    // ������ � ������ D_class ����� "�������" ���������
    p = &d_ob;
    p->put_author("William Shakespeare");

    b_ob.show_author();
    d_ob.show_author();
    
    /* ��������� ������� put_title() � show_title() 
     * �� �������� ������ �������� ������, ��� ����������
     * ����� "�������" ��������� p, � ������� � ��� �����
     * ���������� ���� ���������������, ����, ����� 
     * ��������� �� ����������� ���. 
     */
    dp = &d_ob;
    dp->put_title("The Tempest");
    p->show_author();
    dp->show_title();
    return 0;
}
