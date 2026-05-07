// Class: PlantTwinsHoneySuckle


/* PlantTwinsHoneySuckle::GetAssistPerson() */

RtWeakPtr<Sexy::SoundResource> * PlantTwinsHoneySuckle::GetAssistPerson(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0x40));
  return in_x8;
}


/* PlantTwinsHoneySuckle::CanEndPlantfood() */

PlantTwinsHoneySuckle __thiscall PlantTwinsHoneySuckle::CanEndPlantfood(PlantTwinsHoneySuckle *this)

{
  return this[0x28];
}


/* PlantTwinsHoneySuckle::unregisterForEvents() */

void __thiscall PlantTwinsHoneySuckle::unregisterForEvents(PlantTwinsHoneySuckle *this)

{
  Board::UnregisterTouchGameplayObject(*(Board **)(gLawnApp + 0x9f0),this);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* PlantTwinsHoneySuckle::onCancelEvent() */

void __thiscall PlantTwinsHoneySuckle::onCancelEvent(PlantTwinsHoneySuckle *this)

{
  *(undefined8 *)(this + 0x48) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTwinsHoneySuckle::StaticClassInit() */

void PlantTwinsHoneySuckle::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantTwinsHoneySuckle");
    (*pcVar2)(plVar1,asStack_10,FUN_04d45dec,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTwinsHoneySuckle::StaticGetClass() */

long * PlantTwinsHoneySuckle::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantTwinsHoneySuckle",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTwinsHoneySuckle::GetClass() const */

long * PlantTwinsHoneySuckle::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantTwinsHoneySuckle",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTwinsHoneySuckle::canTakeDamage(Zombie*) */

undefined8 __thiscall
PlantTwinsHoneySuckle::canTakeDamage(PlantTwinsHoneySuckle *this,Zombie *param_1)

{
  char cVar1;
  
  if (((param_1 != (Zombie *)0x0) && (cVar1 = RealObject::IsOnTeam(param_1,1), cVar1 == '\0')) &&
     (cVar1 = Zombie::IsInvisible(param_1), cVar1 == '\0')) {
    return 1;
  }
  return 0;
}


/* PlantTwinsHoneySuckle::PlantTwinsHoneySuckle() */

void __thiscall PlantTwinsHoneySuckle::PlantTwinsHoneySuckle(PlantTwinsHoneySuckle *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_069b0090;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x50));
  return;
}


/* PlantTwinsHoneySuckle::StaticNew() */

PlantTwinsHoneySuckle * PlantTwinsHoneySuckle::StaticNew(void)

{
  PlantTwinsHoneySuckle *this;
  
  this = ::operator_new(0x58);
  PlantTwinsHoneySuckle(this);
  return this;
}


/* PlantTwinsHoneySuckle::~PlantTwinsHoneySuckle() */

void __thiscall PlantTwinsHoneySuckle::~PlantTwinsHoneySuckle(PlantTwinsHoneySuckle *this)

{
  *(undefined ***)this = &PTR_GetClass_069b0090;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantTwinsHoneySuckle::~PlantTwinsHoneySuckle() */

void __thiscall PlantTwinsHoneySuckle::~PlantTwinsHoneySuckle(PlantTwinsHoneySuckle *this)

{
  ~PlantTwinsHoneySuckle(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTwinsHoneySuckle::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantTwinsHoneySuckle::Fire
          (PlantTwinsHoneySuckle *this,RtWeakPtrBase *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  Plant *pPVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  pPVar3 = *(Plant **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  *(int *)(pPVar3 + 0x150) = (int)param_4;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  uVar2 = Plant::Fire(pPVar3,aRStack_10,param_3,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* PlantTwinsHoneySuckle::onDestroy() */

void __thiscall PlantTwinsHoneySuckle::onDestroy(PlantTwinsHoneySuckle *this)

{
  bool bVar1;
  long *plVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x40));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
    (**(code **)(*plVar2 + 0x48))();
  }
  PlantFramework::onDestroy((PlantFramework *)this);
  return;
}


/* PlantTwinsHoneySuckle::NotifySetHidden(bool, bool) */

void PlantTwinsHoneySuckle::NotifySetHidden(bool param_1,bool param_2)

{
  bool bVar1;
  long *plVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)((ulong)param_1 + 0x40));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)((ulong)param_1 + 0x40));
    (**(code **)(*plVar2 + 0x80))(plVar2,param_2);
  }
  return;
}


