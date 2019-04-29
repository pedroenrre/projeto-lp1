#ifndef __REPTILEXOTICO_H__
#define __REPTILEXOTICO_H__

#include <reptil.h>
#include <animalexotico.h>

/// Classe ReptilExotico
/**
 * Detailed description starts here.
 */
class ReptilExotico : public Reptil, AnimalExotico {
	public:
		/// Construtor de ReptilExotico sem parâmetros.
		/**
		*  Detailed description starts here.
		*/
		ReptilExotico();
		/// Destrutor de ReptilExotico.
		/**
		*  A more elaborate description of the destructor.
		*/
		~ReptilExotico();
};

#endif // __REPTILEXOTICO_H__