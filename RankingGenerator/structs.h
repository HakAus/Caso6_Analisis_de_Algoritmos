#include <string>

const int NUM_BIRDS = 9;

struct Rank
{
	int ids[2];
	double values[2];
	std::string colorNames[2];
	std::string name;

	Rank(std::string pName, double pInitValue, std::array<std::string, 2> pColorNames)
	{
		name = pName;
		for (int i = 0; i < 2; i++)
		{
			ids[i] = -1;
			values[i] = pInitValue;
			colorNames[i] = pColorNames[i];
		}
	}

	void updateMin(int pId, double pValue){
		int replacementIndex = 0;
		double largest = std::numeric_limits<double>::min();
		for (int index = 0; index < 2; index++) {
			if (pValue < values[index]){
				ids[index] = pId;
				values[index] = pValue;
				break;
			}
		}
	}

	void updateMax(int pId, double pValue){
		int oldId = 0;
		double oldValue = 0.0;
		for (int index = 0; index < 2; index++) {

			if (pValue > values[index]){
				oldValue = values[index];
				oldId= ids[index];

				values[index] = pValue;
				ids[index] = pId;

				pValue = -1;	// Para no agregarlo mas			
			}
			else if (oldValue > values[index]) {
				double oldValueTmp = values[index];
				int oldIdTmp = ids[index];

				values[index] = oldValue;
				ids[index] = oldId;

				oldValue = oldValueTmp;
				oldId = oldIdTmp;
			}
		}
	}

	void print() {
		printf("Ranking for %s\n",name.c_str());
		for (int index = 0; index < 2; index++) {
			printf("id= %d, value= %f, color= %s\n",ids[index],values[index],colorNames[index].c_str());
		}
	}
};

struct Log
{
	int id;
	double distance;
	double speed;
};

struct Bird
{
	int id = -1;
	double distance = 0.0;
	double maxSpeed = std::numeric_limits<double>::min();
	double minSpeed = std::numeric_limits<double>::max();
};

struct Flock
{
	Bird birds[NUM_BIRDS] = {Bird()};
	Rank topFurthestDistance = Rank("furthest", std::numeric_limits<double>::min(), {"ROJO","ROJO CLARO"});
	Rank topShortestDistance = Rank("shortest", std::numeric_limits<double>::max(), {"AMARILLO", "AMARILLO CLARO"});
	Rank topFastest = Rank("fastest",std::numeric_limits<double>::min(), {"VERDE","VERDE CLARO"});
	Rank topSlowest = Rank("slowest", std::numeric_limits<double>::max(), {"AZUL", "AZUL CLARO"});
};
