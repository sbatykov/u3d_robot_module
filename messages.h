/*
* File: messages.h
* Author: m79lol, iskinmike
*
*/

void initConnection(int Port, std::string IP);
void closeSocketConnection();

double extractString(std::string str, char first, char second);

unsigned int PostmanThread(); //Thread

double extractObj_id(std::string str);
double extractX(std::string str);
double extractY(std::string str);

std::string extractMessage(std::string str);
int extractUniq_Id(std::string str);

void testStringSuccess(std::string str);
std::string createMessage(std::string params);

void initWorld(int x, int y, int z);
void destroyWorld();

double createRobot(int x, int y, int d_x, int d_y, int d_z, std::string color);
void deleteRobot(int obj_id);

void moveRobot(int obj_id, int x, int y, int speed);
void colorRobot(int obj_id, std::string color);

double coordsRobotX(int obj_id);
double coordsRobotY(int obj_id);