#include "OSDAO.h"


OSDAO::OSDAO()
{


}

OSDAO::OSDAO(int numOS, int estimativaHoras, int estimativaEquipamento, int estimativaMaterial, int statusOS, int numBuraco)
{
	
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();

		// quando numBur = 0 ->db coloca numeração sozinho
		preparedStatement = connection->prepareStatement("INSERT INTO OS (estimativaHoras,estimativaEquipamento,estimativaMaterial,numOS,statusOS,numBuraco)	VALUES(?,?,?,?,?,?); ");

		preparedStatement->setInt(1, estimativaHoras);
		preparedStatement->setInt(2, estimativaEquipamento);
		preparedStatement->setInt(3, estimativaMaterial);
		preparedStatement->setInt(4, numOS);
		preparedStatement->setInt(5, statusOS);
		preparedStatement->setInt(6, numBuraco);

		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

//OSDAO::setStatus(int status, int numOS)
//{

//}