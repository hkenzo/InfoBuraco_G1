#include "equipamentoDAO.h"

using namespace std;

equipamentoDAO::equipamentoDAO()
{
}

void equipamentoDAO::criarEquipamentoDAO(string tipoEquipamento, int id, int custoHoraEquipamento)
{
	string log;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("INSERT INTO equipamento (tipoEquipamento, custoHoraEquipamento) VALUES (?,?)");
		preparedStatement->setString(1, tipoEquipamento.c_str());
		preparedStatement->setInt(2, custoHoraEquipamento);
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

void equipamentoDAO::deletarEquipamentoDAO(int id)
{
	string log;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("DELETE FROM equipamento WHERE sequencialEquipamento = ?");

		preparedStatement->setInt(1, id);
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

void equipamentoDAO::editarEquipamentoDAO(int id, int custoHoraEquipamento)
{
	string log;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("UPDATE equipamento SET custoHoraEquipamento = ? WHERE sequencialEquipamento = ?");

		preparedStatement->setInt(1, custoHoraEquipamento);
		preparedStatement->setInt(2, id);

		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

vector<equipamento*>* equipamentoDAO::buscarEquipamento()
{
	string log;
	equipamento * temp = nullptr;
	vector<equipamento*> *temp2 = nullptr;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("select tipoEquipamento, sequencialEquipamento, custoHoraEquipamento from equipamento");

		resultSet = preparedStatement->executeQuery();

		temp2 = new vector<equipamento*>();
		while (resultSet->next()) {
			temp = new equipamento(resultSet->getString(1), resultSet->getInt(2), resultSet->getInt(3));
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

