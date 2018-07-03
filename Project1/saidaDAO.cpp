#include "saidaDAO.h"

using namespace std;

saidaDAO::saidaDAO()
{
}

void saidaDAO::criarSaidaDAO(string data, int numOS)
{
	string log;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("INSERT INTO saida (data, numOS) VALUES (?,?)");

		preparedStatement->setString(1, data.c_str());
		preparedStatement->setInt(2, numOS);
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

void saidaDAO::deletarSaidaDAO(string data, int numOS)
{
	string log;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("DELETE FROM saida WHERE numOS = ? and data = ?");

		preparedStatement->setInt(1, numOS);
		preparedStatement->setString(2, data.c_str());
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}



vector<saida*>* saidaDAO::buscarSaida()
{
	string log;
	saida * temp = nullptr;
	vector<saida*> *temp2 = nullptr;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("select data, numOS from saida");

		resultSet = preparedStatement->executeQuery();

		temp2 = new vector<saida*>();
		while (resultSet->next()) {
			temp = new saida(resultSet->getString(1).c_str(), resultSet->getInt(2));
			temp2->push_back(temp);
		}
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return temp2;
}

vector<saida*>* saidaDAO::buscarSaidaEquipe(string nome)
{
	string log;
	string nom = nome;
	saida * temp = nullptr;
	vector<saida*> *temp2 = nullptr;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("select numOS, data from saida where numOS in (select numOS from equipe_saida where identificacaoEquipe = ?);");
		preparedStatement->setString(1, nom.c_str());

		resultSet = preparedStatement->executeQuery();

		temp2 = new vector<saida*>();
		while (resultSet->next()) {
			temp = new saida(resultSet->getString(1).c_str(), resultSet->getInt(2));
			temp2->push_back(temp);
		}
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return temp2;
}