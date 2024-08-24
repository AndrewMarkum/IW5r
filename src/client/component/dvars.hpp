#pragma once

#include "game/game.hpp"

namespace dvars
{
	namespace disable
	{
		void set_bool(const std::string& name);
		void set_float(const std::string& name);
		void set_int(const std::string& name);
		void set_string(const std::string& name);
	}

	namespace override
	{
		void register_bool(const std::string& name, bool value, const unsigned int flags);
		void register_float(const std::string& name, float value, float min, float max, const unsigned int flags);
		void register_int(const std::string& name, int value, int min, int max, const unsigned int flags);
		void register_string(const std::string& name, const std::string& value, const unsigned int flags);
		void register_vec2(const std::string& name, float x, float y, float min, float max, const unsigned int flags);
		void register_vec3(const std::string& name, float x, float y, float z, float min, float max, const unsigned int flags);
		void register_enum(const std::string& name, /*const char* const* value_list, int default_index,*/ const unsigned int flags);

		void set_bool(const std::string& name, bool boolean);
		void set_float(const std::string& name, float fl);
		void set_int(const std::string& name, int integer);
		void set_string(const std::string& name, const std::string& string);
		void set_from_string(const std::string& name, const std::string& value);
	}

	namespace callback
	{
		void on_new_value(const std::string& name, const std::function<void(game::dvar_value* value)> callback);

		void on_register(const std::string& name, const std::function<void()>& callback);
	}

	void dvar_set_bool(game::dvar_t* dvar, bool boolean);
	void dvar_set_float(game::dvar_t* dvar, float fl);
	void dvar_set_int(game::dvar_t* dvar, int integer);
	void dvar_set_string(game::dvar_t* dvar, const char* string);
}
