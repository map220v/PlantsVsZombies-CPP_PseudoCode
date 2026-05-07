// Class: PVZ1KlotskiModule


/* PVZ1KlotskiModule::preventSave() */

undefined8 PVZ1KlotskiModule::preventSave(void)

{
  return 1;
}


/* PVZ1KlotskiModule::checkWin() */

bool __thiscall PVZ1KlotskiModule::checkWin(PVZ1KlotskiModule *this)

{
  float *pfVar1;
  bool bVar2;
  
  bVar2 = false;
  if (this[0x18] != (PVZ1KlotskiModule)0x0) {
    if (*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          **)(this + 0x20) ==
        (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         *)0x0) {
      bVar2 = false;
    }
    else {
      pfVar1 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(this + 0x20));
      bVar2 = *pfVar1 <= 190.0;
    }
  }
  return bVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1KlotskiModule::StaticClassInit() */

void PVZ1KlotskiModule::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"GridItemRecordInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03fd6550,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PVZ1KlotskiModule");
    (*pcVar3)(plVar2,asStack_10,FUN_03fd4e24,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1KlotskiModule::StaticGetClass() */

long * PVZ1KlotskiModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1KlotskiModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1KlotskiModule::GetKlotskiTip() */

void __thiscall PVZ1KlotskiModule::GetKlotskiTip(PVZ1KlotskiModule *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"[PVZ1KLOTSKI_DIED_OUT_CANCELED]");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1KlotskiModule::initializeModule() */

void __thiscall PVZ1KlotskiModule::initializeModule(PVZ1KlotskiModule *this)

{
  long extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::GetPropsPtr((LevelModule *)this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(extraout_x0 + 0x40);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x38),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1KlotskiModule::createGloveEffect() */

void __thiscall PVZ1KlotskiModule::createGloveEffect(PVZ1KlotskiModule *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  PVZ1KlotskiUI_GloveEffect *this_01;
  ResourceInfo *pRVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  string asStack_28 [16];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x38);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar4 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  }
  this_01 = Board::AddEffect<PVZ1KlotskiUI_GloveEffect>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_28,"POPANIM_EFFECTS_TUTORIAL_GLOVE");
  GetPAMByName(asStack_28);
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this_01,(PopAnim *)pRVar5,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_28);
  nop();
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar2 = BoardTransforms::GridToBoardSpaceXUnbounded(iVar2 + -1);
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_28,(float)iVar2,(float)((iVar3 + 0x50) * 2),0.0);
  uVar8 = 0;
  uVar7 = 0x41f00000;
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,-40.0,30.0,0.0);
  local_38 = Sexy::SexyVector3::operator+((SexyVector3 *)asStack_28,(SexyVector3 *)aRStack_18);
  local_34 = uVar7;
  local_30 = uVar8;
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)this_01,(SexyVector3 *)&local_38,0x7a121);
  Effect_PopAnim::SetCentered((Effect_PopAnim *)this_01,true);
  FUN_03fd2674(this_01 + 0x1c,0x61a82);
  std::string::string((string *)aRStack_18,"tap_move");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation((Effect_PopAnim *)this_01,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  StandaloneEffect::SetKeepAlive((StandaloneEffect *)this_01,true);
  fVar6 = (float)PVZ_T();
  PVZ1KlotskiUI_GloveEffect::SetProps(fVar6 + 1.0,local_38,local_34,local_30,this_01);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1KlotskiModule::onNarrationFinished() */

void __thiscall PVZ1KlotskiModule::onNarrationFinished(PVZ1KlotskiModule *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  PVZ1KlotskiUI_GloveEffect *this_01;
  ResourceInfo *pRVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  string asStack_28 [16];
  RtWeakPtr aRStack_18 [16];
  long lStack_8;
  
  this_00 = (RtWeakPtr *)(this + 0x38);
  lStack_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar4 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  }
  this_01 = Board::AddEffect<PVZ1KlotskiUI_GloveEffect>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_28,"POPANIM_EFFECTS_TUTORIAL_GLOVE");
  GetPAMByName(asStack_28);
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this_01,(PopAnim *)pRVar5,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_28);
  nop();
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar2 = BoardTransforms::GridToBoardSpaceXUnbounded(iVar2 + -1);
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_28,(float)iVar2,(float)((iVar3 + 0x50) * 2),0.0);
  uVar8 = 0;
  uVar7 = 0x41f00000;
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,-40.0,30.0,0.0);
  uStack_38 = Sexy::SexyVector3::operator+((SexyVector3 *)asStack_28,(SexyVector3 *)aRStack_18);
  uStack_34 = uVar7;
  uStack_30 = uVar8;
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)this_01,(SexyVector3 *)&uStack_38,0x7a121);
  Effect_PopAnim::SetCentered((Effect_PopAnim *)this_01,true);
  FUN_03fd2674(this_01 + 0x1c,0x61a82);
  std::string::string((string *)aRStack_18,"tap_move");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation((Effect_PopAnim *)this_01,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  StandaloneEffect::SetKeepAlive((StandaloneEffect *)this_01,true);
  fVar6 = (float)PVZ_T();
  PVZ1KlotskiUI_GloveEffect::SetProps(fVar6 + 1.0,uStack_38,uStack_34,uStack_30,this_01);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1KlotskiModule::Gamefailure() */

void __thiscall PVZ1KlotskiModule::Gamefailure(PVZ1KlotskiModule *this)

{
  char cVar1;
  long *plVar2;
  string *extraout_x1;
  code *pcVar3;
  Sexy aSStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),0);
  if (cVar1 != '\0') {
    plVar2 = (long *)FUN_03fd572c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    pcVar3 = *(code **)(*plVar2 + 0xa0);
    GetKlotskiTip(this);
    Sexy::UTF8StringToWString(aSStack_18,extraout_x1);
    (*pcVar3)(plVar2,auStack_10);
    FUN_05476c50(auStack_10);
    std::string::~string((string *)aSStack_18);
    this[0x18] = (PVZ1KlotskiModule)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1KlotskiModule::PVZ1KlotskiModule() */

void __thiscall PVZ1KlotskiModule::PVZ1KlotskiModule(PVZ1KlotskiModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  this[0x18] = (PVZ1KlotskiModule)0x0;
  *(undefined ***)this = &PTR_GetModuleClass_067ae020;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x48));
  this[0x18] = (PVZ1KlotskiModule)0x0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x30));
  return;
}