/* PlantTwinsHoneySuckle::CancelPlantfood() */

void __thiscall PlantTwinsHoneySuckle::CancelPlantfood(PlantTwinsHoneySuckle *this)

{
  undefined4 uVar1;
  
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x34) = uVar1;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x38) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTwinsHoneySuckle::notAttackAndSwitch() */

void __thiscall PlantTwinsHoneySuckle::notAttackAndSwitch(PlantTwinsHoneySuckle *this)

{
  char cVar1;
  byte bVar2;
  PopAnimRig *this_00;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  if (this_00 == (PopAnimRig *)0x0) {
    bVar2 = 1;
  }
  else {
    bVar2 = 0;
    std::string::string(asStack_28,"attack_yl");
    cVar1 = PopAnimRig::IsAnimStringActive(this_00,asStack_28);
    if (cVar1 == '\0') {
      std::string::string(asStack_20,"attack_ty");
      cVar1 = PopAnimRig::IsAnimStringActive(this_00,asStack_20);
      if (cVar1 == '\0') {
        std::string::string(asStack_18,"hw");
        bVar2 = PopAnimRig::IsAnimStringActive(this_00,asStack_18);
        if (bVar2 == 0) {
          std::string::string(asStack_10,"hw02");
          bVar2 = PopAnimRig::IsAnimStringActive(this_00,asStack_10);
          std::string::~string(asStack_10);
          nop();
        }
        bVar2 = bVar2 ^ 1;
        std::string::~string(asStack_18);
        nop();
      }
      else {
        bVar2 = 0;
      }
      std::string::~string(asStack_20);
      nop();
    }
    std::string::~string(asStack_28);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTwinsHoneySuckle::createAssistPerson() */

void __thiscall PlantTwinsHoneySuckle::createAssistPerson(PlantTwinsHoneySuckle *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  TwinsAssistPerson *this_01;
  TwinsAssistPerson *extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  GameObject::Create<TwinsAssistPerson>();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  nop();
  std::string::string((string *)aRStack_10,"POPANIM_EFFECTS_TWINSHONEYSUCKLE_BACK");
  TwinsAssistPerson::InitTwinsAssistAnim(this_01,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
  TwinsAssistPerson::SetOwner(extraout_x0,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTwinsHoneySuckle::SetMoonAntenna(bool) */

void __thiscall PlantTwinsHoneySuckle::SetMoonAntenna(PlantTwinsHoneySuckle *this,bool param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  RtObject *this_00;
  TwinsAssistPerson *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  std::string::string(asStack_10,"ylg01");
  PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  std::string::string(asStack_10,"ylg02");
  PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  std::string::string(asStack_10,"ylg03");
  PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  std::string::string(asStack_10,"ylg04");
  PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x40));
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
    this_01 = Sexy::RtObject::Cast<TwinsAssistPerson>(this_00);
    TwinsAssistPerson::SetMoonAntenna(this_01,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTwinsHoneySuckle::SetSunAntenna(bool) */

void __thiscall PlantTwinsHoneySuckle::SetSunAntenna(PlantTwinsHoneySuckle *this,bool param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  RtObject *this_00;
  TwinsAssistPerson *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  std::string::string(asStack_10,"tyg01");
  PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  std::string::string(asStack_10,"tyg02");
  PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  std::string::string(asStack_10,"tyg03");
  PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  std::string::string(asStack_10,"tyg04");
  PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x40));
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
    this_01 = Sexy::RtObject::Cast<TwinsAssistPerson>(this_00);
    TwinsAssistPerson::SetSunAntenna(this_01,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTwinsHoneySuckle::UpdateActions() */

void __thiscall PlantTwinsHoneySuckle::UpdateActions(PlantTwinsHoneySuckle *this)

{
  char cVar1;
  float fVar2;
  
  cVar1 = notAttackAndSwitch(this);
  if ((cVar1 != '\0') && (cVar1 = (**(code **)(*(long *)this + 0x180))(this), cVar1 == '\0')) {
    if (*(int *)(this + 0x3c) == 0) {
      fVar2 = (float)PVZ_T();
      if (*(float *)(this + 0x34) < fVar2) {
        (**(code **)(*(long *)this + 0x150))(this,1);
      }
    }
    else if ((*(int *)(this + 0x3c) == 1) &&
            (fVar2 = (float)PVZ_T(), *(float *)(this + 0x38) < fVar2)) {
      (**(code **)(*(long *)this + 0x150))(this,0);
    }
  }
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0x38) < fVar2) {
    SetMoonAntenna(this,true);
  }
  fVar2 = (float)PVZ_T();
  if (fVar2 <= *(float *)(this + 0x34)) {
    return;
  }
  SetSunAntenna(this,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTwinsHoneySuckle::OnAnimCommand(std::string const&, std::string const&) */

void PlantTwinsHoneySuckle::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  RtObject *this;
  TwinsMoonProjectile *this_00;
  BoardEntity *pBVar2;
  SexyVector3 *this_01;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"fire");
  if (bVar1) {
    pcVar3 = *(code **)(*(long *)param_1 + 0xb0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)(param_1 + 0x50));
    this = (RtObject *)
           (*pcVar3)(param_1,(RtWeakPtr<Sexy::SoundResource> *)&local_18,
                     *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x110),0);
    this_00 = Sexy::RtObject::Cast<TwinsMoonProjectile>(this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    pBVar2 = (BoardEntity *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x50));
    PineconePlantfoodProjectile::SetOverrideTarget((PineconePlantfoodProjectile *)this_00,pBVar2);
    pcVar3 = *(code **)(*(long *)this_00 + 0x78);
    this_01 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this_00);
    uVar4 = 0xc29b0000;
    uVar5 = 0;
    EATextSquish::Vec3::Vec3(aVStack_28,-14.0,-77.5,0.0);
    local_18 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)aVStack_28);
    local_14 = uVar4;
    local_10 = uVar5;
    (*pcVar3)(this_00,(RtWeakPtr<Sexy::SoundResource> *)&local_18);
    FUN_04d3fc0c(this_00 + 0x1dc,*(undefined4 *)(param_1 + 0x30));
    param_1[0x29] = (string)0x0;
  }
  else {
    bVar1 = std::operator==(param_2,"fire_moon");
    if ((!bVar1) && (bVar1 = std::operator==(param_2,"pf"), bVar1)) {
      (**(code **)(*(long *)param_1 + 0x3a0))(param_1,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* PlantTwinsHoneySuckle::modifyLaunchInterval() */

float __thiscall PlantTwinsHoneySuckle::modifyLaunchInterval(PlantTwinsHoneySuckle *this)

{
  int iVar1;
  long lVar2;
  float *pfVar3;
  Plant *pPVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar2 = FUN_04d43ee4(*(undefined8 *)(this + 0x10));
  pPVar4 = *(Plant **)(this + 0x10);
  iVar1 = FUN_04d3fbf0(pPVar4);
  if (iVar1 == 2) {
    pfVar3 = (float *)FUN_04d3fc5c(*(undefined8 *)(lVar2 + 0x2f0),0);
    fVar7 = *pfVar3;
  }
  else if ((iVar1 < 2) || (5 < iVar1)) {
    fVar7 = 0.0;
  }
  else {
    pfVar3 = (float *)FUN_04d3fc5c(*(undefined8 *)(lVar2 + 0x2f0),1);
    fVar7 = *pfVar3;
  }
  fVar5 = *(float *)(lVar2 + 0x30c);
  fVar8 = *(float *)(pPVar4 + 0xe0);
  fVar6 = (float)Plant::GetAdditionValue(pPVar4,3);
  fVar7 = (fVar5 - fVar7) / (fVar6 + fVar8);
  if (*(code **)(*(long *)this + 0xb8) == PlantFramework::GetLaunchDelayMultiplier) {
    fVar5 = (float)PlantFramework::GetLaunchDelayMultiplier();
    return fVar5 * fVar7;
  }
  fVar5 = (float)(**(code **)(*(long *)this + 0xb8))(this);
  return fVar5 * fVar7;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTwinsHoneySuckle::registerForEvents() */

void __thiscall PlantTwinsHoneySuckle::registerForEvents(PlantTwinsHoneySuckle *this)

{
  Board *pBVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a8 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTouchEvent);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<PlantTwinsHoneySuckle,bool(PlantTwinsHoneySuckle::*)(Sexy::Touch_const&)>
            (aDStack_68,aCStack_98);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a0,(RtWeakPtrBase *)aRStack_a8);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCancelEvent);
  Sexy::Delegate0::Delegate0<PlantTwinsHoneySuckle,void(PlantTwinsHoneySuckle::*)()>
            (aDStack_38,aCStack_80);
  Board::RegisterTouchGameplayObject(pBVar1,aDStack_68,2,aRStack_a0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTwinsHoneySuckle::switchPersonnal(TwinsPersonalityState) */

void __thiscall
PlantTwinsHoneySuckle::switchPersonnal(PlantTwinsHoneySuckle *this,undefined4 param_2)

{
  RtWeakPtr *this_00;
  bool bVar1;
  RtObject *this_01;
  TwinsAssistPerson *pTVar2;
  long *plVar3;
  
  this_00 = (RtWeakPtr *)(this + 0x40);
  *(undefined4 *)(this + 0x3c) = param_2;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pTVar2 = Sexy::RtObject::Cast<TwinsAssistPerson>(this_01);
    TwinsAssistPerson::SetPerson(pTVar2,1 - *(int *)(this + 0x3c));
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar3 + 0x80))(plVar3,0);
  }
  plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar3 + 0x118))();
  return;
}


