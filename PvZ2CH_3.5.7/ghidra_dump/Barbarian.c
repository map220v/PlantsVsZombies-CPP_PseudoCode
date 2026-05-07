// Class: Barbarian


/* Barbarian::CanBeWatered() */

bool __thiscall Barbarian::CanBeWatered(Barbarian *this)

{
  return (*(int *)(this + 0xe0) - 0xbU & 0xfffffffd) == 0;
}


/* Barbarian::IsInvincible() */

bool __thiscall Barbarian::IsInvincible(Barbarian *this)

{
  return 6 < *(int *)(this + 0xe0) - 0xeU;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Barbarian::StaticClassInit() */

void Barbarian::StaticClassInit(void)

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
    std::string::string(asStack_10,"Barbarian");
    (*pcVar2)(plVar1,asStack_10,FUN_03fb9860,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Barbarian::StaticGetClass() */

long * Barbarian::StaticGetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"Barbarian",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Barbarian::GetClass() const */

long * Barbarian::GetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"Barbarian",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Barbarian::SetPropertysheets(PlantRhubarbarianProps*) */

void __thiscall Barbarian::SetPropertysheets(Barbarian *this,PlantRhubarbarianProps *param_1)

{
  if (param_1 != (PlantRhubarbarianProps *)0x0) {
    *(PlantRhubarbarianProps **)(this + 0xb0) = param_1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Barbarian::getTargetPosition(Sexy::Point&) */

void __thiscall Barbarian::getTargetPosition(Barbarian *this,Point *param_1)

{
  long lVar1;
  int local_30;
  int local_2c;
  float local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(gLawnApp + 0x9f0) == 0) {
    EATextSquish::Vec3::Vec3((Vec3 *)&local_28,0.0,0.0,0.0);
  }
  else {
    BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)param_1,param_1);
    lVar1 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)&local_28,(float)local_30,(float)local_2c - 10.0,*(float *)(lVar1 + 8));
    if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
      local_20 = Board::calculateRoofOffsetZ(local_28);
    }
  }
  local_10 = local_20;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_28,uStack_24,local_20);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Barbarian::OnSetPosition(Sexy::SexyVector3 const&, Sexy::SexyVector3 const&) */

void Barbarian::OnSetPosition(SexyVector3 *param_1,SexyVector3 *param_2)

{
  SexyVector3 *in_x2;
  code *pcVar1;
  undefined4 local_28 [4];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)param_1 + 0x78);
  local_28[0] = Sexy::SexyVector3::operator-(in_x2,param_2);
  local_18[0] = Sexy::SexyVector3::operator+(param_1 + 0x18,(SexyVector3 *)local_28);
  (*pcVar1)(param_1,local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Barbarian::SetAvatars() */

void __thiscall Barbarian::SetAvatars(Barbarian *this)

{
  this[0xdc] = (Barbarian)0x1;
  return;
}


/* Barbarian::~Barbarian() */

void __thiscall Barbarian::~Barbarian(Barbarian *this)

{
  *(undefined ***)this = &PTR_GetClass_067a8460;
  *(undefined ***)(this + 0x10) = &PTR__Barbarian_067a8678;
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0xb8));
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0xa8));
  *(undefined8 *)(this + 0xb0) = 0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x120));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to Barbarian::~Barbarian() */

void __thiscall Barbarian::~Barbarian(Barbarian *this)

{
  ~Barbarian(this + -0x10);
  return;
}


/* Barbarian::~Barbarian() */

void __thiscall Barbarian::~Barbarian(Barbarian *this)

{
  ~Barbarian(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to Barbarian::~Barbarian() */

void __thiscall Barbarian::~Barbarian(Barbarian *this)

{
  ~Barbarian(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Barbarian::Barbarian() */

void __thiscall Barbarian::Barbarian(Barbarian *this)

{
  long lVar1;
  undefined4 uVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_067a8460;
  *(undefined ***)(this + 0x10) = &PTR__Barbarian_067a8678;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb8));
  DVec3::DVec3((DVec3 *)(this + 0xc4));
  DVec3::DVec3((DVec3 *)(this + 0xd0));
  DVec3::DVec3((DVec3 *)(this + 0xec));
  DVec3::DVec3((DVec3 *)(this + 0xf8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x118));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x120));
  RelocationEvent::RelocationEvent((RelocationEvent *)(this + 0x128));
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0xb8));
  this[0x105] = (Barbarian)0x1;
  *(undefined4 *)(this + 0xc0) = 1;
  uVar2 = PVZ_EOT();
  this[0xdc] = (Barbarian)0x0;
  this[0x104] = (Barbarian)0x0;
  *(undefined4 *)(this + 0xe4) = uVar2;
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0xa8));
  *(undefined8 *)(this + 0xb0) = 0;
  this[0xe8] = (Barbarian)0x0;
  this[0x10c] = (Barbarian)0x0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x158) = 0;
  this[0x114] = (Barbarian)0x0;
  *(undefined4 *)(this + 0x15c) = 0;
  this[0x154] = (Barbarian)0x0;
  this[0x164] = (Barbarian)0x0;
  *(undefined4 *)(this + 0x160) = 0x3f800000;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x118),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x120),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xe0) = 10;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Barbarian::StaticNew() */

Barbarian * Barbarian::StaticNew(void)

{
  Barbarian *this;
  
  this = ::operator_new(0x168);
  Barbarian(this);
  return this;
}


/* Barbarian::SetLayerVisibility(std::string const&, bool) */

undefined8 __thiscall Barbarian::SetLayerVisibility(Barbarian *this,string *param_1,bool param_2)

{
  PopAnimRig *this_00;
  
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8))
  ;
  PopAnimRig::SetLayerVisibility(this_00,param_1,param_2);
  return 1;
}


/* Barbarian::onSleeped(bool) */

void __thiscall Barbarian::onSleeped(Barbarian *this,bool param_1)

{
  PopAnimRig *this_00;
  
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8))
  ;
  PopAnimRig::SetPaused(this_00,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Barbarian::playAnimation(std::string const&, RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
Barbarian::playAnimation(Barbarian *this,undefined8 param_1,RtReflectionDelegate *param_3)

{
  PopAnimRig *pPVar1;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  PopAnimRig::PlayAndStop(pPVar1,param_1,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Barbarian::CalcRenderOrder() const */

void __thiscall Barbarian::CalcRenderOrder(Barbarian *this)

{
  long *plVar1;
  
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  (**(code **)(*plVar1 + 0x170))();
  return;
}


/* non-virtual thunk to Barbarian::CalcRenderOrder() const */

void __thiscall Barbarian::CalcRenderOrder(Barbarian *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* Barbarian::SetSpeedModifier(float) */

void __thiscall Barbarian::SetSpeedModifier(Barbarian *this,float param_1)

{
  long *plVar1;
  Plant *pPVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  
  *(float *)(this + 0x160) = param_1;
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
  fVar5 = *(float *)(this + 0x160);
  pcVar3 = *(code **)(*plVar1 + 0x80);
  pPVar2 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  fVar4 = (float)Plant::GetAdditionValue(pPVar2,3);
  (*pcVar3)(fVar4 + fVar5,plVar1);
  return;
}


/* Barbarian::OnupdateSpeed(float) */

void __thiscall Barbarian::OnupdateSpeed(Barbarian *this,float param_1)

{
  long *plVar1;
  Plant *pPVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  
  *(float *)(this + 0x160) = param_1;
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
  fVar5 = *(float *)(this + 0x160);
  pcVar3 = *(code **)(*plVar1 + 0x80);
  pPVar2 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  fVar4 = (float)Plant::GetAdditionValue(pPVar2,3);
  (*pcVar3)(fVar4 + fVar5,plVar1);
  return;
}


/* Barbarian::calcCollisionRect() */

void Barbarian::calcCollisionRect(void)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  float *pfVar8;
  Insets *in_x8;
  float fVar9;
  float fVar10;
  
  this = (RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0xa8);
  pfVar8 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(in_x0);
  fVar10 = *pfVar8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  iVar4 = Plant::GetWidth();
  fVar9 = pfVar8[1];
  iVar1 = *(int *)(*(long *)(in_x0 + 0xb0) + 0xa4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  iVar5 = Plant::GetHeight();
  iVar2 = *(int *)(*(long *)(in_x0 + 0xb0) + 0xa8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  iVar6 = Plant::GetWidth();
  iVar3 = *(int *)(*(long *)(in_x0 + 0xb0) + 0xac);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  iVar7 = Plant::GetHeight();
  Sexy::Insets::Insets
            (in_x8,(int)(((float)iVar1 + fVar10) - (float)(iVar4 / 2)),
             (int)((fVar9 + 10.0 + (float)iVar2) - (float)iVar5),iVar6 + iVar3,
             iVar7 + *(int *)(*(long *)(in_x0 + 0xb0) + 0xb0));
  return;
}


/* Barbarian::CanTargetZombie(Zombie const*) */

char __thiscall Barbarian::CanTargetZombie(Barbarian *this,Zombie *param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  
  bVar1 = Sexy::RtObject::IsA<Zomboss>((RtObject *)param_1);
  if ((((((!bVar1) && (bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)param_1), !bVar1))
        && (cVar2 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar2 == '\0')) &&
       ((cVar2 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar2 == '\0' &&
        (cVar2 = Zombie::HasFogImmune(param_1), cVar2 == '\0')))) &&
      ((cVar2 = Zombie::IsBerserk(param_1), cVar2 == '\0' &&
       ((cVar2 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar2 == '\0' &&
        (cVar2 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar2 == '\0')))))) &&
     (cVar2 = Zombie::CanBeLaunchedByPlantsExtra(param_1), cVar2 != '\0')) {
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8))
    ;
    uVar4 = FUN_02fd3e88(*(undefined4 *)(lVar5 + 0x24));
    cVar3 = RealObject::IsOnTeam(param_1,uVar4);
    if (cVar3 == '\0') {
      return cVar2;
    }
  }
  return '\0';
}


/* Barbarian::canTargetEntity(BoardEntity*) */

bool __thiscall Barbarian::canTargetEntity(Barbarian *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  Zombie *extraout_x0;
  GridItem *pGVar3;
  
  bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
  if (((!bVar1) || (nop(), extraout_x0 == (Zombie *)0x0)) ||
     (cVar2 = CanTargetZombie(this,extraout_x0), cVar2 == '\0')) {
    bVar1 = Sexy::RtObject::IsA<GridItem>((RtObject *)param_1);
    if (!bVar1) {
      return bVar1;
    }
    pGVar3 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1);
    if ((pGVar3 == (GridItem *)0x0) ||
       (cVar2 = (**(code **)(*(long *)pGVar3 + 0x200))(), cVar2 == '\0')) {
      return false;
    }
  }
  return true;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Barbarian::OnRelocationBegun() */

void __thiscall Barbarian::OnRelocationBegun(Barbarian *this)

{
  Barbarian BVar1;
  float *pfVar2;
  PopAnimRig *pPVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  SexyVector3 *pSVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  string asStack_78 [16];
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  Barbarian local_4c;
  undefined4 local_48;
  undefined8 local_44;
  DummyInit aDStack_38 [48];
  long local_8;
  
  BVar1 = this[0x104];
  local_8 = ___stack_chk_guard;
  if (BVar1 == (Barbarian)0x0) {
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
    pSVar4 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_00);
    Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x18),pSVar4);
    pPVar3 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
    std::string::string((string *)&local_68,"plantfood_loop");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar3,(string *)&local_68,0,aDStack_38);
    std::string::~string((string *)&local_68);
    nop();
    *(undefined4 *)(this + 0xe0) = 0xc;
  }
  else {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
    Plant::GetRelocating();
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    fVar7 = *pfVar2;
    fVar6 = pfVar2[1];
    this[0x144] = local_4c;
    *(undefined4 *)(this + 0x13c) = local_54;
    *(undefined4 *)(this + 0x148) = local_48;
    *(undefined4 *)(this + 0x140) = local_50;
    *(float *)(this + 0x128) = fVar7;
    *(float *)(this + 300) = fVar6;
    *(undefined4 *)(this + 0x138) = local_58;
    *(undefined8 *)(this + 0x14c) = local_44;
    this[0x154] = (Barbarian)0x1;
    *(float *)(this + 0x130) = (local_60 - local_68) + fVar7;
    *(float *)(this + 0x134) = (local_5c - local_64) + fVar6;
    pPVar3 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
    std::string::string(asStack_78,"idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar3,asStack_78,0,aDStack_38);
    std::string::~string(asStack_78);
    nop();
    pcVar5 = *(code **)(*(long *)this + 0x78);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)asStack_78,*(float *)(this + 0x130),*(float *)(this + 0x134),pfVar2[2]);
    (*pcVar5)(this,asStack_78);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(BVar1 == (Barbarian)0x0);
}


