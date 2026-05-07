// Class: GridItemCthulhuActiniaTentacle


/* GridItemCthulhuActiniaTentacle::SetOwnerPlant(Sexy::RtWeakPtr<Plant>) */

void __thiscall
GridItemCthulhuActiniaTentacle::SetOwnerPlant
          (GridItemCthulhuActiniaTentacle *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1b8),param_2);
  return;
}


/* GridItemCthulhuActiniaTentacle::CalcRenderOrder() const */

void __thiscall
GridItemCthulhuActiniaTentacle::CalcRenderOrder(GridItemCthulhuActiniaTentacle *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_04d586b0(*(undefined4 *)(this + 0x134));
  Board::MakeRenderOrder(0x64960,uVar1,1);
  return;
}


/* non-virtual thunk to GridItemCthulhuActiniaTentacle::CalcRenderOrder() const */

void __thiscall
GridItemCthulhuActiniaTentacle::CalcRenderOrder(GridItemCthulhuActiniaTentacle *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCthulhuActiniaTentacle::StaticClassInit() */

void GridItemCthulhuActiniaTentacle::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemCthulhuActiniaTentacle");
    (*pcVar2)(plVar1,asStack_10,FUN_04d5c868,0x208,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCthulhuActiniaTentacle::StaticGetClass() */

long * GridItemCthulhuActiniaTentacle::StaticGetClass(void)

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
  uVar2 = GridItemAnimController::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCthulhuActiniaTentacle",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCthulhuActiniaTentacle::GetClass() const */

long * GridItemCthulhuActiniaTentacle::GetClass(void)

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
  uVar2 = GridItemAnimController::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCthulhuActiniaTentacle",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCthulhuActiniaTentacle::SetTargetZombie(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
GridItemCthulhuActiniaTentacle::SetTargetZombie
          (GridItemCthulhuActiniaTentacle *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x200),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCthulhuActiniaTentacle::GetAttackAnimName() */

void GridItemCthulhuActiniaTentacle::GetAttackAnimName(void)

{
  RtMixedPtrBase *this;
  long lVar1;
  char cVar2;
  int iVar3;
  long in_x0;
  Plant *pPVar4;
  long lVar5;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  this = (RtMixedPtrBase *)(in_x0 + 0x1b8);
  cVar2 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar2 != '\0') {
    pPVar4 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this);
    if (*(code **)(*(long *)pPVar4 + 0x1f8) == Plant::IsInPlantFoodState) {
      cVar2 = Plant::IsInPlantFoodState(pPVar4);
    }
    else {
      cVar2 = (**(code **)(*(long *)pPVar4 + 0x1f8))();
    }
    if (cVar2 != '\0') {
      pPVar4 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      cVar2 = Plant::GetAvatarEnable(pPVar4);
      if (cVar2 == '\0') {
        std::string::string(in_x8,"hit_plantfood");
        nop();
      }
      else {
        std::string::string(in_x8,"hit_plantfood_avatar");
        nop();
      }
      goto LAB_04d59878;
    }
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    iVar3 = FUN_04d586ac(*(undefined4 *)(lVar5 + 0x50));
    if (iVar3 == 5) {
      std::string::string(in_x8,"hit_lv5");
      nop();
      goto LAB_04d59878;
    }
  }
  std::string::string(in_x8,"hit");
  nop();
LAB_04d59878:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCthulhuActiniaTentacle::GetDragAnimName() */

void GridItemCthulhuActiniaTentacle::GetDragAnimName(void)

{
  RtMixedPtrBase *this;
  long lVar1;
  char cVar2;
  long in_x0;
  Plant *pPVar3;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  this = (RtMixedPtrBase *)(in_x0 + 0x1b8);
  cVar2 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar2 != '\0') {
    pPVar3 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this);
    if (*(code **)(*(long *)pPVar3 + 0x1f8) == Plant::IsInPlantFoodState) {
      cVar2 = Plant::IsInPlantFoodState(pPVar3);
    }
    else {
      cVar2 = (**(code **)(*(long *)pPVar3 + 0x1f8))();
    }
    if (cVar2 != '\0') {
      pPVar3 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      cVar2 = Plant::GetAvatarEnable(pPVar3);
      if (cVar2 != '\0') {
        std::string::string(in_x8,"drag_avatar");
        nop();
        goto LAB_04d59958;
      }
    }
  }
  std::string::string(in_x8,"drag");
  nop();
LAB_04d59958:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCthulhuActiniaTentacle::OnPlantMoving(Plant*, Sexy::Point&) */

void GridItemCthulhuActiniaTentacle::OnPlantMoving(Plant *param_1,Point *param_2)

