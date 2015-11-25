#ifndef __LUA_BASE_HEAD__
#define __LUA_BASE_HEAD__

#include "../sdk/lua-5.2.1/src/lua.hpp"
#include "type_mogo.h"
#include "lua_mogo.h"
//#include "event.h"

extern int LuaOpenMogoLibCBase (lua_State *L);
extern int CreateEntityFromDbID(lua_State* L);

#endif