/* Barbarian::updateRelocationPositionAndRotation() */

float __thiscall Barbarian::updateRelocationPositionAndRotation(Barbarian *this)

{
  int iVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar9 = 0.0;
  fVar12 = 0.0;
  cVar2 = FUN_03fb6a74(this[0x154]);
  if (cVar2 != '\0') {
    fVar11 = *(float *)(this + 0x130);
    fVar10 = *(float *)(this + 0x134);
    fVar3 = *(float *)(this + 0x128);
    fVar8 = *(float *)(this + 300);
    fVar4 = (float)PVZ_T();
    iVar1 = *(int *)(this + 0x148);
    fVar4 = (fVar4 - *(float *)(this + 0x13c)) /
            (*(float *)(this + 0x140) - *(float *)(this + 0x13c));
    if (iVar1 == 3) {
      fVar9 = (float)Sexy::SexyMath::DegToRad(720.0);
      *(float *)(this + 0x150) = fVar4 * (fVar10 - fVar8);
      *(float *)(this + 0x14c) = fVar4 * (fVar11 - fVar3);
      return fVar9 * fVar4;
    }
    if (1 < iVar1 - 4U) {
      fVar5 = (float)Sexy::SexyMath::DegToRad(180.0);
      dVar7 = sin((double)(fVar5 * fVar4));
      fVar13 = *(float *)(this + 0x138);
      fVar5 = (float)Sexy::SexyMath::DegToRad(720.0);
      if (iVar1 != 1) {
        fVar12 = fVar5 * fVar4;
        fVar9 = (float)(dVar7 * (double)fVar13);
      }
      *(float *)(this + 0x14c) = (fVar4 - 1.0) * (fVar11 - fVar3);
      *(float *)(this + 0x150) = (fVar4 - 1.0) * (fVar10 - fVar8) - fVar9;
      return fVar12;
    }
    uVar6 = FUN_03fb6ee0(*(undefined4 *)(this + 0x158));
    *(undefined4 *)(this + 0x14c) = uVar6;
    uVar6 = FUN_03fb6ee0(*(undefined4 *)(this + 0x15c));
    *(undefined4 *)(this + 0x150) = uVar6;
  }
  return 0.0;
}


/* Barbarian::UpdateAnimRig() */

void __thiscall Barbarian::UpdateAnimRig(Barbarian *this)

{
  bool bVar1;
  PopAnimRig *this_00;
  float fVar2;
  float fVar3;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xb8));
  if (!bVar1) {
    return;
  }
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8))
  ;
  fVar2 = (float)PVZ_T();
  fVar3 = (float)PVZ_Dt();
  PopAnimRig::UpdateAnim(this_00,fVar2,fVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Barbarian::travelToLeapDestination() */

void __thiscall Barbarian::travelToLeapDestination(Barbarian *this)

{
  SexyVector3 *this_00;
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 local_98;
  undefined4 local_90;
  Vec3 aVStack_88 [16];
  undefined4 local_78;
  float local_74;
  float local_70;
  undefined4 local_68;
  float local_64;
  float local_60;
  undefined4 local_58;
  float local_54;
  float local_50;
  undefined4 local_48;
  float local_44;
  float local_40;
  undefined4 local_38;
  float local_34;
  float local_30;
  undefined4 local_28;
  float local_24;
  float local_20;
  undefined4 local_18;
  float local_14;
  float local_10;
  long local_8;
  
  this_00 = (SexyVector3 *)(this + 0xec);
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  fVar3 = 1.0;
  local_98 = *puVar1;
  fVar4 = 1.0;
  local_90 = *(undefined4 *)(puVar1 + 1);
  EATextSquish::Vec3::Vec3(aVStack_88,1.0,1.0,1.0);
  fVar2 = (float)PVZ_Dt();
  local_68 = Sexy::SexyVector3::operator*(this_00,(SexyVector3 *)aVStack_88);
  local_64 = fVar3;
  local_60 = fVar4;
  local_58 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_68,fVar2);
  local_54 = fVar3;
  local_50 = fVar4;
  local_48 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_98,(SexyVector3 *)&local_58);
  local_44 = fVar3;
  local_40 = fVar4;
  local_38 = Sexy::SexyVector3::operator*((SexyVector3 *)(this + 0xf8),fVar2);
  local_34 = fVar3;
  local_30 = fVar4;
  local_28 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_38,fVar2);
  local_24 = fVar3;
  local_20 = fVar4;
  local_18 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_28,0.5);
  local_14 = fVar3;
  local_10 = fVar4;
  local_78 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_48,(SexyVector3 *)&local_18);
  local_74 = fVar3;
  if (*(float *)(this + 0xd4) < fVar3) {
    local_74 = *(float *)(this + 0xd4);
  }
  local_70 = fVar4;
  if (fVar4 < 0.0) {
    local_70 = 0.0;
  }
  (**(code **)(*(long *)this + 0x78))(this,&local_78);
  local_28 = Sexy::SexyVector3::operator*((SexyVector3 *)(this + 0xf8),fVar2);
  local_24 = fVar3;
  local_20 = fVar4;
  local_18 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)&local_28);
  local_14 = fVar3;
  local_10 = fVar4;
  Sexy::SexyVector3::operator=(this_00,(SexyVector3 *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Barbarian::OnRelocating() */

void __thiscall Barbarian::OnRelocating(Barbarian *this)

{
  bool bVar1;
  PopAnimRig *this_00;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = (float)PVZ_T();
  fVar5 = (fVar2 - *(float *)(this + 0x13c)) / (*(float *)(this + 0x140) - *(float *)(this + 0x13c))
  ;
  fVar2 = (float)FUN_03fb6ed0(*(float *)(this + 0x130) - *(float *)(this + 0x128));
  fVar3 = (float)FUN_03fb6ed0(*(float *)(this + 0x134) - *(float *)(this + 300));
  if (*(int *)(this + 0x148) == 4) {
    fVar4 = (float)Sexy::Rand(2.0);
    *(float *)(this + 0x158) = fVar5 * fVar2 * (fVar4 + -1.0);
    fVar2 = (float)Sexy::Rand(2.0);
    *(float *)(this + 0x15c) = fVar5 * fVar3 * (fVar2 + -1.0);
  }
  else if (*(int *)(this + 0x148) == 5) {
    fVar4 = (float)Sexy::Rand(2.0);
    *(float *)(this + 0x158) = (1.0 - fVar5) * fVar2 * (fVar4 + -1.0);
    fVar2 = (float)Sexy::Rand(2.0);
    *(float *)(this + 0x15c) = (1.0 - fVar5) * fVar3 * (fVar2 + -1.0);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xb8));
    if (!bVar1) {
      return;
    }
    goto LAB_03fb8a38;
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xb8));
  if (!bVar1) {
    return;
  }
LAB_03fb8a38:
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8))
  ;
  fVar2 = (float)PVZ_T();
  fVar3 = (float)PVZ_Dt();
  PopAnimRig::UpdateAnim(this_00,fVar2,fVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Barbarian::onDrawShadow(Sexy::Graphics*) */

void __thiscall Barbarian::onDrawShadow(Barbarian *this,Graphics *param_1)

{
  int iVar1;
  Barbarian BVar2;
  char cVar3;
  undefined4 *puVar4;
  long lVar5;
  Image *pIVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xe0) == 0xc) goto LAB_03fb9e00;
  if ((*(long *)(gLawnApp + 0x9f0) == 0) || (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) == '\0')
     ) {
    fVar9 = 0.0;
    puVar4 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
  }
  else {
    puVar4 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    fVar9 = (float)(int)(float)puVar4[2];
  }
  fVar12 = *(float *)(param_1 + 0x20);
  fVar7 = (float)FUN_03fb6ed0(*puVar4);
  fVar8 = (float)puVar4[1];
  fVar13 = *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x10) =
       *(float *)(param_1 + 0x10) + fVar12 +
       (float)(int)((fVar7 - fVar12) * *(float *)(param_1 + 0x18));
  fVar7 = (float)FUN_03fb6ed0(fVar8 - fVar9);
  BVar2 = this[0x154];
  *(float *)(param_1 + 0x14) =
       *(float *)(param_1 + 0x14) + fVar13 +
       (float)(int)((fVar7 - fVar13) * *(float *)(param_1 + 0x1c));
  cVar3 = FUN_03fb6a74(BVar2);
  if (cVar3 == '\0') {
LAB_03fb9cd4:
    fVar13 = 1.0;
  }
  else {
    Sexy::Graphics::PushState(param_1);
    fVar7 = (float)FUN_03fb6ed0(*(float *)(this + 0x130) - *(float *)(this + 0x128));
    fVar8 = (float)FUN_03fb6ed0(*(float *)(this + 0x134) - *(float *)(this + 300));
    fVar12 = (float)PVZ_T();
    fVar12 = (fVar12 - *(float *)(this + 0x13c)) /
             (*(float *)(this + 0x140) - *(float *)(this + 0x13c));
    if (*(int *)(this + 0x148) == 3) {
      fVar13 = 1.0 - fVar12;
      *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + fVar7 * fVar12;
      *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + fVar8 * fVar12;
    }
    else {
      if (*(int *)(this + 0x148) - 4U < 2) goto LAB_03fb9cd4;
      fVar13 = 1.0;
      fVar10 = (float)FUN_03fb6ed0(*(float *)(this + 0x128) - *(float *)(this + 0x130));
      fVar11 = (float)FUN_03fb6ed0(*(float *)(this + 300) - *(float *)(this + 0x134));
      *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + fVar7 * fVar12 + fVar10;
      *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + fVar8 * fVar12 + fVar11;
    }
  }
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_10)
  ;
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  fVar13 = *(float *)(param_1 + 0x18) * *(float *)(lVar5 + 0xc4) * fVar13;
  pIVar6 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06ae6230);
  fVar7 = (float)FUN_03fb6ed0(local_10);
  lVar5 = CachedResourcePtr<Sexy::Image>::operator->
                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06ae6230);
  iVar1 = *(int *)(lVar5 + 0x38);
  fVar8 = (float)FUN_03fb6ed0(local_c);
  lVar5 = CachedResourcePtr<Sexy::Image>::operator->
                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06ae6230);
  TodDrawImageCenterScaledF
            (param_1,pIVar6,fVar7 - (float)iVar1 * 0.5,fVar8 - (float)*(int *)(lVar5 + 0x3c) * 0.5,
             fVar13,fVar13);
  cVar3 = FUN_03fb6a74(this[0x154]);
  if (cVar3 != '\0') {
    Sexy::Graphics::PopState(param_1);
  }
  fVar12 = *(float *)(param_1 + 0x20);
  fVar7 = (float)FUN_03fb6ed0(*puVar4);
  fVar8 = (float)puVar4[1];
  fVar13 = *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x10) =
       (*(float *)(param_1 + 0x10) - fVar12) -
       (float)(int)((fVar7 - fVar12) * *(float *)(param_1 + 0x18));
  fVar9 = (float)FUN_03fb6ed0(fVar8 - fVar9);
  *(float *)(param_1 + 0x14) =
       (*(float *)(param_1 + 0x14) - fVar13) -
       (float)(int)((fVar9 - fVar13) * *(float *)(param_1 + 0x1c));