{
  bool bVar1;
  char cVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 != (Point *)0x0) {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x1b8));
    if (bVar1) {
      ToolPacketData::GetProps();
      cVar2 = Sexy::RtWeakPtrBase::operator==
                        ((RtWeakPtrBase *)(param_1 + 0x1b8),(RtWeakPtrBase *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)param_1 + 0x2e0))(param_1,10);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCthulhuActiniaTentacle::PlaySingleAnimation(std::string,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
GridItemCthulhuActiniaTentacle::PlaySingleAnimation
          (undefined8 param_1,undefined8 param_2,RtReflectionDelegate *param_3)

{
  int iVar1;
  PopAnimRig *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  iVar1 = PopAnimRig::PlayAndStop(pPVar2,param_2,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCthulhuActiniaTentacle::SetProps(CthulhuActiniaProps const*) */

void GridItemCthulhuActiniaTentacle::SetProps(CthulhuActiniaProps *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x1c0),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCthulhuActiniaTentacle::CthulhuActiniaPlantfood(Plant*) */

void __thiscall
GridItemCthulhuActiniaTentacle::CthulhuActiniaPlantfood
          (GridItemCthulhuActiniaTentacle *this,Plant *param_1)

{
  bool bVar1;
  Plant *pPVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1b8));
  if ((bVar1) &&
     (pPVar2 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b8)),
     param_1 == pPVar2)) {
    (**(code **)(*(long *)this + 0x2e0))(this,10);
    return;
  }
  return;
}


/* GridItemCthulhuActiniaTentacle::PlantDied(Plant*) */

void __thiscall
GridItemCthulhuActiniaTentacle::PlantDied(GridItemCthulhuActiniaTentacle *this,Plant *param_1)

{
  bool bVar1;
  Plant *pPVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1b8));
  if ((bVar1) &&
     (pPVar2 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b8)),
     param_1 == pPVar2)) {
    (**(code **)(*(long *)this + 0x2e0))(this,10);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCthulhuActiniaTentacle::GridItemCthulhuActiniaTentacle() */

void __thiscall
GridItemCthulhuActiniaTentacle::GridItemCthulhuActiniaTentacle(GridItemCthulhuActiniaTentacle *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimController::GridItemAnimController((GridItemAnimController *)this);
  *(undefined ***)this = &PTR_GetClass_069b3c40;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCthulhuActiniaTentacle_069b3f48;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1c0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1e0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x200));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x200),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCthulhuActiniaTentacle::StaticNew() */

GridItemCthulhuActiniaTentacle * GridItemCthulhuActiniaTentacle::StaticNew(void)

{
  GridItemCthulhuActiniaTentacle *this;
  
  this = ::operator_new(0x208);
  GridItemCthulhuActiniaTentacle(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCthulhuActiniaTentacle::SetState(int) */

void __thiscall
GridItemCthulhuActiniaTentacle::SetState(GridItemCthulhuActiniaTentacle *this,int param_1)

{
  undefined *puVar1;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1a8) != param_1) {
    *(int *)(this + 0x1a8) = param_1;
    puVar1 = gMessageRouter;
    if (param_1 == 9) {
      GetAttackAnimName();
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string((string *)aRStack_58,"OnAttackAnimDone");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 (string *)aRStack_58);
      PlaySingleAnimation(this,asStack_70,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)aRStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      std::string::~string(asStack_70);
    }
    else if (param_1 == 10) {
      (**(code **)(*(long *)this + 0x230))();
    }
    else if (param_1 == 6) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)(this + 0x1b8));
      MessageRouter::Post<Plant*,Sexy::RtWeakPtr<Plant>>
                ((MessageRouter *)puVar1,Message::CthulhuActiniaTentacleDragStart,aRStack_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
      GetDragAnimName();
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string((string *)aRStack_58,"OnAttackAnimDone");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 aRStack_58);
      PlaySingleAnimation(this,asStack_70,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)aRStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      std::string::~string(asStack_70);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCthulhuActiniaTentacle::OnAttackAnimDone(std::string const&) */

void __thiscall
GridItemCthulhuActiniaTentacle::OnAttackAnimDone
          (GridItemCthulhuActiniaTentacle *this,string *param_1)

{
  undefined *puVar1;
  bool bVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = std::operator==(param_1,"drag");
  if ((bVar2) || (bVar2 = std::operator==(param_1,"drag_avatar"), bVar2)) {
    puVar1 = gMessageRouter;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x1b8));
    MessageRouter::Post<Plant*,Sexy::RtWeakPtr<Plant>>
              ((MessageRouter *)puVar1,Message::CthulhuActiniaTentacleDragOver,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  else {
    bVar2 = std::operator==(param_1,"hit");
    if ((bVar2) || (bVar2 = std::operator==(param_1,"hit_lv5"), bVar2)) {
      this[0x1f8] = (GridItemCthulhuActiniaTentacle)0x0;
      (**(code **)(*(long *)this + 0x2e0))(this,5);
      goto LAB_04d5c4e0;
    }
    bVar2 = std::operator==(param_1,"hit_plantfood");
    if ((!bVar2) && (bVar2 = std::operator==(param_1,"hit_plantfood_avatar"), !bVar2))
    goto LAB_04d5c4e0;
  }
  (**(code **)(*(long *)this + 0x2e0))(this,10);
LAB_04d5c4e0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCthulhuActiniaTentacle::KillZombie(Zombie*) */

void __thiscall
GridItemCthulhuActiniaTentacle::KillZombie(GridItemCthulhuActiniaTentacle *this,Zombie *param_1)

{
  ResourceInfo *pRVar1;
  code *pcVar2;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Zombie *)0x0) {
    Zombie::SetIgnoresAllDamage(param_1,false);
    (**(code **)(*(long *)param_1 + 0x80))(param_1,1);
    pcVar2 = *(code **)(*(long *)param_1 + 0x120);
    pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x1b8));
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo((DamageInfo *)0x0,local_70,local_6c,aDStack_68,4,pRVar1,aPStack_78,0);
    (*pcVar2)(param_1,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)aDStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCthulhuActiniaTentacle::~GridItemCthulhuActiniaTentacle() */

