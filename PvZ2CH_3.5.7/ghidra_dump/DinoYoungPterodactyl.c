// Class: DinoYoungPterodactyl


/* DinoYoungPterodactyl::cryAnimDoneHandler() */

void __thiscall DinoYoungPterodactyl::cryAnimDoneHandler(DinoYoungPterodactyl *this)

{
  Creature::setState((Creature *)this,10,0);
  return;
}


/* DinoYoungPterodactyl::wakeAnimDoneHandler() */

void __thiscall DinoYoungPterodactyl::wakeAnimDoneHandler(DinoYoungPterodactyl *this)

{
  Creature::setState((Creature *)this,9,0);
  return;
}


/* DinoYoungPterodactyl::caughtAnimDoneHandler() */

void __thiscall DinoYoungPterodactyl::caughtAnimDoneHandler(DinoYoungPterodactyl *this)

{
  Creature::setState((Creature *)this,0xb,0);
  return;
}


/* DinoYoungPterodactyl::shouldDestroyWhenOffScreen() */

bool __thiscall DinoYoungPterodactyl::shouldDestroyWhenOffScreen(DinoYoungPterodactyl *this)

{
  float *pfVar1;
  
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  return *pfVar1 < -100.0 || 1000.0 < *pfVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinoYoungPterodactyl::StaticClassInit() */

void DinoYoungPterodactyl::StaticClassInit(void)

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
    std::string::string(asStack_10,"DinoYoungPterodactyl");
    (*pcVar2)(plVar1,asStack_10,FUN_04831fe0,0x238,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinoYoungPterodactyl::StaticGetClass() */

long * DinoYoungPterodactyl::StaticGetClass(void)

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
  uVar2 = DinosaurYounger::StaticGetClass();
  (*pcVar3)(plVar1,"DinoYoungPterodactyl",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinoYoungPterodactyl::GetClass() const */

long * DinoYoungPterodactyl::GetClass(void)

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
  uVar2 = DinosaurYounger::StaticGetClass();
  (*pcVar3)(plVar1,"DinoYoungPterodactyl",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinoYoungPterodactyl::DinoYoungPterodactyl() */

void __thiscall DinoYoungPterodactyl::DinoYoungPterodactyl(DinoYoungPterodactyl *this)

{
  DinosaurYounger::DinosaurYounger((DinosaurYounger *)this);
  *(undefined ***)this = &PTR_GetClass_06906680;
  *(undefined ***)(this + 0x10) = &PTR__DinoYoungPterodactyl_06906a60;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x230));
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x230));
  return;
}


/* DinoYoungPterodactyl::StaticNew() */

DinoYoungPterodactyl * DinoYoungPterodactyl::StaticNew(void)

{
  DinoYoungPterodactyl *this;
  
  this = ::operator_new(0x238);
  DinoYoungPterodactyl(this);
  return this;
}


/* DinoYoungPterodactyl::~DinoYoungPterodactyl() */

void __thiscall DinoYoungPterodactyl::~DinoYoungPterodactyl(DinoYoungPterodactyl *this)

{
  *(undefined ***)this = &PTR_GetClass_06906680;
  *(undefined ***)(this + 0x10) = &PTR__DinoYoungPterodactyl_06906a60;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x230));
  DinosaurYounger::~DinosaurYounger((DinosaurYounger *)this);
  return;
}


/* non-virtual thunk to DinoYoungPterodactyl::~DinoYoungPterodactyl() */

void __thiscall DinoYoungPterodactyl::~DinoYoungPterodactyl(DinoYoungPterodactyl *this)

{
  ~DinoYoungPterodactyl(this + -0x10);
  return;
}


/* DinoYoungPterodactyl::~DinoYoungPterodactyl() */

void __thiscall DinoYoungPterodactyl::~DinoYoungPterodactyl(DinoYoungPterodactyl *this)

