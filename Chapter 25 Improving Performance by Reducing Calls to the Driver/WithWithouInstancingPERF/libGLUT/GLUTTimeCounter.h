
/**********************************************************************\
* AUTHOR : HILLAIRE S�bastien
*
* MAIL   : hillaire_sebastien@yahoo.fr
* SITE   : sebastien.hillaire.free.fr
*
*	You are free to totally or partially use this file/code.
* If you do, please credit me in your software or demo and leave this
* note.
*	Share your work and your ideas as much as possible!
\*********************************************************************/



#ifndef GLUT_TIME_COUNTER
#define GLUT_TIME_COUNTER


#include "GL\glut.h"


/**
 *	Classe permettant de g�rer le temps �couler depuis le lancement de l'application ou depuis
 * le dernier reset effectu�.
 *
 * @author Hillaire S�bastien.
 */
class GLUTTimeCounter
{
	private:

		/**
		 * Le temps auquel nous avons effecteur un reset du compteur.
		 */
		int lastResetTime;

	protected:

	public:

		/**
		 * Constructeur
		 */
		GLUTTimeCounter();

		/**
		 * Destructeur
		 */
		~GLUTTimeCounter();

		/**
		 *	Remet � z�ro le conteur de temps.
		 */
		void reset();

		/**
		 *	Renvoie le temps �coul� depuis la derni�re mise a z�ro du compteur de temps.
		 *
		 * @return le temps �coul� en milliseconde au format int32.
		 */
		int getElapsedTime();

		/**
		 *	Renvoie le temps �coul� depuis la derni�re mise a z�ro du compteur de temps.
		 *
		 * @return le temps �coul� en milliseconde au format float.(en interne on gere le temps en int32)
		 */
		float getElapsedTimef();

		/**
		 *	Renvoie le temps �coul� depuis le lancement de l'application.
		 *
		 * @return le temps �coul� en milliseconde au format int32.
		 */
		int getElapsedTimeSinceAppStart();

		/**
		 *	Renvoie le temps �coul� depuis le lancement de l'application.
		 *
		 * @return le temps �coul� en milliseconde au format float.(en interne on gere le temps en int32)
		 */
		float getElapsedTimeSinceAppStartf();
};

#endif 
