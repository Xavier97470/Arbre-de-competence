#ifndef SkillTree_ XA _
#define SkillTree_ XA _

#include <iostream>

using namespace std;

class Arbre {
	private:
		string skillname;
		int skillpoint;
		Arbre* rightChild;
		Arbre* leftChild;
		int nodeCounter;
		int treeCounter;

	public:

		Arbre();


		void setName(string name);
		void setLeftChild(Arbre* LeftChild);
		void setRightChild(Arbre* RightChild);
		void levelUpSkill();
		void reset();
		int getDepth();
		void display();

		~Arbre();





};






#endif /* SkillTree_VosInitiales_HPP_ */