{
  ~DinoYoungPterodactyl(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DinoYoungPterodactyl::~DinoYoungPterodactyl() */

void __thiscall DinoYoungPterodactyl::~DinoYoungPterodactyl(DinoYoungPterodactyl *this)

{
  ~DinoYoungPterodactyl(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinoYoungPterodactyl::updateState_Cry() */

void __thiscall DinoYoungPterodactyl::updateState_Cry(DinoYoungPterodactyl *this)

{
  RtMixedPtrBase *this_00;
  long lVar1;
  char cVar2;
  int iVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  float *pfVar4;
  long *plVar5;
  float fVar6;
  int local_10;
  
  lVar1 = ___stack_chk_guard;
  this_00 = (RtMixedPtrBase *)(this + 0x230);
  cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar2 != '\0') {
    this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this_01);
    fVar6 = *pfVar4;
    BoardEntity::CalcGridPosition();
    iVar3 = BoardTransforms::GridToBoardSpaceXUnbounded(local_10);
    if (fVar6 <= (float)iVar3) {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      (**(code **)(*plVar5 + 0x48))();
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
      Creature::setState((Creature *)this,10,0);
    }
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinoYoungPterodactyl::updateState_CaughtFly() */

void __thiscall DinoYoungPterodactyl::updateState_CaughtFly(DinoYoungPterodactyl *this)

{
  DinosaurYoungerPropertySheet *pDVar1;
  SexyVector3 *this_00;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar1 = Creature::GetProps<DinosaurYoungerPropertySheet>();
  if (pDVar1 != (DinosaurYoungerPropertySheet *)0x0) {
    fVar3 = *(float *)(pDVar1 + 0xa8);
    fVar4 = (float)Creature::GetFacingMultiplier((Creature *)this);
    fVar5 = (float)PVZ_Dt();
    uVar6 = 0;
    uVar7 = 0;
    EATextSquish::Vec3::Vec3(aVStack_28,fVar3 * 1.5 * fVar4 * fVar5,0.0,0.0);
    pcVar2 = *(code **)(*(long *)this + 0x78);
    this_00 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
    local_18 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aVStack_28);
    local_14 = uVar6;
    local_10 = uVar7;
    (*pcVar2)(this,&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinoYoungPterodactyl::spawnPtero() */

void __thiscall DinoYoungPterodactyl::spawnPtero(DinoYoungPterodactyl *this)

{
  int iVar1;
  int iVar2;
  string *psVar3;
  CreatureType *this_00;
  undefined8 uVar4;
  undefined8 uVar5;
  Creature *this_01;
  DinosaurPterodactyl *this_02;
  float *pfVar6;
  DinosaurPterodactylPropertySheet *pDVar7;
  DinosaurYoungerPropertySheet *pDVar8;
  Board *pBVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  string asStack_80 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [12];
  int local_6c;
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  Vec3 aVStack_60 [16];
  vector<std::string,std::allocator<std::string>> avStack_50 [4];
  float local_4c;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_80,"dinopterocatcher");
  nop();
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CreatureType>>::GetInstancePtr();
  ObjectTypeDirectory<CreatureType>::GetTypeFromTypeName(psVar3);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  this_00 = (CreatureType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
  CreatureType::AddInGameResourceRequirements(this_00,(set *)amStack_38);
  pBVar9 = *(Board **)(gLawnApp + 0x9f0);
  uVar4 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                    ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                     amStack_38);
  uVar5 = std::
          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
          end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)amStack_38);
  std::vector<std::string,std::allocator<std::string>>::
  vector<std::_Rb_tree_const_iterator<std::string>,void>(avStack_50,uVar4,uVar5,aVStack_60);
  Board::LoadResourceGroupsForGameplay(pBVar9,(vector *)avStack_50);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_50);
  EATextSquish::Vec3::Vec3(aVStack_60,0.0,0.0,0.0);
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  fVar10 = (float)(iVar1 * iVar2 + 200);
  BoardEntity::CalcGridPosition();
  iVar1 = BoardTransforms::GridToBoardSpaceYUnbounded(local_6c);
  EATextSquish::Vec3::Vec3((Vec3 *)avStack_50,fVar10,(float)iVar1,0.0);
  pBVar9 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)aRStack_78);
  this_01 = (Creature *)Board::SpawnCreature(pBVar9,aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Creature::SetWaveToLeave(this_01,0);
  this_02 = Sexy::RtObject::Cast<DinosaurPterodactyl>((RtObject *)this_01);
  pfVar6 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar11 = *pfVar6;
  if (this_02 == (DinosaurPterodactyl *)0x0) {
    Creature::GetProps<DinosaurYoungerPropertySheet>();
    Sexy::Rand(1.0);
    BoardEntity::PlaceOnBoard((SexyVector3 *)this_01);
    goto LAB_0483233c;
  }
  pDVar7 = Creature::GetProps<DinosaurPterodactylPropertySheet>();
  if (*(float *)(pDVar7 + 0xa8) == 0.0) {
    pDVar8 = Creature::GetProps<DinosaurYoungerPropertySheet>();
    fVar11 = *(float *)(pDVar8 + 0xac);
    fVar10 = (float)Sexy::Rand(1.0);
    if (fVar10 < fVar11) {
      fVar10 = 0.0;
      goto LAB_048323a8;
    }
  }
  else {
    fVar10 = -((*(float *)(pDVar7 + 0xac) / *(float *)(pDVar7 + 0xa8)) * (fVar10 - fVar11));
    pDVar8 = Creature::GetProps<DinosaurYoungerPropertySheet>();
    fVar12 = *(float *)(pDVar8 + 0xac);
    fVar11 = (float)Sexy::Rand(1.0);
    if (fVar11 < fVar12) {
LAB_048323a8:
      local_4c = fVar10 + local_4c;
      BoardEntity::PlaceOnBoard((SexyVector3 *)this_01);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this_02 + 0x228),
                 (RtWeakPtrBase *)aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      DinosaurPterodactyl::SetFlyIntoPreAttackState(this_02);
      goto LAB_0483233c;
    }
  }
  BoardEntity::PlaceOnBoard((SexyVector3 *)this_01);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x230),(RtWeakPtrBase *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  DinosaurPterodactyl::SetFlyIntoState(this_02);
LAB_0483233c:
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::~set
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)amStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  std::string::~string(asStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinoYoungPterodactyl::onEnterState_Cry(DinoYoungerState) */

void DinoYoungPterodactyl::onEnterState_Cry(Creature *param_1)

{
  DinosaurAnimRig_Runner *pDVar1;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar1 = Creature::GetAnimRig<DinosaurAnimRig_Runner>(param_1);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  DinosaurAnimRig_Younger::PlayCry((DinosaurAnimRig_Younger *)pDVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  spawnPtero((DinoYoungPterodactyl *)param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