/* PlantTwinsHoneySuckle::Initialize() */

void __thiscall PlantTwinsHoneySuckle::Initialize(PlantTwinsHoneySuckle *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  
  lVar3 = FUN_04d43ee4(*(undefined8 *)(this + 0x10));
  createAssistPerson(this);
  switchPersonnal(this,1);
  uVar8 = PVZ_T();
  *(undefined4 *)(this + 0x34) = uVar8;
  uVar8 = PVZ_T();
  uVar7 = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x48) = 0;
  iVar2 = *(int *)(lVar3 + 0x2b8);
  *(undefined4 *)(this + 0x38) = uVar8;
  iVar1 = FUN_04d3fbf0(uVar7);
  if (iVar1 == 2) {
    piVar5 = (int *)FUN_04d3fc18(*(undefined8 *)(lVar3 + 0x2c0),0);
    iVar6 = *piVar5;
  }
  else {
    iVar6 = 0;
    if (2 < iVar1) {
      piVar5 = (int *)FUN_04d3fc18(*(undefined8 *)(lVar3 + 0x2c0),1);
      *(int *)(this + 0x30) = iVar2 + *piVar5;
      iVar2 = FUN_04d3fbf0(uVar7);
      goto joined_r0x04d44a98;
    }
  }
  *(int *)(this + 0x30) = iVar2 + iVar6;
  iVar2 = FUN_04d3fbf0(uVar7);
