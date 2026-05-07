// Class: GeneralTaskSuperVIPLoginListener


/* GeneralTaskSuperVIPLoginListener::~GeneralTaskSuperVIPLoginListener() */

void __thiscall
GeneralTaskSuperVIPLoginListener::~GeneralTaskSuperVIPLoginListener
          (GeneralTaskSuperVIPLoginListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670fcf0;
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskSuperVIPLoginListener::~GeneralTaskSuperVIPLoginListener() */

void __thiscall
GeneralTaskSuperVIPLoginListener::~GeneralTaskSuperVIPLoginListener
          (GeneralTaskSuperVIPLoginListener *this)

{
  ~GeneralTaskSuperVIPLoginListener(this);
  AK::FreeHook(this);
  return;
}


/* GeneralTaskSuperVIPLoginListener::GeneralTaskSuperVIPLoginListener() */

void __thiscall
GeneralTaskSuperVIPLoginListener::GeneralTaskSuperVIPLoginListener
          (GeneralTaskSuperVIPLoginListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670fcf0;
  return;
}


/* GeneralTaskSuperVIPLoginListener::StaticNew() */

GeneralTaskSuperVIPLoginListener * GeneralTaskSuperVIPLoginListener::StaticNew(void)

{
  GeneralTaskSuperVIPLoginListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskSuperVIPLoginListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskSuperVIPLoginListener::StaticClassInit() */

void GeneralTaskSuperVIPLoginListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskSuperVIPLoginListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a8a5e4,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskSuperVIPLoginListener::StaticGetClass() */

long * GeneralTaskSuperVIPLoginListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskSuperVIPLoginListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskSuperVIPLoginListener::GetClass() const */

long * GeneralTaskSuperVIPLoginListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskSuperVIPLoginListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskSuperVIPLoginListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskSuperVIPLoginListener::RegisterListener
          (GeneralTaskSuperVIPLoginListener *this,GeneralTask *param_1)

{
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *pPVar2;
  long *plVar3;
  
  Sexy::Mesh::SetListener((Mesh *)this,(MeshListener *)param_1);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar1 = PlayerInfo::IsMonthlyCardActivated(pPVar2,4);
  if (cVar1 != '\0') {
    plVar3 = *(long **)(this + 0x10);
    if (*(int *)((long)plVar3 + 0x14) != 3) {
      *(undefined4 *)(plVar3 + 2) = 1;
      *(undefined4 *)((long)plVar3 + 0x14) = 2;
    }
    (**(code **)(*plVar3 + 0x60))();
  }
  return;
}