LAB_03fb9e00:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Barbarian::onDraw(Sexy::Graphics*) */

void Barbarian::onDraw(Graphics *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *pRVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  RtWeakPtr *this_00;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  UIEasyButtonWidget *pUVar8;
  PopAnimRig *pPVar9;
  wchar16 *pwVar10;
  Plant *this_01;
  Graphics *in_x1;
  LineBreakCategory *pLVar11;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  long lVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  Insets aIStack_98 [12];
  int local_8c;
  Color aCStack_88 [12];
  int local_7c;
  undefined8 local_78;
  LineBreakCategory *pLStack_70;
  undefined8 local_68;
  LineBreakCategory *pLStack_60;
  SexyTransform2D aSStack_58 [8];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [20];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0xe0) != 0xc) {
    cVar2 = FUN_03fb6a74(param_1[0x154]);
    if (cVar2 == '\0') {
      uVar16 = (ulong)*(uint *)(param_1 + 0x1c);
      pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xa8);
      this_00 = (RtWeakPtr *)(param_1 + 0xb8);
      uVar15 = FUN_03fb6c80(*(undefined4 *)(param_1 + 0x18),uVar16,*(undefined4 *)(param_1 + 0x20));
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
      fVar14 = *(float *)(in_x1 + 0x18);
      fVar19 = *(float *)(lVar12 + 0xc4);
      Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)&local_a8,in_x1);
      (**(code **)(*(long *)param_1 + 0xf8))(param_1);
      fVar17 = *(float *)(in_x1 + 0x20);
      fVar13 = (float)FUN_03fb6ed0(uVar15);
      fVar18 = *(float *)(in_x1 + 0x24);
      *(float *)(in_x1 + 0x10) =
           *(float *)(in_x1 + 0x10) + fVar17 +
           (float)(int)((fVar13 - fVar17) * *(float *)(in_x1 + 0x18));
      fVar13 = (float)FUN_03fb6ed0(uVar16 & 0xffffffff);
      *(float *)(in_x1 + 0x14) =
           *(float *)(in_x1 + 0x14) + fVar18 +
           (float)(int)((fVar13 - fVar18) * *(float *)(in_x1 + 0x1c));
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
      if (bVar3) {
        pUVar8 = (UIEasyButtonWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
        UIEasyButtonWidget::GetImageNormal(pUVar8);
        fVar14 = fVar14 * fVar19;
        PopAnimRig::GetPAMColor();
        Sexy::SexyTransform2D::SexyTransform2D(aSStack_58);
        Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_58);
        Sexy::SexyTransform2D::Scale(aSStack_58,fVar14,fVar14);
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
        if (*(char *)(lVar12 + 0x14c) == '\0') {
          lVar12 = *(long *)(param_1 + 0xb0);
          fVar13 = fVar14 * *(float *)(lVar12 + 0x9c);
        }
        else {
          Sexy::SexyTransform2D::Scale(aSStack_58,-fVar14,fVar14);
          lVar12 = *(long *)(param_1 + 0xb0);
          fVar13 = -fVar14 * *(float *)(lVar12 + 0x9c);
        }
        fVar13 = (float)FUN_03fb6ed0(fVar13);
        fVar19 = (float)FUN_03fb6ed0(fVar14 * *(float *)(lVar12 + 0xa0));
        FUN_03fb6994(-fVar13,-fVar19,auStack_50,auStack_44);
        Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
        uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
        cVar2 = Plant::HasCondition(uVar7,0x22);
        if (cVar2 != '\0') {
          Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
          Sexy::SexyTransform2D::Scale(aSStack_30,fVar14,fVar14);
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
          if (*(char *)(lVar12 + 0x14c) == '\0') {
            lVar12 = *(long *)(param_1 + 0xb0);
            fVar13 = *(float *)(lVar12 + 0x9c) * fVar14;
          }
          else {
            Sexy::SexyTransform2D::Scale(aSStack_30,-fVar14,fVar14);
            lVar12 = *(long *)(param_1 + 0xb0);
            fVar13 = *(float *)(lVar12 + 0x9c) * -fVar14;
          }
          fVar13 = (float)FUN_03fb6ed0(fVar13 + 20.0);
          fVar19 = (float)FUN_03fb6ed0(*(float *)(lVar12 + 0xa0) * fVar14 + 20.0);
          FUN_03fb6994(-fVar13,-fVar19,auStack_28,auStack_1c);
        }
        uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
        cVar2 = Plant::HasCondition(uVar7,0x22);
        if (cVar2 == '\0') {
          pPVar9 = (PopAnimRig *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          PopAnimRig::Draw(pPVar9,in_x1,aSStack_58);
        }
        else {
          in_x4 = (LineBreakCategory *)0xff;
          Sexy::Insets::Insets((Insets *)aCStack_88,0x48,0xe6,0xea,0xff);
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
          cVar2 = FUN_03fb6a40(*(undefined1 *)(lVar12 + 0x560));
          if ((cVar2 != '\0') && (fVar13 = (float)PVZ_T(), (uint)((int)(fVar13 * 100.0) % 6) < 3)) {
            local_7c = (int)((double)local_7c * 127.5);
          }
          Sexy::Insets::Insets((Insets *)&local_78,aIStack_98);
          Sexy::Color::operator*((Color *)&local_78,aCStack_88);
          local_78 = local_68;
          pLStack_70 = pLStack_60;
          pPVar9 = (PopAnimRig *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          PopAnimRig::SetPAMColor(pPVar9,(Color *)&local_78);
          pPVar9 = (PopAnimRig *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          PopAnimRig::Draw(pPVar9,in_x1,aSStack_30);
          in_x3 = pLStack_60;
        }
      }
      if (*(long *)(gLawnApp + 0x9f0) != 0) {
        pwVar10 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
        pLVar11 = (LineBreakCategory *)&local_78;
        std::string::string((string *)&local_68,"HealthBars");
        cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                          (pwVar10,(wchar16 *)&local_68,pLVar11,in_x3,in_x4);
        std::string::~string((string *)&local_68);
        nop();
        if (cVar2 != '\0') {
          Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)aCStack_88,in_x1);
          iVar4 = FUN_03fb6ebc(0xffffffe2);
          iVar5 = FUN_03fb6ebc(10);
          Sexy::Graphics::Translate(in_x1,iVar4,iVar5);
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
          fVar13 = (float)FUN_03fb6a3c(*(undefined4 *)(lVar12 + 0xd8));
          this_01 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
          fVar19 = (float)Plant::GetMaxHealth(this_01);
          Sexy::StrFormat(L"%d/%d",(LineBreakCategory *)&local_78,(ulong)(uint)(int)fVar13,
                          (ulong)(uint)(int)fVar19);
          FUN_03fb6ebc(2);
          FUN_03fb6ebc(0xffffffc6);
          PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_12);
          Sexy::Color::Color((Color *)&local_68,6);
          TodDrawString();
          FUN_05476c50((LineBreakCategory *)&local_78);
          Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)aCStack_88);
        }
      }
      Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)&local_a8);
    }
    else {
      fVar19 = 1.0;
      Sexy::Graphics::PushState(in_x1);
      (**(code **)(*(long *)param_1 + 0xf8))(param_1);
      fVar13 = (float)updateRelocationPositionAndRotation((Barbarian *)param_1);
      if (*(int *)(param_1 + 0x148) == 3) {
        fVar19 = (float)PVZ_T();
        fVar19 = 1.0 - (fVar19 - *(float *)(param_1 + 0x13c)) /
                       (*(float *)(param_1 + 0x140) - *(float *)(param_1 + 0x13c));
      }
      cVar2 = NewPVPUtils::IsPlayingNewPVP();
      pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xa8);
      if (cVar2 != '\0') {
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
        fVar19 = fVar19 * *(float *)(lVar12 + 0xc4);
      }
      this = (RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xb8);
      fVar14 = (float)FUN_03fb6ed0(*(float *)(param_1 + 0x14c) + *(float *)(param_1 + 0x130));
      fVar18 = *(float *)(param_1 + 0x150);
      fVar17 = *(float *)(param_1 + 0x134);
      *(float *)(in_x1 + 0x10) = *(float *)(in_x1 + 0x10) + fVar14;
      fVar14 = (float)FUN_03fb6ed0(fVar18 + fVar17);
      *(float *)(in_x1 + 0x14) = *(float *)(in_x1 + 0x14) + fVar14;
      Sexy::SexyTransform2D::SexyTransform2D(aSStack_58);
      Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
      Sexy::Insets::Insets((Insets *)&local_a8);
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      (**(code **)(*plVar6 + 0x90))(plVar6,(Insets *)&local_a8);
      if (fVar13 != 0.0) {
        fVar17 = (float)local_a8 + (float)local_a0 * 0.5;
        fVar14 = (float)local_a4 + (float)local_9c * 0.5;
        FUN_03fb6994(-fVar17,-fVar14,auStack_50,auStack_44);
        Sexy::SexyTransform2D::RotateRad(aSStack_58,fVar13);
        FUN_03fb6994(fVar17,fVar14,auStack_50,auStack_44);
        uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
        cVar2 = Plant::HasCondition(uVar7,0x22);
        if (cVar2 != '\0') {
          FUN_03fb6994(-fVar17,-fVar14,auStack_28,auStack_1c);
          Sexy::SexyTransform2D::RotateRad(aSStack_30,fVar13);
          FUN_03fb6994(fVar17,fVar14,auStack_28,auStack_1c);
        }
      }
      lVar12 = *(long *)(param_1 + 0xb0);
      fVar13 = (float)FUN_03fb6ed0(*(undefined4 *)(lVar12 + 0x9c));
      fVar14 = (float)FUN_03fb6ed0(*(undefined4 *)(lVar12 + 0xa0));
      FUN_03fb6994(-fVar13,-fVar14,auStack_50,auStack_44);
      Sexy::SexyTransform2D::Scale(aSStack_58,fVar19,fVar19);
      uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
      cVar2 = Plant::HasCondition(uVar7,0x22);
      if (cVar2 != '\0') {
        lVar12 = *(long *)(param_1 + 0xb0);
        fVar13 = (float)FUN_03fb6ed0(*(float *)(lVar12 + 0x9c) + 20.0);
        fVar14 = (float)FUN_03fb6ed0(*(float *)(lVar12 + 0xa0) + 20.0);
        FUN_03fb6994(-fVar13,-fVar14,auStack_28,auStack_1c);
        Sexy::SexyTransform2D::Scale(aSStack_30,fVar19,fVar19);
      }
      *(float *)(in_x1 + 0x14) = (float)(int)*(float *)(in_x1 + 0x14);
      uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
      cVar2 = Plant::HasCondition(uVar7,0x22);
      if (cVar2 == '\0') {
        pPVar9 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
        PopAnimRig::Draw(pPVar9,in_x1,aSStack_58);
        Sexy::Graphics::PopState(in_x1);
      }
      else {
        Sexy::Insets::Insets(aIStack_98,0x48,0xe6,0xea,0xff);
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
        cVar2 = FUN_03fb6a40(*(undefined1 *)(lVar12 + 0x560));
        if ((cVar2 != '\0') && (fVar13 = (float)PVZ_T(), (uint)((int)(fVar13 * 100.0) % 6) < 3)) {
          local_8c = (int)((double)local_8c * 127.5);
        }
        pUVar8 = (UIEasyButtonWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
        UIEasyButtonWidget::GetImageNormal(pUVar8);
        PopAnimRig::GetPAMColor();
        Sexy::Insets::Insets((Insets *)&local_78,(Insets *)aCStack_88);
        Sexy::Color::operator*((Color *)&local_78,(Color *)aIStack_98);
        local_78 = local_68;
        pLStack_70 = pLStack_60;
        pPVar9 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
        PopAnimRig::SetPAMColor(pPVar9,(Color *)&local_78);
        pPVar9 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
        PopAnimRig::Draw(pPVar9,in_x1,aSStack_30);
        pPVar9 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
        PopAnimRig::SetPAMColor(pPVar9,aCStack_88);
        Sexy::Graphics::PopState(in_x1);
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Barbarian::findNearTargetEntity() */

void __thiscall Barbarian::findNearTargetEntity(Barbarian *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  Zombie *this_00;
  GridItem *pGVar7;
  RtObject *this_01;
  code *pcVar8;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar4 = SharkMinion::getRow((SharkMinion *)this);
  Sexy::Insets::Insets(aIStack_30,iVar3,iVar4,2,1);
  uVar5 = operator|(2,4);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,uVar5,aIStack_30);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar1) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    this_01 = (RtObject *)*puVar6;
    this_00 = Sexy::RtObject::Cast<Zombie>(this_01);
    pGVar7 = Sexy::RtObject::Cast<GridItem>(this_01);
    if (this_00 == (Zombie *)0x0) {
LAB_03fbb064:
      if ((pGVar7 == (GridItem *)0x0) ||
         (cVar2 = (**(code **)(*(long *)pGVar7 + 0x200))(pGVar7), cVar2 != '\0')) break;
    }
    else {
      cVar2 = RealObject::IsOnTeam(this_00,1);
      if ((((cVar2 == '\0') &&
           (cVar2 = FUN_03fb79e0(*(undefined4 *)(this_00 + 0xcc)), cVar2 == '\0')) &&
          (cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0')) &&
         ((cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar2 == '\0' &&
          (cVar2 = Zombie::IsIgnoringAllDamage(this_00), cVar2 == '\0')))) {
        pcVar8 = *(code **)(*(long *)this_00 + 0x3d0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
        Plant::GetType();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
        cVar2 = (*pcVar8)(this_00,aRStack_38,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        if (cVar2 != '\0') goto LAB_03fbb064;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Barbarian::damageTarget() */

void __thiscall Barbarian::damageTarget(Barbarian *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  Zombie *this_00;
  GridItem *pGVar7;
  RtObject *this_01;
  code *pcVar8;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar4 = SharkMinion::getRow((SharkMinion *)this);
  Sexy::Insets::Insets(aIStack_30,iVar3,iVar4,2,1);
  uVar5 = operator|(2,4);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,uVar5,aIStack_30);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar1) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    this_01 = (RtObject *)*puVar6;
    this_00 = Sexy::RtObject::Cast<Zombie>(this_01);
    pGVar7 = Sexy::RtObject::Cast<GridItem>(this_01);
    if (this_00 == (Zombie *)0x0) {
LAB_03fbb27c:
      if ((pGVar7 == (GridItem *)0x0) ||
         (cVar2 = RealObject::IsOnOpposingTeam(pGVar7,1), cVar2 != '\0')) goto LAB_03fbb294;
    }
    else {
      cVar2 = RealObject::IsOnTeam(this_00,1);
      if ((((cVar2 == '\0') &&
           (cVar2 = FUN_03fb79e0(*(undefined4 *)(this_00 + 0xcc)), cVar2 == '\0')) &&
          (cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0')) &&
         ((cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar2 == '\0' &&
          (cVar2 = Zombie::IsIgnoringAllDamage(this_00), cVar2 == '\0')))) {
        pcVar8 = *(code **)(*(long *)this_00 + 0x3d0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
        Plant::GetType();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
        cVar2 = (*pcVar8)(this_00,aRStack_38,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        if (cVar2 != '\0') goto LAB_03fbb27c;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  }
  this_01 = (RtObject *)0x0;
LAB_03fbb294:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_01);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Barbarian::findBestTargetEntity(Sexy::Point&) */

void __thiscall Barbarian::findBestTargetEntity(Barbarian *this,Point *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  Zombie *this_00;
  GridItem *pGVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  RtObject *this_01;
  Board *pBVar12;
  undefined1 uVar13;
  code *pcVar14;
  int iVar15;
  undefined8 local_68;
  undefined8 local_60;
  string asStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  int local_48;
  int local_44;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar4 = SharkMinion::getRow((SharkMinion *)this);
  Sexy::Insets::Insets((Insets *)&local_48,iVar3,iVar4,1,1);
  if (this[0x10c] == (Barbarian)0x0) {
    iVar4 = *(int *)(this + 0xc0);
    iVar3 = *(int *)(*(long *)(this + 0xb0) + 0x2e8);
  }
  else {
    iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
    iVar4 = *(int *)(this + 0xc0);
  }
  if (iVar4 < 2) {
    iVar4 = 0;
  }
  else if (iVar4 == 2) {
    iVar4 = (int)*(float *)(*(long *)(this + 0xb0) + 0x2ec);
  }
  else {
    iVar4 = (int)*(float *)(*(long *)(this + 0xb0) + 0x2f0);
  }
  if (0 < iVar3 + iVar4) {
    iVar15 = 0;
    uVar5 = operator|(2,4);
    do {
      local_48 = local_48 + 1;
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
      EntityFinder::GetEntitiesInGridSquares(avStack_38,uVar5,(Insets *)&local_48);
      local_68 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_38);
      local_60 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_38);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_68,(__normal_iterator *)&local_60),
            bVar1) {
        puVar6 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
        this_01 = (RtObject *)*puVar6;
        this_00 = Sexy::RtObject::Cast<Zombie>(this_01);
        pGVar7 = Sexy::RtObject::Cast<GridItem>(this_01);
        if (this_00 == (Zombie *)0x0) {
LAB_03fbb510:
          if ((pGVar7 == (GridItem *)0x0) ||
             (cVar2 = (**(code **)(*(long *)pGVar7 + 0x200))(pGVar7), cVar2 != '\0')) {
            pBVar12 = *(Board **)(gLawnApp + 0x9f0);
            Sexy::Point::Point((Point *)&local_20,local_48 + -1,local_44);
            cVar2 = Board::IsPitOfDoom(pBVar12,(Point *)&local_20);
            if (cVar2 == '\0') {
              pBVar12 = *(Board **)(gLawnApp + 0x9f0);
              Sexy::Point::Point((Point *)&local_20,local_48 + -1,local_44);
              cVar2 = Board::IsShallowWater(pBVar12,(Point *)&local_20);
              if (cVar2 != '\0') {
                uVar10 = 0;
                std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                          ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)
                           &local_20);
                EntityFinder::GetEntities((Point *)&local_20,4);
                uVar11 = local_20;
                lVar8 = FUN_03fb6c6c(local_20,local_18);
                if (lVar8 != 0) {
                  do {
                    puVar6 = (undefined8 *)FUN_03fb6c78(uVar11,uVar10);
                    pGVar7 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar6);
                    if (pGVar7 != (GridItem *)0x0) {
                      GridItem::GetType();
                      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
                      FUN_05475d88(asStack_58,lVar8 + 8);
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
                      std::operator!=(asStack_58,"lilypad");
                      std::string::~string(asStack_58);
                    }
                    uVar11 = local_20;
                    uVar10 = uVar10 + 1;
                    uVar9 = FUN_03fb6c6c(local_20,local_18);
                  } while (uVar10 < uVar9);
                }
                std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                          ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
              }
              Sexy::Point::Point((Point *)&local_20,local_48 + -1,local_44);
              iVar3 = local_48;
              *(undefined8 *)param_1 = local_20;
              iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
              uVar13 = 1;
              if (iVar4 <= iVar3) {
                iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
                *(int *)param_1 = iVar3 + -1;
              }
              goto LAB_03fbb5d0;
            }
          }
        }
        else {
          cVar2 = RealObject::IsOnTeam(this_00,1);
          if ((((cVar2 == '\0') &&
               (cVar2 = FUN_03fb79e0(*(undefined4 *)(this_00 + 0xcc)), cVar2 == '\0')) &&
              (cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0')) &&
             ((cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar2 == '\0' &&
              (cVar2 = Zombie::IsIgnoringAllDamage(this_00), cVar2 == '\0')))) {
            pcVar14 = *(code **)(*(long *)this_00 + 0x3d0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8))
            ;
            Plant::GetType();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)aRStack_50);
            cVar2 = (*pcVar14)(this_00,(Point *)&local_20,0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
            if (cVar2 != '\0') goto LAB_03fbb510;
          }
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 != iVar3 + iVar4);
  }
  uVar13 = 0;
LAB_03fbb5d0:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar13);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Barbarian::tryMove(bool) */

void Barbarian::tryMove(bool param_1)

{
  char cVar1;
  char cVar2;
  Barbarian *this;
  long lVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  SexyVector3 *pSVar4;
  char in_w1;
  Board *pBVar5;
  Point aPStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  BoardTransforms *local_8;
  
  this = (Barbarian *)(ulong)param_1;
  local_8 = ___stack_chk_guard;
  BoardTransforms::BoardSpaceToGrid
            (___stack_chk_guard,*(float *)(this + 0xd0),*(float *)(this + 0xd4));
  if (in_w1 == '\0') {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xa8));
    if (cVar1 != '\0') {
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
      pSVar4 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(this_00);
      Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0xd0),pSVar4);
      goto LAB_03fbb830;
    }
  }
  Sexy::Point::Point(aPStack_28,0,0);
  cVar1 = findBestTargetEntity(this,aPStack_28);
  if (cVar1 == '\0') {
LAB_03fbb82c:
    cVar1 = '\0';
  }
  else {
    local_18 = getTargetPosition(this,aPStack_28);
    lVar3 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
    local_14 = *(undefined4 *)(lVar3 + 4);
    cVar2 = NewPVPUtils::IsPlayingNewPVP();
    if ((cVar2 == '\0') &&
       (lVar3 = Board::GetPlantGroupAt(*(Point **)(gLawnApp + 0x9f0)), lVar3 == 0)) {
      pBVar5 = *(Board **)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
      Plant::GetType();
      cVar2 = Board::CanPlantAt(pBVar5,aPStack_28,aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      if (cVar2 == '\0') goto LAB_03fbb82c;
    }
    Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0xd0),(SexyVector3 *)&local_18);
  }
LAB_03fbb830:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}


