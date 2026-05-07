// Class: DarkStage


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DarkStage::StaticClassInit() */

void DarkStage::StaticClassInit(void)

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
    std::string::string(asStack_10,"DarkStage");
    (*pcVar2)(plVar1,asStack_10,FUN_03cf4710,0xf0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DarkStage::StaticGetClass() */

long * DarkStage::StaticGetClass(void)

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
  uVar2 = StageModule::StaticGetClass();
  (*pcVar3)(plVar1,"DarkStage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DarkStage::DarkStage() */

void __thiscall DarkStage::DarkStage(DarkStage *this)

{
  StageModule::StageModule((StageModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_067618e0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe8));
  return;
}


/* DarkStage::StaticNew() */

DarkStage * DarkStage::StaticNew(void)

{
  DarkStage *this;
  
  this = ::operator_new(0xf0);
  DarkStage(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DarkStage::GetArmor3ZombieType() */

void DarkStage::GetArmor3ZombieType(void)

{
  RtWeakPtrBase *this;
  char cVar1;
  LevelModule *in_x0;
  string *psVar2;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this = (RtWeakPtrBase *)(in_x0 + 0xe8);
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  cVar1 = Sexy::RtWeakPtrBase::operator!=(this,(RtWeakPtrBase *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (cVar1 == '\0') {
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DarkStage::GetZombieTypeForBasicHelm(HelmType) */

undefined8 DarkStage::GetZombieTypeForBasicHelm(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 10) {
    StageModule::GetZombieTypeForBasicHelm();
    return param_1;
  }
  GetArmor3ZombieType();
  return param_1;
}


/* DarkStage::ResolveZombieType(std::string const&) */

void DarkStage::ResolveZombieType(string *param_1)

{
  bool bVar1;
  string *in_x1;
  
  bVar1 = std::operator==(in_x1,"armor3");
  if (!bVar1) {
    StageModule::ResolveZombieType(param_1);
    return;
  }
  GetArmor3ZombieType();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DarkStage::GetDefaultZombieSpawnPositionX(int) */

void __thiscall DarkStage::GetDefaultZombieSpawnPositionX(DarkStage *this,int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  float *pfVar5;
  int iVar6;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar1 = GridItemGravestoneShortcut::StaticGetClass();
  EntityFinder::GetEntitiesInRowMatchingClass
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,4,param_1,
             uVar1);
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&local_20);
  std::
  sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,bool(*)(BoardEntity*,BoardEntity*)>
            (uVar1,uVar2,BoardEntity::BoardEntityLeftToRightSortFunc);
  lVar3 = FUN_03cf4520(local_20,local_18);
  if (lVar3 == 0) {
    iVar6 = StageModule::GetDefaultZombieSpawnPositionX((int)this);
  }
  else {
    puVar4 = (undefined8 *)FUN_03cf45d8(local_20);
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)*puVar4);
    iVar6 = (int)(*pfVar5 - 50.0);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar6);
}


/* DarkStage::~DarkStage() */

void __thiscall DarkStage::~DarkStage(DarkStage *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_067618e0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
  StageModule::~StageModule((StageModule *)this);
  return;
}


/* DarkStage::~DarkStage() */

void __thiscall DarkStage::~DarkStage(DarkStage *this)

{
  ~DarkStage(this);
  AK::FreeHook(this);
  return;
}

