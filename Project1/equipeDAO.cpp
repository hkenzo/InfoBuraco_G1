#include "equipeDAO.h"

using namespace std;

equipeDAO::equipeDAO()
{
}

void equipeDAO::criarEquipeDAO(string identificacaoEquipe, int numProfissionais, int custoHoraEquipe)
{
	string log;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("INSERT INTO equipe (identificacaoEquipe, numProfissionais, custoHoraEquipe) VALUES (?,?,?)");

		preparedStatement->setString(1, identificacaoEquipe.c_str());
		preparedStatement->setInt(2, numProfissionais);
		preparedStatement->setInt(3, custoHoraEquipe);
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

void equipeDAO::deletarEquipeDAO(string identificacaoEquipe)
{
	string log;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("DELETE FROM equipe WHERE identificacaoEquipe = ?");

		preparedStatement->setString(1, identificacaoEquipe.c_str());
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

void equipeDAO::editarEquipeDAO(string identificacaoEquipe, int numProfissionais, int custoHoraEquipe)
{
string log;
sql::Connection * connection;
sql::PreparedStatement * preparedStatement;
sql::ResultSet *resultSet;
try {
MySQLDAO* mysqldao = MySQLDAO::getInstance();
connection = mysqldao->getConnection();
preparedStatement = connection->prepareStatement("UPDATE equipe SET numProfissionais = ?, custoHoraEquipe = ? WHERE identificacaoEquipe = ?");

preparedStatement->setInt(1, numProfissionais);
preparedStatement->setInt(2, custoHoraEquipe);
preparedStatement->setString(3, identificacaoEquipe.c_str());

resultSet = preparedStatement->executeQuery();
}
catch (sql::SQLException e)
{
connection->close();
log = e.what();
}
}

vector<equipe*>* equipeDAO::buscarEquipe()
{
string log;
equipe * temp = nullptr;
vector<equipe*> *temp2 = nullptr;
sql::Connection * connection;
sql::PreparedStatement * preparedStatement;
sql::ResultSet *resultSet;
try {
MySQLDAO* mysqldao = MySQLDAO::getInstance();
connection = mysqldao->getConnection();
preparedStatement = connection->prepareStatement("select identificacaoEquipe, numProfissionais, custoHoraEquipe from equipe");

resultSet = preparedStatement->executeQuery();

temp2 = new vector<equipe*>();
while (resultSet->next()) {
	temp = new equipe(resultSet->getString(1).c_str(), resultSet->getInt(2), resultSet->getInt(3));
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

void equipeDAO::criarEquipeSaidaDAO(string identificacaoEquipe, string data, int numOS) {
	string log;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("INSERT INTO equipe_saida (identificacaoEquipe, data, numOS) VALUES (?,?,?)");
		
		preparedStatement->setString(1, identificacaoEquipe.c_str());
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

vector<equipe*>* equipeDAO::buscarEquipeSaida(int num, string dat)
{
	int id = num;
	string data = dat;
	string log;
	equipe * temp = nullptr;
	vector<equipe*> *temp2 = nullptr;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("select identificacaoEquipe, numProfissionais, custoHoraEquipe from equipe where identificacaoEquipe in (select identificacaoEquipe from equipe_saida where data = ? and numOS = ?)");

		preparedStatement->setString(1, data.c_str());
		preparedStatement->setInt(2, id);

		resultSet = preparedStatement->executeQuery();

		temp2 = new vector<equipe*>();
		while (resultSet->next()) {
			temp = new equipe(resultSet->getString(1).c_str(), resultSet->getInt(2), resultSet->getInt(3));
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

void equipeDAO::setHorasTrabalho(int horas, int  id, string data, string idE)
{
	string log;
	int h = horas;
	string ie = idE;
	int i = id;
	string d = data;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("UPDATE equipe_saida SET horasTrabalhadas = ? WHERE numOS = ? and identificacaoEquipe = ? and data = ?");

		preparedStatement->setInt(1, h);
		preparedStatement->setInt(2, i);
		preparedStatement->setString(3, ie.c_str());
		preparedStatement->setString(4, d.c_str());

		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}