#include "mobilizacaoDAO.h"

using namespace std;

mobilizacaoDAO::mobilizacaoDAO()
{
}

void mobilizacaoDAO::criarMobilizacaoDAO(int custoKM )
{
	string log;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("INSERT INTO mobilizacao (custoKM) VALUES (?)");

		preparedStatement->setInt(1, custoKM);
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

void mobilizacaoDAO::deletarMobilizacaoDAO(int idMob)
{
	string log;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("DELETE FROM mobilizacao WHERE sequencialMobilizacao = ?");

		preparedStatement->setInt(1, idMob);
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

void mobilizacaoDAO::alterarMobilizacaoDAO(int custoKM, int idMob)
{
	string log;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("UPDATE mobilizacao SET custoKM = ? WHERE sequencialMobilizacao = ?");
		preparedStatement->setInt(1, custoKM);
		preparedStatement->setInt(2, idMob);

		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

vector<mobilizacao*>* mobilizacaoDAO::buscarMobilizacao()
{
	string log;
	mobilizacao * temp = nullptr;
	vector<mobilizacao*> *temp2 = nullptr;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("select custoKM, sequencialMobilizacao from mobilizacao");

		resultSet = preparedStatement->executeQuery();

		temp2 = new vector<mobilizacao*>();
		while (resultSet->next()) {
			temp = new mobilizacao(resultSet->getInt(1), resultSet->getInt(2));
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

void mobilizacaoDAO::criarMobilizacaoSaidaDAO(int sequencial, string data, int numOS) {
	string log;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("INSERT INTO mobilizacao_saida (sequencialMobilizacao, data, numOS) VALUES (?,?,?)");
		
		preparedStatement->setInt(1, sequencial);
		preparedStatement->setString(2, data.c_str());
		preparedStatement->setInt(3, numOS);
		
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

vector<mobilizacao*>* mobilizacaoDAO::buscarMobilizacaoSaida(int num, string dat)
{
	int numer = num;
	string data = dat;

	string log;
	mobilizacao * temp = nullptr;
	vector<mobilizacao*> *temp2 = nullptr;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("select custoKM, sequencialMobilizacao from mobilizacao where sequencialMobilizacao in (select sequencialMobilizacao from mobilizacao_saida where numOS = ? and data = ?)");

		preparedStatement->setInt(1, numer);
		preparedStatement->setString(2, data.c_str());

		resultSet = preparedStatement->executeQuery();

		temp2 = new vector<mobilizacao*>();
		while (resultSet->next()) {
			temp = new mobilizacao(resultSet->getInt(1), resultSet->getInt(2));
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

void mobilizacaoDAO::setDuracaoMobilizacao(int dur, int  id, string data, int idE)
{
	string log;
	int h = dur;
	int ie = idE;
	int i = id;
	string d = data;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("UPDATE mobilizacao_saida SET duracao = ? WHERE numOS = ? and sequencialMobilizacao = ? and data = ?;");

		preparedStatement->setInt(1, h);
		preparedStatement->setInt(2, i);
		preparedStatement->setInt(3, ie);
		preparedStatement->setString(4, d.c_str());

		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}