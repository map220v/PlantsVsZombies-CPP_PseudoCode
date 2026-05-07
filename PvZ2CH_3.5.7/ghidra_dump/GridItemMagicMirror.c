// Class: GridItemMagicMirror


/* GridItemMagicMirror::CalcRenderOrder() const */

void __thiscall GridItemMagicMirror::CalcRenderOrder(GridItemMagicMirror *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_04c8a66c(*(undefined4 *)(this + 0x134));
  Board::MakeRenderOrder(0x61ae5,uVar1,0);
  return;
}


/* non-virtual thunk to GridItemMagicMirror::CalcRenderOrder() const */

void __thiscall GridItemMagicMirror::CalcRenderOrder(GridItemMagicMirror *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMagicMirror::StaticClassInit() */

void GridItemMagicMirror::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemMagicMirror");
    (*pcVar2)(plVar1,asStack_10,FUN_04c8c174,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemMagicMirror::StaticGetClass() */

long * GridItemMagicMirror::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemMagicMirror",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemMagicMirror::GetClass() const */

long * GridItemMagicMirror::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemMagicMirror",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMagicMirror::GridItemMagicMirror() */

void __thiscall GridItemMagicMirror::GridItemMagicMirror(GridItemMagicMirror *this)

{
  long lVar1;
  undefined4 uVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_06994a00;
  *(undefined ***)(this + 0x10) = &PTR__GridItemMagicMirror_06994cb8;
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
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemMagicMirror::StaticNew() */

GridItemMagicMirror * GridItemMagicMirror::StaticNew(void)

{
  GridItemMagicMirror *this;
  
  this = ::operator_new(0x1c0);
  GridItemMagicMirror(this);
  return this;
}


/* GridItemMagicMirror::~GridItemMagicMirror() */

void __thiscall GridItemMagicMirror::~GridItemMagicMirror(GridItemMagicMirror *this)

{
  *(undefined ***)this = &PTR_GetClass_06994a00;
  *(undefined ***)(this + 0x10) = &PTR__GridItemMagicMirror_06994cb8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemMagicMirror::~GridItemMagicMirror() */

void __thiscall GridItemMagicMirror::~GridItemMagicMirror(GridItemMagicMirror *this)

{
  ~GridItemMagicMirror(this + -0x10);
  return;
}


/* GridItemMagicMirror::~GridItemMagicMirror() */

void __thiscall GridItemMagicMirror::~GridItemMagicMirror(GridItemMagicMirror *this)

{
  ~GridItemMagicMirror(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemMagicMirror::~GridItemMagicMirror() */

void __thiscall GridItemMagicMirror::~GridItemMagicMirror(GridItemMagicMirror *this)

{
  ~GridItemMagicMirror(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMagicMirror::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void GridItemMagicMirror::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  char cVar1;
  bool bVar2;
  RtObject *this;
  GridItemMagicMirrorRig *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  this_00 = Sexy::RtObject::Cast<GridItemMagicMirrorRig>(this);
  GridItemMagicMirrorRig::getAppearingAnimLabel(this_00);
  cVar1 = std::operator==(param_3,asStack_10);
  std::string::~string(asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if ((cVar1 != '\0') && (bVar2 = std::operator==(param_4,"throw_plant"), bVar2)) {
    GridItemMagicMirror2::tryToThrowPlant((GridItemMagicMirror2 *)param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMagicMirror::setState(GridItemMagicMirrorState) */

void __thiscall GridItemMagicMirror::setState(GridItemMagicMirror *this,int param_2)

{
  RtObject *pRVar1;
  GridItemMagicMirrorRig *pGVar2;
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
      pGVar2 = Sexy::RtObject::Cast<GridItemMagicMirrorRig>(pRVar1);
      GridItemMagicMirrorRig::playWorkingAnim(pGVar2);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
      fVar3 = (float)PVZ_T();
      *(float *)(this + 0x1b8) = fVar3 + *(float *)(this + 0x1ac);
    }
    else {
      if (param_2 == 3) {
        GridItemAnimation::GetAnimRig();
        pRVar1 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
        pGVar2 = Sexy::RtObject::Cast<GridItemMagicMirrorRig>(pRVar1);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string(asStack_58,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  (aRStack_50,aRStack_60,asStack_58);
        GridItemMagicMirrorRig::playDisappearAnim(pGVar2,aRStack_50);
      }
      else {
        if (param_2 != 1) goto LAB_04c8beb4;
        GridItemAnimation::GetAnimRig();
        pRVar1 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
        pGVar2 = Sexy::RtObject::Cast<GridItemMagicMirrorRig>(pRVar1);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string(asStack_58,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  (aRStack_50,aRStack_60,asStack_58);
        GridItemMagicMirrorRig::playAppearAnim(pGVar2,aRStack_50);
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
LAB_04c8beb4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemMagicMirror::setValues(float) */

void __thiscall GridItemMagicMirror::setValues(GridItemMagicMirror *this,float param_1)

{
  *(float *)(this + 0x1ac) = param_1;
  setState(this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMagicMirror::onAnimStoppedCallback(std::string const&) */

void __thiscall
GridItemMagicMirror::onAnimStoppedCallback(GridItemMagicMirror *this,string *param_1)

{
  char cVar1;
  RtObject *pRVar2;
  GridItemMagicMirrorRig *pGVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  pRVar2 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  pGVar3 = Sexy::RtObject::Cast<GridItemMagicMirrorRig>(pRVar2);
  GridItemMagicMirrorRig::getAppearingAnimLabel(pGVar3);
  cVar1 = std::operator==(param_1,asStack_10);
  std::string::~string(asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (cVar1 == '\0') {
    GridItemAnimation::GetAnimRig();
    pRVar2 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    pGVar3 = Sexy::RtObject::Cast<GridItemMagicMirrorRig>(pRVar2);
    GridItemMagicMirrorRig::getDisAppearingAnimLabel(pGVar3);
    cVar1 = std::operator==(param_1,asStack_10);
    std::string::~string(asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)this + 0x48))(this);
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
/* GridItemMagicMirror::canGameObjectBeTeleported(Sexy::RtWeakPtr<GameObject>) */

void __thiscall
GridItemMagicMirror::canGameObjectBeTeleported(undefined8 param_1,RtWeakPtr *param_2)

{
  char cVar1;
  bool bVar2;
  MagicMirrorTeleportationArraySubSystem *this;
  ResourceInfo *pRVar3;
  long lVar4;
  RtObject *this_00;
  Projectile *this_01;
  Zombie *this_02;
  GridItemMagicMirrorProps *pGVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  RtWeakPtr<Sexy::ResourceInfo> *this_03;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Board::GetGameSubSystem<MagicMirrorTeleportationArraySubSystem>
                   (*(Board **)(gLawnApp + 0x9f0));
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
  lVar4 = MagicMirrorTeleportationArraySubSystem::findTeleportingGameObject
                    (this,(GameObject *)pRVar3);
  if (lVar4 != 0) goto LAB_04c8ca50;
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  if (this_00 == (RtObject *)0x0) {
    bVar2 = true;
    goto LAB_04c8ca54;
  }
  this_01 = Sexy::RtObject::Cast<Projectile>(this_00);
  this_02 = Sexy::RtObject::Cast<Zombie>(this_00);
  if (this_02 == (Zombie *)0x0) {
LAB_04c8cb74:
    bVar2 = true;
    if (this_01 != (Projectile *)0x0) {
      pGVar5 = GridItem::GetProps<GridItemMagicMirrorProps>();
      uVar6 = FUN_04c8ba70(*(undefined8 *)(pGVar5 + 0xe8));
      uVar7 = FUN_04c8bac0(*(undefined8 *)(pGVar5 + 0xf0));
      lVar4 = Projectile::GetProps(this_01);
      local_18 = std::
                 find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                           (uVar6,uVar7,lVar4 + 0x10);
      local_10 = FUN_04c8bac0(*(undefined8 *)(pGVar5 + 0xf0));
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
      pGVar5 = GridItem::GetProps<GridItemMagicMirrorProps>();
      uVar6 = FUN_04c8ba70(*(undefined8 *)(pGVar5 + 0xd0));
      uVar7 = FUN_04c8bac0(*(undefined8 *)(pGVar5 + 0xd8));
      this_03 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_02);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_03);
      local_18 = std::
                 find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                           (uVar6,uVar7,lVar4 + 8);
      local_10 = FUN_04c8bac0(*(undefined8 *)(pGVar5 + 0xd8));
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar2) goto LAB_04c8cb74;
    }
LAB_04c8ca50:
    bVar2 = false;
  }
LAB_04c8ca54:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMagicMirror::onGridItemInitialize() */

void __thiscall GridItemMagicMirror::onGridItemInitialize(GridItemMagicMirror *this)

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
  Delegate4<GridItemMagicMirror,void(GridItemMagicMirror::*)(std::string_const&,float,std::string_const&,std::string_const&)>
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
/* GridItemMagicMirror::onUpdate() */

void GridItemMagicMirror::onUpdate(void)

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
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var10;
  SexyVector3 *pSVar11;
  MagicMirrorTeleportationArraySubSystem *pMVar12;
  undefined8 uVar13;
  PVZDB *pPVar14;
  RtDbTable *this_01;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  BoardTransforms *this_03;
  uint extraout_w1;
  uint extraout_w1_00;
  uint uVar15;
  uint extraout_w1_01;
  float fVar16;
  float fVar17;
  float in_s2;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_40 [24];
  undefined4 local_28;
  float local_24;
  float local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onUpdate(in_x0);
  fVar16 = (float)PVZ_T();
  if (*(float *)(in_x0 + 0x1b8) < fVar16) {
    setState();
  }
  else if (*(int *)(in_x0 + 0x1a8) == 2) {
    this = (RtWeakPtr *)(in_x0 + 0x1b0);
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
    if (pRVar5 != (ResourceInfo *)0x0) {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      iVar3 = FUN_04c8a6a0(*(undefined4 *)(lVar6 + 0x1a8));
      if (iVar3 == 2) {
        GridItem::GetGridLocation();
        GridItem::GetGridLocation();
        fVar16 = local_24;
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_40);
        Sexy::Insets::Insets((Insets *)&local_50);
        pSVar7 = (SexyVector3 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)in_x0);
        local_50 = (int)(*(float *)pSVar7 - (float)(int)DAT_06b94d30);
        iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
        local_4c = iVar3 * (int)fVar16 + 0xa0;
        local_48 = (int)(DAT_06b94d30 + DAT_06b94d30);
        local_44 = BoardConstants::GRIDSQUARE_HEIGHT();
        EntityFinder::GetEntitiesInRectangle(avStack_40,2,(Insets *)&local_50);
        local_90 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)avStack_40);
        local_88 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_40);
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88),
              bVar2) {
          puVar8 = (undefined8 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
          this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar8);
          if (this_00 != (Zombie *)0x0) {
            iVar3 = Zombie::GetFacing(this_00);
            if (iVar3 == 1) {
              pfVar9 = (float *)std::
                                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                               *)this_00);
              fVar16 = *pfVar9;
              if (fVar16 <= *(float *)pSVar7) {
LAB_04c8e1bc:
                ToolPacketData::GetProps();
                cVar1 = canGameObjectBeTeleported();
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
                if (cVar1 != '\0') {
                  local_70 = *(undefined8 *)pfVar9;
                  local_68 = pfVar9[2];
                  local_60 = (float)Sexy::SexyVector3::operator-((SexyVector3 *)&local_70,pSVar7);
                  local_60 = -local_60;
                  local_5c = fVar16;
                  local_58 = in_s2;
                  p_Var10 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                         ((RtWeakPtr<Sexy::ResourceInfo> *)this);
                  pSVar11 = (SexyVector3 *)
                            std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(p_Var10);
                  local_28 = Sexy::SexyVector3::operator+(pSVar11,(SexyVector3 *)&local_60);
                  local_24 = fVar16;
                  local_20 = in_s2;
                  pMVar12 = Board::GetGameSubSystem<MagicMirrorTeleportationArraySubSystem>
                                      (*(Board **)(gLawnApp + 0x9f0));
                  ToolPacketData::GetProps();
                  in_s2 = local_68;
                  MagicMirrorTeleportationArraySubSystem2::addGameObject
                            ((undefined4)local_70,local_70._4_4_,local_68,local_28,local_24,local_20
                             ,pMVar12,(RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
                }
              }
            }
            else {
              pfVar9 = (float *)std::
                                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                               *)this_00);
              fVar16 = *pfVar9;
              if (*(float *)pSVar7 < fVar16) goto LAB_04c8e1bc;
            }
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
        }
        uVar13 = Sexy::LazySingleton<PVZDB>::GetInstance();
        PVZDB::GetObjectIteratorForTable((RtWeakPtr<Sexy::ResourceInfo> *)&local_28,uVar13,0x2b);
        while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)&local_28),
              bVar2) {
          pPVar14 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
          this_01 = (RtDbTable *)PVZDB::GetTable(pPVar14,0x2b);
          Sexy::RtDbTable::Iterator::operator*((Iterator *)&local_28);
          Sexy::RtDbTable::GetObjectForId(this_01,(RtId *)&local_60);
          nop();
          Sexy::RtId::~RtId((RtId *)&local_60);
          uVar15 = extraout_w1;
          if (this_02 !=
              (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)0x0) {
            auVar19 = std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this_02);
            this_03 = auVar19._0_8_;
            BoardTransforms::BoardSpaceToGridUnbounded(this_03,auVar19._8_8_);
            fVar17 = *(float *)(this_02 + 0x1c);
            fVar18 = *(float *)(this_02 + 0x20);
            fVar16 = (float)FUN_04c8a7c4(*(undefined4 *)(this_02 + 0x18));
            Sexy::Point::Point((Point *)&local_90,(int)fVar16,(int)fVar17);
            cVar1 = Sexy::TRect<int>::Contains((TRect<int> *)&local_50,(TPoint *)&local_90);
            uVar15 = extraout_w1_00;
            if (cVar1 != '\0') {
              auVar20 = Projectile::GetVelocity((Projectile *)this_02);
              uVar15 = auVar20._8_4_;
              pfVar9 = auVar20._0_8_;
              if (*pfVar9 <= 0.0) {
                fVar16 = *(float *)this_03;
                if (*(float *)pSVar7 < fVar16) goto LAB_04c8e3e0;
              }
              else {
                fVar16 = *(float *)this_03;
                if (fVar16 <= *(float *)pSVar7) {
LAB_04c8e3e0:
                  uVar15 = (int)pfVar9[1] >> 0x1f;
                  uVar15 = ((int)pfVar9[1] ^ uVar15) - uVar15;
                  if ((int)uVar15 < 5) {
                    uVar4 = (uint)pfVar9[2];
                    uVar15 = uVar4 ^ (int)uVar4 >> 0x3f;
                    if ((int)(uVar15 - ((int)uVar4 >> 0x1f)) < 5) {
                      ToolPacketData::GetProps();
                      cVar1 = canGameObjectBeTeleported();
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                ((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
                      uVar15 = 0;
                      if (cVar1 != '\0') {
                        local_80 = *(undefined8 *)this_03;
                        local_78 = *(undefined4 *)(this_03 + 8);
                        fVar17 = (float)Sexy::SexyVector3::operator-
                                                  ((SexyVector3 *)&local_80,pSVar7);
                        local_70 = CONCAT44(fVar16,-fVar17);
                        local_68 = fVar18;
                        p_Var10 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                               ((RtWeakPtr<Sexy::ResourceInfo> *)this);
                        pSVar11 = (SexyVector3 *)
                                  std::
                                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  ::_M_leftmost(p_Var10);
                        local_60 = (float)Sexy::SexyVector3::operator+
                                                    (pSVar11,(SexyVector3 *)&local_70);
                        local_5c = fVar16;
                        local_58 = fVar18;
                        pMVar12 = Board::GetGameSubSystem<MagicMirrorTeleportationArraySubSystem>
                                            (*(Board **)(gLawnApp + 0x9f0));
                        ToolPacketData::GetProps();
                        MagicMirrorTeleportationArraySubSystem2::addGameObject
                                  ((undefined4)local_80,local_80._4_4_,local_78,local_60,local_5c,
                                   local_58,pMVar12,(RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
                        uVar15 = extraout_w1_01;
                      }
                    }
                  }
                }
              }
            }
          }
          Sexy::RtDbTable::Iterator::operator++((Iterator *)&local_28,uVar15);
        }
        Sexy::RtDbTable::Iterator::~Iterator((Iterator *)&local_28);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_40);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

