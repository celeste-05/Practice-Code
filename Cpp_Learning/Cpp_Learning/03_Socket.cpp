//#include <winsock2.h>
//#include <iostream>
//#include <ws2tcpip.h>
//#include <string>
//#pragma comment(lib, "ws2_32.lib")
//
//using namespace std;
//
//int main() {
//    WSADATA wsaData;
//    WSAStartup(MAKEWORD(2, 2), &wsaData);
//
//    // ѡ���ɫ��1=��������2=�ͻ���
//    int role;
//    std::cout << "����1��Ϊ��������2��Ϊ�ͻ���: ";
//    std::cin >> role;
//
//    if (role == 1) {
//        // ������
//        SOCKET serverSocket = socket(AF_INET, SOCK_STREAM, 0);
//        sockaddr_in serverAddr;
//        serverAddr.sin_family = AF_INET;
//        serverAddr.sin_addr.s_addr = INADDR_ANY;
//        serverAddr.sin_port = htons(8888);
//
//        bind(serverSocket, (sockaddr*)&serverAddr, sizeof(serverAddr));
//        listen(serverSocket, 1);
//
//        std::cout << "���������������ȴ�����...\n";
//        SOCKET clientSocket = accept(serverSocket, NULL, NULL);
//        std::cout << "�ͻ��������ӡ�\n";
//
//        char buffer[1024] = { 0 };
//        int bytes;
//        while (true)
//        {
//            memset(buffer, 0, sizeof(buffer));
//            bytes = recv(clientSocket, buffer, sizeof(buffer), 0);
//            if (bytes > 0)
//            {
//                std::cout << "�յ���Ϣ: " << buffer << std::endl;
//            }
//            else if (bytes == 0)
//            {
//                cout << "�ͻ����ѶϿ����ӡ�\n" << endl;
//                break;
//            }
//            else
//            {
//                cout << "���ճ���" << endl;
//                break;
//            }
//        }
//        closesocket(clientSocket);
//        closesocket(serverSocket);
//    }
//    else
//    {
//        // �ͻ���
//        SOCKET sock = socket(AF_INET, SOCK_STREAM, 0);
//        sockaddr_in serverAddr;
//        serverAddr.sin_family = AF_INET;
//        serverAddr.sin_port = htons(8888);
//        inet_pton(AF_INET, "127.0.0.1", &serverAddr.sin_addr);
//
//        connect(sock, (sockaddr*)&serverAddr, sizeof(serverAddr));
//        std::string msg;
//        while (true)
//        {
//            std::cout << "����0�˳��������������ݷ���: ";
//            std::getline(std::cin, msg);
//            if (msg == "0") {
//                break;
//            }
//            send(sock, msg.c_str(), msg.size(), 0);
//        }
//        closesocket(sock);
//    }
//
//    WSACleanup();
//    return 0;
//}
