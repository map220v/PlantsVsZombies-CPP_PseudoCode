// Class: PlantFamilyUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFamilyUI::~PlantFamilyUI() */

void __thiscall PlantFamilyUI::~PlantFamilyUI(PlantFamilyUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06977d50;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"LUA_Packages");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PlantFamily");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effect_PlantFamily");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_Plant");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigPlant");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_LevelUp");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFamilyUI::~PlantFamilyUI() */

void __thiscall PlantFamilyUI::~PlantFamilyUI(PlantFamilyUI *this)

{
  ~PlantFamilyUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFamilyUI::InitView(int) */

void __thiscall PlantFamilyUI::InitView(PlantFamilyUI *this,int param_1)

{
  LuaFunctionCallback *pLVar1;
  undefined8 uVar2;
  bool local_31;
  string asStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_31 = false;
  local_8 = ___stack_chk_guard;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  pLVar1 = (LuaFunctionCallback *)Lua::LuaFunctionCallback::Begin((LuaFunctionCallback *)&local_28);
  pLVar1 = (LuaFunctionCallback *)
           Lua::LuaFunctionCallback::PushParamUserTypePtr(pLVar1,this,"PlantFamilyUI");
  pLVar1 = (LuaFunctionCallback *)Lua::LuaFunctionCallback::PushParamInt(pLVar1,(long)param_1);
  std::string::string(asStack_30,"ShowPlantFamilyMain");
  Lua::LuaFunctionCallback::Execute(pLVar1,asStack_30,1,&local_31);
  std::string::~string(asStack_30);
  nop();
  if (local_31 != false) {
    uVar2 = Lua::LuaFunctionCallback::PopParamUserTypePtr((LuaFunctionCallback *)&local_28);
    *(undefined8 *)(this + 0xd8) = uVar2;
  }
  Lua::LuaFunctionCallback::End((LuaFunctionCallback *)&local_28);
  Lua::LuaFunctionCallback::~LuaFunctionCallback((LuaFunctionCallback *)&local_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFamilyUI::PlantFamilyUI(int) */

void __thiscall PlantFamilyUI::PlantFamilyUI(PlantFamilyUI *this,int param_1)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR_GetClass_06977d50;
  pLVar1 = gLawnApp;
  m_type = param_1;
  std::string::string(asStack_10,"LUA_Packages");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PlantFamily");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effect_PlantFamily");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_Plant");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigPlant");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_LevelUp");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  PlantHeadshot::Resize((PlantHeadshot *)this,(TRect *)(gLawnApp + 0x71c));
  InitView(this,m_type);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFamilyUI::CloseView() */

void PlantFamilyUI::CloseView(void)

{
  if (m_type != 1) {
    LawnApp::KillPlantFamilyUI(gLawnApp);
    return;
  }
  GameStateMgr::ShowWorldMap(gGameStateMgr,5,5);
  return;
}

