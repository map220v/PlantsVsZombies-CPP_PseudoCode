// Class: ZombieMoneyTree


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMoneyTree::StaticClassInit() */

void ZombieMoneyTree::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieMoneyTree");
    (*pcVar2)(plVar1,asStack_10,FUN_03470e34,0x820,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieMoneyTree::StaticGetClass() */

long * ZombieMoneyTree::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieMoneyTree",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMoneyTree::GetClass() const */

long * ZombieMoneyTree::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieMoneyTree",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMoneyTree::isGridCenter() */

void __thiscall ZombieMoneyTree::isGridCenter(ZombieMoneyTree *this)

{
  long lVar1;
  int iVar2;
  BoardTransforms *this_00;
  undefined8 uVar3;
  int local_10;
  
  lVar1 = ___stack_chk_guard;
  this_00 = (BoardTransforms *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
  BoardTransforms::BoardSpaceToGrid(this_00,*(float *)this_00,*(float *)(this_00 + 4));
  iVar2 = BoardTransforms::GridToBoardSpaceX(local_10);
  if (((float)iVar2 < *(float *)this_00) || (*(int *)(this + 0x804) == local_10)) {
    uVar3 = 0;
  }
  else {
    *(int *)(this + 0x804) = local_10;
    uVar3 = 1;
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* ZombieMoneyTree::ZombieMoneyTree() */

void __thiscall ZombieMoneyTree::ZombieMoneyTree(ZombieMoneyTree *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_0663a7b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieMoneyTree_0663b1c8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x808));
  return;
}


/* ZombieMoneyTree::StaticNew() */

ZombieMoneyTree * ZombieMoneyTree::StaticNew(void)

{
  ZombieMoneyTree *this;
  
  this = ::operator_new(0x820);
  ZombieMoneyTree(this);
  return this;
}


/* ZombieMoneyTree::~ZombieMoneyTree() */

void __thiscall ZombieMoneyTree::~ZombieMoneyTree(ZombieMoneyTree *this)

{
  *(undefined ***)this = &PTR_GetClass_0663a7b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieMoneyTree_0663b1c8;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x808));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieMoneyTree::~ZombieMoneyTree() */

void __thiscall ZombieMoneyTree::~ZombieMoneyTree(ZombieMoneyTree *this)

{
  ~ZombieMoneyTree(this + -0x10);
  return;
}


/* ZombieMoneyTree::~ZombieMoneyTree() */

void __thiscall ZombieMoneyTree::~ZombieMoneyTree(ZombieMoneyTree *this)

{
  ~ZombieMoneyTree(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieMoneyTree::~ZombieMoneyTree() */

void __thiscall ZombieMoneyTree::~ZombieMoneyTree(ZombieMoneyTree *this)

{
  ~ZombieMoneyTree(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMoneyTree::getYuanbaoPositon() */

void __thiscall ZombieMoneyTree::getYuanbaoPositon(ZombieMoneyTree *this)

{
  vector<Sexy::Point,std::allocator<Sexy::Point>> *this_00;
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  int local_18;
  int local_14;
  Point aPStack_10 [8];
  long local_8;
  
  this_00 = (vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x808);
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear(this_00);
  fVar7 = *(float *)(this + 0x1c);
  fVar6 = (float)FUN_0346f47c(*(undefined4 *)(this + 0x18),fVar7,*(undefined4 *)(this + 0x20));
  BoardTransforms::BoardSpaceToGrid((BoardTransforms *)(long)(int)fVar7,fVar6,fVar7);
  iVar5 = local_18 + -1;
  if (iVar5 <= local_18 + 1) {
    do {
      iVar4 = local_14 + -1;
      if ((iVar4 <= local_14 + 1) && (-1 < iVar5)) {
        do {
          if ((-1 < iVar4) &&
             ((iVar5 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) &&
              (iVar1 = BoardConstants::NUMBER_OF_ROWS(), iVar4 < iVar1)))) {
            Sexy::Point::Point(aPStack_10,iVar5,iVar4);
            std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(this_00,aPStack_10);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 <= local_14 + 1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 <= local_18 + 1);
  }
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)this_00);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
            (uVar2,uVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMoneyTree::throwOutYuanbao() */

void __thiscall ZombieMoneyTree::throwOutYuanbao(ZombieMoneyTree *this)

{
  bool bVar1;
  int iVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtObject *this_01;
  ZombieMoneyTreeProps *pZVar3;
  float *pfVar4;
  Projectile *this_02;
  Point *pPVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  DVec2 aDStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  int local_38;
  int local_34;
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  iVar7 = 0;
  local_8 = ___stack_chk_guard;
  DVec2::DVec2(aDStack_58,15.0,30.0);
  getYuanbaoPositon(this);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x808));
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x808));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48);
    if (!bVar1) {
LAB_03471774:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pPVar5 = (Point *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    EntityFinder::GetEntitiesAtGridSquare
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,4,
               *(undefined4 *)pPVar5,*(undefined4 *)(pPVar5 + 4));
    lVar6 = FUN_0346f454(local_20,local_18);
    if (lVar6 == 0) {
      iVar7 = iVar7 + 1;
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
      this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      pZVar3 = Sexy::RtObject::Cast<ZombieMoneyTreeProps>(this_01);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)(pZVar3 + 0x228));
      BoardTransforms::GridToBoardSpace(pPVar5);
      uVar8 = *(undefined8 *)(gLawnApp + 0x9f0);
      pfVar4 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this);
      fVar9 = *pfVar4;
      fVar12 = pfVar4[2];
      fVar11 = pfVar4[1];
      iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
      fVar10 = (float)ValueRange::GetRandomValue((ValueRange *)aDStack_58);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_40);
      this_02 = (Projectile *)
                Board::AddProjectile
                          ((Board *)(fVar9 + 45.0),fVar11,fVar10 + fVar12 + (float)iVar2,uVar8,
                           aRStack_30,0,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_30,(float)local_38,(float)local_34,0.0);
      Projectile::LaunchAt(this_02,(SexyVector3 *)aRStack_30,2.0,1.5);
      if (2 < iVar7) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
        ;
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
        goto LAB_03471774;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
    }
    else {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  } while( true );
}


