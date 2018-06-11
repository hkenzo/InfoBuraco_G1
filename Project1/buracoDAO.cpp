#include "buracoDAO.h"



buracoDAO::buracoDAO()
{
};

void criarBuracoDAO(string nomRua, int numRua, string posRua, int tamanho, string regional, string tipoCom, string Com, string nomCid, string dataCont, string horaCont, int numReclamacoes, int statusBuraco, int prioridade, int numBuraco) {
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("INSERT INTO buraco (nomRua,numBuraco,tamanho,posicao,regional,  canalCidadao,dadoCanal,nomeCidadao,dataHora,  numBuraco,prioridade,numReclamacoes,statusBuraco,reclamacao,login) VALUES (?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)");
		preparedStatement->setString(1, nomRua);
		preparedStatement->setInt(2, numRua);
		preparedStatement->setInt(3, tamanho);
		preparedStatement->setString(4, posRua);
		preparedStatement->setString(5, regional);

		preparedStatement->setString(6, tipoCom);
		preparedStatement->setString(7, Com);
		preparedStatement->setString(8, nomCid);
		preparedStatement->setString(9, dataCont + horaCont);

		preparedStatement->setInt(10, numBuraco);
		preparedStatement->setInt(11, prioridade);
		preparedStatement->setInt(12, numReclamacoes);
		preparedStatement->setInt(13, statusBuraco);
		preparedStatement->setString(14, "00000");
		preparedStatement->setString(15, "login");

		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}