/* Barbarian::onDestroy() */

void __thiscall Barbarian::onDestroy(Barbarian *this)

{
  undefined *this_00;
  char cVar1;
  Plant *pPVar2;
  long *plVar3;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xa8));
  this_00 = gMessageRouter;
  if ((cVar1 == '\0') || (this[0x105] == (Barbarian)0x0)) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x118));
  }
  else {
    pPVar2 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
    MessageRouter::Post<Plant*,Plant*>((MessageRouter *)this_00,Message::BarbarianDestroy,pPVar2);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x118));
  }
  if (cVar1 == '\0') {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x120));
  }
  else {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118));
    (**(code **)(*plVar3 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x118));
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x120));
  }
  if (cVar1 == '\0') {
    return;
  }
  plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x120));
  (**(code **)(*plVar3 + 0x48))();
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x120));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Barbarian::applyLeapDamage(BoardEntity*) */

void __thiscall Barbarian::applyLeapDamage(Barbarian *this,BoardEntity *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  bool bVar1;
  char cVar2;
  Plant *pPVar3;
  Zombie *pZVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68 [2];
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x10c] == (Barbarian)0x0) {
    fVar7 = *(float *)(*(long *)(this + 0xb0) + 0x2b8);
  }
  else {
    fVar7 = *(float *)(*(long *)(this + 0xb0) + 0x2dc);
  }
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8);
  pPVar3 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  fVar5 = (float)Plant::GetTotalDamageRate(pPVar3);
  pPVar3 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  fVar6 = (float)Plant::GetDamageConstValue(pPVar3);
  Sexy::Point::Point(aPStack_78,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
  DamageInfo::DamageInfo
            ((DamageInfo *)(fVar6 + fVar7 * fVar5),local_70,local_6c,(DamageInfo *)local_68,
             aPStack_78,0);
  if (this[0x10c] == (Barbarian)0x0) {
    fVar7 = *(float *)(*(long *)(this + 0xb0) + 700);
  }
  else {
    fVar7 = *(float *)(*(long *)(this + 0xb0) + 0x2d8);
  }
  operator|=(auStack_58,1);
  local_68[0] = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
  if (bVar1) {
    pZVar4 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    cVar2 = CanTargetZombie(this,pZVar4);
    if (cVar2 != '\0') {
      if (*(int *)(this + 0xc0) < 2) {
        fVar5 = 0.0;
      }
      else if (*(int *)(this + 0xc0) == 2) {
        fVar5 = (float)(int)*(float *)(*(long *)(this + 0xb0) + 0x2ec);
      }
      else {
        fVar5 = (float)(int)*(float *)(*(long *)(this + 0xb0) + 0x2f0);
      }
      DamageInfo::AddCondition((DamageInfo *)(fVar5 + fVar7),(DamageInfo *)local_68,2);
    }
  }
  (**(code **)(*(long *)param_1 + 0x110))(param_1,(DamageInfo *)local_68);
  DamageInfo::~DamageInfo((DamageInfo *)local_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Barbarian::dealDamageToLandingArea() */

void __thiscall Barbarian::dealDamageToLandingArea(Barbarian *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar3 = SharkMinion::getRow((SharkMinion *)this);
  Sexy::Insets::Insets((Insets *)&local_30,iVar2,iVar3,2,1);
  if (this[0x10c] != (Barbarian)0x0) {
    local_28 = 3;
    local_30 = local_30 + -1;
    local_2c = local_2c + -1;
    local_24 = 3;
  }
  uVar4 = operator|(2,4);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,uVar4,(Insets *)&local_30);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    applyLeapDamage(this,(BoardEntity *)*puVar5);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Barbarian::OnAnimCommand(std::string const&, std::string const&) */

void Barbarian::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  RtObject *this;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar5;
  PlantAction *pPVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  Vec3 aVStack_78 [16];
  undefined4 local_68 [2];
  float local_60;
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"use_action");
  if (bVar1) {
    pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar4,"Play_Plant_Rhubarbarian_attack");
    this = (RtObject *)damageTarget((Barbarian *)param_1);
    if (this != (RtObject *)0x0) {
      bVar1 = Sexy::RtObject::IsA<Zombie>(this);
      if (bVar1) {
        nop();
        pfVar5 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(this_00);
        fVar9 = pfVar5[1];
        fVar8 = *pfVar5;
        local_68[0] = 0x43160000;
        pfVar5 = eastl::max_alt<float>((float *)local_68,pfVar5 + 2);
        EATextSquish::Vec3::Vec3(aVStack_78,fVar8 + 850.0,fVar9,*pfVar5);
        if (((*(int *)(param_1 + 0xc0) < 5) || (param_1[0x114] == (string)0x0)) ||
           (fVar9 = *(float *)(*(long *)(param_1 + 0xb0) + 0x2cc), fVar8 = (float)Sexy::Rand(1.0),
           fVar9 <= fVar8)) {
          FUN_03fb6c5c(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x70),0);
          pPVar6 = (PlantAction *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xa8));
          Plant::calcDamageInfoFromPlantAction(pPVar6);
          operator|=(auStack_58,1);
        }
        else {
          iVar3 = Zombie::GetSizeType((Zombie *)this_00);
          if (((iVar3 == 0) || (iVar3 = Zombie::GetSizeType((Zombie *)this_00), iVar3 == 1)) &&
             ((cVar2 = (**(code **)(*(long *)this_00 + 0x3f0))(this_00), cVar2 != '\0' &&
              (cVar2 = FUN_03fba3f4(this_00), cVar2 != '\0')))) {
            Zombie::FlickOff((SexyVector3 *)this_00,400.0,-1120.0);
            goto LAB_03fbbe24;
          }
          lVar7 = FUN_03fb6c5c(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x70),1);
          pPVar6 = (PlantAction *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xa8));
          Plant::calcDamageInfoFromPlantAction(pPVar6);
          local_60 = (float)*(int *)(lVar7 + 0x2c);
          operator|=(auStack_58,1);
          cVar2 = CanTargetZombie((Barbarian *)param_1,(Zombie *)this_00);
          if (cVar2 != '\0') {
                    /* WARNING: Load size is inaccurate */
            DamageInfo::AddCondition
                      (*(DamageInfo **)(*(long *)(param_1 + 0xb0) + 0x2d0),(DamageInfo *)local_68,2)
            ;
          }
        }
        (**(code **)(*(long *)this + 0x110))(this,(DamageInfo *)local_68);
        DamageInfo::~DamageInfo((DamageInfo *)local_68);
      }
      else {
        bVar1 = Sexy::RtObject::IsA<GridItem>(this);
        if (bVar1) {
          FUN_03fb6c5c(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x70),0);
          pPVar6 = (PlantAction *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xa8));
          Plant::calcDamageInfoFromPlantAction(pPVar6);
          operator|=(auStack_58,1);
          (**(code **)(*(long *)this + 0x110))(this,(DamageInfo *)local_68);
          DamageInfo::~DamageInfo((DamageInfo *)local_68);
        }
      }
    }
  }
  else {
    bVar1 = std::operator==(param_2,"use_action2");
    if (bVar1) {
      pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar4,"Play_Plant_Rhubarbarian_plantfood_end");
      dealDamageToLandingArea((Barbarian *)param_1);
    }
  }