void __thiscall
GridItemCthulhuActiniaTentacle::~GridItemCthulhuActiniaTentacle
          (GridItemCthulhuActiniaTentacle *this)

{
  *(undefined ***)this = &PTR_GetClass_069b3c40;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCthulhuActiniaTentacle_069b3f48;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x200));
  std::vector<CurveSequence<Sexy::SexyVector3>,std::allocator<CurveSequence<Sexy::SexyVector3>>>::
  ~vector((vector<CurveSequence<Sexy::SexyVector3>,std::allocator<CurveSequence<Sexy::SexyVector3>>>
           *)(this + 0x1e0));
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1c8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b8));
  GridItemAnimController::~GridItemAnimController((GridItemAnimController *)this);
  return;
}


/* non-virtual thunk to GridItemCthulhuActiniaTentacle::~GridItemCthulhuActiniaTentacle() */

void __thiscall
GridItemCthulhuActiniaTentacle::~GridItemCthulhuActiniaTentacle
          (GridItemCthulhuActiniaTentacle *this)

{
  ~GridItemCthulhuActiniaTentacle(this + -0x10);
  return;
}


/* GridItemCthulhuActiniaTentacle::~GridItemCthulhuActiniaTentacle() */

void __thiscall
GridItemCthulhuActiniaTentacle::~GridItemCthulhuActiniaTentacle
          (GridItemCthulhuActiniaTentacle *this)

