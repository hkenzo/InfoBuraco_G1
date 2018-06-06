#ifndef MYSQLDAO_H
#define MYSQLDAO_H
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
#include <iostream>
using namespace std;
//Begin section for file MySQLDAO.h
//TODO: Add definitions that you want preserved
//End section for file MySQLDAO.h




//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class MySQLDAO {
private:
	sql::Driver * driver;
	sql::Connection * conn;
	string url;
	string user;
	string pass;
	static MySQLDAO * instance;
	MySQLDAO();
	//Begin section for MySQLDAO
	//TODO: Add attributes that you want preserved
	//End section for MySQLDAO



public:

	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"




	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	virtual ~MySQLDAO();



	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	static MySQLDAO* getInstance();



	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	sql::Connection * getConnection();

};  //end class MySQLDAO



#endif
