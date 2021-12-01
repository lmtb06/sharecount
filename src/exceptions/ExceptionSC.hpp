#include <exception>
#include <string>

/**
 * @brief Classe qui represente une exception, elle est le type d'exception que les classes de l'application lance lorsqu'il y a un problème
 *
 */
class ExceptionSC : public std::exception
{
	/**
	 * @brief Le message de l'exception
	 *
	 */
	std::string message;

public:
	/**
	 * @brief Construit un nouveau ExceptionSC avec le message message
	 *
	 * @param message le message de l'exception
	 */
	ExceptionSC(const std::string &message);

	/**
	 * @brief Donne le motif de l'exception
	 *
	 * @return le motif de l'exception (const char*)
	 */
	const char *what() const throw();
};