/* ZombieMoneyTree::onInitialized() */

void __thiscall ZombieMoneyTree::onInitialized(ZombieMoneyTree *this)

{
  float fVar1;
  
  Zombie::onInitialized((Zombie *)this);
  *(undefined4 *)(this + 0x804) = 0xf;
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x800) = fVar1 + 10.0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMoneyTree::onUpdate() */

void __thiscall ZombieMoneyTree::onUpdate(ZombieMoneyTree *this)

{
  int iVar1;
  float *pfVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtObject *pRVar3;
  ZombieMoneyTreeProps *pZVar4;
  ZombieAnimRig_MoneyTree *pZVar5;
  code *pcVar6;
  float fVar7;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onUpdate((Zombie *)this);
  fVar7 = (float)PVZ_T();
  if (*(float *)(this + 0x800) < fVar7) {
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    fVar7 = *pfVar2;
    iVar1 = BoardTransforms::GridToBoardSpaceX(8);
    if (fVar7 < (float)iVar1) {
      fVar7 = (float)PVZ_T();
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
      pRVar3 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      pZVar4 = Sexy::RtObject::Cast<ZombieMoneyTreeProps>(pRVar3);
      *(float *)(this + 0x800) = fVar7 + *(float *)(pZVar4 + 0x230);
      pRVar3 = (RtObject *)Zombie::GetAnimRig((Zombie *)this);
      pZVar5 = Sexy::RtObject::Cast<ZombieAnimRig_MoneyTree>(pRVar3);
      pcVar6 = *(code **)(*(long *)pZVar5 + 0x130);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAttackAnimStopped");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      (*pcVar6)(pZVar5,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieMoneyTree::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieMoneyTree::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  Zombie::onPopAnimCommand(param_1,param_2,param_3,param_4);
  bVar1 = std::operator==(param_4,"throwyuanbao_attack");
  if (!bVar1) {
    return;
  }
  throwOutYuanbao((ZombieMoneyTree *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMoneyTree::onAttackAnimStopped(std::string const&) */

void __thiscall ZombieMoneyTree::onAttackAnimStopped(ZombieMoneyTree *this,string *param_1)

{
  bool bVar1;
  RtObject *this_00;
  ZombieAnimRig_MoneyTree *pZVar2;
  code *pcVar3;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onAttackAnimStopped((Zombie *)this,param_1);
  bVar1 = std::operator==(param_1,"attack");
  if (bVar1) {
    this_00 = (RtObject *)Zombie::GetAnimRig((Zombie *)this);
    pZVar2 = Sexy::RtObject::Cast<ZombieAnimRig_MoneyTree>(this_00);
    pcVar3 = *(code **)(*(long *)pZVar2 + 0x118);
    RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
    RtReflectionDelegate(aRStack_50);
    (*pcVar3)(pZVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

