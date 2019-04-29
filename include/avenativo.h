#ifndef __AVENATIVO_H__
#define __AVENATIVO_H__

#include <ave.h>
#include <animalnativo.h>

/// Classe AveNativo
/**
 * Detailed description starts here.
 */
class AveNativo : public Ave, AnimalNativo {
	public:
		/// Construtor de AveNativo sem parâmetros.
		/**
		*  Detailed description starts here.
		*/
		AveNativo();
		/// Destrutor de AveNativo.
		/**
		*  A more elaborate description of the destructor.
		*/
		~AveNativo();
};

#endif // __AVENATIVO_H__