// Class: RandZombieModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RandZombieModule::StaticClassInit() */

void RandZombieModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"RandZombieModule");
    (*pcVar2)(plVar1,asStack_10,FUN_0490ecf8,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RandZombieModule::StaticGetClass() */

long * RandZombieModule::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"RandZombieModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RandZombieModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall RandZombieModule::AddResourceRequirements(RandZombieModule *this,set *param_1)

{
  char cVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  long lVar3;
  RtMixedPtrBase *this_00;
  ulong uVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  ZombieType *this_02;
  ulong uVar5;
  undefined8 uVar6;
  
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  uVar5 = 0;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar6 = *(undefined8 *)(pRVar2 + 0x40);
  lVar3 = FUN_0490e788(uVar6,*(undefined8 *)(pRVar2 + 0x48));
  if (lVar3 != 0) {
    do {
      this_00 = (RtMixedPtrBase *)FUN_0490e7b8(uVar6,uVar5);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
      if (cVar1 != '\0') {
        this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  FUN_0490e7b8(*(undefined8 *)(pRVar2 + 0x40),uVar5);
        this_02 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        ZombieType::AddInGameResourceRequirements(this_02,param_1);
      }
      uVar5 = uVar5 + 1;
      uVar6 = *(undefined8 *)(pRVar2 + 0x40);
      uVar4 = FUN_0490e788(uVar6,*(undefined8 *)(pRVar2 + 0x48));
    } while (uVar5 < uVar4);
  }
  return;
}


/* RandZombieModule::RandZombieModule() */

void __thiscall RandZombieModule::RandZombieModule(RandZombieModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0690e550;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x18));
  return;
}


/* RandZombieModule::StaticNew() */

RandZombieModule * RandZombieModule::StaticNew(void)

{
  RandZombieModule *this;
  
  this = ::operator_new(0x48);
  RandZombieModule(this);
  return this;
}


/* RandZombieModule::~RandZombieModule() */