joined_r0x04d44a98:
  if (iVar2 != 2) {
    uVar8 = 0;
    if (1 < iVar2) {
      puVar4 = (undefined4 *)FUN_04d3fc18(*(undefined8 *)(lVar3 + 0x2d8),1);
      uVar8 = *puVar4;
    }
    *(undefined4 *)(this + 0x2c) = uVar8;
    PlantFramework::Initialize((PlantFramework *)this);
    return;
  }
  puVar4 = (undefined4 *)FUN_04d3fc18(*(undefined8 *)(lVar3 + 0x2d8),0);
  *(undefined4 *)(this + 0x2c) = *puVar4;
  PlantFramework::Initialize((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTwinsHoneySuckle::onAnimStoppedCallback(std::string const&) */

void __thiscall
PlantTwinsHoneySuckle::onAnimStoppedCallback(PlantTwinsHoneySuckle *this,string *param_1)

{
  bool bVar1;
  TwinsSunProjectile *pTVar2;
  long *plVar3;
  RtObject *pRVar4;
  TwinsAssistPerson *pTVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"attack_yl");
  if (bVar1) {
    fVar7 = (float)PVZ_T();
    fVar8 = (float)modifyLaunchInterval(this);
    *(float *)(this + 0x38) = fVar8 + fVar7;
    SetMoonAntenna(this,false);
  }
  else {
    bVar1 = std::operator==(param_1,"attack_ty");
    if (bVar1) {
      pcVar6 = *(code **)(*(long *)this + 0xb0);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_10);
      pRVar4 = (RtObject *)
               (*pcVar6)(this,a_Stack_10,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),1);
      pTVar2 = Sexy::RtObject::Cast<TwinsSunProjectile>(pRVar4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
      FUN_04d3fc04(pTVar2 + 0x1b0,*(undefined4 *)(this + 0x2c));
      fVar7 = (float)PVZ_T();
      fVar8 = (float)modifyLaunchInterval(this);
      *(float *)(this + 0x34) = fVar8 + fVar7;
      SetSunAntenna(this,false);
      this[0x29] = (PlantTwinsHoneySuckle)0x0;
    }
    else {
      bVar1 = std::operator==(param_1,"hw");
      if ((bVar1) || (bVar1 = std::operator==(param_1,"hw02"), bVar1)) {
        switchPersonnal(this,1 - *(int *)(this + 0x3c));
        this[0x2a] = (PlantTwinsHoneySuckle)0x0;
      }
      else {
        bVar1 = std::operator==(param_1,"plantfood_ty");
        if ((bVar1) || (bVar1 = std::operator==(param_1,"plantfood_yl"), bVar1)) {
          plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
          ;
          (**(code **)(*plVar3 + 0x118))();
          pRVar4 = (RtObject *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
          pTVar5 = Sexy::RtObject::Cast<TwinsAssistPerson>(pRVar4);
          (**(code **)(*(long *)pTVar5 + 0x80))(pTVar5,0);
          this[0x28] = (PlantTwinsHoneySuckle)0x1;
        }
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
/* PlantTwinsHoneySuckle::ApplyPlantfood() */

void __thiscall PlantTwinsHoneySuckle::ApplyPlantfood(PlantTwinsHoneySuckle *this)

{
  RtObject *pRVar1;
  PlantAnimRig_TwinsHoneySuckle *pPVar2;
  TwinsAssistPerson *pTVar3;
  RealObject *this_00;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  pRVar1 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pPVar2 = Sexy::RtObject::Cast<PlantAnimRig_TwinsHoneySuckle>(pRVar1);
  if (pPVar2 != (PlantAnimRig_TwinsHoneySuckle *)0x0) {
    PlantAnimRig_TwinsHoneySuckle::GetPlantFoodMainAnimName();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop((PopAnimRig *)pPVar2,asStack_70,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    PlantAnimRig::SetState((PlantAnimRig *)pPVar2,4);
    std::string::~string(asStack_70);
  }
  this[0x28] = (PlantTwinsHoneySuckle)0x0;
  this[0x29] = (PlantTwinsHoneySuckle)0x0;
  pRVar1 = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  pTVar3 = Sexy::RtObject::Cast<TwinsAssistPerson>(pRVar1);
  (**(code **)(*(long *)pTVar3 + 0x80))(pTVar3,1);
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_58,"Play_Pf");
  RealObject::PlayPositionalSound(this_00,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTwinsHoneySuckle::FindTargetAndFire(PlantWeapon) */

void __thiscall PlantTwinsHoneySuckle::FindTargetAndFire(PlantTwinsHoneySuckle *this,int param_2)

{
  char cVar1;
  PopAnimRig *pPVar2;
  char *__s;
  size_t __n;
  undefined8 uVar3;
  RealObject *this_00;
  RtMixedPtr<Sexy::Image> aRStack_78 [8];
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  size_t local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = 0;
  __n = ___stack_chk_guard;
  Plant::FindTarget(aRStack_78,*(undefined8 *)(this + 0x10));
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(aRStack_78);
  if (cVar1 != '\0') goto LAB_04d44f30;
  Set8BytesTo0(asStack_70);
  if (param_2 == 0) {
    std::string::append(asStack_70,"attack_yl",__n);
    this_00 = *(RealObject **)(this + 0x10);
    __s = "Play_Moon_Attack";
LAB_04d44fb0:
    std::string::string(asStack_58,__s);
    RealObject::PlayPositionalSound(this_00,asStack_58,0.0);
    std::string::~string(asStack_58);
    nop();
  }
  else if (param_2 == 1) {
    std::string::append(asStack_70,"attack_ty",__n);
    this_00 = *(RealObject **)(this + 0x10);
    __s = "Play_Sun_Attack";
    goto LAB_04d44fb0;
  }
  uVar3 = 1;
  pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PopAnimRig::PlayAndStop(pPVar2,asStack_70,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x50),(RtWeakPtr *)aRStack_78);
  this[0x29] = (PlantTwinsHoneySuckle)0x1;
  std::string::~string(asStack_70);
LAB_04d44f30:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTwinsHoneySuckle::onTouchEvent(Sexy::Touch const&) */

void __thiscall PlantTwinsHoneySuckle::onTouchEvent(PlantTwinsHoneySuckle *this,Touch *param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  TRect<int> *pTVar4;
  PopAnimRig *pPVar5;
  long *plVar6;
  char *__s;
  size_t __n;
  Board *this_00;
  RealObject *this_01;
  float fVar7;
  float fVar8;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  RtMixedPtrBase aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(long *)(this + 0x48) == 0) && (*(int *)(param_1 + 0x30) == 0)) {
    fVar7 = (float)FUN_04d3ff30((float)*(int *)(param_1 + 0x10));
    fVar8 = (float)FUN_04d3ff30((float)*(int *)(param_1 + 0x14));
    pTVar4 = (TRect<int> *)(**(code **)(**(long **)(this + 0x10) + 0x178))(*(long **)(this + 0x10));
    cVar2 = Sexy::TRect<int>::Contains(pTVar4,(int)fVar7,(int)fVar8);
    if (cVar2 != '\0') {
      *(undefined8 *)(this + 0x48) = *(undefined8 *)param_1;
      cVar2 = '\0';
      goto LAB_04d45124;
    }
  }
  else if (*(long *)(this + 0x48) == *(long *)param_1) {
    if (*(int *)(param_1 + 0x30) == 4) {
      *(undefined8 *)(this + 0x48) = 0;
    }
    else if (*(int *)(param_1 + 0x30) == 3) {
      iVar1 = *(int *)(param_1 + 0x10);
      *(undefined8 *)(this + 0x48) = 0;
      fVar7 = (float)FUN_04d3ff30((float)iVar1);
      fVar8 = (float)FUN_04d3ff30((float)*(int *)(param_1 + 0x14));
      pTVar4 = (TRect<int> *)
               (**(code **)(**(long **)(this + 0x10) + 0x178))(*(long **)(this + 0x10));
      __n = (size_t)(uint)(int)fVar8;
      cVar2 = Sexy::TRect<int>::Contains(pTVar4,(int)fVar7,(int)fVar8);
      if ((cVar2 != '\0') && (*(long *)(this + 0x10) != 0)) {
        ToolPacketData::GetProps();
        cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_58);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58)
        ;
        if (((cVar2 != '\0') &&
            (((*(long *)(*(Plant **)(this + 0x10) + 0xa8) != 0 &&
              (cVar2 = Plant::IsSuspended(*(Plant **)(this + 0x10)), cVar2 == '\0')) &&
             (cVar2 = Plant::HasCondition(*(undefined8 *)(this + 0x10),0x11), cVar2 == '\0')))) &&
           (this[0x29] == (PlantTwinsHoneySuckle)0x0)) {
          this_00 = *(Board **)(gLawnApp + 0x9f0);
          cVar2 = Board::IsPlaying(this_00);
          if (cVar2 != '\0') {
            cVar2 = FUN_02fd47a0(this_00[0x887]);
            if ((cVar2 != '\0') &&
               (cVar3 = (**(code **)(*(long *)this + 0x180))(this), cVar3 == '\0')) {
              Set8BytesTo0(asStack_70);
              if (*(int *)(this + 0x3c) == 0) {
                std::string::append(asStack_70,"hw02",__n);
                this_01 = *(RealObject **)(this + 0x10);
                __s = "Play_Swtich_Moon";
LAB_04d452ac:
                std::string::string((string *)aRStack_58,__s);
                RealObject::PlayPositionalSound(this_01,(string *)aRStack_58,0.0);
                std::string::~string((string *)aRStack_58);
                nop();
              }
              else if (*(int *)(this + 0x3c) == 1) {
                std::string::append(asStack_70,"hw",__n);
                this_01 = *(RealObject **)(this + 0x10);
                __s = "Play_Swtich_Sun";
                goto LAB_04d452ac;
              }
              this[0x2a] = (PlantTwinsHoneySuckle)0x1;
              pPVar5 = (PopAnimRig *)
                       UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
              ToolPacketData::GetProps();
              Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
              std::string::string((string *)aRStack_58,"onAnimStoppedCallback");
              RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                        ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                         aRStack_60,aRStack_58);
              PopAnimRig::PlayAndStop(pPVar5,asStack_70,0,aRStack_50);
              RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              ::~RtReflectionDelegate(aRStack_50);
              std::string::~string((string *)aRStack_58);
              nop();
              Sexy::RtId::~RtId(aRStack_60);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
              plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
              (**(code **)(*plVar6 + 0x80))(plVar6,1);
              std::string::~string(asStack_70);
              goto LAB_04d45124;
            }
          }
        }
      }
    }
  }
  cVar2 = '\0';
LAB_04d45124:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTwinsHoneySuckle::takePFDamage() */

void __thiscall PlantTwinsHoneySuckle::takePFDamage(PlantTwinsHoneySuckle *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  Zombie *pZVar6;
  GridItem *pGVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined8 local_a0;
  undefined8 local_98;
  Insets aIStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [16];
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  Sexy::Insets::Insets
            (aIStack_90,*(int *)(*(long *)(this + 0x10) + 0x114) + 1,
             *(int *)(*(long *)(this + 0x10) + 0x110) + -2,5,5);
  uVar3 = operator|(2,4);
  EntityFinder::GetEntitiesInGridSquares(avStack_80,uVar3,aIStack_90);
  lVar4 = FUN_04d43ee4(*(undefined8 *)(this + 0x10));
  fVar10 = *(float *)(lVar4 + 0x308);
  fVar9 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
  uVar8 = *(undefined8 *)(this + 0x10);
  Sexy::Point::Point((Point *)&local_a0,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
  DamageInfo::DamageInfo
            ((DamageInfo *)(fVar9 * fVar10),(undefined4)local_98,local_98._4_4_,aDStack_68,0x400,
             uVar8,(Point *)&local_a0,0);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98);
  if (bVar1) {
    do {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0)
      ;
      pZVar6 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
      pGVar7 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar5);
      cVar2 = canTakeDamage(this,pZVar6);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pZVar6 + 0x110))(pZVar6,aDStack_68);
      }
      if ((pGVar7 != (GridItem *)0x0) &&
         (cVar2 = (**(code **)(*(long *)pGVar7 + 0x200))(pGVar7), cVar2 != '\0')) {
        (**(code **)(*(long *)pGVar7 + 0x110))(pGVar7,aDStack_68);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98);
    } while (bVar1);
  }
  local_58 = 0x1000000000000;
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98);
  if (bVar1) {
    do {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0)
      ;
      pZVar6 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
      pGVar7 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar5);
      cVar2 = canTakeDamage(this,pZVar6);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pZVar6 + 0x110))(pZVar6,aDStack_68);
      }
      if ((pGVar7 != (GridItem *)0x0) &&
         (cVar2 = (**(code **)(*(long *)pGVar7 + 0x200))(pGVar7), cVar2 != '\0')) {
        (**(code **)(*(long *)pGVar7 + 0x110))(pGVar7,aDStack_68);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98);
    } while (bVar1);
  }
  DamageInfo::~DamageInfo(aDStack_68);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTwinsHoneySuckle::onStandaloneEffectFinishedCallback(StandaloneEffect*) */