{
  ~GridItemCthulhuActiniaTentacle(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemCthulhuActiniaTentacle::~GridItemCthulhuActiniaTentacle() */

void __thiscall
GridItemCthulhuActiniaTentacle::~GridItemCthulhuActiniaTentacle
          (GridItemCthulhuActiniaTentacle *this)

{
  ~GridItemCthulhuActiniaTentacle(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCthulhuActiniaTentacle::DamageZombie(Zombie*, int, bool) */

void __thiscall
GridItemCthulhuActiniaTentacle::DamageZombie
          (GridItemCthulhuActiniaTentacle *this,Zombie *param_1,int param_2,bool param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ZombieTosserSubSystem *pZVar3;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_118 [72];
  DamageInfo aDStack_d0 [8];
  float local_c8;
  undefined8 local_70;
  undefined4 local_68;
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Zombie *)0x0) {
    DamageInfo::DamageInfo(aDStack_d0);
    local_c8 = (float)param_2;
    (**(code **)(*(long *)param_1 + 0x110))(param_1,aDStack_d0);
    if ((param_3) && (iVar1 = Zombie::GetSizeType(param_1), iVar1 != 2)) {
      Zombie::GetCurrentTitleStatus();
      TitleStatus::~TitleStatus((TitleStatus *)&local_70);
      if (local_58 == '\0') {
        puVar2 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)param_1);
        local_70 = *puVar2;
        local_68 = *(undefined4 *)(puVar2 + 1);
        iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
        local_70 = CONCAT44(local_70._4_4_,(float)iVar1 + (float)local_70);
        pZVar3 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
        RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_118);
        ZombieTosserSubSystem::LaunchZombie
                  ((ZombieTosserSubSystem *)0x41200000,0x3f000000,pZVar3,param_1,
                   (TitleStatus *)&local_70,aRStack_118,0);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_118);
      }
    }
    DamageInfo::~DamageInfo(aDStack_d0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCthulhuActiniaTentacle::FindTargets(bool) */

void GridItemCthulhuActiniaTentacle::FindTargets(bool param_1)

{
  char cVar1;
  undefined8 extraout_x0;
  undefined1 in_w1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  int local_48;
  int local_44;
  Insets aIStack_40 [16];
  Insets aIStack_30 [16];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GetGridLocation();
  Sexy::Insets::Insets(aIStack_40,local_48,local_44,1,1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)((ulong)param_1 + 0x1b8));
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
              ((RtWeakPtr<Sexy::ResourceInfo> *)((ulong)param_1 + 0x1b8));
    nop();
    Sexy::Insets::Insets(aIStack_30,aIStack_40);
    PlantCthulhuActinia::FindAttackTargets(avStack_20,extraout_x0,aIStack_30,in_w1);
    std::
    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
    ::begin(avStack_20);
    std::
    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
    ::end(avStack_20);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::
    assign<__gnu_cxx::__normal_iterator<Zombie**,std::vector<Zombie*,std::allocator<Zombie*>>>,void>
              ();
    std::vector<Zombie*,std::allocator<Zombie*>>::~vector
              ((vector<Zombie*,std::allocator<Zombie*>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCthulhuActiniaTentacle::FindParentTargets(bool) */

void GridItemCthulhuActiniaTentacle::FindParentTargets(bool param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  char cVar1;
  undefined8 extraout_x0;
  undefined1 in_w1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  int local_48;
  int local_44;
  Insets aIStack_40 [16];
  Insets aIStack_30 [16];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  this = (RtWeakPtr<Sexy::ResourceInfo> *)((ulong)param_1 + 0x1b8);
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  BoardEntity::CalcGridPosition();
  Sexy::Insets::Insets(aIStack_40,local_48,local_44,4,1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this);
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    nop();
    Sexy::Insets::Insets(aIStack_30,aIStack_40);
    PlantCthulhuActinia::FindAttackTargets(avStack_20,extraout_x0,aIStack_30,in_w1);
    std::
    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
    ::begin(avStack_20);
    std::
    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
    ::end(avStack_20);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::
    assign<__gnu_cxx::__normal_iterator<Zombie**,std::vector<Zombie*,std::allocator<Zombie*>>>,void>
              ();
    std::vector<Zombie*,std::allocator<Zombie*>>::~vector
              ((vector<Zombie*,std::allocator<Zombie*>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCthulhuActiniaTentacle::UpdateIdle() */

void __thiscall GridItemCthulhuActiniaTentacle::UpdateIdle(GridItemCthulhuActiniaTentacle *this)

{
  RtMixedPtrBase *this_00;
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  PlantCthulhuActinia *this_01;
  long lVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x1b8);
  local_8 = ___stack_chk_guard;
  cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar2 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    nop();
    cVar2 = PlantCthulhuActinia::IsTentacleAvailable(this_01);
    bVar3 = SUB81(this,0);
    FindTargets(bVar3);
    lVar4 = FUN_04d58754(local_50,local_48);
    if ((lVar4 == 0) || (cVar2 == '\0')) {
      if (this[0x1f8] == (GridItemCthulhuActiniaTentacle)0x0) {
        FindParentTargets(bVar3);
        lVar4 = FUN_04d58754(local_38,local_30);
        puVar1 = gMessageRouter;
        if (lVar4 == 0) {
          FindTargets(bVar3);
          lVar4 = FUN_04d58754(local_20,local_18);
          puVar1 = gMessageRouter;
          if (lVar4 == 0) {
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)this_00);
            MessageRouter::Post<Plant*,Sexy::RtWeakPtr<Plant>>
                      ((MessageRouter *)puVar1,Message::CthulhuActiniaTentacleAttackOver,aRStack_58)
            ;
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
            (**(code **)(*(long *)this + 0x2e0))(this,10);
          }
          else {
            (**(code **)(*(long *)this + 0x2e0))(this,9);
          }
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
        }
        else {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)this_00);
          MessageRouter::Post<Plant*,Sexy::RtWeakPtr<Plant>>
                    ((MessageRouter *)puVar1,Message::CthulhuActiniaTentacleAttackOver,
                     (RtWeakPtr<Sexy::SoundResource> *)&local_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
          (**(code **)(*(long *)this + 0x2e0))(this,10);
        }
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
      }
      else {
        (**(code **)(*(long *)this + 0x2e0))(this,9);
      }
    }
    else {
      (**(code **)(*(long *)this + 0x2e0))(this,6);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCthulhuActiniaTentacle::OnPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void GridItemCthulhuActiniaTentacle::OnPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  RtMixedPtrBase *pRVar1;
  undefined8 uVar2;
  ResourceInfo *pRVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  char *pcVar7;
  long lVar8;
  undefined8 *puVar9;
  Zombie *pZVar10;
  PlantCthulhuActinia *this;
  PlantCthulhuActinia *this_00;
  Plant *this_01;
  long *plVar11;
  BoardEntity **ppBVar12;
  code *pcVar13;
  float fVar14;
  undefined8 local_50 [3];
  undefined8 local_38;
  undefined8 local_30;
  ResourceInfo *local_20;
  undefined8 local_18;
  long local_8;
  
  pRVar1 = (RtMixedPtrBase *)(param_1 + 0x1b8);
  local_8 = ___stack_chk_guard;
  cVar4 = Sexy::RtMixedPtrBase::IsValid(pRVar1);
  if (cVar4 == '\0') {
    (**(code **)(*(long *)param_1 + 0x2e0))(param_1,10);
    goto LAB_04d60690;
  }
  bVar5 = std::operator==(param_4,"hit_action");
  bVar6 = SUB81(param_1,0);
  if (bVar5) {
    pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar7,"Play_Plant_CthulhuActinia_Attack");
    FindTargets(bVar6);
    pRVar3 = local_20;
    lVar8 = FUN_04d58754(local_20,local_18);
    if (lVar8 != 0) {
      puVar9 = (undefined8 *)FUN_04d58760(pRVar3,0);
      if ((RtObject *)*puVar9 == (RtObject *)0x0) {
        pZVar10 = (Zombie *)0x0;
      }
      else {
        pZVar10 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar9);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      nop();
      fVar14 = (float)PlantCthulhuActinia::GetTentacleDamage(this);
      DamageZombie((GridItemCthulhuActiniaTentacle *)param_1,pZVar10,(int)fVar14,false);
    }
  }
  else {
    bVar5 = std::operator==(param_4,"hit_plantfood_action");
    if (!bVar5) {
      bVar5 = std::operator==(param_4,"drag_action");
      if (!bVar5) goto LAB_04d60690;
      pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      pRVar1 = (RtMixedPtrBase *)(param_1 + 0x200);
      AudioMgr::SendEvent(pcVar7,"Play_Plant_CthulhuActinia_Attack");
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_50);
      cVar4 = Sexy::RtMixedPtrBase::IsValid(pRVar1);
      if (cVar4 == '\0') {
LAB_04d6080c:
        FindTargets(bVar6);
        uVar2 = local_38;
        lVar8 = FUN_04d58754(local_38,local_30);
        if (lVar8 != 0) {
          ppBVar12 = (BoardEntity **)FUN_04d58760(uVar2,0);
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_50,ppBVar12);
          pcVar13 = *(code **)(*(long *)param_1 + 0x2d8);
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,
                     (vector *)local_50);
          (*pcVar13)(param_1,(vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
        }
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
      }
      else {
        plVar11 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
        cVar4 = (**(code **)(*plVar11 + 0x328))();
        if (cVar4 != '\0') goto LAB_04d6080c;
        pZVar10 = (Zombie *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
        cVar4 = Zombie::HasHead(pZVar10);
        if (cVar4 == '\0') goto LAB_04d6080c;
        plVar11 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
        cVar4 = (**(code **)(*plVar11 + 0x330))();
        if (cVar4 != '\0') goto LAB_04d6080c;
        local_20 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)pRVar1);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_50,
                   (BoardEntity **)&local_20);
        pcVar13 = *(code **)(*(long *)param_1 + 0x2d8);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,(vector *)local_50
                  );
        (*pcVar13)(param_1,(vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_50);
      goto LAB_04d60690;
    }
    pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar7,"Play_Plant_CthulhuActinia_Plantfood_Attack");
    FindTargets(bVar6);
    lVar8 = FUN_04d58754(local_20,local_18);
    if (lVar8 != 0) {
      local_50[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)&local_20);
      local_38 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
      while (bVar5 = __gnu_cxx::operator!=
                               ((__normal_iterator *)local_50,(__normal_iterator *)&local_38), bVar5
            ) {
        puVar9 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_50);
        if ((RtObject *)*puVar9 == (RtObject *)0x0) {
          pZVar10 = (Zombie *)0x0;
        }
        else {
          pZVar10 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar9);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
        nop();
        fVar14 = (float)PlantCthulhuActinia::GetTentacleDamage(this_00);
        this_01 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
        bVar5 = (bool)Plant::GetAvatarEnable(this_01);
        DamageZombie((GridItemCthulhuActiniaTentacle *)param_1,pZVar10,(int)fVar14,bVar5);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_50);
      }
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
LAB_04d60690:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCthulhuActiniaTentacle::UpdateSwallowZombies() */

