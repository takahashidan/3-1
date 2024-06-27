#include <cstring>
#include <iostream>
#include <list>
#include <vector>

void printStations(const std::list<const char*>& stations) {
	for (const char* station : stations) {
		std::cout << station << " ";
	}
	std::cout << std::endl;
}

int main() {

	const char* yamanote[] = {"Tokyo",  "Kanda",     "Akihabara", "Okachimachi",  "Ueno",       "Uguisudani",   "Nippori",   "Tabata",   "Komagome", "Sugamo",
	                          "Otsuka", "Ikebukuro", "Mejiro",    "Takadanobaba", "Shin-Okubo", "Shinjuku",     "Yoyogi",    "Harajuku", "Shibuya",  "Ebisu",
	                          "Meguro", "Gotanda",   "Osaki",     "Shinagawa",    "Tamachi",    "Hamamatsucho", "Shimbashi", "Yurakucho"};

	std::list<const char*> yamanote1970(yamanote, yamanote + sizeof(yamanote) / sizeof(const char*));

	auto it = std::find(yamanote1970.begin(), yamanote1970.end(), "Nippori");
	if (it != yamanote1970.end()) {
		++it;
		yamanote1970.insert(it, "Nishi-Nippori");
	}

	std::cout << "1970‚Ì‰w•\:" << std::endl;
	printStations(yamanote1970);

	std::list<const char*> yamanote2019 = yamanote1970;

	std::cout << "2019”N‚Ì‰w•\:" << std::endl;
	printStations(yamanote2019);

	it = std::find(yamanote2019.begin(), yamanote2019.end(), "Shinagawa");
	if (it != yamanote2019.end()) {
		++it;
		yamanote2019.insert(it, "Takanawa Gateway");
	}

	std::cout << "2022”N‚Ì‰w•\:" << std::endl;
	printStations(yamanote2019);

	return 0;
}