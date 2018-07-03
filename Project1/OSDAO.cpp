#include "OSDAO.h"


OSDAO::OSDAO()
{


}

OSDAO::OSDAO(int estimativaHoras, int estimativaEquipamento, int estimativaMaterial, int numOS, int statusOS, int numBuraco)
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
};

vector <OS*>* OSDAO::getOS()
{
	string log;
	OS * temp = nullptr;
	vector<OS*> *temp2 = nullptr;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("select estimativaHoras, estimativaEquipamento, estimativaMaterial, numOS, statusOS, numBuraco from OS;");


		resultSet = preparedStatement->executeQuery();

		temp2 = new vector<OS*>();
		while (resultSet->next()) {
			temp = new OS(resultSet->getInt(1), resultSet->getInt(2), resultSet->getInt(3), resultSet->getInt(4), resultSet->getInt(5), resultSet->getInt(6));
			temp2->push_back(temp);
		}
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return temp2;
};

vector <OS*>* OSDAO::getOSEquip(string nome)
{
	string log;
	string nom = nome;
	OS * temp = nullptr;
	vector<OS*> *temp2 = nullptr;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("select estimativaHoras, estimativaEquipamento, estimativaMaterial, numOS, statusOS, numBuraco from OS where numOS in (select numOS from equipe_saida where identificacaoEquipe = ?);");
		preparedStatement->setString(1, nom.c_str());

		resultSet = preparedStatement->executeQuery();

		temp2 = new vector<OS*>();
		while (resultSet->next()) {
			temp = new OS(resultSet->getInt(1), resultSet->getInt(2), resultSet->getInt(3), resultSet->getInt(4), resultSet->getInt(5), resultSet->getInt(6));
			temp2->push_back(temp);
		}
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return temp2;
};
//nao e daqui
vector <OS*>* OSDAO::getOSEquipS(string nome)
{
	string log;
	string nom = nome;
	OS * temp = nullptr;
	vector<OS*> *temp2 = nullptr;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("select numOS, data from saida where numOS in (select numOS from equipe_saida where identificacaoEquipe = ?);");
		preparedStatement->setString(1, nom.c_str());

		resultSet = preparedStatement->executeQuery();

		temp2 = new vector<OS*>();
		while (resultSet->next()) {
			temp = new OS(resultSet->getInt(1), resultSet->getInt(2), resultSet->getInt(3), resultSet->getInt(4), resultSet->getInt(5), resultSet->getInt(6));
			temp2->push_back(temp);
		}
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return temp2;
};

void OSDAO::setStatusD(int status, int numOS)
{
	int numer = numOS;
	int stat = status;
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("UPDATE OS SET statusOS = ? WHERE numOS = ?");

		preparedStatement->setInt(1, stat);
		preparedStatement->setInt(2, numer);
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

