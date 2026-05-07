// Class: ZombieMirrorQueenSummonActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMirrorQueenSummonActionHandler::StaticClassInit() */

void ZombieMirrorQueenSummonActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieMirrorQueenSummonActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_04f0b3a8,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieMirrorQueenSummonActionHandler::StaticGetClass() */

long * ZombieMirrorQueenSummonActionHandler::StaticGetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieMirrorQueenSummonActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMirrorQueenSummonActionHandler::GetClass() const */

long * ZombieMirrorQueenSummonActionHandler::GetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieMirrorQueenSummonActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMirrorQueenSummonActionHandler::ZombieMirrorQueenSummonActionHandler() */

void __thiscall
ZombieMirrorQueenSummonActionHandler::ZombieMirrorQueenSummonActionHandler
          (ZombieMirrorQueenSummonActionHandler *this)

{
  undefined4 uVar1;
  
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_06a0f110;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x24) = uVar1;
  return;
}


/* ZombieMirrorQueenSummonActionHandler::StaticNew() */

ZombieMirrorQueenSummonActionHandler * ZombieMirrorQueenSummonActionHandler::StaticNew(void)

{
  ZombieMirrorQueenSummonActionHandler *this;
  
  this = ::operator_new(0x28);
  ZombieMirrorQueenSummonActionHandler(this);
  return this;
}


/* ZombieMirrorQueenSummonActionHandler::~ZombieMirrorQueenSummonActionHandler() */

void __thiscall
ZombieMirrorQueenSummonActionHandler::~ZombieMirrorQueenSummonActionHandler
          (ZombieMirrorQueenSummonActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0f110;
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombieMirrorQueenSummonActionHandler::~ZombieMirrorQueenSummonActionHandler() */

void __thiscall
ZombieMirrorQueenSummonActionHandler::~ZombieMirrorQueenSummonActionHandler
          (ZombieMirrorQueenSummonActionHandler *this)

{
  ~ZombieMirrorQueenSummonActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMirrorQueenSummonActionHandler::onStartAction() */

void __thiscall
ZombieMirrorQueenSummonActionHandler::onStartAction(ZombieMirrorQueenSummonActionHandler *this)

{
  Zombie *this_00;
  ZombieHydraHeadAnimRig *pZVar1;
  code *pcVar2;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(this_00);
  ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  pcVar2 = *(code **)(*(long *)pZVar1 + 0x170);
  FUN_04f06038(asStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  (*pcVar2)(pZVar1,asStack_70,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMirrorQueenSummonActionHandler::summonZombies() */

void __thiscall
ZombieMirrorQueenSummonActionHandler::summonZombies(ZombieMirrorQueenSummonActionHandler *this)

{
  undefined4 uVar1;
  int iVar2;
  ZombossHydraSprayActionDefinition *pZVar3;
  string *psVar4;
  ZombieType *this_00;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  long lVar8;
  undefined8 *puVar9;
  Board *pBVar10;
  code *pcVar11;
  long lVar12;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  float local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined8 local_50 [3];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar3 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
  ZombieType::AddInGameResourceRequirements(this_00,(set *)amStack_38);
  pBVar10 = *(Board **)(gLawnApp + 0x9f0);
  uVar5 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                    ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                     amStack_38);
  uVar6 = std::
          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
          end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)amStack_38);
  std::vector<std::string,std::allocator<std::string>>::
  vector<std::_Rb_tree_const_iterator<std::string>,void>
            ((vector<std::string,std::allocator<std::string>> *)local_50,uVar5,uVar6,
             (RtWeakPtr<Sexy::SoundResource> *)&local_60);
  Board::LoadResourceGroupsForGameplay(pBVar10,(vector *)local_50);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)local_50);
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)local_50,&DAT_05755e60,5,
             (RtWeakPtr<Sexy::SoundResource> *)&local_60);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)local_50);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)local_50);
  std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (uVar5,uVar6);
  if (0 < *(int *)(pZVar3 + 0x40)) {
    lVar12 = 0;
    do {
      pBVar10 = *(Board **)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_60,(RtWeakPtrBase *)aRStack_78);
      puVar7 = (undefined4 *)FUN_04f05dc0(local_50[0],lVar12);
      this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Board::AddZombieInRow
                             (pBVar10,(RtWeakPtr<Sexy::SoundResource> *)&local_60,*puVar7,0xfffffffb
                              ,0,1,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
      pcVar11 = *(code **)(*(long *)this_01 + 0x198);
      lVar8 = ZombieActionHandler::getZombie((ZombieActionHandler *)this);
      uVar1 = FUN_04f05d28(*(undefined4 *)(lVar8 + 0x50));
      (*pcVar11)(this_01,uVar1);
      (**(code **)(*(long *)this_01 + 0x9d8))(this_01);
      iVar2 = Sexy::Rand(100);
      puVar9 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(this_01);
      local_60 = (float)*puVar9;
      local_58 = *(undefined4 *)(puVar9 + 1);
      _local_60 = CONCAT44((int)((ulong)*puVar9 >> 0x20),(float)(iVar2 + -0x32) + local_60);
      (**(code **)(*(long *)this_01 + 0x78))(this_01,(RtWeakPtr<Sexy::SoundResource> *)&local_60);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)aRStack_70);
      FUN_04f098b0(aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
      iVar2 = (int)lVar12;
      lVar12 = lVar12 + 1;
    } while (iVar2 + 1 < *(int *)(pZVar3 + 0x40));
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_50);
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::~set
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)amStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieMirrorQueenSummonActionHandler::onAnimationDone(std::string const&) */

void ZombieMirrorQueenSummonActionHandler::onAnimationDone(string *param_1)

{
  summonZombies((ZombieMirrorQueenSummonActionHandler *)param_1);
  ZombieActionHandler::markActionDone((ZombieActionHandler *)param_1);
  return;
}