LAB_03fbbe24:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Barbarian::AnimCommand(std::string const&, float, std::string const&, std::string const&) */

void Barbarian::AnimCommand(string *param_1,float param_2,string *param_3,string *param_4)

{
  OnAnimCommand(param_1,param_4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Barbarian::setState(BarbarianState) */

void __thiscall Barbarian::setState(Barbarian *this,int param_2)

{
  undefined8 *puVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  Barbarian *pBVar2;
  uint uVar3;
  char *pcVar4;
  long lVar5;
  float fVar6;
  string asStack_a0 [8];
  string asStack_98 [8];
  RtMixedPtr aRStack_90 [8];
  RtId aRStack_88 [8];
  undefined8 local_80;
  undefined4 local_78;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xe0) == param_2) goto switchD_03fbc080_caseD_c;
  *(int *)(this + 0xe0) = param_2;
  switch(param_2) {
  case 0xb:
    ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
              ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)&local_80);
    std::string::string((string *)aRStack_88,"idle");
    ProbabilitySet<std::string>::AddItem
              ((ProbabilitySet<std::string> *)&local_80,(string *)aRStack_88,0x46);
    std::string::~string((string *)aRStack_88);
    nop();
    std::string::string((string *)aRStack_88,"idle2");
    ProbabilitySet<std::string>::AddItem
              ((ProbabilitySet<std::string> *)&local_80,(string *)aRStack_88,0x1e);
    std::string::~string((string *)aRStack_88);
    nop();
    ProbabilitySet<std::string>::PickItem();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)asStack_98);
    std::string::string((string *)aRStack_88,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
               (RtId *)aRStack_90,(string *)aRStack_88);
    playAnimation(this,asStack_a0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)aRStack_88);
    nop();
    Sexy::RtId::~RtId((RtId *)aRStack_90);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_98);
    std::string::~string(asStack_a0);
    ProbabilitySet<std::string>::~ProbabilitySet((ProbabilitySet<std::string> *)&local_80);
    break;
  case 0xd:
    uVar3 = 2;
    if (this[0x114] == (Barbarian)0x0) {
      uVar3 = 1;
    }
    Sexy::StrFormat("attack_start_%d",asStack_98,(ulong)uVar3);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_90);
    std::string::string((string *)&local_80,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_88,
               (string *)&local_80);
    playAnimation(this,asStack_98,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)&local_80);
    nop();
    Sexy::RtId::~RtId(aRStack_88);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
    std::string::~string(asStack_98);
    break;
  case 0xe:
    if (this[0x10c] == (Barbarian)0x0) {
      pcVar4 = "huilai_start";
    }
    else {
      pcVar4 = "huilai_start_plantfood";
    }
    std::string::string(asStack_98,pcVar4);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_90);
    std::string::string((string *)&local_80,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_88,
               (string *)&local_80);
    playAnimation(this,asStack_98,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)&local_80);
    nop();
    Sexy::RtId::~RtId(aRStack_88);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
    puVar1 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_80 = *puVar1;
    local_78 = *(undefined4 *)(puVar1 + 1);
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
    pBVar2 = (Barbarian *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_00);
    lVar5 = *(long *)(this + 0xb0);
    goto LAB_03fbc280;
  case 0xf:
    pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar4,"Play_Plant_Rhubarbarian_plantfood_start");
    if (this[0x10c] == (Barbarian)0x0) {
      pcVar4 = "rotation_start";
    }
    else {
      pcVar4 = "rotation_start_plantfood";
    }
    std::string::string(asStack_98,pcVar4);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_90);
    std::string::string((string *)&local_80,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_88,
               (string *)&local_80);
    playAnimation(this,asStack_98,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)&local_80);
    nop();
    Sexy::RtId::~RtId(aRStack_88);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
    puVar1 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    lVar5 = *(long *)(this + 0xb0);
    pBVar2 = this + 0xd0;
    local_80 = *puVar1;
    local_78 = *(undefined4 *)(puVar1 + 1);
LAB_03fbc280:
    CalculateTossVelocity
              ((SexyVector3 *)&local_80,(SexyVector3 *)pBVar2,*(float *)(lVar5 + 0x318),
               *(float *)(lVar5 + 0x314),(SexyVector3 *)(this + 0xec),(SexyVector3 *)(this + 0xf8));
    std::string::~string(asStack_98);
    break;
  case 0x10:
  case 0x11:
    fVar6 = (float)PVZ_T();
    *(float *)(this + 0xe4) = fVar6 + *(float *)(*(long *)(this + 0xb0) + 0x314);
    break;
  case 0x12:
    if (this[0x164] == (Barbarian)0x0) {
      pcVar4 = "huilai_end";
    }
    else {
      pcVar4 = "huilai_end_plantfood";
    }
    goto LAB_03fbc494;
  case 0x13:
    if (this[0x10c] == (Barbarian)0x0) {
      pcVar4 = "rotation_end";
    }
    else {
      pcVar4 = "rotation_end_plantfood";
    }
    goto LAB_03fbc494;
  case 0x15:
    if (this[0x10c] == (Barbarian)0x0) {
      pcVar4 = "jumpattack";
    }
    else {
      pcVar4 = "jumpattack_plantfood";
    }
