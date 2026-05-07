// Class: GeneralTaskMiniGameListener


/* GeneralTaskMiniGameListener::~GeneralTaskMiniGameListener() */

void __thiscall
GeneralTaskMiniGameListener::~GeneralTaskMiniGameListener(GeneralTaskMiniGameListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670e570;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskMiniGameListener::~GeneralTaskMiniGameListener() */

void __thiscall
GeneralTaskMiniGameListener::~GeneralTaskMiniGameListener(GeneralTaskMiniGameListener *this)

{
  ~GeneralTaskMiniGameListener(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskMiniGameListener::StaticClassInit() */

void GeneralTaskMiniGameListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskMiniGameListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a832d0,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskMiniGameListener::StaticGetClass() */

long * GeneralTaskMiniGameListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskMiniGameListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskMiniGameListener::GetClass() const */

long * GeneralTaskMiniGameListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskMiniGameListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskMiniGameListener::GeneralTaskMiniGameListener() */

void __thiscall
GeneralTaskMiniGameListener::GeneralTaskMiniGameListener(GeneralTaskMiniGameListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670e570;
  return;
}


/* GeneralTaskMiniGameListener::StaticNew() */

GeneralTaskMiniGameListener * GeneralTaskMiniGameListener::StaticNew(void)

{
  GeneralTaskMiniGameListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskMiniGameListener(this);
  return this;
}


/* GeneralTaskMiniGameListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskMiniGameListener::RegisterListener
          (GeneralTaskMiniGameListener *this,GeneralTask *param_1)

{
  undefined *puVar1;
  bool bVar2;
  RtObject *this_00;
  HappyVaseBreakerTaskPassSpecialData *pHVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Mesh::SetListener((Mesh *)this,(MeshListener *)param_1);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(this + 0x10) + 0x20));
  if (bVar2) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x10) + 0x20));
    pHVar3 = Sexy::RtObject::Cast<HappyVaseBreakerTaskPassSpecialData>(this_00);
    puVar1 = gMessageRouter;
    if (pHVar3 != (HappyVaseBreakerTaskPassSpecialData *)0x0) {
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onLevelEnded);
      local_30 = local_8;
      local_40 = local_18;
      uStack_38 = uStack_10;
      MessageRouter::
      Subscribe<LevelDefinitionForTask*,Sexy::CBMemberTranslatorX<GeneralTaskMiniGameListener,void(GeneralTaskMiniGameListener::*)(LevelDefinitionForTask*)>>
                ((MessageRouter *)puVar1,Message::LevelEndForTask,&local_40);
      this[8] = (GeneralTaskMiniGameListener)0x1;
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskMiniGameListener::onLevelEnded(LevelDefinitionForTask*) */

void __thiscall
GeneralTaskMiniGameListener::onLevelEnded
          (GeneralTaskMiniGameListener *this,LevelDefinitionForTask *param_1)

{
  bool bVar1;
  char cVar2;
  RtObject *this_00;
  HappyVaseBreakerTaskPassSpecialData *pHVar3;
  ulong uVar4;
  string *psVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(this + 0x10) + 0x20));
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x10) + 0x20));
    pHVar3 = Sexy::RtObject::Cast<HappyVaseBreakerTaskPassSpecialData>(this_00);
    if (pHVar3 != (HappyVaseBreakerTaskPassSpecialData *)0x0) {
      uVar9 = *(undefined8 *)(pHVar3 + 0x58);
      uVar8 = 0;
      uVar4 = FUN_03a79cd4(uVar9,*(undefined8 *)(pHVar3 + 0x60));
      while (uVar8 < uVar4) {
        if (pHVar3[0x70] == *(HappyVaseBreakerTaskPassSpecialData *)(param_1 + 0x21)) {
          psVar5 = (string *)FUN_03a79ce0(uVar9,uVar8);
          cVar2 = std::operator==(psVar5,(string *)param_1);
          if (cVar2 == '\0') goto LAB_03a9ed80;
          uVar9 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(psVar5 + 8));
          lVar6 = FUN_03a79ce0(*(undefined8 *)(pHVar3 + 0x58),uVar8);
          uVar7 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(lVar6 + 8));
          local_18 = std::
                     find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                               (uVar9,uVar7,param_1 + 8);
          lVar6 = FUN_03a79ce0(*(undefined8 *)(pHVar3 + 0x58),uVar8);
          local_10 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(lVar6 + 8));
          bVar1 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
          if (bVar1) {
            (**(code **)(*(long *)this + 0x58))(this,1);
            break;
          }
          uVar9 = *(undefined8 *)(pHVar3 + 0x58);
          uVar8 = uVar8 + 1;
          uVar4 = FUN_03a79cd4(uVar9,*(undefined8 *)(pHVar3 + 0x60));
        }
        else {
LAB_03a9ed80:
          uVar8 = uVar8 + 1;
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

