// Class: GridItemMagicMirror2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMagicMirror2::tryToThrowPlant() */

void __thiscall GridItemMagicMirror2::tryToThrowPlant(GridItemMagicMirror2 *this)

{
  int iVar1;
  int iVar2;
  Plant *this_00;
  Board *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = SharkMinion::getRow((SharkMinion *)this);
  iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"");
  this_00 = (Plant *)Board::GetPlantAt(this_01,iVar2,iVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (Plant *)0x0) {
    Plant::beThrown(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMagicMirror2::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemMagicMirror2::GatherPlantingRestrictions
          (GridItemMagicMirror2 *this,PlantType *param_1,vector *param_2)

{
  bool bVar1;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GatherPlantingRestrictions((GridItem *)this,param_1,param_2);
  if ((param_1 == (PlantType *)0x0) ||
     (bVar1 = std::operator==((string *)(param_1 + 8),"flattenedshroom"), !bVar1)) {
    local_c = 0x70;
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
               (PlantingReason *)&local_c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMagicMirror2::onDraw(Sexy::Graphics*) */

void __thiscall GridItemMagicMirror2::onDraw(GridItemMagicMirror2 *this,Graphics *param_1)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  GridItemAnimation::onDraw((GridItemAnimation *)this,param_1);
  GridItem::GetGridLocation();
  GridItem::GetGridLocation();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemMagicMirror2::CalcRenderOrder() const */

void __thiscall GridItemMagicMirror2::CalcRenderOrder(GridItemMagicMirror2 *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_04c8e670(*(undefined4 *)(this + 0x134));
  Board::MakeRenderOrder(0x61ae5,uVar1,0);
  return;
}


/* non-virtual thunk to GridItemMagicMirror2::CalcRenderOrder() const */

void __thiscall GridItemMagicMirror2::CalcRenderOrder(GridItemMagicMirror2 *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMagicMirror2::StaticClassInit() */

void GridItemMagicMirror2::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemMagicMirror2");
    (*pcVar2)(plVar1,asStack_10,FUN_04c8fe94,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemMagicMirror2::StaticGetClass() */

long * GridItemMagicMirror2::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemMagicMirror2",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemMagicMirror2::GetClass() const */

long * GridItemMagicMirror2::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemMagicMirror2",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMagicMirror2::GridItemMagicMirror2() */

void __thiscall GridItemMagicMirror2::GridItemMagicMirror2(GridItemMagicMirror2 *this)

{
  long lVar1;
  undefined4 uVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_06994f80;
  *(undefined ***)(this + 0x10) = &PTR__GridItemMagicMirror2_06995238;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b0));
  *(undefined4 *)(this + 0x1a8) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1b0),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  uVar2 = PVZ_EOT();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x1b8) = uVar2;
  *(undefined4 *)(this + 0x1bc) = uVar2;
  *(undefined4 *)(this + 0x1c0) = 0x3f800000;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemMagicMirror2::StaticNew() */

GridItemMagicMirror2 * GridItemMagicMirror2::StaticNew(void)

{
  GridItemMagicMirror2 *this;
  
  this = ::operator_new(0x1c8);
  GridItemMagicMirror2(this);
  return this;
}


/* GridItemMagicMirror2::~GridItemMagicMirror2() */

void __thiscall GridItemMagicMirror2::~GridItemMagicMirror2(GridItemMagicMirror2 *this)

{
  *(undefined ***)this = &PTR_GetClass_06994f80;
  *(undefined ***)(this + 0x10) = &PTR__GridItemMagicMirror2_06995238;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemMagicMirror2::~GridItemMagicMirror2() */

void __thiscall GridItemMagicMirror2::~GridItemMagicMirror2(GridItemMagicMirror2 *this)

{
  ~GridItemMagicMirror2(this + -0x10);
  return;
}


/* GridItemMagicMirror2::~GridItemMagicMirror2() */

void __thiscall GridItemMagicMirror2::~GridItemMagicMirror2(GridItemMagicMirror2 *this)

{
  ~GridItemMagicMirror2(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemMagicMirror2::~GridItemMagicMirror2() */

void __thiscall GridItemMagicMirror2::~GridItemMagicMirror2(GridItemMagicMirror2 *this)

{
  ~GridItemMagicMirror2(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMagicMirror2::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void GridItemMagicMirror2::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  char cVar1;
  bool bVar2;
  RtObject *this;
  GridItemMagicMirrorRig2 *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  this_00 = Sexy::RtObject::Cast<GridItemMagicMirrorRig2>(this);
  PlantAnimRig_Pumpkin::getIdleAnimationName((PlantAnimRig_Pumpkin *)this_00);
  cVar1 = std::operator==(param_3,asStack_10);
  std::string::~string(asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if ((cVar1 != '\0') && (bVar2 = std::operator==(param_4,"throw_plant"), bVar2)) {
    tryToThrowPlant((GridItemMagicMirror2 *)param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMagicMirror2::setState(GridItemMagicMirrorState) */

void __thiscall GridItemMagicMirror2::setState(GridItemMagicMirror2 *this,int param_2)

{
  RtObject *pRVar1;
  GridItemMagicMirrorRig2 *pGVar2;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1a8) != param_2) {
    *(int *)(this + 0x1a8) = param_2;
    if (param_2 == 2) {
      GridItemAnimation::GetAnimRig();
      pRVar1 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58)
      ;
      pGVar2 = Sexy::RtObject::Cast<GridItemMagicMirrorRig2>(pRVar1);
      GridItemMagicMirrorRig2::playWorkingAnim(pGVar2);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
      fVar3 = (float)PVZ_T();
      *(float *)(this + 0x1bc) = fVar3 + *(float *)(this + 0x1c0);
      fVar3 = (float)PVZ_T();
      *(float *)(this + 0x1b8) = fVar3 + *(float *)(this + 0x1ac);
    }
    else {
      if (param_2 == 3) {
        GridItemAnimation::GetAnimRig();
        pRVar1 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
        pGVar2 = Sexy::RtObject::Cast<GridItemMagicMirrorRig2>(pRVar1);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string(asStack_58,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  (aRStack_50,aRStack_60,asStack_58);
        GridItemMagicMirrorRig2::playDisappearAnim(pGVar2,aRStack_50);
      }
      else {
        if (param_2 != 1) goto LAB_04c8fb4c;
        GridItemAnimation::GetAnimRig();
        pRVar1 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
        pGVar2 = Sexy::RtObject::Cast<GridItemMagicMirrorRig2>(pRVar1);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string(asStack_58,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  (aRStack_50,aRStack_60,asStack_58);
        GridItemMagicMirrorRig2::playAppearAnim(pGVar2,aRStack_50);
      }
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
    }
  }
LAB_04c8fb4c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemMagicMirror2::setValues(float) */

void __thiscall GridItemMagicMirror2::setValues(GridItemMagicMirror2 *this,float param_1)

{
  *(float *)(this + 0x1ac) = param_1;
  setState(this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMagicMirror2::onAnimStoppedCallback(std::string const&) */

void __thiscall
GridItemMagicMirror2::onAnimStoppedCallback(GridItemMagicMirror2 *this,string *param_1)

{
  char cVar1;
  RtObject *pRVar2;
  GridItemMagicMirrorRig2 *pGVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  pRVar2 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  pGVar3 = Sexy::RtObject::Cast<GridItemMagicMirrorRig2>(pRVar2);
  PlantAnimRig_Pumpkin::getIdleAnimationName((PlantAnimRig_Pumpkin *)pGVar3);
  cVar1 = std::operator==(param_1,asStack_10);
  std::string::~string(asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (cVar1 == '\0') {
    GridItemAnimation::GetAnimRig();
    pRVar2 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    pGVar3 = Sexy::RtObject::Cast<GridItemMagicMirrorRig2>(pRVar2);
    GridItemMagicMirrorRig2::getWorkingBlingAnimLabel(pGVar3);
    cVar1 = std::operator==(param_1,asStack_10);
    std::string::~string(asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    if (cVar1 == '\0') {
      GridItemAnimation::GetAnimRig();
      pRVar2 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      pGVar3 = Sexy::RtObject::Cast<GridItemMagicMirrorRig2>(pRVar2);
      GridItemMagicMirrorRig2::getDisAppearingAnimLabel(pGVar3);
      cVar1 = std::operator==(param_1,asStack_10);
      std::string::~string(asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)this + 0x48))(this);
      }
    }
    else {
      fVar4 = (float)PVZ_T();
      *(float *)(this + 0x1bc) = fVar4 + *(float *)(this + 0x1c0);
      GridItemAnimation::GetAnimRig();
      pRVar2 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10)
      ;
      pGVar3 = Sexy::RtObject::Cast<GridItemMagicMirrorRig2>(pRVar2);
      GridItemMagicMirrorRig2::playWorkingAnim(pGVar3);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    }
  }
  else {
    setState(this,2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMagicMirror2::canGameObjectBeTeleported(Sexy::RtWeakPtr<GameObject>) */

void __thiscall
GridItemMagicMirror2::canGameObjectBeTeleported(undefined8 param_1,RtWeakPtr *param_2)

{
  char cVar1;
  bool bVar2;
  MagicMirrorTeleportationArraySubSystem2 *this;
  ResourceInfo *pRVar3;
  long lVar4;
  RtObject *this_00;
  Projectile *this_01;
  Zombie *this_02;
  GridItemMagicMirrorProps2 *pGVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  RtWeakPtr<Sexy::ResourceInfo> *this_03;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Board::GetGameSubSystem<MagicMirrorTeleportationArraySubSystem2>
                   (*(Board **)(gLawnApp + 0x9f0));
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
  lVar4 = MagicMirrorTeleportationArraySubSystem2::findTeleportingGameObject
                    (this,(GameObject *)pRVar3);
  if (lVar4 != 0) goto LAB_04c90668;
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  if (this_00 == (RtObject *)0x0) {
    bVar2 = true;
    goto LAB_04c9066c;
  }
  this_01 = Sexy::RtObject::Cast<Projectile>(this_00);
  this_02 = Sexy::RtObject::Cast<Zombie>(this_00);
  if (this_02 == (Zombie *)0x0) {
LAB_04c9078c:
    bVar2 = true;
    if (this_01 != (Projectile *)0x0) {
      pGVar5 = GridItem::GetProps<GridItemMagicMirrorProps2>();
      uVar6 = FUN_04c8f89c(*(undefined8 *)(pGVar5 + 0xe8));
      uVar7 = FUN_04c8f8ec(*(undefined8 *)(pGVar5 + 0xf0));
      lVar4 = Projectile::GetProps(this_01);
      local_18 = std::
                 find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                           (uVar6,uVar7,lVar4 + 0x10);
      local_10 = FUN_04c8f8ec(*(undefined8 *)(pGVar5 + 0xf0));
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      bVar2 = !bVar2;
    }
  }
  else {
    cVar1 = Zombie::IsControlled(this_02);
    if ((((cVar1 == '\0') && (cVar1 = Zombie::IsBoss(this_02), cVar1 == '\0')) &&
        (cVar1 = (**(code **)(*(long *)this_02 + 0x4d8))(this_02), cVar1 == '\0')) &&
       (((cVar1 = (**(code **)(*(long *)this_02 + 0x508))(this_02), cVar1 == '\0' &&
         (cVar1 = Zombie::IsTargetable(this_02), cVar1 != '\0')) &&
        (cVar1 = Zombie::IsIgnoringAllDamage(this_02), cVar1 == '\0')))) {
      pGVar5 = GridItem::GetProps<GridItemMagicMirrorProps2>();
      uVar6 = FUN_04c8f89c(*(undefined8 *)(pGVar5 + 0xd0));
      uVar7 = FUN_04c8f8ec(*(undefined8 *)(pGVar5 + 0xd8));
      this_03 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_02);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_03);
      local_18 = std::
                 find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                           (uVar6,uVar7,lVar4 + 8);
      local_10 = FUN_04c8f8ec(*(undefined8 *)(pGVar5 + 0xd8));
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar2) goto LAB_04c9078c;
    }
LAB_04c90668:
    bVar2 = false;
  }
LAB_04c9066c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMagicMirror2::onGridItemInitialize() */

void __thiscall GridItemMagicMirror2::onGridItemInitialize(GridItemMagicMirror2 *this)

{
  TimeChallengeEndLevelUI *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  GridItemAnimation::GetAnimRig();
  this_00 = (TimeChallengeEndLevelUI *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPopAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<GridItemMagicMirror2,void(GridItemMagicMirror2::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aCStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMagicMirror2::onUpdate() */

void GridItemMagicMirror2::onUpdate(void)

{
  RtWeakPtr *this;
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  GridItemAnimation *in_x0;
  ResourceInfo *pRVar5;
  long lVar6;
  SexyVector3 *pSVar7;
  undefined8 *puVar8;
  Zombie *this_00;
  float *pfVar9;
  RtObject *this_01;
  GridItemMagicMirrorRig2 *pGVar10;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var11;
  SexyVector3 *pSVar12;
  MagicMirrorTeleportationArraySubSystem2 *pMVar13;
  undefined8 uVar14;
  PVZDB *pPVar15;
  RtDbTable *this_02;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_03;
  BoardTransforms *this_04;
  uint extraout_w1;
  uint extraout_w1_00;
  uint uVar16;
  uint extraout_w1_01;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float in_s2;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  int local_98;
  int local_94;
  int local_90;
  undefined4 local_8c;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_88 [24];
  undefined4 local_70;
  float local_6c;
  float local_68;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onUpdate(in_x0);
  fVar17 = (float)PVZ_T();
  if (*(float *)(in_x0 + 0x1b8) < fVar17) {
    setState();
  }
  else if (*(int *)(in_x0 + 0x1a8) == 2) {
    fVar17 = (float)PVZ_T();
    if (*(float *)(in_x0 + 0x1bc) < fVar17) {
      uVar18 = PVZ_EOT();
      *(undefined4 *)(in_x0 + 0x1bc) = uVar18;
      GridItemAnimation::GetAnimRig();
      this_01 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_a8)
      ;
      pGVar10 = Sexy::RtObject::Cast<GridItemMagicMirrorRig2>(this_01);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)&local_98);
      std::string::string((string *)&local_70,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                 (RtId *)avStack_88,(string *)&local_70);
      GridItemMagicMirrorRig2::playWorkingBlingAnim(pGVar10,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)&local_70);
      nop();
      Sexy::RtId::~RtId((RtId *)avStack_88);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_a8);
    }
    this = (RtWeakPtr *)(in_x0 + 0x1b0);
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
    if (pRVar5 != (ResourceInfo *)0x0) {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      iVar3 = FUN_04c8e6a4(*(undefined4 *)(lVar6 + 0x1a8));
      if (iVar3 == 2) {
        GridItem::GetGridLocation();
        GridItem::GetGridLocation();
        fVar17 = local_6c;
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_88);
        Sexy::Insets::Insets((Insets *)&local_98);
        pSVar7 = (SexyVector3 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)in_x0);
        local_98 = (int)(*(float *)pSVar7 - (float)(int)DAT_06b94de0);
        iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
        local_94 = iVar3 * (int)fVar17 + 0xa0;
        local_90 = (int)(DAT_06b94de0 + DAT_06b94de0);
        local_8c = BoardConstants::GRIDSQUARE_HEIGHT();
        EntityFinder::GetEntitiesInRectangle(avStack_88,2,(Insets *)&local_98);
        local_d8 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)avStack_88);
        local_d0 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_88);
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_d8,(__normal_iterator *)&local_d0),
              bVar2) {
          puVar8 = (undefined8 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_d8);
          this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar8);
          if (this_00 != (Zombie *)0x0) {
            iVar3 = Zombie::GetFacing(this_00);
            if (iVar3 == 1) {
              pfVar9 = (float *)std::
                                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                               *)this_00);
              fVar17 = *pfVar9;
              if (fVar17 <= *(float *)pSVar7) {
LAB_04c90e8c:
                ToolPacketData::GetProps();
                cVar1 = canGameObjectBeTeleported();
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
                if (cVar1 != '\0') {
                  local_b8 = *(undefined8 *)pfVar9;
                  local_b0 = pfVar9[2];
                  local_a8 = (float)Sexy::SexyVector3::operator-((SexyVector3 *)&local_b8,pSVar7);
                  local_a8 = -local_a8;
                  local_a4 = fVar17;
                  local_a0 = in_s2;
                  p_Var11 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                         ((RtWeakPtr<Sexy::ResourceInfo> *)this);
                  pSVar12 = (SexyVector3 *)
                            std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(p_Var11);
                  local_70 = Sexy::SexyVector3::operator+(pSVar12,(SexyVector3 *)&local_a8);
                  local_6c = fVar17;
                  local_68 = in_s2;
                  pMVar13 = Board::GetGameSubSystem<MagicMirrorTeleportationArraySubSystem2>
                                      (*(Board **)(gLawnApp + 0x9f0));
                  ToolPacketData::GetProps();
                  in_s2 = local_b0;
                  MagicMirrorTeleportationArraySubSystem2::addGameObject
                            ((undefined4)local_b8,local_b8._4_4_,local_b0,local_70,local_6c,local_68
                             ,pMVar13,(RtWeakPtr<Sexy::ResourceInfo> *)&local_c8);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_c8);
                }
              }
            }
            else {
              pfVar9 = (float *)std::
                                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                               *)this_00);
              fVar17 = *pfVar9;
              if (*(float *)pSVar7 < fVar17) goto LAB_04c90e8c;
            }
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_d8);
        }
        uVar14 = Sexy::LazySingleton<PVZDB>::GetInstance();
        PVZDB::GetObjectIteratorForTable((RtWeakPtr<Sexy::ResourceInfo> *)&local_70,uVar14,0x2b);
        while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)&local_70),
              bVar2) {
          pPVar15 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
          this_02 = (RtDbTable *)PVZDB::GetTable(pPVar15,0x2b);
          Sexy::RtDbTable::Iterator::operator*((Iterator *)&local_70);
          Sexy::RtDbTable::GetObjectForId(this_02,(RtId *)&local_a8);
          nop();
          Sexy::RtId::~RtId((RtId *)&local_a8);
          uVar16 = extraout_w1;
          if (this_03 !=
              (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)0x0) {
            auVar21 = std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this_03);
            this_04 = auVar21._0_8_;
            BoardTransforms::BoardSpaceToGridUnbounded(this_04,auVar21._8_8_);
            fVar19 = *(float *)(this_03 + 0x1c);
            fVar20 = *(float *)(this_03 + 0x20);
            fVar17 = (float)FUN_04c8e6e8(*(undefined4 *)(this_03 + 0x18));
            Sexy::Point::Point((Point *)&local_d8,(int)fVar17,(int)fVar19);
            cVar1 = Sexy::TRect<int>::Contains((TRect<int> *)&local_98,(TPoint *)&local_d8);
            uVar16 = extraout_w1_00;
            if (cVar1 != '\0') {
              auVar22 = Projectile::GetVelocity((Projectile *)this_03);
              uVar16 = auVar22._8_4_;
              pfVar9 = auVar22._0_8_;
              if (*pfVar9 <= 0.0) {
                fVar17 = *(float *)this_04;
                if (*(float *)pSVar7 < fVar17) goto LAB_04c91168;
              }
              else {
                fVar17 = *(float *)this_04;
                if (fVar17 <= *(float *)pSVar7) {
LAB_04c91168:
                  uVar16 = (int)pfVar9[1] >> 0x1f;
                  uVar16 = ((int)pfVar9[1] ^ uVar16) - uVar16;
                  if ((int)uVar16 < 5) {
                    uVar4 = (uint)pfVar9[2];
                    uVar16 = uVar4 ^ (int)uVar4 >> 0x3f;
                    if ((int)(uVar16 - ((int)uVar4 >> 0x1f)) < 5) {
                      ToolPacketData::GetProps();
                      cVar1 = canGameObjectBeTeleported();
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                ((RtWeakPtr<Sexy::ResourceInfo> *)&local_a8);
                      uVar16 = 0;
                      if (cVar1 != '\0') {
                        local_c8 = *(undefined8 *)this_04;
                        local_c0 = *(undefined4 *)(this_04 + 8);
                        fVar19 = (float)Sexy::SexyVector3::operator-
                                                  ((SexyVector3 *)&local_c8,pSVar7);
                        local_b8 = CONCAT44(fVar17,-fVar19);
                        local_b0 = fVar20;
                        p_Var11 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                               ((RtWeakPtr<Sexy::ResourceInfo> *)this);
                        pSVar12 = (SexyVector3 *)
                                  std::
                                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  ::_M_leftmost(p_Var11);
                        local_a8 = (float)Sexy::SexyVector3::operator+
                                                    (pSVar12,(SexyVector3 *)&local_b8);
                        local_a4 = fVar17;
                        local_a0 = fVar20;
                        pMVar13 = Board::GetGameSubSystem<MagicMirrorTeleportationArraySubSystem2>
                                            (*(Board **)(gLawnApp + 0x9f0));
                        ToolPacketData::GetProps();
                        MagicMirrorTeleportationArraySubSystem2::addGameObject
                                  ((undefined4)local_c8,local_c8._4_4_,local_c0,local_a8,local_a4,
                                   local_a0,pMVar13,(RtWeakPtr<Sexy::ResourceInfo> *)&local_d0);
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)&local_d0);
                        uVar16 = extraout_w1_01;
                      }
                    }
                  }
                }
              }
            }
          }
          Sexy::RtDbTable::Iterator::operator++((Iterator *)&local_70,uVar16);
        }
        Sexy::RtDbTable::Iterator::~Iterator((Iterator *)&local_70);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_88);
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
/* GridItemMagicMirror2::setBrotherMagicMirror(GridItemMagicMirror2*) */

void GridItemMagicMirror2::setBrotherMagicMirror(GridItemMagicMirror2 *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x1b0),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

