// Class: ZombieIceAgeWalrus


/* ZombieIceAgeWalrus::~ZombieIceAgeWalrus() */

void __thiscall ZombieIceAgeWalrus::~ZombieIceAgeWalrus(ZombieIceAgeWalrus *this)

{
  *(undefined ***)this = &PTR_GetClass_068d6ca0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieIceAgeWalrus_068d76b8;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieIceAgeWalrus::~ZombieIceAgeWalrus() */

void __thiscall ZombieIceAgeWalrus::~ZombieIceAgeWalrus(ZombieIceAgeWalrus *this)

{
  ~ZombieIceAgeWalrus(this + -0x10);
  return;
}


/* ZombieIceAgeWalrus::~ZombieIceAgeWalrus() */

void __thiscall ZombieIceAgeWalrus::~ZombieIceAgeWalrus(ZombieIceAgeWalrus *this)

{
  ~ZombieIceAgeWalrus(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieIceAgeWalrus::~ZombieIceAgeWalrus() */

void __thiscall ZombieIceAgeWalrus::~ZombieIceAgeWalrus(ZombieIceAgeWalrus *this)

{
  ~ZombieIceAgeWalrus(this + -0x10);
  return;
}


/* ZombieIceAgeWalrus::ZombieIceAgeWalrus() */

void __thiscall ZombieIceAgeWalrus::ZombieIceAgeWalrus(ZombieIceAgeWalrus *this)

{
  int iVar1;
  
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068d6ca0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieIceAgeWalrus_068d76b8;
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  *(int *)(this + 0x800) = iVar1 + -1;
  return;
}


/* ZombieIceAgeWalrus::StaticNew() */

ZombieIceAgeWalrus * ZombieIceAgeWalrus::StaticNew(void)

{
  ZombieIceAgeWalrus *this;
  
  this = ::operator_new(0x808);
  ZombieIceAgeWalrus(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeWalrus::StaticClassInit() */

void ZombieIceAgeWalrus::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieIceAgeWalrus");
    (*pcVar2)(plVar1,asStack_10,FUN_04775a8c,0x808,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieIceAgeWalrus::StaticGetClass() */

long * ZombieIceAgeWalrus::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieIceAgeWalrus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieIceAgeWalrus::GetClass() const */

long * ZombieIceAgeWalrus::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieIceAgeWalrus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieIceAgeWalrus::GenerateWalrusEarthTile(Sexy::Point, bool) */

void __thiscall
ZombieIceAgeWalrus::GenerateWalrusEarthTile(ZombieIceAgeWalrus *this,Point *param_2,bool param_3)

{
  int iVar1;
  LawnApp *this_00;
  char cVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  RAttribute *this_02;
  vector *pvVar3;
  Effect_WalrusEarthTile *this_03;
  ZombieIceAgeWalrusProps *pZVar4;
  float fVar5;
  
  this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType((Zombie *)this);
  this_00 = gLawnApp;
  this_02 = (RAttribute *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
  pvVar3 = (vector *)Reflection::RAttribute::GetValue(this_02);
  cVar2 = LawnApp::IsGroupLoadComplete(this_00,pvVar3);
  if (cVar2 == '\0') {
    return;
  }
  this_03 = Board::AddEffect<Effect_WalrusEarthTile>(*(Board **)(gLawnApp + 0x9f0));
  pZVar4 = Zombie::GetProps<ZombieIceAgeWalrusProps>((Zombie *)this);
  iVar1 = *(int *)(pZVar4 + 0x214);
  fVar5 = (float)PVZ_T();
  Effect_WalrusEarthTile::SetInitDate(this_03,param_2,fVar5 + (float)iVar1,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeWalrus::IsRecordFoot(Sexy::Point&) */

void __thiscall ZombieIceAgeWalrus::IsRecordFoot(ZombieIceAgeWalrus *this,Point *param_1)

{
  bool bVar1;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)Board::GetWalrusFoot(*(Board **)(gLawnApp + 0x9f0));
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>,Sexy::Point>
                       (uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* ZombieIceAgeWalrus::RecordFoot(Sexy::Point&) */

void __thiscall ZombieIceAgeWalrus::RecordFoot(ZombieIceAgeWalrus *this,Point *param_1)

{
  char cVar1;
  vector<Sexy::Point,std::allocator<Sexy::Point>> *this_00;
  
  cVar1 = IsRecordFoot(this,param_1);
  if (cVar1 != '\0') {
    return;
  }
  this_00 = (vector<Sexy::Point,std::allocator<Sexy::Point>> *)
            Board::GetWalrusFoot(*(Board **)(gLawnApp + 0x9f0));
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(this_00,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeWalrus::ColumnChangeEffect() */

void __thiscall ZombieIceAgeWalrus::ColumnChangeEffect(ZombieIceAgeWalrus *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  Point aPStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = Zombie::IsControlled((Zombie *)this);
  if (((cVar2 == '\0') && (cVar2 = (**(code **)(*(long *)this + 0x330))(this), cVar2 == '\0')) &&
     (cVar2 = (**(code **)(*(long *)this + 0x328))(this), cVar2 == '\0')) {
    iVar1 = *(int *)(this + 0x800);
    iVar3 = SharkMinion::getRow((SharkMinion *)this);
    Sexy::Point::Point(aPStack_18,iVar1 + 1,iVar3);
    cVar2 = IsRecordFoot(this,aPStack_18);
    if (cVar2 == '\0') {
      RecordFoot(this,aPStack_18);
      Sexy::Point::Point(aPStack_10,(TPoint *)aPStack_18);
      GenerateWalrusEarthTile(this,aPStack_10,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeWalrus::GenerateWalrusStatue() */

void __thiscall ZombieIceAgeWalrus::GenerateWalrusStatue(ZombieIceAgeWalrus *this)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  RAttribute *this_02;
  vector *pvVar5;
  undefined8 extraout_x0;
  string *psVar6;
  ZombieType *this_03;
  undefined8 uVar7;
  undefined8 uVar8;
  Board *pBVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  vector<std::string,std::allocator<std::string>> avStack_50 [24];
  string asStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType((Zombie *)this);
  this_02 = (RAttribute *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
  pvVar5 = (vector *)Reflection::RAttribute::GetValue(this_02);
  cVar1 = LawnApp::IsGroupLoadComplete(this_00,pvVar5);
  if (cVar1 != '\0') {
    iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
    iVar3 = SharkMinion::getRow((SharkMinion *)this);
    if ((-1 < iVar2) && (iVar4 = BoardConstants::NUMBER_OF_COLUMNS(), iVar2 < iVar4)) {
      pBVar9 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_38,"iceage_walrusstatue");
      iVar4 = FUN_04775570(*(undefined4 *)(this + 0x50));
      Board::AddGridItem(pBVar9,asStack_38,iVar2,iVar3,iVar4);
      std::string::~string(asStack_38);
      nop();
      nop();
      uVar11 = *(undefined4 *)(this + 0x1c);
      uVar10 = FUN_04775578(*(undefined4 *)(this + 0x18),uVar11,*(undefined4 *)(this + 0x20));
      GridItemWalrusStatue::SetPos(uVar10,uVar11,extraout_x0);
      psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      std::string::string(asStack_38,"iceage_ski");
      ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar6);
      std::string::~string(asStack_38);
      nop();
      std::
      map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
      ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
             *)asStack_38);
      this_03 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
      ZombieType::AddInGameResourceRequirements(this_03,(set *)asStack_38);
      pBVar9 = *(Board **)(gLawnApp + 0x9f0);
      uVar7 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                        ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                         asStack_38);
      uVar8 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)asStack_38);
      std::vector<std::string,std::allocator<std::string>>::
      vector<std::_Rb_tree_const_iterator<std::string>,void>(avStack_50,uVar7,uVar8,auStack_60);
      Board::LoadResourceGroupsForGameplay(pBVar9,(vector *)avStack_50);
      std::vector<std::string,std::allocator<std::string>>::~vector(avStack_50);
      pBVar9 = *(Board **)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)avStack_50,(RtWeakPtrBase *)aRStack_58);
      Board::AddZombieInRow(pBVar9,avStack_50,iVar3,0,0,1,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)avStack_50);
      std::set<std::string,std::less<std::string>,std::allocator<std::string>>::~set
                ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)asStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieIceAgeWalrus::onUpdate() */

void __thiscall ZombieIceAgeWalrus::onUpdate(ZombieIceAgeWalrus *this)

{
  int iVar1;
  int iVar2;
  
  Zombie::onUpdate((Zombie *)this);
  iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  if ((iVar1 < iVar2) && (-2 < iVar1)) {
    if (iVar1 < *(int *)(this + 0x800)) {
      *(int *)(this + 0x800) = iVar1;
      ColumnChangeEffect(this);
      return;
    }
    *(int *)(this + 0x800) = iVar1;
  }
  return;
}


/* ZombieIceAgeWalrus::updateState_Walk() */

void __thiscall ZombieIceAgeWalrus::updateState_Walk(ZombieIceAgeWalrus *this)

{
  int iVar1;
  ZombieIceAgeWalrusProps *pZVar2;
  float *pfVar3;
  
  Zombie::updateState_Walk((Zombie *)this);
  pZVar2 = Zombie::GetProps<ZombieIceAgeWalrusProps>((Zombie *)this);
  iVar1 = BoardTransforms::GridToBoardSpaceXUnbounded(*(int *)(pZVar2 + 0x210));
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  if ((float)iVar1 < *pfVar3) {
    return;
  }
  Zombie::setZombieState((Zombie *)this,5,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeWalrus::onExitState_Die(ZombieState) */

void __thiscall ZombieIceAgeWalrus::onExitState_Die(ZombieIceAgeWalrus *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  Point aPStack_28 [8];
  Point aPStack_20 [8];
  Point aPStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GenerateWalrusStatue(this);
  iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar3 = SharkMinion::getRow((SharkMinion *)this);
  Sexy::Point::Point(aPStack_28,iVar2,iVar3);
  Sexy::Point::Point(aPStack_18,1,0);
  Sexy::TPoint<int>::operator+((TPoint<int> *)aPStack_28,(TPoint *)aPStack_18);
  Sexy::Point::Point(aPStack_20,(TPoint *)aPStack_10);
  cVar1 = IsRecordFoot(this,aPStack_28);
  if ((cVar1 == '\0') && (cVar1 = IsRecordFoot(this,aPStack_20), cVar1 != '\0')) {
    Sexy::Point::Point(aPStack_10,(TPoint *)aPStack_28);
    GenerateWalrusEarthTile(this,aPStack_10,1);
  }
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