LAB_03fbc494:
    std::string::string(asStack_98,pcVar4);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_90);
    std::string::string((string *)&local_80,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_88,
               (string *)&local_80);
    playAnimation(this,asStack_98,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)&local_80);
    nop();
    Sexy::RtId::~RtId(aRStack_88);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
    std::string::~string(asStack_98);
  }
switchD_03fbc080_caseD_c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Barbarian::BarbarianInitialize(Sexy::RtWeakPtr<Plant>) */

void __thiscall Barbarian::BarbarianInitialize(Barbarian *this,RtMixedPtrBase *param_2)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  RtWeakPtr *this_01;
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var4;
  SexyVector3 *pSVar5;
  ResourceInfo *pRVar6;
  RtClass *pRVar7;
  long lVar8;
  TimeChallengeEndLevelUI *this_02;
  Effect_PopAnim *pEVar9;
  char *pcVar10;
  long *plVar11;
  float fVar12;
  undefined4 uVar13;
  RtWeakPtr aRStack_88 [8];
  string asStack_80 [8];
  Vec3 aVStack_78 [16];
  Vec3 aVStack_68 [24];
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0xa8);
    this_01 = (RtWeakPtr *)(this + 0xb8);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)param_2);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
    if (bVar2) {
      plVar11 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      (**(code **)(*plVar11 + 0x48))();
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_01);
    }
    p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pSVar5 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(p_Var4);
    Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0xc4),pSVar5);
    p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pSVar5 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(p_Var4);
    Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0xd0),pSVar5);
    std::string::string((string *)&local_50,"POPANIM_PLANT_RHUBARBARIAN");
    GetPAMByName((string *)&local_50);
    std::string::~string((string *)&local_50);
    nop();
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_88);
    pRVar7 = (RtClass *)PopAnimRig::StaticGetClass();
    PopAnimRig::CreateRig((PopAnim *)pRVar6,pRVar7);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_01,(RtWeakPtrBase *)&local_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    uVar3 = FUN_03fb6a38(*(undefined4 *)(lVar8 + 0x50));
    *(undefined4 *)(this + 0xc0) = uVar3;
    this_02 = (TimeChallengeEndLevelUI *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,AnimCommand);
    Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
    Delegate4<Barbarian,void(Barbarian::*)(std::string_const&,float,std::string_const&,std::string_const&)>
              (aDStack_38,(string *)&local_50);
    TimeChallengeEndLevelUI::SetContinueCallBack(this_02,aDStack_38);
    uVar3 = PVZ_T();
    *(undefined4 *)(this + 0x108) = uVar3;
    setState(this,0xb);
    std::string::string(asStack_80,"POPANIM_EFFECTS_RHUBARBARIAN_EFFECT");
    nop();
    pEVar9 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    GetPAMByName(asStack_80);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_50);
    Effect_PopAnim::CreatePopAnimRig(pEVar9,(PopAnim *)pRVar6,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
    Effect_PopAnim::SetCentered(pEVar9,true);
    p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pSVar5 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(p_Var4);
    uVar3 = 0;
    fVar12 = gCheat_Y - 15.0;
    EATextSquish::Vec3::Vec3(aVStack_68,0.0,fVar12,0.0);
    local_50 = Sexy::SexyVector3::operator+(pSVar5,(SexyVector3 *)aVStack_68);
    local_4c = fVar12;
    local_48 = uVar3;
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar9,(SexyVector3 *)&local_50,-1);
    FUN_03fb6a30(pEVar9 + 0x1c,0x493e1);
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)aVStack_68);
    std::string::string((string *)&local_50,"yuandi");
    uVar3 = PVZ_EOT();
    AnimationSequence::AddLoopingAnimation(aVStack_68,(string *)&local_50,0);
    std::string::~string((string *)&local_50);
    nop();
    Effect_PopAnim::PlayAnimationSequence(pEVar9,(AnimationSequence *)aVStack_68);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x118),(RtWeakPtrBase *)&local_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
    pEVar9 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    GetPAMByName(asStack_80);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_50);
    Effect_PopAnim::CreatePopAnimRig(pEVar9,(PopAnim *)pRVar6,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
    Effect_PopAnim::SetCentered(pEVar9,true);
    p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pSVar5 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(p_Var4);
    uVar13 = 0;
    fVar12 = gCheat_Y - 15.0;
    EATextSquish::Vec3::Vec3(aVStack_78,0.0,fVar12,0.0);
    local_50 = Sexy::SexyVector3::operator+(pSVar5,(SexyVector3 *)aVStack_78);
    local_4c = fVar12;
    local_48 = uVar13;
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar9,(SexyVector3 *)&local_50,-1);
    FUN_03fb6a30(pEVar9 + 0x1c,0x62251);
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)&local_50);
    std::string::string((string *)aVStack_78,"yandi_jz");
    AnimationSequence::AddLoopingAnimation(uVar3,(string *)&local_50,aVStack_78,0);
    std::string::~string((string *)aVStack_78);
    nop();
    Effect_PopAnim::PlayAnimationSequence(pEVar9,(AnimationSequence *)&local_50);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x120),(RtWeakPtrBase *)aVStack_78);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_78);
    pcVar10 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar10,"Play_Plant_Rhubarbarian_Spawn");
    AnimationSequence::~AnimationSequence((AnimationSequence *)&local_50);
    AnimationSequence::~AnimationSequence((AnimationSequence *)aVStack_68);
    std::string::~string(asStack_80);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Barbarian::OnUpdate() */

void __thiscall Barbarian::OnUpdate(Barbarian *this)

{
  Barbarian BVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  char *__s;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar5 = *(int *)(this + 0xe0);
  do {
    switch(iVar5) {
    case 0xb:
      fVar6 = (float)PVZ_T();
      if (fVar6 < *(float *)(this + 0x108)) {
        cVar3 = findNearTargetEntity(this);
        if (cVar3 == '\0') goto LAB_03fbcd50;
        setState(this,0xd);
        iVar4 = *(int *)(this + 0xe0);
      }
      else if ((this[0x104] == (Barbarian)0x0) || (this[0x10c] != (Barbarian)0x0)) {
        cVar3 = findNearTargetEntity(this);
        if (cVar3 == '\0') {
          cVar3 = tryMove(SUB81(this,0));
          if (cVar3 != '\0') {
LAB_03fbcf84:
            setState(this,0xf);
            iVar4 = *(int *)(this + 0xe0);
            break;
          }
          if (this[0x10c] == (Barbarian)0x0) goto LAB_03fbcd50;
        }
LAB_03fbcee4:
        setState(this,0x15);
        iVar4 = *(int *)(this + 0xe0);
      }
      else {
        setState(this,0xe);
        iVar4 = *(int *)(this + 0xe0);
      }
      break;
    default:
      goto switchD_03fbcd34_caseD_c;
    case 0xd:
      if (this[0xe8] != (Barbarian)0x0) goto switchD_03fbcd34_caseD_c;
      fVar6 = (float)PVZ_T();
      if (fVar6 < *(float *)(this + 0x108)) {
LAB_03fbcf5c:
        cVar3 = findNearTargetEntity(this);
        if (cVar3 != '\0') goto LAB_03fbcd50;
        BVar1 = this[0x114];
        this[0xe8] = (Barbarian)0x1;
      }
      else {
        if ((this[0x104] == (Barbarian)0x0) || (this[0x10c] != (Barbarian)0x0)) {
          cVar3 = findNearTargetEntity(this);
          if (cVar3 != '\0') goto LAB_03fbcee4;
          cVar3 = tryMove(SUB81(this,0));
          if (cVar3 != '\0') goto LAB_03fbcf84;
          goto LAB_03fbcf5c;
        }
        BVar1 = this[0x114];
        this[0xe8] = (Barbarian)0x1;
      }
      __s = "attack_end_2";
      if (BVar1 == (Barbarian)0x0) {
        __s = "attack_end_1";
      }
      std::string::string(asStack_70,__s);
      nop();
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,aRStack_60,asStack_58);
      playAnimation(this,asStack_70,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      std::string::~string(asStack_70);
      iVar4 = *(int *)(this + 0xe0);
      break;
    case 0x10:
      travelToLeapDestination(this);
      fVar6 = (float)PVZ_T();
      if (*(float *)(this + 0xe4) <= fVar6) {
        uVar7 = PVZ_EOT();
        *(undefined4 *)(this + 0xe4) = uVar7;
        setState(this,0x12);
      }
      goto LAB_03fbcd50;
    case 0x11:
      travelToLeapDestination(this);
      fVar6 = (float)PVZ_T();
      if (*(float *)(this + 0xe4) <= fVar6) {
        uVar7 = PVZ_EOT();
        *(undefined4 *)(this + 0xe4) = uVar7;
        setState(this,0x13);
        iVar4 = *(int *)(this + 0xe0);
        break;
      }
LAB_03fbcd50:
      iVar4 = *(int *)(this + 0xe0);
    }
    bVar2 = iVar5 != iVar4;
    iVar5 = iVar4;
  } while (bVar2);
switchD_03fbcd34_caseD_c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Barbarian::ApplyPlantfood() */

void __thiscall Barbarian::ApplyPlantfood(Barbarian *this)

{
  int iVar1;
  char cVar2;
  Plant *this_00;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(*(long *)(this + 0xb0) + 0x2e0);
  this_00 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  cVar2 = Plant::GetAvatarEnable(this_00);
  iVar3 = 0;
  if (cVar2 != '\0') {
    iVar3 = *(int *)(*(long *)(this + 0xb0) + 0x2e4);
  }
  *(int *)(this + 0x110) = iVar1 + iVar3;
  this[0x10c] = (Barbarian)0x1;
  uVar4 = PVZ_T();
  *(undefined4 *)(this + 0x108) = uVar4;
  uVar4 = PVZ_EOT();
  *(undefined4 *)(this + 0xe4) = uVar4;
  setState(this,0xb);
  return;
}


/* Barbarian::CancelPlantfood() */

void __thiscall Barbarian::CancelPlantfood(Barbarian *this)

{
  undefined *this_00;
  char cVar1;
  Plant *pPVar2;
  undefined4 uVar3;
  
  uVar3 = PVZ_T();
  *(undefined4 *)(this + 0x108) = uVar3;
  this[0x10c] = (Barbarian)0x0;
  if (this[0x104] == (Barbarian)0x0) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xa8));
    this_00 = gMessageRouter;
    if (cVar1 != '\0') {
      pPVar2 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
      MessageRouter::Post<Plant*,Plant*>
                ((MessageRouter *)this_00,Message::BarbarianPlantfoodEnd,pPVar2);
      uVar3 = PVZ_EOT();
      *(undefined4 *)(this + 0xe4) = uVar3;
      setState(this,0xb);
      return;
    }
  }
  else {
    this[0x164] = (Barbarian)0x1;
  }
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0xe4) = uVar3;
  setState(this,0xb);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Barbarian::onAnimLandingFinished(bool, bool) */

void __thiscall Barbarian::onAnimLandingFinished(Barbarian *this,bool param_1,bool param_2)