void GridItemCthulhuActiniaTentacle::UpdateSwallowZombies(void)

{
  vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *this;
  uint uVar1;
  char cVar2;
  int iVar3;
  GridItemCthulhuActiniaTentacle *in_x0;
  ResourceInfo *pRVar4;
  RtWeakPtrBase *pRVar5;
  CurveSequence<Sexy::SexyVector3> *pCVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  undefined4 in_s1;
  RtWeakPtr aRStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  long local_8;
  
  this = (vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)(in_x0 + 0x1c8);
  local_8 = ___stack_chk_guard;
  cVar2 = std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::empty(this);
  if (cVar2 == '\0') {
    uVar8 = *(undefined8 *)(in_x0 + 0x1c8);
    iVar3 = FUN_04d58780(uVar8,*(undefined8 *)(in_x0 + 0x1d0));
    uVar1 = iVar3 - 1;
    if (-1 < (int)uVar1) {
      lVar11 = (long)(int)uVar1 + -1;
      lVar9 = (long)(int)uVar1;
      lVar12 = lVar11;
      do {
        pRVar5 = (RtWeakPtrBase *)FUN_04d5878c(uVar8,lVar9);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,pRVar5);
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_30);
        if (cVar2 == '\0') {
LAB_04d609c8:
          local_28 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)this);
          local_20 = __gnu_cxx::
                     __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                     ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                  *)&local_28,lVar9);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_18,(__normal_iterator *)&local_20);
          std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::erase
                    (this,CONCAT44(uStack_14,local_18));
          local_28 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)(in_x0 + 0x1e0));
          local_20 = __gnu_cxx::
                     __normal_iterator<Sexy::LeaderboardEntry*,std::vector<Sexy::LeaderboardEntry,std::allocator<Sexy::LeaderboardEntry>>>
                     ::operator+((__normal_iterator<Sexy::LeaderboardEntry*,std::vector<Sexy::LeaderboardEntry,std::allocator<Sexy::LeaderboardEntry>>>
                                  *)&local_28,lVar9);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_18,(__normal_iterator *)&local_20);
          std::
          vector<CurveSequence<Sexy::SexyVector3>,std::allocator<CurveSequence<Sexy::SexyVector3>>>
          ::erase((vector<CurveSequence<Sexy::SexyVector3>,std::allocator<CurveSequence<Sexy::SexyVector3>>>
                   *)(in_x0 + 0x1e0),CONCAT44(uStack_14,local_18));
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        }
        else {
          pCVar6 = (CurveSequence<Sexy::SexyVector3> *)
                   FUN_04d58794(*(undefined8 *)(in_x0 + 0x1e0),lVar9);
          fVar13 = (float)PVZ_T();
          cVar2 = CurveSequence<Sexy::SexyVector3>::IsTimeInSequence(pCVar6,fVar13);
          if (cVar2 == '\0') {
            pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_30);
            KillZombie(in_x0,(Zombie *)pRVar4);
            goto LAB_04d609c8;
          }
          plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          pcVar10 = *(code **)(*plVar7 + 0x78);
          pCVar6 = (CurveSequence<Sexy::SexyVector3> *)
                   FUN_04d58794(*(undefined8 *)(in_x0 + 0x1e0),lVar9);
          fVar13 = (float)PVZ_T();
          local_18 = CurveSequence<Sexy::SexyVector3>::GetValueAt(pCVar6,fVar13);
          uStack_14 = in_s1;
          (*pcVar10)(plVar7,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                             *)&local_18);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        }
        if (lVar12 == lVar11 - (ulong)uVar1) break;
        uVar8 = *(undefined8 *)(in_x0 + 0x1c8);
        lVar9 = lVar12;
        lVar12 = lVar12 + -1;
      } while( true );
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCthulhuActiniaTentacle::SetupZombieToBeSwallowed(Zombie*) */

