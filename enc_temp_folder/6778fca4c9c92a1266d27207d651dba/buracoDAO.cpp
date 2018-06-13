#include "buracoDAO.h"
#include "ServicoComunicacao2.h"


buracoDAO::buracoDAO(string nomRua, int numRua, string posRua, int tamanho, string regional, string tipoCom, string Com, string nomCid, string dataHora, int numReclamacoes, int statusBuraco, int prioridade, int numBuraco, string reclamacao)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		
		//preparedStatement = connection->prepareStatement("INSERT INTO buraco(numBuraco, nomeRua, numeroRua, tamanho, posicao, regional, prioridade, numReclamacoes, statusBuraco, nomeCidadao, canalCidadao, dadoCanal, dataHora, reclamacao) VALUES(0, 2, 3, 4, 5, 6, 7, 8, 9, 0, 12, 12, 23, 33);");
		// quando numBur = 0 ->db coloca numeração sozinho
		preparedStatement = connection->prepareStatement("INSERT INTO buraco (numBuraco, nomeRua,  numeroRua) VALUES(?,?,?)");// , tamanho, posicao, regional, prioridade, numReclamacoes, statusBuraco, nomeCidadao, canalCidadao, dadoCanal, dataHora, reclamacao) VALUES(, ? , ? , ? , ? , ? , ? , ? , ? , ? , ? , ? , ? ); ");
			
		preparedStatement->setInt(1, numBuraco); 
		preparedStatement->setString(2, posRua);
		preparedStatement->setInt(3, numRua);
	//	preparedStatement->setInt(4, tamanho);
	//	preparedStatement->setString(5, posRua);
	//	preparedStatement->setString(6, regional);

	//	preparedStatement->setInt(7, prioridade);
	//	preparedStatement->setInt(8, numReclamacoes);
	//	preparedStatement->setInt(9, statusBuraco);

	//	preparedStatement->setString(10, tipoCom);
	//	preparedStatement->setString(11, Com);
	//	preparedStatement->setString(12, nomCid);
	//	preparedStatement->setString(13, dataHora);

	//	preparedStatement->setString(14, reclamacao);
		//preparedStatement->setString(15, "estojo"); como login é pk, não usa daqui. deve pegar da tabela de regional
		

		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
};

//void criarBuracoDAO(string nomRua, int numRua, string posRua, int tamanho, string regional, string tipoCom, string Com, string nomCid, string dataCont, string horaCont, int numReclamacoes, int statusBuraco, int prioridade, int numBuraco) {

//}