void __thiscall RandZombieModule::~RandZombieModule(RandZombieModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0690e550;
  std::
  map<Sexy::RtWeakPtr<ZombieType_const>,unsigned_int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,unsigned_int>>>
  ::~map((map<Sexy::RtWeakPtr<ZombieType_const>,unsigned_int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,unsigned_int>>>
          *)(this + 0x18));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* RandZombieModule::~RandZombieModule() */

void __thiscall RandZombieModule::~RandZombieModule(RandZombieModule *this)

{
  ~RandZombieModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RandZombieModule::SetupRandZombieLevel() */

void __thiscall RandZombieModule::SetupRandZombieLevel(RandZombieModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  RtWeakPtr *pRVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  pair<Sexy::RtWeakPtr<ZombieType_const>const,unsigned_int> apStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(pRVar1 + 0x40);
    uVar3 = FUN_0490e788(uVar5,*(undefined8 *)(pRVar1 + 0x48));
    if (uVar3 <= uVar4) break;
    pRVar2 = (RtWeakPtr *)FUN_0490e7b8(uVar5,uVar4);
    std::pair<Sexy::RtWeakPtr<ZombieType_const>const,unsigned_int>::pair
              (apStack_18,pRVar2,(uint *)(pRVar2 + 0x10));
    std::
    map<Sexy::RtWeakPtr<ZombieType_const>,unsigned_int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,unsigned_int>>>
    ::insert<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,unsigned_int>,void>
              ((map<Sexy::RtWeakPtr<ZombieType_const>,unsigned_int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,unsigned_int>>>
                *)(this + 0x18),(pair *)apStack_18);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)apStack_18);
    uVar4 = uVar4 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RandZombieModule::registerForEvents() */

void __thiscall RandZombieModule::registerForEvents(RandZombieModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<RandZombieModule,void(RandZombieModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNewWave);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<int,WaveDefinition_const*,Sexy::CBMemberTranslatorX<RandZombieModule,void(RandZombieModule::*)(int,WaveDefinition_const*)>>
            ((MessageRouter *)puVar1,Message::NewWaveStarting,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RandZombieModule::AddRandZombie(int, int) */

void __thiscall RandZombieModule::AddRandZombie(RandZombieModule *this,int param_1,int param_2)

{
  bool bVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  undefined8 *puVar3;
  RtWeakPtr *pRVar4;
  TaskResource **ppTVar5;
  long lVar6;
  ZombieType *pZVar7;
  undefined4 uVar8;
  Board *pBVar9;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_58);
  puVar3 = (undefined8 *)FUN_0490e7c4(*(undefined8 *)(pRVar2 + 0x58),(long)param_1);
  local_50 = FUN_0490ef68(*puVar3);
  while( true ) {
    ppTVar5 = (TaskResource **)FUN_0490e7c4(*(undefined8 *)(pRVar2 + 0x58),(long)param_1);
    local_40 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         (ppTVar5);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_50,(rbtree_iterator *)&local_40);
    if (!bVar1) break;
    pRVar4 = (RtWeakPtr *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_50);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_58,pRVar4);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)a_Stack_58);
    pZVar7 = (ZombieType *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
    lVar6 = ZombieType::GetProps(pZVar7);
    ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::AddItem
              ((ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>> *)aPStack_38,
               (RtWeakPtr<Sexy::SoundResource> *)&local_40,*(undefined4 *)(lVar6 + 0xa0));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_50);
  }
  if (0 < param_2) {
    do {
      lVar6 = ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::GetSize
                        ((ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>> *)aPStack_38);
      if (lVar6 == 0) break;
      ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::PickItem();
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)a_Stack_58,(RtWeakPtr *)&local_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      local_48 = std::
                 map<Sexy::RtWeakPtr<ZombieType_const>,unsigned_int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,unsigned_int>>>
                 ::find((map<Sexy::RtWeakPtr<ZombieType_const>,unsigned_int,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<std::pair<Sexy::RtWeakPtr<ZombieType_const>const,unsigned_int>>>
                         *)(this + 0x18),(RtWeakPtr *)a_Stack_58);
      local_40 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)(this + 0x18));
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_48,(rbtree_iterator *)&local_40);
      uVar8 = 1;
      if (bVar1) {
        lVar6 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_48);
        uVar8 = *(undefined4 *)(lVar6 + 8);
      }
      pBVar9 = *(Board **)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)a_Stack_58);
      Board::AddZombie(pBVar9,(RtWeakPtr<Sexy::SoundResource> *)&local_40,param_1 + 1,uVar8,0,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)a_Stack_58);
      ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::RemoveItem
                ((ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>> *)aPStack_38,
                 (RtWeakPtr<Sexy::SoundResource> *)&local_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      pZVar7 = (ZombieType *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58)
      ;
      lVar6 = ZombieType::GetProps(pZVar7);
      param_2 = param_2 - *(int *)(lVar6 + 0x9c);
    } while (0 < param_2);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
  ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::~ProbabilitySet
            ((ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>> *)aPStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* RandZombieModule::onNewWave(int, WaveDefinition const*) */

void __thiscall
RandZombieModule::onNewWave(RandZombieModule *this,int param_1,WaveDefinition *param_2)

{
  AddRandZombie(this,param_1,*(int *)(param_2 + 0x14) + param_1 * *(int *)(param_2 + 0x18));
  return;
}


/* RandZombieModule::onPostLoad() */

void __thiscall RandZombieModule::onPostLoad(RandZombieModule *this)

{
  ResilienceTutorialIntroProperties *this_00;
  
  this_00 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  RandZombieProperties::SetupRandZombieList((RandZombieProperties *)this_00);
  SetupRandZombieLevel(this);
  return;
}


/* RandZombieModule::onLoadComplete() */

void __thiscall RandZombieModule::onLoadComplete(RandZombieModule *this)

{
  ResilienceTutorialIntroProperties *this_00;
  
  this_00 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  RandZombieProperties::SetupRandZombieList((RandZombieProperties *)this_00);
  SetupRandZombieLevel(this);
  return;
}