void PlantTwinsHoneySuckle::onStandaloneEffectFinishedCallback(StandaloneEffect *param_1)

{
  undefined4 uVar1;
  char cVar2;
  Effect_PopAnim *this;
  ResourceInfo *pRVar3;
  char *pcVar4;
  undefined8 uVar5;
  SunBomb_Effect *this_00;
  size_t __n;
  int local_60;
  uint local_5c;
  string asStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  TPoint<int> aTStack_40 [8];
  Point aPStack_38 [8];
  string asStack_30 [8];
  Vec3 aVStack_28 [16];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardTransforms::GridToBoardSpacePos
            ((BoardTransforms *)(ulong)(*(int *)(*(long *)(param_1 + 0x10) + 0x114) + 3),
             *(int *)(*(long *)(param_1 + 0x10) + 0x110),(int)___stack_chk_guard);
  __n = (size_t)local_5c;
  EATextSquish::Vec3::Vec3(aVStack_28,(float)local_60,(float)(int)local_5c - 25.0,0.0);
  Set8BytesTo0(asStack_58);
  if (*(int *)(param_1 + 0x3c) == 0) {
    std::string::append(asStack_58,"plantfood01_sj",__n);
  }
  else if (*(int *)(param_1 + 0x3c) == 1) {
    std::string::append(asStack_58,"plantfood02_sj",__n);
    cVar2 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
    goto joined_r0x04d46dc8;
  }
  cVar2 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
joined_r0x04d46dc8:
  if (cVar2 == '\0') {
    this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_30,"POPANIM_EFFECTS_TWINSHONEYSUCKLE_EFFECT");
    GetPAMByName(asStack_30);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
    Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar3,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    std::string::~string(asStack_30);
    nop();
    Effect_PopAnim::SetCentered(this,true);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aVStack_28,-1);
    Effect_PopAnim::PlaySingleAnimation(this,asStack_58,0);
  }
  else {
    uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
    Sexy::RtName::RtName((RtName *)aRStack_18,L"BuleStarDefault");
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_50,uVar5,0xc,(RtName *)aRStack_18);
    Sexy::RtName::~RtName((RtName *)aRStack_18);
    uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
    Sexy::RtName::RtName((RtName *)aRStack_18,L"RedStarDefault");
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_48,uVar5,0xc,(RtName *)aRStack_18);
    Sexy::RtName::~RtName((RtName *)aRStack_18);
    this_00 = Board::AddEffect<SunBomb_Effect>(*(Board **)(gLawnApp + 0x9f0));
    BoardEntity::CalcGridPosition();
    Sexy::Point::Point(aPStack_38,3,0);
    Sexy::TPoint<int>::operator+(aTStack_40,(TPoint *)aPStack_38);
    Sexy::Point::Point((Point *)aRStack_18,(TPoint *)asStack_30);
    SunBomb_Effect::Init(this_00,(Point *)aRStack_18,*(BoardEntity **)(param_1 + 0x10));
    uVar1 = *(undefined4 *)(param_1 + 0x2c);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_48);
    SunBomb_Effect::SetRedStarProjectile(this_00,uVar1,(RtName *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_50);
    SunBomb_Effect::SetBuleStarProjectile(this_00,uVar1,(RtName *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    std::string::string(asStack_30,"POPANIM_EFFECTS_TWINSHONEYSUCKLE_EFFECT");
    GetPAMByName(asStack_30);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
    Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    std::string::~string(asStack_30);
    nop();
    Effect_PopAnim::SetCentered((Effect_PopAnim *)this_00,true);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aVStack_28,-1);
    Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this_00,asStack_58,0);
    Effect_PopAnim::SetPopAnimDelegates((Effect_PopAnim *)this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  }
  pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar4,"Play_Pf_Boom");
  takePFDamage((PlantTwinsHoneySuckle *)param_1);
  std::string::~string(asStack_58);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