void __thiscall
GridItemCthulhuActiniaTentacle::SetupZombieToBeSwallowed
          (GridItemCthulhuActiniaTentacle *this,Zombie *param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  Zombie *pZVar6;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::GetHasPlantFood(param_1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  cVar2 = Zombie::HasCondition(param_1,0x12);
  if (cVar2 == '\0') {
    cVar2 = Zombie::HasCondition(param_1,0x13);
  }
  else {
    local_24 = 0x12;
    std::vector<ZombieConditions,std::allocator<ZombieConditions>>::push_back
              ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)&local_20,
               (ZombieConditions *)&local_24);
    cVar2 = Zombie::HasCondition(param_1,0x13);
  }
  if (cVar2 == '\0') {
    cVar2 = Zombie::HasCondition(param_1,0x14);
  }
  else {
    local_24 = 0x13;
    std::vector<ZombieConditions,std::allocator<ZombieConditions>>::push_back
              ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)&local_20,
               (ZombieConditions *)&local_24);
    cVar2 = Zombie::HasCondition(param_1,0x14);
  }
  if (cVar2 == '\0') {
    cVar2 = Zombie::HasCondition(param_1,0x15);
  }
  else {
    local_24 = 0x14;
    std::vector<ZombieConditions,std::allocator<ZombieConditions>>::push_back
              ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)&local_20,
               (ZombieConditions *)&local_24);
    cVar2 = Zombie::HasCondition(param_1,0x15);
  }
  if (cVar2 == '\0') {
    cVar2 = Zombie::HasCondition(param_1,0x16);
  }
  else {
    local_24 = 0x15;
    std::vector<ZombieConditions,std::allocator<ZombieConditions>>::push_back
              ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)&local_20,
               (ZombieConditions *)&local_24);
    cVar2 = Zombie::HasCondition(param_1,0x16);
  }
  if (cVar2 == '\0') {
    cVar2 = Zombie::HasCondition(param_1,0x17);
  }
  else {
    local_24 = 0x16;
    std::vector<ZombieConditions,std::allocator<ZombieConditions>>::push_back
              ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)&local_20,
               (ZombieConditions *)&local_24);
    cVar2 = Zombie::HasCondition(param_1,0x17);
  }
  if (cVar2 != '\0') {
    local_24 = 0x17;
    std::vector<ZombieConditions,std::allocator<ZombieConditions>>::push_back
              ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)&local_20,
               (ZombieConditions *)&local_24);
  }
  Zombie::SetIsBeingPulledByOlivePit(param_1,true);
  Zombie::ClearConditions(param_1);
  Zombie::SetHasPlantFood(SUB81(param_1,0));
  pZVar6._0_4_ = (Zombie *)PVZ_EOT();
  Zombie::ApplyCondition(pZVar6._0_4_,0,param_1,2,1);
  uVar5 = 0;
  while( true ) {
    uVar1 = local_20;
    uVar4 = FUN_04d587a0(local_20,local_18);
    if (uVar4 <= uVar5) break;
    puVar3 = (undefined4 *)FUN_04d587ac(uVar1,uVar5);
    Zombie::ApplyCondition(pZVar6._0_4_,0,param_1,*puVar3,1);
    uVar5 = uVar5 + 1;
  }
  Zombie::SetMarkedForDeath(param_1);
  Zombie::SetIsControlled(param_1,true);
  Zombie::SetIgnoresAllDamage(param_1,true);
  Zombie::SetIgnoresCollisions(param_1,true);
  RealObject::SetDisableSnapToGround((RealObject *)param_1,true);
  std::vector<ZombieConditions,std::allocator<ZombieConditions>>::~vector
            ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCthulhuActiniaTentacle::SwallowZombies(std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >) */

