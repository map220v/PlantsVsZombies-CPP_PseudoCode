// Class: ModernZombossBattleModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ModernZombossBattleModule::StaticClassInit() */

void ModernZombossBattleModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"ModernZombossBattleModule");
    (*pcVar2)(plVar1,asStack_10,FUN_04750704,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ModernZombossBattleModule::StaticGetClass() */

long * ModernZombossBattleModule::StaticGetClass(void)

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
  uVar2 = ZombossBattleModule::StaticGetClass();
  (*pcVar3)(plVar1,"ModernZombossBattleModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ModernZombossBattleModule::~ModernZombossBattleModule() */

void __thiscall
ModernZombossBattleModule::~ModernZombossBattleModule(ModernZombossBattleModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_068cc150;
  std::string::~string((string *)(this + 0x38));
  ZombossBattleModule::~ZombossBattleModule((ZombossBattleModule *)this);
  return;
}


/* ModernZombossBattleModule::~ModernZombossBattleModule() */

void __thiscall
ModernZombossBattleModule::~ModernZombossBattleModule(ModernZombossBattleModule *this)

{
  ~ModernZombossBattleModule(this);
  AK::FreeHook(this);
  return;
}


/* ModernZombossBattleModule::ModernZombossBattleModule() */

void __thiscall
ModernZombossBattleModule::ModernZombossBattleModule(ModernZombossBattleModule *this)

{
  size_t in_x2;
  
  ZombossBattleModule::ZombossBattleModule((ZombossBattleModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_068cc150;
  Set8BytesTo0((string *)(this + 0x38));
  std::string::append((string *)(this + 0x38),"",in_x2);
  return;
}


/* ModernZombossBattleModule::StaticNew() */

ModernZombossBattleModule * ModernZombossBattleModule::StaticNew(void)

{
  ModernZombossBattleModule *this;
  
  this = ::operator_new(0x40);
  ModernZombossBattleModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ModernZombossBattleModule::pickRandomZomboss() */

void __thiscall ModernZombossBattleModule::pickRandomZomboss(ModernZombossBattleModule *this)

{
  int iVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)&local_20,(vector *)(pRVar2 + 0x68))
  ;
  lVar3 = FUN_0474feb0(local_20,local_18);
  if (lVar3 == 0) {
    thunk_FUN_05475e00(this + 0x38,&DAT_06b23080);
  }
  else {
    iVar1 = RandRangeInt(0,(int)lVar3 + -1);
    uVar4 = FUN_0474febc(local_20,(long)iVar1);
    thunk_FUN_05475e00(this + 0x38,uVar4);
  }
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ModernZombossBattleModule::GatherResources(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall
ModernZombossBattleModule::GatherResources(ModernZombossBattleModule *this,set *param_1)

{
  string *psVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  ZombieZombossMech::GetRequiredAssetGroupsForZombossType(aRStack_10,param_1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ModernZombossBattleModule::loadTargetZomboss() */

void __thiscall ModernZombossBattleModule::loadTargetZomboss(ModernZombossBattleModule *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Board *this_00;
  undefined1 auStack_58 [8];
  vector<std::string,std::allocator<std::string>> avStack_50 [24];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pickRandomZomboss(this);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  GatherResources(this,(set *)amStack_38);
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  uVar1 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                    ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                     amStack_38);
  uVar2 = std::
          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
          end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)amStack_38);
  std::vector<std::string,std::allocator<std::string>>::
  vector<std::_Rb_tree_const_iterator<std::string>,void>(avStack_50,uVar1,uVar2,auStack_58);
  Board::LoadResourceGroupsForGameplay(this_00,(vector *)avStack_50);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_50);
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::~set
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ModernZombossBattleModule::onLoadComplete() */

void __thiscall ModernZombossBattleModule::onLoadComplete(ModernZombossBattleModule *this)

{
  ZombossBattleModule::onLoadComplete();
  loadTargetZomboss(this);
  return;
}

