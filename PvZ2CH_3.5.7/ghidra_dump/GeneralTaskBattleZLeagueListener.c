// Class: GeneralTaskBattleZLeagueListener


/* GeneralTaskBattleZLeagueListener::~GeneralTaskBattleZLeagueListener() */

void __thiscall
GeneralTaskBattleZLeagueListener::~GeneralTaskBattleZLeagueListener
          (GeneralTaskBattleZLeagueListener *this)

{
  *(undefined ***)this = &PTR_GetClass_067105f0;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskBattleZLeagueListener::~GeneralTaskBattleZLeagueListener() */

void __thiscall
GeneralTaskBattleZLeagueListener::~GeneralTaskBattleZLeagueListener
          (GeneralTaskBattleZLeagueListener *this)

{
  ~GeneralTaskBattleZLeagueListener(this);
  AK::FreeHook(this);
  return;
}


/* GeneralTaskBattleZLeagueListener::GeneralTaskBattleZLeagueListener() */

void __thiscall
GeneralTaskBattleZLeagueListener::GeneralTaskBattleZLeagueListener
          (GeneralTaskBattleZLeagueListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_067105f0;
  return;
}


/* GeneralTaskBattleZLeagueListener::StaticNew() */

GeneralTaskBattleZLeagueListener * GeneralTaskBattleZLeagueListener::StaticNew(void)

{
  GeneralTaskBattleZLeagueListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskBattleZLeagueListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskBattleZLeagueListener::StaticClassInit() */

void GeneralTaskBattleZLeagueListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskBattleZLeagueListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a8d1c4,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskBattleZLeagueListener::StaticGetClass() */

long * GeneralTaskBattleZLeagueListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskBattleZLeagueListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskBattleZLeagueListener::GetClass() const */

long * GeneralTaskBattleZLeagueListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskBattleZLeagueListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskBattleZLeagueListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskBattleZLeagueListener::RegisterListener
          (GeneralTaskBattleZLeagueListener *this,GeneralTask *param_1)

{
  bool bVar1;
  int iVar2;
  RtObject *this_00;
  BattleOrderTaskData *pBVar3;
  ulong uVar4;
  long *plVar5;
  
  Sexy::Mesh::SetListener((Mesh *)this,(MeshListener *)param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(this + 0x10) + 0x20));
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x10) + 0x20));
    pBVar3 = Sexy::RtObject::Cast<BattleOrderTaskData>(this_00);
    if (pBVar3 != (BattleOrderTaskData *)0x0) {
      uVar4 = JoustUtils::PlayerGetLeague();
      Sexy::OutputDebugStrF
                ((wchar_t *)"JoustUtils::PlayerGetLeague %d, targte BattleZLeague %d",
                 uVar4 & 0xffffffff,(ulong)*(uint *)(pBVar3 + 0x6c));
      iVar2 = JoustUtils::PlayerGetLeague();
      if (*(int *)(pBVar3 + 0x6c) <= iVar2) {
        plVar5 = *(long **)(this + 0x10);
        if (*(int *)((long)plVar5 + 0x14) != 3) {
          *(undefined4 *)(plVar5 + 2) = 1;
          *(undefined4 *)((long)plVar5 + 0x14) = 2;
        }
        (**(code **)(*plVar5 + 0x60))();
        return;
      }
    }
  }
  return;
}