void __thiscall
GridItemCthulhuActiniaTentacle::SwallowZombies
          (GridItemCthulhuActiniaTentacle *this,
          vector<BoardEntity*,std::allocator<BoardEntity*>> *param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 *puVar3;
  Zombie *this_00;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  float fVar7;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  float local_58;
  Vec3 aVStack_50 [16];
  Vec3 aVStack_40 [16];
  Insets aIStack_30 [12];
  int local_24;
  PIInterpolator aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty(param_2);
  if (cVar1 == '\0') {
    uVar5 = *(undefined8 *)param_2;
    uVar6 = 0;
    uVar2 = FUN_04d58754(uVar5,*(undefined8 *)(param_2 + 8));
    if (uVar2 != 0) {
      do {
        puVar3 = (undefined8 *)FUN_04d58760(uVar5,uVar6);
        if ((RtObject *)*puVar3 != (RtObject *)0x0) {
          this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3);
          if (this_00 != (Zombie *)0x0) {
            SetupZombieToBeSwallowed(this,this_00);
            Sexy::Insets::Insets(aIStack_30);
            plVar4 = (long *)Zombie::GetAnimRig(this_00);
            (**(code **)(*plVar4 + 0x90))(plVar4,aIStack_30);
            puVar3 = (undefined8 *)
                     std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)this_00);
            local_70 = *puVar3;
            local_68 = *(undefined4 *)(puVar3 + 1);
            puVar3 = (undefined8 *)
                     std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)this);
            local_60 = *puVar3;
            local_58 = *(float *)(puVar3 + 1);
            Sexy::PIInterpolator::PIInterpolator(aPStack_20);
            fVar7 = (float)PVZ_T();
            CurveSequence<Sexy::SexyVector3>::StartSequence
                      ((CurveSequence<Sexy::SexyVector3> *)aPStack_20,fVar7,(SexyVector3 *)&local_70
                      );
            CurveSequence<Sexy::SexyVector3>::AddCurve
                      ((CurveSequence<Sexy::SexyVector3> *)0x3e19999a,aPStack_20,
                       (SexyVector3 *)&local_70,&local_60,1);
            fVar7 = (float)FUN_04d58c60();
            EATextSquish::Vec3::Vec3
                      (aVStack_40,(float)local_60,local_60._4_4_,
                       local_58 - fVar7 * (float)local_24 * 0.25);
            CurveSequence<Sexy::SexyVector3>::AddCurve
                      ((CurveSequence<Sexy::SexyVector3> *)0x3e800000,aPStack_20,&local_60,
                       aVStack_40,1);
            fVar7 = (float)FUN_04d58c60();
            EATextSquish::Vec3::Vec3
                      (aVStack_50,(float)local_60,local_60._4_4_,
                       local_58 - fVar7 * (float)local_24 * 0.25);
            fVar7 = (float)FUN_04d58c60();
            EATextSquish::Vec3::Vec3
                      (aVStack_40,(float)local_60,local_60._4_4_,
                       local_58 - fVar7 * (float)local_24 * 0.25);
            CurveSequence<Sexy::SexyVector3>::AddCurve
                      ((CurveSequence<Sexy::SexyVector3> *)0x3f4ccccd,aPStack_20,aVStack_50,
                       aVStack_40,1);
            fVar7 = (float)FUN_04d58c60();
            EATextSquish::Vec3::Vec3
                      (aVStack_50,(float)local_60,local_60._4_4_,
                       local_58 - fVar7 * (float)local_24 * 0.25);
            fVar7 = (float)FUN_04d58c60();
            EATextSquish::Vec3::Vec3
                      (aVStack_40,(float)local_60,local_60._4_4_,
                       local_58 - fVar7 * (float)local_24 * 0.5);
            CurveSequence<Sexy::SexyVector3>::AddCurve
                      ((CurveSequence<Sexy::SexyVector3> *)0x3e19999a,aPStack_20,aVStack_50,
                       aVStack_40,1);
            std::
            vector<CurveSequence<Sexy::SexyVector3>,std::allocator<CurveSequence<Sexy::SexyVector3>>>
            ::push_back((vector<CurveSequence<Sexy::SexyVector3>,std::allocator<CurveSequence<Sexy::SexyVector3>>>
                         *)(this + 0x1e0),(CurveSequence *)aPStack_20);
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aVStack_40,(RtWeakPtrBase *)aVStack_50);
            std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                      ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                       (this + 0x1c8),(RtWeakPtr *)aVStack_40);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_40);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_50);
            CurveSequence<Sexy::SexyVector3>::~CurveSequence
                      ((CurveSequence<Sexy::SexyVector3> *)aPStack_20);
          }
          uVar5 = *(undefined8 *)param_2;
          uVar2 = FUN_04d58754(uVar5,*(undefined8 *)(param_2 + 8));
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCthulhuActiniaTentacle::onGridItemInitialize() */

