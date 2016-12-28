#include <iostream>
#include "SerialPort.h"

using namespace std;

int main()
{
    unsigned int Serial_N1 = 1;

    CSerialPort mySerialPort1;
    if (!mySerialPort1.InitPort(Serial_N1))
    {
        cout << " 初始化串口 失败 !" << std::endl;
    }
    else
    {
        cout << " 初始化串口 成功 !" << std::endl;
    }
    if (!mySerialPort1.OpenListenThread())
    {
        std::cout << "OpenListenThread fail !" << std::endl;
    }
    else
    {
        std::cout << "OpenListenThread success !" << std::endl;
    }

    cout << "High-speed parallel data transmission system " << endl;
   
    while (1)
    {
        /*cin >> send_data;
        temp[0] = send_data;
        mySerialPort1.WriteData(temp, 1);*/
    }
    return 0;
}