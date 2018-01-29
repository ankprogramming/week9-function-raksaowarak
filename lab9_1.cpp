#include <iostream>

using namespace std;
void swap (int *a,int *b){
        int Saowarak;
        Saowarak=*a;
        *a =*b;
        *b =Saowarak;
    }
int main() {
     int a,b,cmd;
    cin >> a ;
    cin >> b ;
    do{
     cout << "menu\n1. swap()\n2. quit()" << endl;
     cin >> cmd;
     if(cmd ==1) {
         swap (&a,&b);
         cout <<a <<b;
     }else { break;}


    }while (1);

    /* เขียนโปรแกรมรับค่ารัศมีวงกลมจากคีย์บอร์ด และหาพื้นที่ของวงกลมเป็นทศนิยม 4 ตำแหน่ง
    โดยกำหนดให้โปรแกรมหาพื้นที่ของวงกลม จนกว่าผู้ใช้งานต้องการออกจากการทำงานของโปรแกรม
    และกำหนดให้แบ่งการทำงานเป็นโปรแกรมย่อยอย่างน้อย 1 ฟังก์ชัน
    */
    return 0;
}