{
  ZombieSwashbuckler *this_00;
  long *plVar1;
  long lVar2;
  PlantGroup *this_01;
  BoardTransforms *this_02;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_03;
  Barbarian *pBVar3;
  Effect_PopAnim *this_04;
  ResourceInfo *pRVar4;
  SexyVector3 *this_05;
  int iVar5;
  RtWeakPtr<Sexy::ResourceInfo> *this_06;
  Point *pPVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  string asStack_38 [8];
  Vec3 aVStack_30 [16];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    pBVar3 = this + 0xd0;
  }
  else {
    this_03 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
    pBVar3 = (Barbarian *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_03);
  }
  this_06 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0xc4),(SexyVector3 *)pBVar3);
  (**(code **)(*(long *)this + 0x78))(this,(SexyVector3 *)(this + 0xc4));
  this_00 = (ZombieSwashbuckler *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_06);
  ZombieSwashbuckler::updateState_SwingFail(this_00);
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_06);
  (**(code **)(*plVar1 + 0x178))();
  pPVar6 = *(Point **)(gLawnApp + 0x9f0);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_06);
  iVar5 = *(int *)(lVar2 + 0x114);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_06);
  Sexy::Point::Point((Point *)&local_20,iVar5,*(int *)(lVar2 + 0x110));
  this_01 = (PlantGroup *)Board::GetPlantGroupAt(pPVar6);
  this_02 = (BoardTransforms *)0x0;
  if (this_01 != (PlantGroup *)0x0) {
    this_02 = (BoardTransforms *)PlantGroup::SetNewCollisionRect(this_01);
  }
  BoardTransforms::BoardSpaceToGrid(this_02,*(float *)(this + 0xd0),*(float *)(this + 0xd4));
  if (*(int *)(this + 0xc0) < 2) {
    iVar5 = 0;
  }
  else if (*(int *)(this + 0xc0) == 2) {
    iVar5 = (int)*(float *)(*(long *)(this + 0xb0) + 0x2ec);
  }
  else {
    iVar5 = (int)*(float *)(*(long *)(this + 0xb0) + 0x2f0);
  }
  fVar7 = (float)PVZ_T();
  fVar8 = 0.0;
  if (this[0x10c] == (Barbarian)0x0) {
    fVar8 = (float)iVar5 + *(float *)(*(long *)(this + 0xb0) + 0x2c0);
  }
  *(float *)(this + 0x108) = fVar8 + fVar7;
  if (param_2) {
    fVar7 = (float)PVZ_T();
    *(float *)(this + 0x108) = fVar7 + *(float *)(*(long *)(this + 0xb0) + 0x2c0);
  }
  else {
    fVar7 = (float)PVZ_T();
    fVar8 = 0.0;
    if (this[0x10c] == (Barbarian)0x0) {
      fVar8 = (float)iVar5 + *(float *)(*(long *)(this + 0xb0) + 0x2c4);
    }
    *(float *)(this + 0x108) = fVar8 + fVar7;
  }
  if (param_1) {
    if (this[0x10c] == (Barbarian)0x0) {
      if ((*(int *)(this + 0xc0) < 5) ||
         (fVar8 = *(float *)(*(long *)(this + 0xb0) + 0x2c8), fVar7 = (float)Sexy::Rand(1.0),
         fVar8 <= fVar7)) {
        this[0x114] = (Barbarian)0x0;
      }
      else {
        this[0x114] = (Barbarian)0x1;
      }
    }
    else {
      std::string::string(asStack_38,"POPANIM_EFFECTS_RHUBARBARIAN_EFFECT");
      nop();
      this_04 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      GetPAMByName(asStack_38);
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_20);
      Effect_PopAnim::CreatePopAnimRig(this_04,(PopAnim *)pRVar4,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      Effect_PopAnim::SetCentered(this_04,true);
      this_05 = (SexyVector3 *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)this);
      uVar9 = 0xc1c80000;
      uVar10 = 0;
      EATextSquish::Vec3::Vec3(aVStack_30,0.0,-25.0,0.0);
      local_20 = Sexy::SexyVector3::operator+(this_05,(SexyVector3 *)aVStack_30);
      local_1c = uVar9;
      local_18 = uVar10;
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_04,(SexyVector3 *)&local_20,-1)
      ;
      FUN_03fb6a30(this_04 + 0x1c,0x493e1);
      Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)&local_20);
      std::string::string((string *)aVStack_30,"daken");
      AnimationSequence::AddSingleAnimation((Point *)&local_20,aVStack_30,0);
      std::string::~string((string *)aVStack_30);
      nop();
      std::string::string((string *)aVStack_30,"daken_xs");
      AnimationSequence::AddSingleAnimation((Point *)&local_20,aVStack_30,0);
      std::string::~string((string *)aVStack_30);
      nop();
      Effect_PopAnim::PlayAnimationSequence(this_04,(AnimationSequence *)&local_20);
      AnimationSequence::~AnimationSequence((AnimationSequence *)&local_20);
      std::string::~string(asStack_38);
    }
    setState(this,0xb);
    if ((this[0x10c] != (Barbarian)0x0) &&
       (iVar5 = *(int *)(this + 0x110), *(int *)(this + 0x110) = iVar5 + -1, iVar5 + -1 < 1)) {
      CancelPlantfood(this);
    }
  }
  else {
    setState(this,0xb);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Barbarian::onEndCondition(PlantConditions) */

void __thiscall Barbarian::onEndCondition(Barbarian *this,uint param_2)

{
  char cVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var2;
  undefined8 uVar3;
  Effect_PopAnim *pEVar4;
  ResourceInfo *pRVar5;
  SexyVector3 *pSVar6;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  code *pcVar7;
  float fVar8;
  undefined4 uVar9;
  string asStack_38 [8];
  Vec3 aVStack_30 [16];
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0xe8] = (Barbarian)0x0;
  this[0x154] = (Barbarian)0x0;
  this[0x164] = (Barbarian)0x0;
  setState(this,0xb);
  if (((param_2 == 6) || (param_2 - 1 < 2)) || ((param_2 & 0xfffffffb) == 0x19)) {
    this[0x114] = (Barbarian)0x0;
    this[0x104] = (Barbarian)0x0;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8);
    pcVar7 = *(code **)(*(long *)this + 0x78);
    p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    uVar3 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(p_Var2);
    (*pcVar7)(this,uVar3);
    std::string::string(asStack_38,"POPANIM_EFFECTS_RHUBARBARIAN_EFFECT");
    nop();
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x118));
    if (cVar1 == '\0') {
      pEVar4 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      GetPAMByName(asStack_38);
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_20);
      Effect_PopAnim::CreatePopAnimRig(pEVar4,(PopAnim *)pRVar5,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      Effect_PopAnim::SetCentered(pEVar4,true);
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      pSVar6 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(p_Var2);
      uVar9 = 0;
      fVar8 = gCheat_Y - 15.0;
      EATextSquish::Vec3::Vec3(aVStack_30,0.0,fVar8,0.0);
      local_20 = Sexy::SexyVector3::operator+(pSVar6,(SexyVector3 *)aVStack_30);
      local_1c = fVar8;
      local_18 = uVar9;
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar4,(SexyVector3 *)&local_20,-1);
      FUN_03fb6a30(pEVar4 + 0x1c,0x493e1);
      Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)&local_20);
      std::string::string((string *)aVStack_30,"yuandi");
      PVZ_EOT();
      AnimationSequence::AddLoopingAnimation((RtWeakPtr *)&local_20,aVStack_30,0);
      std::string::~string((string *)aVStack_30);
      nop();
      Effect_PopAnim::PlayAnimationSequence(pEVar4,(AnimationSequence *)&local_20);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x118),(RtWeakPtrBase *)aVStack_30)
      ;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_30);
      AnimationSequence::~AnimationSequence((AnimationSequence *)&local_20);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x120));
    }
    else {
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x120));
    }
    if (cVar1 == '\0') {
      pEVar4 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      GetPAMByName(asStack_38);
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_20);
      Effect_PopAnim::CreatePopAnimRig(pEVar4,(PopAnim *)pRVar5,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      Effect_PopAnim::SetCentered(pEVar4,true);
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      pSVar6 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(p_Var2);
      uVar9 = 0;
      fVar8 = gCheat_Y - 15.0;
      EATextSquish::Vec3::Vec3(aVStack_30,0.0,fVar8,0.0);
      local_20 = Sexy::SexyVector3::operator+(pSVar6,(SexyVector3 *)aVStack_30);
      local_1c = fVar8;
      local_18 = uVar9;
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar4,(SexyVector3 *)&local_20,-1);
      FUN_03fb6a30(pEVar4 + 0x1c,0x62251);
      Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)&local_20);
      std::string::string((string *)aVStack_30,"yandi_jz");
      PVZ_EOT();
      AnimationSequence::AddLoopingAnimation((RtWeakPtr *)&local_20,aVStack_30,0);
      std::string::~string((string *)aVStack_30);
      nop();
      Effect_PopAnim::PlayAnimationSequence(pEVar4,(AnimationSequence *)&local_20);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x120),(RtWeakPtrBase *)aVStack_30)
      ;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_30);
      AnimationSequence::~AnimationSequence((AnimationSequence *)&local_20);
    }
    std::string::~string(asStack_38);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Barbarian::onApplyCondition(PlantConditions) */

void __thiscall Barbarian::onApplyCondition(Barbarian *this,int param_2)

{
  RtMixedPtrBase *pRVar1;
  char cVar2;
  PopAnimRig *pPVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 uVar7;
  code *pcVar8;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 - 1U < 2 || param_2 == 0x1d) {
    pPVar3 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
    pRVar1 = (RtMixedPtrBase *)(this + 0x118);
    std::string::string(asStack_40,"plantfood_loop");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar3,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    *(undefined4 *)(this + 0xe0) = 0xc;
    cVar2 = Sexy::RtMixedPtrBase::IsValid(pRVar1);
    if (cVar2 != '\0') {
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      (**(code **)(*plVar6 + 0x48))();
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)pRVar1);
    }
    pRVar1 = (RtMixedPtrBase *)(this + 0x120);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(pRVar1);
    if (cVar2 != '\0') {
      uVar7 = 0;
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      (**(code **)(*plVar6 + 0x48))();
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)pRVar1);
      goto LAB_03fbdaf8;
    }
  }
  else {
    uVar7 = 0;
    if (param_2 == 6) {
      pcVar8 = *(code **)(*(long *)this + 0x78);
      p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
      uVar5 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(p_Var4);
      (*pcVar8)(this,uVar5);
      setState(this,0xb);
      goto LAB_03fbdaf8;
    }
    if ((param_2 - 0xfU & 0xfffffffd) == 0) {
      setState(this,0xb);
      goto LAB_03fbdaf8;
    }
    if (param_2 == 0x19) {
      pRVar1 = (RtMixedPtrBase *)(this + 0x118);
      cVar2 = Sexy::RtMixedPtrBase::IsValid(pRVar1);
      if (cVar2 != '\0') {
        plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
        (**(code **)(*plVar6 + 0x48))();
        Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)pRVar1);
      }
      pRVar1 = (RtMixedPtrBase *)(this + 0x120);
      cVar2 = Sexy::RtMixedPtrBase::IsValid(pRVar1);
      if (cVar2 != '\0') {
        plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
        (**(code **)(*plVar6 + 0x48))();
        Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)pRVar1);
      }
      pPVar3 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
      uVar7 = 1;
      std::string::string(asStack_40,"plantfood_loop");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar3,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
      nop();
      pcVar8 = *(code **)(*(long *)this + 0x78);
      p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
      uVar5 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(p_Var4);
      (*pcVar8)(this,uVar5);
      *(undefined4 *)(this + 0xe0) = 0xc;
      goto LAB_03fbdaf8;
    }
  }
  uVar7 = 0;
LAB_03fbdaf8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Barbarian::OnPlantMoving(Sexy::Point&) */

void __thiscall Barbarian::OnPlantMoving(Barbarian *this,Point *param_1)

