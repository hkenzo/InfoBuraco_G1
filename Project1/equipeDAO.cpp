#include "equipeDAO.h"

using namespace std;

equipeDAO::equipeDAO()
{
}

void equipeDAO::criarEquipeDAO(int identificacaoEquipe, int numProfissionais, int custoHoraEquipe)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
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

void equipeDAO::deletarEquipeDAO(string identificacaoEquipe)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
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
sql::Statement* statement;
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

/*Equipe EquipeDAO::buscarEquipe(string nomemequipe)
{
string log;
Equipe * mequipe = nullptr;
sql::Connection * connection;
sql::Statement* statement;
sql::PreparedStatement * preparedStatement;
sql::ResultSet *resultSet;
try {
MySQLDAO* mysqldao = MySQLDAO::getInstance();
connection = mysqldao->getConnection();
preparedStatement = connection->prepareStatement("SELECT nomemequipe, unidademedida, custo FROM mequipe WHERE nomemequipe = ?");

preparedStatement->setString(1, nomemequipe.c_str());
resultSet = preparedStatement->executeQuery();

if (resultSet->next()) {
mequipe = new Equipe();
mequipe->setNomeEquipe(resultSet->getString(1).c_str());
mequipe->setUnidadeMedida(resultSet->getInt(2));
mequipe->setCusto(resultSet->getInt(3));
}
}
catch (sql::SQLException e)
{
connection->close();
log = e.what();
}
return mequipe;
}*/