/* PVZ1KlotskiModule::StaticNew() */

PVZ1KlotskiModule * PVZ1KlotskiModule::StaticNew(void)

{
  PVZ1KlotskiModule *this;
  
  this = ::operator_new(0x78);
  PVZ1KlotskiModule(this);
  return this;
}


/* PVZ1KlotskiModule::~PVZ1KlotskiModule() */

void __thiscall PVZ1KlotskiModule::~PVZ1KlotskiModule(PVZ1KlotskiModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_067ae020;
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x40));
  std::
  map<int,std::vector<GridItemRecordInfo,std::allocator<GridItemRecordInfo>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<GridItemRecordInfo,std::allocator<GridItemRecordInfo>>>>>
  ::~map((map<int,std::vector<GridItemRecordInfo,std::allocator<GridItemRecordInfo>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<GridItemRecordInfo,std::allocator<GridItemRecordInfo>>>>>
          *)(this + 0x48));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* PVZ1KlotskiModule::~PVZ1KlotskiModule() */

void __thiscall PVZ1KlotskiModule::~PVZ1KlotskiModule(PVZ1KlotskiModule *this)

{
  ~PVZ1KlotskiModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1KlotskiModule::SpawnDave() */

void PVZ1KlotskiModule::SpawnDave(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  string *psVar4;
  long *plVar5;
  code *pcVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [16];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
  local_2c = 0;
  local_30 = 1;
  local_2b = 1;
  psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_40,"davezombie");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
  std::string::~string(asStack_40);
  nop();
  plVar5 = *(long **)(gLawnApp + 0x9f0);
  pcVar6 = *(code **)(*plVar5 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_40,(RtWeakPtrBase *)aRStack_48);
  plVar5 = (long *)(*pcVar6)(plVar5,asStack_40,0,(SpawnZombieParams *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar1 = BoardTransforms::GridToBoardSpaceX(iVar1);
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar3 = BoardTransforms::GridToBoardSpaceY(2);
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_40,(float)iVar1 - (float)iVar2 * 0.2,(float)iVar3,0.0);
  (**(code **)(*plVar5 + 0x78))(plVar5,asStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1KlotskiModule::GetGridItemRecordInfos(int) */

void PVZ1KlotskiModule::GetGridItemRecordInfos(int param_1)

{
  bool bVar1;
  long lVar2;
  vector<GridItemRecordInfo,std::allocator<GridItemRecordInfo>> *in_x8;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<int,std::vector<GridItemRecordInfo,std::allocator<GridItemRecordInfo>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<GridItemRecordInfo,std::allocator<GridItemRecordInfo>>>>>
             ::find((map<int,std::vector<GridItemRecordInfo,std::allocator<GridItemRecordInfo>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<GridItemRecordInfo,std::allocator<GridItemRecordInfo>>>>>
                     *)((ulong)(uint)param_1 + 0x48),local_24);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)((ulong)(uint)param_1 + 0x48));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    std::vector<GridItemRecordInfo,std::allocator<GridItemRecordInfo>>::vector
              (in_x8,(vector *)(lVar2 + 8));
  }
  else {
    std::vector<GridItemRecordInfo,std::allocator<GridItemRecordInfo>>::vector
              (in_x8,(vector *)&DAT_06ae6b88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1KlotskiModule::tryRevert(int) */

void PVZ1KlotskiModule::tryRevert(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  RtWeakPtr *this;
  RtObject *this_00;
  GridItem *pGVar4;
  undefined8 local_38;
  undefined8 local_30;
  Point aPStack_28 [8];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetGridItemRecordInfos(param_1);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1) {
    this = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
    if (bVar1) {
      this_00 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      pGVar4 = Sexy::RtObject::Cast<GridItem>(this_00);
      if (pGVar4 != (GridItem *)0x0) {
        iVar2 = BoardTransforms::BoardSpaceToGridXUnbounded(*(float *)(this + 8));
        iVar3 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(this + 0xc));
        Sexy::Point::Point(aPStack_28,iVar2,iVar3);
        GridItem::SetGridLocationUnbounded(pGVar4,aPStack_28,1);
        (**(code **)(*(long *)pGVar4 + 0x78))(pGVar4,this + 8);
      }
    }
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_38);
  }
  std::vector<GridItemRecordInfo,std::allocator<GridItemRecordInfo>>::~vector
            ((vector<GridItemRecordInfo,std::allocator<GridItemRecordInfo>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1KlotskiModule::onNotifyTimeBack(int) */

void __thiscall PVZ1KlotskiModule::onNotifyTimeBack(PVZ1KlotskiModule *this,int param_1)

{
  long extraout_x0;
  int *piVar1;
  ToxicWaterPerfumeBottleProjectile *this_00;
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::GetPropsPtr((LevelModule *)this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  local_10[0] = *(int *)(this + 0x1c) + param_1;
  piVar1 = eastl::min_alt<int>(local_10,(int *)(extraout_x0 + 0x40));
  *(int *)(this + 0x1c) = *piVar1;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  nop();
  ToxicWaterPerfumeBottleProjectile::SetType(this_00,*(int *)(this + 0x1c));
  tryRevert((int)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1KlotskiModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall PVZ1KlotskiModule::AddResourceRequirements(PVZ1KlotskiModule *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UI_SteamMiniGame");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"ZombieTutorialGroup");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UI_WHACKZOMBIE");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UI_WHACKZOMBIEAudio");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Egypt_Gravestone");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PowerupTutorial");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PVZ1Klotski");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1KlotskiModule::gatherRecordInfos() */

void __thiscall PVZ1KlotskiModule::gatherRecordInfos(PVZ1KlotskiModule *this)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  vector<GridItemRecordInfo,std::allocator<GridItemRecordInfo>> *this_00;
  ulong uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_78 [8];
  vector<GridItemRecordInfo,std::allocator<GridItemRecordInfo>> avStack_70 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_58 [24];
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr aRStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetGridItemRecordInfos((int)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_58);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_40);
  EntityFinder::GetEntitiesOnBoard
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_40,4);
  uVar5 = 0;
  while( true ) {
    uVar3 = local_40;
    uVar4 = FUN_03fd26e8(local_40,local_38);
    if (uVar4 <= uVar5) break;
    FUN_03fd26f4(uVar3,uVar5);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_78,(RtWeakPtrBase *)aRStack_80);
    puVar2 = (undefined8 *)FUN_03fd26f4(local_40,uVar5);
    uVar3 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)*puVar2);
    BuffedProjectileData::BuffedProjectileData((BuffedProjectileData *)aRStack_28,aRStack_78,uVar3);
    std::vector<GridItemRecordInfo,std::allocator<GridItemRecordInfo>>::push_back
              ((vector<GridItemRecordInfo,std::allocator<GridItemRecordInfo>> *)avStack_58,
               (GridItemRecordInfo *)aRStack_28);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>(aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
    uVar5 = uVar5 + 1;
  }
  cVar1 = std::vector<GridItemRecordInfo,std::allocator<GridItemRecordInfo>>::empty(avStack_70);
  if (cVar1 == '\0') {
    this_00 = (vector<GridItemRecordInfo,std::allocator<GridItemRecordInfo>> *)
              std::
              map<int,std::vector<GridItemRecordInfo,std::allocator<GridItemRecordInfo>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<GridItemRecordInfo,std::allocator<GridItemRecordInfo>>>>>
              ::operator[]((map<int,std::vector<GridItemRecordInfo,std::allocator<GridItemRecordInfo>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<GridItemRecordInfo,std::allocator<GridItemRecordInfo>>>>>
                            *)(this + 0x48),(int *)(this + 0x1c));
    std::vector<GridItemRecordInfo,std::allocator<GridItemRecordInfo>>::operator=
              (this_00,(vector *)avStack_58);
  }
  else {
    std::make_pair<int&,std::vector<GridItemRecordInfo,std::allocator<GridItemRecordInfo>>&>
              ((int *)(this + 0x1c),(vector *)avStack_58);
    std::
    map<int,std::vector<GridItemRecordInfo,std::allocator<GridItemRecordInfo>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<GridItemRecordInfo,std::allocator<GridItemRecordInfo>>>>>
    ::insert<std::pair<int,std::vector<GridItemRecordInfo,std::allocator<GridItemRecordInfo>>>,void>
              ((map<int,std::vector<GridItemRecordInfo,std::allocator<GridItemRecordInfo>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<GridItemRecordInfo,std::allocator<GridItemRecordInfo>>>>>
                *)(this + 0x48),(pair *)aRStack_28);
    std::pair<int_const,std::vector<GridItemRecordInfo,std::allocator<GridItemRecordInfo>>>::~pair
              ((pair<int_const,std::vector<GridItemRecordInfo,std::allocator<GridItemRecordInfo>>> *
               )aRStack_28);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_40);
  std::vector<GridItemRecordInfo,std::allocator<GridItemRecordInfo>>::~vector
            ((vector<GridItemRecordInfo,std::allocator<GridItemRecordInfo>> *)avStack_58);
  std::vector<GridItemRecordInfo,std::allocator<GridItemRecordInfo>>::~vector(avStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1KlotskiModule::CheckState() */

void __thiscall PVZ1KlotskiModule::CheckState(PVZ1KlotskiModule *this)

{
  bool bVar1;
  char cVar2;
  ToxicWaterPerfumeBottleProjectile *this_00;
  ProfileMgr *this_01;
  PlayerInfo *pPVar3;
  long *plVar4;
  
  if (this[0x18] != (PVZ1KlotskiModule)0x0) {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x38));
    if (bVar1) {
      this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
      PlayerInfo::CompleteTutorial(pPVar3,0x51);
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
      (**(code **)(*plVar4 + 0x48))();
    }
    else {
      *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + -1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
      nop();
      ToxicWaterPerfumeBottleProjectile::SetType(this_00,*(int *)(this + 0x1c));
      gatherRecordInfos(this);
    }
    if (((*(int *)(this + 0x28) == 3) || (*(DaveZombie **)(this + 0x20) == (DaveZombie *)0x0)) ||
       (cVar2 = DaveZombie::checkWin(*(DaveZombie **)(this + 0x20)), cVar2 == '\0')) {
      if (0 < *(int *)(this + 0x1c)) {
        thunk_FUN_03fd7004(gMessageRouter);
        return;
      }
      Gamefailure(this);
      return;
    }
    *(undefined4 *)(this + 0x28) = 3;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1KlotskiModule::gameplayStarted() */

void __thiscall PVZ1KlotskiModule::gameplayStarted(PVZ1KlotskiModule *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  RtWeakPtr<SpartanBambooMatrixSystem> *this_01;
  char cVar1;
  int iVar2;
  int iVar3;
  UIWidget *pUVar4;
  PowerupManager *this_02;
  string *psVar5;
  ResourceInfo *pRVar6;
  long lVar7;
  RtObject *this_03;
  DaveZombie *pDVar8;
  Effect_PopAnim *pEVar9;
  StandaloneEffect *this_04;
  Effect_Protrusion *extraout_x0;
  ToxicWaterPerfumeBottleProjectile *this_05;
  ProfileMgr *this_06;
  PlayerInfo *pPVar10;
  CrazyNPCManager *pCVar11;
  int local_78 [2];
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [16];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_50,"UIPlantfood");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_50);
  std::string::~string(asStack_50);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,false);
  }
  std::string::string(asStack_50,"UIPowerupHolder");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_50);
  std::string::~string(asStack_50);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    this_02 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
    psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PowerupType>>::GetInstancePtr();
    std::string::string(asStack_60,"powerup_special_item_time_back");
    ObjectTypeDirectory<PowerupType>::GetTypeFromTypeName(psVar5);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_50);
    lVar7 = PowerupManager::GetBasePowerup(this_02,(PowerupType *)pRVar6);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
    std::string::~string(asStack_60);
    nop();
    if (lVar7 == 0) {
      UIWidget::SetVisible(pUVar4,false);
    }
    else {
      UIWidget::SetVisible(pUVar4,true);
    }
  }
  std::string::string(asStack_50,"UIShovel");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_50);
  std::string::~string(asStack_50);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,false);
  }
  this_03 = (RtObject *)SpawnDave();
  if (this_03 != (RtObject *)0x0) {
    pDVar8 = Sexy::RtObject::Cast<DaveZombie>(this_03);
    lVar7 = *(long *)pDVar8;
    *(DaveZombie **)(this + 0x20) = pDVar8;
    (**(code **)(lVar7 + 600))();
  }
  this[0x18] = (PVZ1KlotskiModule)0x1;
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x40);
  iVar2 = BoardConstants::NUMBER_OF_ROWS();
  this_01 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x30);
  iVar2 = BoardTransforms::GridToBoardSpaceY(iVar2 / 2);
  Sexy::Point::Point((Point *)local_78,1,0);
  iVar3 = BoardTransforms::GridToBoardSpaceX(local_78[0]);
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_60,(float)iVar3,(float)iVar2 - 25.0,0.0);
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)asStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
  pEVar9 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string(asStack_68,"POPANIM_EFFECTS_KLOTSKI");
  GetPAMByName(asStack_68);
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_50);
  Effect_PopAnim::CreatePopAnimRig(pEVar9,(PopAnim *)pRVar6,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
  std::string::~string(asStack_68);
  nop();
  pEVar9 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string(asStack_50,"anim_tiao");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar9,asStack_50,0);
  std::string::~string(asStack_50);
  nop();
  this_04 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::SetBoardSpaceOrigin(this_04,(SexyVector3 *)asStack_60,-1);
  lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  FUN_03fd2674(lVar7 + 0x1c,300000);
  pEVar9 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Effect_PopAnim::SetCentered(pEVar9,true);
  Sexy::RtName::RtName((RtName *)asStack_50,L"UIPVZ1Klotski");
  UIWidget::CreateWidget(asStack_50,1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_01,(RtWeakPtrBase *)asStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
  Sexy::RtName::~RtName((RtName *)asStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  nop();
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06ae6c38);
  Effect_Protrusion::SetInstigator(extraout_x0,asStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  nop();
  ToxicWaterPerfumeBottleProjectile::SetType(this_05,*(int *)(this + 0x1c));
  this_06 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar10 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_06);
  cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar10,0x51);
  if ((cVar1 == '\0') &&
     (pCVar11 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp),
     pCVar11 != (CrazyNPCManager *)0x0)) {
    std::string::string(asStack_70,"TUTORIAL_KLOTSKI_NEWPLAYER");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onNarrationFinished);
    Sexy::Delegate0::Delegate0<PVZ1KlotskiModule,void(PVZ1KlotskiModule::*)()>
              (aDStack_38,asStack_50);
    std::string::string(asStack_68,"");
    CrazyNPCManager::StartNarrativeID(pCVar11,asStack_70,aDStack_38,asStack_68);
    std::string::~string(asStack_68);
    nop();
    std::string::~string(asStack_70);
    nop();
  }
  gatherRecordInfos(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1KlotskiModule::registerForEvents() */

void __thiscall PVZ1KlotskiModule::registerForEvents(PVZ1KlotskiModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0wRet<bool> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,checkWin);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<PVZ1KlotskiModule,bool(PVZ1KlotskiModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterWinCondition(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayStarted);
  Sexy::Delegate0::Delegate0<PVZ1KlotskiModule,void(PVZ1KlotskiModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,preventSave);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<PVZ1KlotskiModule,bool(PVZ1KlotskiModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterCanPreventSave(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,CheckState);
  Sexy::Delegate0::Delegate0<PVZ1KlotskiModule,void(PVZ1KlotskiModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::CarMoveEnd,(Delegate0 *)aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyTimeBack);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<PVZ1KlotskiModule,void(PVZ1KlotskiModule::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifyTimeBack,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

