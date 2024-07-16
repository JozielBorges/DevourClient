#pragma once

#include "settings/settings.hpp"



namespace ESP {
	// TEMP FIX #60
	inline app::GameObject__Array* ents_azazel = NULL;
	inline app::Object_1__Array* ents_item;
	inline app::Object_1__Array* ents_goat;

	inline int time_refresh = 100;
	inline int time_counter = 0;

	app::Object_1__Array* RefreshEntList(app::Object_1__Array* ent,const char* className, const char* classNamespace = "");

	void RunPlayersESP();
	void RunGoatsESP();
	void RunItemsESP();
	void RunDemonESP();
	void RunAzazelESP();
}