{
  int iVar1;
  Barbarian BVar2;
  char cVar3;
  float *pfVar4;
  StandaloneEffect *pSVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_40;
  int local_3c;
  Vec3 aVStack_38 [8];
  undefined4 local_30;
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  Point *local_8;
  
  local_8 = ___stack_chk_guard;
  BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)param_1,___stack_chk_guard);
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  EATextSquish::Vec3::Vec3(aVStack_38,(float)local_40,(float)local_3c - 10.0,pfVar4[2]);
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) == '\0') {
    cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x118));
  }
  else {
    local_30 = Board::calculateRoofOffsetZ(*pfVar4);
    cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x118));
  }
  if (cVar3 == '\0') {
    cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x120));
  }
  else {
    pSVar5 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118));
    uVar6 = 0xc1700000;
    uVar7 = 0;
    EATextSquish::Vec3::Vec3(aVStack_28,0.0,-15.0,0.0);
    local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)aVStack_38,(SexyVector3 *)aVStack_28);
    local_14 = uVar6;
    local_10 = uVar7;
    StandaloneEffect::SetBoardSpaceOrigin(pSVar5,(SexyVector3 *)&local_18,-1);
    cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x120));
  }
  if (cVar3 == '\0') {
    BVar2 = this[0x104];
  }
  else {
    pSVar5 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x120));
    uVar6 = 0xc1700000;
    uVar7 = 0;
    EATextSquish::Vec3::Vec3(aVStack_28,0.0,-15.0,0.0);
    local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)aVStack_38,(SexyVector3 *)aVStack_28);
    local_14 = uVar6;
    local_10 = uVar7;
    StandaloneEffect::SetBoardSpaceOrigin(pSVar5,(SexyVector3 *)&local_18,-1);
    BVar2 = this[0x104];
  }
  if (BVar2 == (Barbarian)0x0) {
    (**(code **)(*(long *)this + 0x78))(this,aVStack_38);
    this[0xe8] = (Barbarian)0x0;
    iVar1 = *(int *)(this + 0xe0);
  }
  else {
    iVar1 = *(int *)(this + 0xe0);
    this[0xe8] = (Barbarian)0x0;
  }
  if (iVar1 != 0xc) {
    setState(this,0xb);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Barbarian::OnRelocationComplete() */

void __thiscall Barbarian::OnRelocationComplete(Barbarian *this)

{
  char cVar1;
  StandaloneEffect *pSVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var3;
  SexyVector3 *pSVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x118));
  if (cVar1 != '\0') {
    pSVar2 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118));
    p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
    pSVar4 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(p_Var3);
    uVar5 = 0xc1700000;
    uVar6 = 0;
    EATextSquish::Vec3::Vec3(aVStack_28,0.0,-15.0,0.0);
    local_18 = Sexy::SexyVector3::operator+(pSVar4,(SexyVector3 *)aVStack_28);
    local_14 = uVar5;
    local_10 = uVar6;
    StandaloneEffect::SetBoardSpaceOrigin(pSVar2,(SexyVector3 *)&local_18,-1);
  }
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x120));
  if (cVar1 != '\0') {
    pSVar2 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x120));
    p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
    pSVar4 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(p_Var3);
    uVar5 = 0xc1700000;
    uVar6 = 0;
    EATextSquish::Vec3::Vec3(aVStack_28,0.0,-15.0,0.0);
    local_18 = Sexy::SexyVector3::operator+(pSVar4,(SexyVector3 *)aVStack_28);
    local_14 = uVar5;
    local_10 = uVar6;
    StandaloneEffect::SetBoardSpaceOrigin(pSVar2,(SexyVector3 *)&local_18,-1);
  }
  this[0xe8] = (Barbarian)0x0;
  this[0x154] = (Barbarian)0x0;
  setState(this,0xb);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Barbarian::onWatered(bool) */

void __thiscall Barbarian::onWatered(Barbarian *this,bool param_1)

{
  char *pcVar1;
  PopAnimRig *pPVar2;
  undefined4 uVar3;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_Plant_Rhubarbarian_Spawn");
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
    std::string::string(asStack_40,"water");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    setState(this,0x18);
  }
  else {
    uVar3 = PVZ_T();
    this[0x10c] = (Barbarian)0x0;
    *(undefined4 *)(this + 0x108) = uVar3;
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0xe4) = uVar3;
    setState(this,0xb);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Barbarian::onAnimStoppedCallback(std::string const&) */

void __thiscall Barbarian::onAnimStoppedCallback(Barbarian *this,string *param_1)

{
  undefined *this_00;
  bool bVar1;
  char cVar2;
  PopAnimRig *pPVar3;
  Plant *pPVar4;
  SexyVector3 *pSVar5;
  uint uVar6;
  string asStack_a0 [8];
  RtMixedPtr aRStack_98 [8];
  RtId aRStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [48];
  DummyInit aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"plant");
  if (bVar1) {
    dealDamageToLandingArea(this);
    bVar1 = std::operator==(param_1,"rotation_start");
    if (!bVar1) goto LAB_03fbe430;
LAB_03fbe740:
    this[0x104] = (Barbarian)0x1;
    setState(this,0x11);
    pPVar3 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
    std::string::string(asStack_80,"rotation_loop");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_50);
    PopAnimRig::PlayAndContinue(pPVar3,asStack_80,0,aDStack_50);
    std::string::~string(asStack_80);
    nop();
    bVar1 = std::operator==(param_1,"rotation_start_plantfood");
    if (!bVar1) goto LAB_03fbe448;
LAB_03fbe7cc:
    this[0x104] = (Barbarian)0x1;
    setState(this,0x11);
    pPVar3 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
    std::string::string(asStack_80,"rotation_loop_plantfood");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_50);
    PopAnimRig::PlayAndContinue(pPVar3,asStack_80,0,aDStack_50);
    std::string::~string(asStack_80);
    nop();
    bVar1 = std::operator==(param_1,"huilai_start");
    if (!bVar1) goto LAB_03fbe460;
LAB_03fbe858:
    setState(this,0x10);
    pPVar3 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
    std::string::string(asStack_80,"huilai_loop");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_50);
    PopAnimRig::PlayAndContinue(pPVar3,asStack_80,0,aDStack_50);
    std::string::~string(asStack_80);
    nop();
    bVar1 = std::operator==(param_1,"huilai_start_plantfood");
    if (!bVar1) goto LAB_03fbe478;
LAB_03fbe8dc:
    setState(this,0x10);
    pPVar3 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
    std::string::string(asStack_80,"huilai_loop_plantfood");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_50);
    PopAnimRig::PlayAndContinue(pPVar3,asStack_80,0,aDStack_50);
    std::string::~string(asStack_80);
    nop();
    bVar1 = std::operator==(param_1,"attack_end_1");
    if (!bVar1) goto LAB_03fbe960;
LAB_03fbe490:
    setState(this,0xb);
    this[0xe8] = (Barbarian)0x0;
    bVar1 = std::operator==(param_1,"huilai_end");
    if (bVar1) goto LAB_03fbe4bc;
LAB_03fbe994:
    bVar1 = std::operator==(param_1,"huilai_end_plantfood");
    if (!bVar1) goto LAB_03fbe4e8;
    bVar1 = std::operator==(param_1,"huilai_end_plantfood");
    if (bVar1) goto LAB_03fbe9bc;
  }
  else {
    bVar1 = std::operator==(param_1,"rotation_start");
    if (bVar1) goto LAB_03fbe740;
LAB_03fbe430:
    bVar1 = std::operator==(param_1,"rotation_start_plantfood");
    if (bVar1) goto LAB_03fbe7cc;
LAB_03fbe448:
    bVar1 = std::operator==(param_1,"huilai_start");
    if (bVar1) goto LAB_03fbe858;
LAB_03fbe460:
    bVar1 = std::operator==(param_1,"huilai_start_plantfood");
    if (bVar1) goto LAB_03fbe8dc;
LAB_03fbe478:
    bVar1 = std::operator==(param_1,"attack_end_1");
    if (bVar1) goto LAB_03fbe490;
LAB_03fbe960:
    bVar1 = std::operator==(param_1,"attack_end_2");
    if (bVar1) goto LAB_03fbe490;
    bVar1 = std::operator==(param_1,"huilai_end");
    if (!bVar1) goto LAB_03fbe994;
LAB_03fbe4bc:
    bVar1 = std::operator==(param_1,"huilai_end_plantfood");
    if (bVar1) {
LAB_03fbe9bc:
      this[0x164] = (Barbarian)0x0;
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xa8));
      this_00 = gMessageRouter;
      if (cVar2 != '\0') {
        pPVar4 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
        MessageRouter::Post<Plant*,Plant*>
                  ((MessageRouter *)this_00,Message::BarbarianPlantfoodEnd,pPVar4);
      }
    }
  }
  this[0x104] = (Barbarian)0x0;
  this[0x114] = (Barbarian)0x0;
  onAnimLandingFinished(this,false,true);
LAB_03fbe4e8:
  bVar1 = std::operator==(param_1,"rotation_end");
  if (bVar1) {
    onAnimLandingFinished(this,true,false);
  }
  bVar1 = std::operator==(param_1,"rotation_end_plantfood");
  if (bVar1) {
    onAnimLandingFinished(this,true,false);
  }
  bVar1 = std::operator==(param_1,"jumpattack");
  if (bVar1) {
    pSVar5 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0xd0),pSVar5);
    std::string::string((string *)aRStack_90,"rotation_end");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_98);
    std::string::string(asStack_80,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aDStack_50,
               (RtId *)asStack_88,asStack_80);
    playAnimation(this,(string *)aRStack_90,
                  (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                   *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
    std::string::~string(asStack_80);
    nop();
    Sexy::RtId::~RtId((RtId *)asStack_88);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
    std::string::~string((string *)aRStack_90);
    nop();
  }
  bVar1 = std::operator==(param_1,"jumpattack_plantfood");
  if (bVar1) {
    pSVar5 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0xd0),pSVar5);
    std::string::string((string *)aRStack_90,"rotation_end_plantfood");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_98);
    std::string::string(asStack_80,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aDStack_50,
               (RtId *)asStack_88,asStack_80);
    playAnimation(this,(string *)aRStack_90,
                  (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                   *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
    std::string::~string(asStack_80);
    nop();
    Sexy::RtId::~RtId((RtId *)asStack_88);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
    std::string::~string((string *)aRStack_90);
    nop();
  }
  bVar1 = std::operator==(param_1,"attack_start_1");
  if ((bVar1) || (bVar1 = std::operator==(param_1,"attack_start_2"), bVar1)) {
    uVar6 = 2;
    if (this[0x114] == (Barbarian)0x0) {
      uVar6 = 1;
    }
    Sexy::StrFormat("attack_loop_%d",asStack_80,(ulong)uVar6);
    pPVar3 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_50);
    PopAnimRig::PlayAndContinue(pPVar3,asStack_80,0,aDStack_50);
    std::string::~string(asStack_80);
  }
  bVar1 = std::operator==(param_1,"idle");
  if ((bVar1) || (bVar1 = std::operator==(param_1,"idle2"), bVar1)) {
    ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
              ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)asStack_80);
    std::string::string(asStack_88,"idle");
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)asStack_80,asStack_88,0x46);
    std::string::~string(asStack_88);
    nop();
    std::string::string(asStack_88,"idle2");
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)asStack_80,asStack_88,0x1e);
    std::string::~string(asStack_88);
    nop();
    ProbabilitySet<std::string>::PickItem();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_98);
    std::string::string(asStack_88,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aDStack_50,aRStack_90,
               asStack_88);
    playAnimation(this,asStack_a0,
                  (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                   *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
    std::string::~string(asStack_88);
    nop();
    Sexy::RtId::~RtId(aRStack_90);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
    std::string::~string(asStack_a0);
    ProbabilitySet<std::string>::~ProbabilitySet((ProbabilitySet<std::string> *)asStack_80);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

