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
//    // 选择角色：1=服务器，2=客户端
//    int role;
//    std::cout << "输入1作为服务器，2作为客户端: ";
//    std::cin >> role;
//
//    if (role == 1) {
//        // 服务器
//        SOCKET serverSocket = socket(AF_INET, SOCK_STREAM, 0);
//        sockaddr_in serverAddr;
//        serverAddr.sin_family = AF_INET;
//        serverAddr.sin_addr.s_addr = INADDR_ANY;
//        serverAddr.sin_port = htons(8888);
//
//        bind(serverSocket, (sockaddr*)&serverAddr, sizeof(serverAddr));
//        listen(serverSocket, 1);
//
//        std::cout << "服务器已启动，等待连接...\n";
//        SOCKET clientSocket = accept(serverSocket, NULL, NULL);
//        std::cout << "客户端已连接。\n";
//
//        char buffer[1024] = { 0 };
//        int bytes;
//        while (true)
//        {
//            memset(buffer, 0, sizeof(buffer));
//            bytes = recv(clientSocket, buffer, sizeof(buffer), 0);
//            if (bytes > 0)
//            {
//                std::cout << "收到消息: " << buffer << std::endl;
//            }
//            else if (bytes == 0)
//            {
//                cout << "客户端已断开连接。\n" << endl;
//                break;
//            }
//            else
//            {
//                cout << "接收出错" << endl;
//                break;
//            }
//        }
//        closesocket(clientSocket);
//        closesocket(serverSocket);
//    }
//    else
//    {
//        // 客户端
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
//            std::cout << "输入0退出，输入其他内容发送: ";
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
