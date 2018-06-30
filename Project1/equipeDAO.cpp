#include "equipeDAO.h"

using namespace std;

equipeDAO::equipeDAO()
{
}

void equipeDAO::criarEquipeDAO(int identificacaoEquipe, int numProfissionais, int custoHoraEquipe)
{
	string log;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("INSERT INTO equipe (identificacaoEquipe, numProfissionais, custoHoraEquipe) VALUES (?,?,?)");

		preparedStatement->setInt(1, identificacaoEquipe);
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

void equipeDAO::deletarEquipeDAO(int identificacaoEquipe)
{
	string log;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("DELETE FROM equipe WHERE identificacaoEquipe = ?");

		preparedStatement->setInt(1, identificacaoEquipe);
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

void equipeDAO::editarEquipeDAO(int identificacaoEquipe, int numProfissionais, int custoHoraEquipe)
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
preparedStatement->setInt(3, identificacaoEquipe);

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
	temp = new equipe(resultSet->getInt(1), resultSet->getInt(2), resultSet->getInt(3));
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

void equipeDAO::criarEquipeSaidaDAO(int identificacaoEquipe, string data, int numOS) {
	string log;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("INSERT INTO equipe_saida (identificacaoEquipe, data, numOS) VALUES (?,?,?)");
		
		preparedStatement->setInt(1, identificacaoEquipe);
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