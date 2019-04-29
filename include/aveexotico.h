#ifndef __AVEEXOTICO_H__
#define __AVEEXOTICO_H__

#include <ave.h>
#include <animalexotico.h>

/// Classe AveExotico
/**
 * Detailed description starts here.
 */
class AveExotico : public Ave, AnimalExotico {
	public:
		/// Construtor de AveExotico sem parâmetros.
		/**
		*  Detailed description starts here.
		*/
		AveExotico();
		/// Destrutor de AveExotico.
		/**
		*  A more elaborate description of the destructor.
		*/
		~AveExotico();
};

#endif // __AVEEXOTICO_H__