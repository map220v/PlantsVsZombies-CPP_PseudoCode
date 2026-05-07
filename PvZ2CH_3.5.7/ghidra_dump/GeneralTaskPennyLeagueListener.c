// Class: GeneralTaskPennyLeagueListener


/* GeneralTaskPennyLeagueListener::~GeneralTaskPennyLeagueListener() */

void __thiscall
GeneralTaskPennyLeagueListener::~GeneralTaskPennyLeagueListener
          (GeneralTaskPennyLeagueListener *this)

{
  *(undefined ***)this = &PTR_GetClass_06710570;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskPennyLeagueListener::~GeneralTaskPennyLeagueListener() */

void __thiscall
GeneralTaskPennyLeagueListener::~GeneralTaskPennyLeagueListener
          (GeneralTaskPennyLeagueListener *this)

{
  ~GeneralTaskPennyLeagueListener(this);
  AK::FreeHook(this);
  return;
}


/* GeneralTaskPennyLeagueListener::GeneralTaskPennyLeagueListener() */

void __thiscall
GeneralTaskPennyLeagueListener::GeneralTaskPennyLeagueListener(GeneralTaskPennyLeagueListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_06710570;
  return;
}


/* GeneralTaskPennyLeagueListener::StaticNew() */

GeneralTaskPennyLeagueListener * GeneralTaskPennyLeagueListener::StaticNew(void)

{
  GeneralTaskPennyLeagueListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskPennyLeagueListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskPennyLeagueListener::StaticClassInit() */

void GeneralTaskPennyLeagueListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskPennyLeagueListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a8cf54,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskPennyLeagueListener::StaticGetClass() */

long * GeneralTaskPennyLeagueListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskPennyLeagueListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskPennyLeagueListener::GetClass() const */

long * GeneralTaskPennyLeagueListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskPennyLeagueListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskPennyLeagueListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskPennyLeagueListener::RegisterListener
          (GeneralTaskPennyLeagueListener *this,GeneralTask *param_1)

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
      uVar4 = RiftUtils::GetCurrentLeague();
      Sexy::OutputDebugStrF
                ((wchar_t *)"RiftUtils::GetCurrentLeague %d, targte PennyLeague %d",
                 uVar4 & 0xffffffff,(ulong)*(uint *)(pBVar3 + 0x68));
      iVar2 = RiftUtils::GetCurrentLeague();
      if (*(int *)(pBVar3 + 0x68) <= iVar2) {
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