void __thiscall
GridItemCthulhuActiniaTentacle::onGridItemInitialize(GridItemCthulhuActiniaTentacle *this)

{
  undefined *puVar1;
  TimeChallengeEndLevelUI *this_00;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimController::onGridItemInitialize((GridItemAnimController *)this);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1c8));
  std::vector<CurveSequence<Sexy::SexyVector3>,std::allocator<CurveSequence<Sexy::SexyVector3>>>::
  clear((vector<CurveSequence<Sexy::SexyVector3>,std::allocator<CurveSequence<Sexy::SexyVector3>>> *
        )(this + 0x1e0));
  *(undefined4 *)(this + 0x1a8) = 5;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1c8));
  std::vector<CurveSequence<Sexy::SexyVector3>,std::allocator<CurveSequence<Sexy::SexyVector3>>>::
  clear((vector<CurveSequence<Sexy::SexyVector3>,std::allocator<CurveSequence<Sexy::SexyVector3>>> *
        )(this + 0x1e0));
  this[0x1f8] = (GridItemCthulhuActiniaTentacle)0x1;
  GridItemAnimation::GetAnimRig();
  this_00 = (TimeChallengeEndLevelUI *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2f0);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<GridItemCthulhuActiniaTentacle,void(GridItemCthulhuActiniaTentacle::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,CthulhuActiniaPlantfood);
  local_a0 = local_80;
  uStack_98 = uStack_78;
  local_90 = local_70;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<GridItemCthulhuActiniaTentacle,void(GridItemCthulhuActiniaTentacle::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::CthulhuActiniaPlantfood,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,PlantDied);
  local_90 = local_58;
  local_a0 = local_68;
  uStack_98 = uStack_60;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<GridItemCthulhuActiniaTentacle,void(GridItemCthulhuActiniaTentacle::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPlantMoving);
  local_c0 = local_50;
  uStack_b8 = uStack_48;
  local_b0 = local_40;
  MessageRouter::
  Subscribe<Plant*,Sexy::Point&,Sexy::CBMemberTranslatorX<GridItemCthulhuActiniaTentacle,void(GridItemCthulhuActiniaTentacle::*)(Plant*,Sexy::Point&)>>
            ((MessageRouter *)puVar1,Message::PlantMoving,&local_c0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCthulhuActiniaTentacle::onUpdate() */

void __thiscall GridItemCthulhuActiniaTentacle::onUpdate(GridItemCthulhuActiniaTentacle *this)

{
  int iVar1;
  long lVar2;
  
  lVar2 = ___stack_chk_guard;
  GridItemAnimController::onUpdate((GridItemAnimController *)this);
  GridItem::GetGridLocation();
  iVar1 = *(int *)(this + 0x1a8);
  if (iVar1 == 6) {
    (**(code **)(*(long *)this + 0x2e0))(this,7);
  }
  else if (iVar1 == 7) {
    UpdateSwallowZombies();
  }
  else if (iVar1 == 5) {
    (**(code **)(*(long *)this + 0x2d0))(this);
  }
  if (lVar2 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCthulhuActiniaTentacle::KillGridItem() */

void __thiscall GridItemCthulhuActiniaTentacle::KillGridItem(GridItemCthulhuActiniaTentacle *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  ResourceInfo *pRVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1c8);
  local_8 = ___stack_chk_guard;
  GridItem::KillGridItem((GridItem *)this);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
    if (cVar2 != '\0') {
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
      KillZombie(this,(Zombie *)pRVar4);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this_00);
  std::vector<CurveSequence<Sexy::SexyVector3>,std::allocator<CurveSequence<Sexy::SexyVector3>>>::
  clear((vector<CurveSequence<Sexy::SexyVector3>,std::allocator<CurveSequence<Sexy::SexyVector3>>> *
        )(this + 0x1e0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

