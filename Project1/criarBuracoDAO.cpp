#include "criarBuracoDAO.h"



criarBuracoDAO::criarBuracoDAO()
{
}

void criarBuracooDAO(string nomRua, string numRua, string posRua, string tamanho, string regional, string tipoCom, string Com, string nomCid, string dataCont, string horaCont) {

	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("INSERT INTO buraco (nomRUa,numBuraco,tamanho,posicao,regional,  canalCidadao,dadoCanal,nomeCidadao,dataHora,  numBuraco,prioridade,numReclamacoes,statusBuraco,reclamacao,login) VALUES (?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)");
		preparedStatement->setString(1, nomRua);
		preparedStatement->setString(2, numRua);
		preparedStatement->setString(3, tamanho);
		preparedStatement->setString(4, posRua);
		preparedStatement->setString(5, regional);

		preparedStatement->setString(6, tipoCom);
		preparedStatement->setString(7, Com);
		preparedStatement->setString(8, nomCid);
		preparedStatement->setString(9, dataCont+horaCont);

		preparedStatement->setString(10 tipoCom);
		preparedStatement->setString(11, Com);
		preparedStatement->setString(12, nomCid);
		preparedStatement->setString(13, dataCont + horaCont);
		preparedStatement->setString(14, tipoCom);
		preparedStatement->setString(15, Com);
		
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
};