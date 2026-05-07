// Class: GeneralTaskAccumLoginListener


/* GeneralTaskAccumLoginListener::~GeneralTaskAccumLoginListener() */

void __thiscall
GeneralTaskAccumLoginListener::~GeneralTaskAccumLoginListener(GeneralTaskAccumLoginListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670e1f0;
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskAccumLoginListener::~GeneralTaskAccumLoginListener() */

void __thiscall
GeneralTaskAccumLoginListener::~GeneralTaskAccumLoginListener(GeneralTaskAccumLoginListener *this)

{
  ~GeneralTaskAccumLoginListener(this);
  AK::FreeHook(this);
  return;
}


/* GeneralTaskAccumLoginListener::GeneralTaskAccumLoginListener() */

void __thiscall
GeneralTaskAccumLoginListener::GeneralTaskAccumLoginListener(GeneralTaskAccumLoginListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670e1f0;
  return;
}


/* GeneralTaskAccumLoginListener::StaticNew() */

GeneralTaskAccumLoginListener * GeneralTaskAccumLoginListener::StaticNew(void)

{
  GeneralTaskAccumLoginListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskAccumLoginListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskAccumLoginListener::StaticClassInit() */

void GeneralTaskAccumLoginListener::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"GeneralTaskAccumLoginListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a8221c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskAccumLoginListener::StaticGetClass() */

long * GeneralTaskAccumLoginListener::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = GeneralTaskListener::StaticGetClass();
  (*pcVar3)(plVar1,"GeneralTaskAccumLoginListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskAccumLoginListener::GetClass() const */

long * GeneralTaskAccumLoginListener::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = GeneralTaskListener::StaticGetClass();
  (*pcVar3)(plVar1,"GeneralTaskAccumLoginListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskAccumLoginListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskAccumLoginListener::RegisterListener
          (GeneralTaskAccumLoginListener *this,GeneralTask *param_1)

{
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Mesh::SetListener((Mesh *)this,(MeshListener *)param_1);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_10,"AccumLoginTask");
  cVar1 = PlayerInfo::IsFirstPopToday(this_01,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x58))(this,1);
  }
  (**(code **)(**(long **)(this + 0x10) + 0x60))(*(long **)(this + 0x10));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

