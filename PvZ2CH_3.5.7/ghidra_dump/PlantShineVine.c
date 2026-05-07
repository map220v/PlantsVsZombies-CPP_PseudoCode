// Class: PlantShineVine


/* PlantShineVine::onCancelEvent() */

void __thiscall PlantShineVine::onCancelEvent(PlantShineVine *this)

{
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x158) = 0;
  return;
}


/* PlantShineVine::~PlantShineVine() */

void __thiscall PlantShineVine::~PlantShineVine(PlantShineVine *this)

{
  *(undefined ***)this = &PTR_GetClass_067a6340;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  PlantVineFramework::~PlantVineFramework((PlantVineFramework *)this);
  return;
}


/* PlantShineVine::~PlantShineVine() */

void __thiscall PlantShineVine::~PlantShineVine(PlantShineVine *this)

{
  ~PlantShineVine(this);
  AK::FreeHook(this);
  return;
}


/* PlantShineVine::PostInitializeFromPropertySheet() */

void __thiscall PlantShineVine::PostInitializeFromPropertySheet(PlantShineVine *this)

{
  Plant::ResetLaunchTimer(*(Plant **)(this + 0x10),true);
  return;
}


/* PlantShineVine::PlantShineVine() */

void __thiscall PlantShineVine::PlantShineVine(PlantShineVine *this)

{
  PlantVineFramework::PlantVineFramework((PlantVineFramework *)this);
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined ***)this = &PTR_GetClass_067a6340;
  this[0x150] = (PlantShineVine)0x0;
  this[0x151] = (PlantShineVine)0x1;
  *(undefined4 *)(this + 0x154) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  return;
}


/* PlantShineVine::StaticNew() */

PlantShineVine * PlantShineVine::StaticNew(void)

{
  PlantShineVine *this;
  
  this = ::operator_new(0x180);
  PlantShineVine(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShineVine::StaticClassInit() */

void PlantShineVine::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantShineVine");
    (*pcVar2)(plVar1,asStack_10,FUN_03fac64c,0x180,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantShineVine::StaticGetClass() */

long * PlantShineVine::StaticGetClass(void)

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
  uVar2 = PlantVineFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantShineVine",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantShineVine::GetClass() const */

long * PlantShineVine::GetClass(void)

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
  uVar2 = PlantVineFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantShineVine",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantShineVine::SetTouchEnabled(bool) */

void __thiscall PlantShineVine::SetTouchEnabled(PlantShineVine *this,bool param_1)

{
  this[0x179] = (PlantShineVine)param_1;
  return;
}


/* PlantShineVine::ClearTouch() */

void __thiscall PlantShineVine::ClearTouch(PlantShineVine *this)

{
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x158) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShineVine::getZombieTargetExclusionFlags(PlantWeapon) */

void __thiscall PlantShineVine::getZombieTargetExclusionFlags(undefined8 param_1,int param_2)

{
  ulong uVar1;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = operator|(4,0x2000);
  local_c = (uint)uVar1;
  if (param_2 != 1) {
    operator|=(&local_c,0x8000);
    uVar1 = (ulong)local_c;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* PlantShineVine::getPowerContextForWeapon(PlantWeapon) */

undefined4 __thiscall PlantShineVine::getPowerContextForWeapon(PlantShineVine *this,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 1) {
    iVar1 = FUN_03fa94b8(*(undefined8 *)(this + 0x10));
    uVar2 = 5;
    if (iVar1 < 3) {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 1;
}


/* PlantShineVine::startSunSuck() */

void __thiscall PlantShineVine::startSunSuck(PlantShineVine *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x15c) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShineVine::Lv5Fire() */

void __thiscall PlantShineVine::Lv5Fire(PlantShineVine *this)

{
  PlantShineVine PVar1;
  bool bVar2;
  RtObject *pRVar3;
  ShineVineProjectile *this_00;
  PlantAnimRig_ShineVine *pPVar4;
  RealObject *this_01;
  float fVar5;
  string asStack_10 [8];
  long local_8;
  
  PVar1 = this[0x178];
  local_8 = ___stack_chk_guard;
  if (PVar1 != (PlantShineVine)0x0) {
    this_01 = *(RealObject **)(this + 0x10);
    std::string::string(asStack_10,"Play_Plant_MagGrass_Attack");
    RealObject::PlayPositionalSound(this_01,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
    Plant::ResetLaunchTimer(*(Plant **)(this + 0x10),false);
    this[0x178] = (PlantShineVine)0x0;
    fVar5 = (float)PVZ_T();
    *(float *)(this + 0x160) = fVar5 + 0.2;
    *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 3;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)asStack_10);
    pRVar3 = (RtObject *)
             PlantFramework::Fire
                       ((PlantFramework *)this,asStack_10,
                        *(undefined4 *)(*(long *)(this + 0x10) + 0x110),1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    if (((pRVar3 != (RtObject *)0x0) &&
        (bVar2 = Sexy::RtObject::IsA<ShineVineProjectile>(pRVar3), bVar2)) &&
       (nop(), this_00 != (ShineVineProjectile *)0x0)) {
      ShineVineProjectile::SetChargeAttack(this_00,(bool)this[0x17a],2.0);
    }
    pRVar3 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pPVar4 = Sexy::RtObject::Cast<PlantAnimRig_ShineVine>(pRVar3);
    std::string::string(asStack_10,"attacklv5_01");
    PlantAnimRig_HoyaCordata::setIdleTag((string *)pPVar4);
    std::string::~string(asStack_10);
    nop();
    this[0x17a] = (PlantShineVine)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(PVar1);
}


/* PlantShineVine::OnAnimCommand(std::string const&, std::string const&) */

undefined8 PlantShineVine::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  
  bVar1 = std::operator==(param_2,"use_action2");
  if (!bVar1) {
    return 1;
  }
  uVar2 = Lv5Fire((PlantShineVine *)param_1);
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShineVine::onSunProductionTriggered(BoardEntity*) */

void __thiscall PlantShineVine::onSunProductionTriggered(PlantShineVine *this,BoardEntity *param_1)

{
  BoardEntity *pBVar1;
  RtObject *pRVar2;
  ShineVineProps *pSVar3;
  PowerPropsSunProducer *pPVar4;
  PlantAction *pPVar5;
  SunProducer aSStack_a0 [32];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [104];
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar1 = (BoardEntity *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x128))
  ;
  if (param_1 == pBVar1) {
    if (this[0x151] != (PlantShineVine)0x0) {
      FUN_03fa9494(aRStack_80,*(undefined8 *)(this + 0x10));
      pRVar2 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
      pSVar3 = Sexy::RtObject::Cast<ShineVineProps_const>(pRVar2);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
      PowerSet::Find(aRStack_80,pSVar3 + 0x58,1,3);
      pRVar2 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
      pPVar4 = Sexy::RtObject::Cast<PowerPropsSunProducer>(pRVar2);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
      pPVar5 = (PlantAction *)FUN_03fa94cc(*(undefined8 *)(pSVar3 + 0x70),2);
      PlantAction::PlantAction((PlantAction *)aRStack_80,pPVar5);
      SunProducer::SunProducer
                ((SunProducer *)local_18,local_18._4_4_,aSStack_a0,*(undefined8 *)(this + 0x10),
                 pPVar4);
      SunProducer::Execute(aSStack_a0);
      PlantAction::~PlantAction((PlantAction *)aRStack_80);
    }
    if (this[0x150] == (PlantShineVine)0x0) {
      this[0x151] = (PlantShineVine)0x1;
    }
    else {
      this[0x151] = (PlantShineVine)((byte)this[0x151] ^ 1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantShineVine::GetSunMoneyPerShot() */

int __thiscall PlantShineVine::GetSunMoneyPerShot(PlantShineVine *this)

{
  int iVar1;
  char cVar2;
  long lVar3;
  DangerRoomManager *this_00;
  float fVar4;
  
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (cVar2 = Board::IsDangerRoom(*(Board **)(gLawnApp + 0x9f0)), cVar2 != '\0')) {
    this_00 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    cVar2 = DangerRoomManager::IsTrainingMode(this_00);
    if (cVar2 != '\0') {
      return 0;
    }
  }
  lVar3 = FUN_03fab210(*(undefined8 *)(this + 0x10));
  if (this[0x17a] == (PlantShineVine)0x0) {
    iVar1 = *(int *)(lVar3 + 0x2b8);
    fVar4 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
    return (int)((float)iVar1 - fVar4);
  }
  iVar1 = *(int *)(lVar3 + 0x2b8);
  fVar4 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
  return (int)((float)(iVar1 << 1) - fVar4);
}


/* PlantShineVine::spendSun() */

void __thiscall PlantShineVine::spendSun(PlantShineVine *this)

{
  int iVar1;
  Board *this_00;
  
  FUN_03fab210(*(undefined8 *)(this + 0x10));
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  iVar1 = GetSunMoneyPerShot(this);
  Board::TakeSunMoney(this_00,iVar1,false,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShineVine::ProduceSun(PlantAction const&) */

void __thiscall PlantShineVine::ProduceSun(PlantShineVine *this,PlantAction *param_1)

{
  char cVar1;
  undefined4 uVar2;
  RtObject *pRVar3;
  ShineVineProps *pSVar4;
  PowerPropsSunProducer *pPVar5;
  long lVar6;
  code *pcVar7;
  float fVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_03fa9494(aRStack_28,*(undefined8 *)(this + 0x10));
  pRVar3 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  pSVar4 = Sexy::RtObject::Cast<ShineVineProps_const>(pRVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  uVar2 = 4;
  if (cVar1 == '\0') {
    uVar2 = 2;
  }
  PowerSet::Find(aRStack_28,pSVar4 + 0x58,1,uVar2);
  pRVar3 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  pPVar5 = Sexy::RtObject::Cast<PowerPropsSunProducer>(pRVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
                    /* WARNING: Load size is inaccurate */
  SunProducer::SunProducer
            (*(SunProducer **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),aRStack_28,
             *(undefined8 *)(this + 0x10),pPVar5);
  SunProducer::Execute((SunProducer *)aRStack_28);
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  if ((cVar1 != '\0') && (cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10)), cVar1 != '\0'))
  {
    fVar8 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    lVar6 = FUN_03fab210(*(undefined8 *)(this + 0x10));
    if (fVar8 < *(float *)(lVar6 + 0x2c0)) {
      pcVar7 = *(code **)(*(long *)this + 0x708);
      std::string::string((string *)aRStack_28,"coin_gold");
      (*pcVar7)(this,param_1,aRStack_28);
      std::string::~string((string *)aRStack_28);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantShineVine::isPlantExcluded(Plant*) */

void PlantShineVine::isPlantExcluded(Plant *param_1)

{
  long lVar1;
  
  lVar1 = FUN_03fab210(*(undefined8 *)(param_1 + 0x10));
  PlantRestrictionSet::IsExcluded((Plant *)(lVar1 + 0x2c8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShineVine::drawSunSuck(Sexy::Graphics*) */

void __thiscall PlantShineVine::drawSunSuck(PlantShineVine *this,Graphics *param_1)

{
  bool bVar1;
  long lVar2;
  undefined4 *puVar3;
  Image *pIVar4;
  long *plVar5;
  string *extraout_x1;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  GraphicsAutoState aGStack_98 [8];
  RtWeakPtr aRStack_90 [8];
  float local_88;
  float local_84;
  Vec3 aVStack_78 [16];
  float local_68;
  float local_64;
  undefined4 local_60;
  Insets aIStack_58 [16];
  Insets aIStack_48 [16];
  Color aCStack_38 [16];
  int local_28;
  float local_24;
  undefined4 local_20;
  int local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_98,param_1);
  lVar2 = FUN_03fab210(*(undefined8 *)(this + 0x10));
  fVar6 = (float)PVZ_T();
  fVar10 = *(float *)(this + 0x15c);
  fVar8 = *(float *)(lVar2 + 700);
  fVar7 = (float)PVZ_EOT();
  if (((fVar6 - fVar10) / fVar8 < 1.0) && (fVar10 < fVar7)) {
    EATextSquish::Vec3::Vec3((Vec3 *)&local_88,0.0,0.0,0.0);
    std::string::string((string *)&local_18,"UISunBank");
    UIWidget::GetWidgetPtrBySheetName((UIWidget *)&local_18,extraout_x1);
    std::string::~string((string *)&local_18);
    nop();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_90);
    if (bVar1) {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
      (**(code **)(*plVar5 + 0xb0))((SexyVector3 *)&local_28);
      Board::GetBoardBaseOffset();
      local_88 = (float)(local_28 - local_18);
      Board::GetBoardBaseOffset();
      local_84 = (float)((int)local_24 - (int)local_14);
    }
    uVar9 = 0;
    puVar3 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(this + 0x10));
    fVar6 = (float)FUN_03fa9684(*puVar3);
    fVar7 = (float)FUN_03fa9684((float)puVar3[1] - 30.0);
    EATextSquish::Vec3::Vec3(aVStack_78,fVar6,fVar7,0.0);
    local_28 = 0;
    local_18 = 0x3f800000;
    fVar6 = CurveEvaluate<float>((SexyVector3 *)&local_28,(string *)&local_18,2);
    local_28 = Sexy::SexyVector3::operator*((SexyVector3 *)aVStack_78,fVar6);
    local_24 = fVar7;
    local_20 = uVar9;
    local_18 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_88,1.0 - fVar6);
    local_14 = fVar7;
    local_10 = uVar9;
    local_68 = (float)Sexy::SexyVector3::operator+
                                ((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    local_64 = fVar7;
    local_60 = uVar9;
    Sexy::Graphics::SetColorizeImages(param_1,true);
    Sexy::Color::Color((Color *)aIStack_58,1);
    Sexy::Color::Color((Color *)aIStack_48,3);
    Sexy::Insets::Insets((Insets *)&local_28,aIStack_58);
    Sexy::Insets::Insets((Insets *)&local_18,aIStack_48);
    Sexy::ColorLerp((Sexy *)aCStack_38,fVar6,(SexyVector3 *)&local_28,(string *)&local_18);
    Sexy::Graphics::SetColor(param_1,aCStack_38);
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae5f68);
    Sexy::Graphics::DrawImage(param_1,pIVar4,(int)local_68,(int)local_64);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShineVine::Draw(Sexy::Graphics*) */

void __thiscall PlantShineVine::Draw(PlantShineVine *this,Graphics *param_1)

{
  int iVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_2c;
  undefined4 local_28 [4];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  drawSunSuck(this,param_1);
  PlantFramework::Draw((Graphics *)this);
  iVar1 = FUN_03fa94b8(*(undefined8 *)(this + 0x10));
  if ((iVar1 == 5) && (*(long *)(this + 0x170) != 0)) {
    local_18[0] = 0x3f800000;
    local_2c = (float)PVZ_T();
    local_2c = local_2c - *(float *)(this + 0x158);
    local_28[0] = 0;
    pfVar2 = eastl::max_alt<float>(&local_2c,(float *)local_28);
    pfVar2 = eastl::min_alt<float>((float *)local_18,pfVar2);
    fVar8 = *pfVar2;
    if (*(long *)(this + 0x170) != 0) {
      lVar3 = *(long *)(this + 0x10);
      fVar7 = *(float *)(lVar3 + 0x1c);
      fVar4 = (float)FUN_03fa94e0(*(undefined4 *)(lVar3 + 0x18),fVar7,*(undefined4 *)(lVar3 + 0x20))
      ;
      Sexy::Graphics::SetDrawMode(param_1,1);
      local_18[0] = 0x3f800000;
      local_2c = (float)PVZ_T();
      local_2c = local_2c - *(float *)(this + 0x158);
      local_28[0] = 0;
      pfVar2 = eastl::max_alt<float>(&local_2c,(float *)local_28);
      pfVar2 = eastl::min_alt<float>((float *)local_18,pfVar2);
      fVar9 = fVar8 * 20.0 + 65.0;
      fVar8 = *pfVar2;
      uVar5 = FUN_03fa9684(fVar4 - 10.0);
      uVar6 = FUN_03fa9684(fVar7 - 30.0);
      Sexy::Insets::Insets((Insets *)local_28,0x40,0,0,100);
      Sexy::Insets::Insets((Insets *)local_18,0xff,0xb4,0xb4,100);
      DrawRadialCooldown(fVar8,uVar5,uVar6,fVar9 - 10.0,param_1,(Insets *)local_28,
                         (Insets *)local_18);
      fVar8 = fVar8 - 3.0;
      uVar5 = FUN_03fa9684(fVar4 - 10.0);
      uVar6 = FUN_03fa9684(fVar7 - 30.0);
      Sexy::Insets::Insets((Insets *)local_28,0x40,0,0,100);
      Sexy::Insets::Insets((Insets *)local_18,0xff,0x80,0x80,100);
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      DrawRadialCooldown(fVar8,uVar5,uVar6,fVar9,param_1,(Insets *)local_28,(Insets *)local_18);
      Sexy::Graphics::SetDrawMode(param_1,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShineVine::registerForEvents() */

void __thiscall PlantShineVine::registerForEvents(PlantShineVine *this)

{
  char cVar1;
  Board *pBVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a8 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = PlantFramework::IsArenaBattle();
  if (cVar1 == '\0') {
    pBVar2 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onTouchEvent);
    Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
    Delegate1wRet<PlantShineVine,bool(PlantShineVine::*)(Sexy::Touch_const&)>(aDStack_68,aCStack_98)
    ;
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a0,(RtWeakPtrBase *)aRStack_a8);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCancelEvent);
    Sexy::Delegate0::Delegate0<PlantShineVine,void(PlantShineVine::*)()>(aDStack_38,aCStack_80);
    Board::RegisterTouchGameplayObject(pBVar2,aDStack_68,7,aRStack_a0,aDStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShineVine::setupForBasePlant(Plant*) */

void PlantShineVine::setupForBasePlant(Plant *param_1)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this;
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  Plant PVar4;
  PlantType *this_00;
  RtObject *this_01;
  PlantMagnifyingGrass *pPVar5;
  long extraout_x0;
  RtObject *this_02;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  this = (RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x128);
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this,(RtWeakPtrBase *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  Plant::GetType();
  this_00 = (PlantType *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  cVar2 = PlantType::IsSunProducer(this_00);
  if (cVar2 != '\0') {
    cVar2 = isPlantExcluded(param_1);
    if (cVar2 == '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this);
      PVar4 = (Plant)0x0;
      if (bVar3) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
        nop();
        if (extraout_x0 != 0) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
          nop();
          PVar4 = (Plant)Sexy::RtObject::IsA<PlantTwinSunflower>(this_02);
        }
      }
      param_1[0x150] = PVar4;
      puVar1 = gMessageRouter;
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)param_1,onSunProductionTriggered);
      local_40 = local_20;
      uStack_38 = uStack_18;
      local_30 = local_10;
      MessageRouter::
      Subscribe<BoardEntity*,Sexy::CBMemberTranslatorX<PlantShineVine,void(PlantShineVine::*)(BoardEntity*)>>
                ((MessageRouter *)puVar1,Message::SunProductionTriggered,&local_40);
      goto LAB_03fabd34;
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  nop();
  pPVar5 = Sexy::RtObject::Cast<PlantMagnifyingGrass>(this_01);
  *(PlantMagnifyingGrass **)(param_1 + 0x148) = pPVar5;
LAB_03fabd34:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShineVine::onPlantPlaced(Plant*) */

void PlantShineVine::onPlantPlaced(Plant *param_1)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this;
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  Plant PVar4;
  PlantType *this_00;
  RtObject *this_01;
  PlantMagnifyingGrass *pPVar5;
  long extraout_x0;
  RtObject *this_02;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  this = (RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x128);
  lStack_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this,(RtWeakPtrBase *)&uStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  Plant::GetType();
  this_00 = (PlantType *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_20);
  cVar2 = PlantType::IsSunProducer(this_00);
  if (cVar2 != '\0') {
    cVar2 = isPlantExcluded(param_1);
    if (cVar2 == '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_20);
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this);
      PVar4 = (Plant)0x0;
      if (bVar3) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
        nop();
        if (extraout_x0 != 0) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
          nop();
          PVar4 = (Plant)Sexy::RtObject::IsA<PlantTwinSunflower>(this_02);
        }
      }
      param_1[0x150] = PVar4;
      puVar1 = gMessageRouter;
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)param_1,onSunProductionTriggered);
      uStack_40 = uStack_20;
      uStack_38 = uStack_18;
      uStack_30 = uStack_10;
      MessageRouter::
      Subscribe<BoardEntity*,Sexy::CBMemberTranslatorX<PlantShineVine,void(PlantShineVine::*)(BoardEntity*)>>
                ((MessageRouter *)puVar1,Message::SunProductionTriggered,&uStack_40);
      goto LAB_03fabd34;
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  nop();
  pPVar5 = Sexy::RtObject::Cast<PlantMagnifyingGrass>(this_01);
  *(PlantMagnifyingGrass **)(param_1 + 0x148) = pPVar5;
LAB_03fabd34:
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShineVine::onPlantDied(Plant*) */

void PlantShineVine::onPlantDied(Plant *param_1)

{
  undefined *puVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_28 [8];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_1,onSunProductionTriggered);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Unsubscribe<BoardEntity*,Sexy::CBMemberTranslatorX<PlantShineVine,void(PlantShineVine::*)(BoardEntity*)>>
            ((MessageRouter *)puVar1,Message::SunProductionTriggered,&local_50);
  param_1[0x150] = (Plant)0x0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_28);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(param_1 + 0x128),(RtWeakPtr *)a_Stack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_28);
  param_1[0x151] = (Plant)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShineVine::AutoFire() */

void __thiscall PlantShineVine::AutoFire(PlantShineVine *this)

{
  int iVar1;
  PlantAnimRig_ShineVine *pPVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  uVar3 = *(undefined8 *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03fa94b8(uVar3);
  if (iVar1 == 5) {
    this[0x178] = (PlantShineVine)0x1;
    pPVar2 = (PlantAnimRig_ShineVine *)FUN_03faab90(uVar3);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PlantAnimRig_ShineVine::PlayTapAttack(pPVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    uVar4 = PVZ_EOT();
    *(undefined4 *)(*(long *)(this + 0x10) + 300) = uVar4;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShineVine::hasValidTarget(PlantWeapon) */

void __thiscall PlantShineVine::hasValidTarget(PlantShineVine *this,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  Zombie *extraout_x0;
  undefined8 local_38;
  undefined8 local_30 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  (**(code **)(*(long *)this + 0x2b0))((__normal_iterator *)local_30,this,param_2);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,(__normal_iterator *)local_30);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_20);
  while( true ) {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)local_30);
    if (!bVar2) break;
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    nop();
    uVar3 = getZombieTargetExclusionFlags(this,param_2);
    cVar1 = Zombie::MatchesAny(extraout_x0,uVar3,*(undefined8 *)(this + 0x10));
    if (cVar1 == '\0') break;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShineVine::DoTapAttack() */

void PlantShineVine::DoTapAttack(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  PlantShineVine *in_x0;
  wchar16 *pwVar4;
  PlantAnimRig_ShineVine *pPVar5;
  long *plVar6;
  RtId *pRVar7;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  Board *this;
  undefined4 uVar8;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_03fab210(*(undefined8 *)(in_x0 + 0x10));
  this = *(Board **)(gLawnApp + 0x9f0);
  iVar3 = GetSunMoneyPerShot(in_x0);
  bVar1 = Board::CanTakeSunMoney(this,iVar3);
  pwVar4 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  pRVar7 = aRStack_60;
  std::string::string(asStack_58,"FreePlanting");
  bVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar4,(wchar16 *)asStack_58,(LineBreakCategory *)pRVar7,in_x3,in_x4);
  std::string::~string(asStack_58);
  nop();
  if (in_x0[0x178] == (PlantShineVine)0x0) {
    bVar1 = bVar2 | bVar1;
    if (bVar1 != 0) {
      if (bVar2 == 0) {
        spendSun(in_x0);
      }
      in_x0[0x178] = (PlantShineVine)0x1;
      startSunSuck(in_x0);
      pPVar5 = (PlantAnimRig_ShineVine *)FUN_03faab90(*(undefined8 *)(in_x0 + 0x10));
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PlantAnimRig_ShineVine::PlayTapAttack(pPVar5,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      uVar8 = PVZ_EOT();
      *(undefined4 *)(*(long *)(in_x0 + 0x10) + 300) = uVar8;
      goto LAB_03fac368;
    }
  }
  bVar1 = 0;
  plVar6 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(in_x0 + 0x10));
  (**(code **)(*plVar6 + 0x118))();
LAB_03fac368:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShineVine::onTouchEvent(Sexy::Touch const&) */

void __thiscall PlantShineVine::onTouchEvent(PlantShineVine *this,Touch *param_1)

{
  char cVar1;
  int iVar2;
  TRect<int> *this_00;
  RtObject *this_01;
  PlantAnimRig_ShineVine *pPVar3;
  code *pcVar4;
  Plant *this_02;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x179] != (PlantShineVine)0x0) &&
     (cVar1 = Plant::IsSuspended(*(Plant **)(this + 0x10)), cVar1 == '\0')) {
    this_02 = *(Plant **)(this + 0x10);
    cVar1 = FUN_03fa948c(this_02[0x278]);
    if (((cVar1 == '\0') &&
        (((cVar1 = Plant::IsWatering(this_02), cVar1 == '\0' &&
          (cVar1 = Plant::HasCondition(*(undefined8 *)(this + 0x10),0x11), cVar1 == '\0')) &&
         (cVar1 = Plant::HasCondition(*(undefined8 *)(this + 0x10),0x17), cVar1 == '\0')))) &&
       (((iVar2 = FUN_03fa94b8(*(undefined8 *)(this + 0x10)), iVar2 == 5 &&
         (this[0x178] == (PlantShineVine)0x0)) &&
        (fVar7 = *(float *)(this + 0x160), fVar5 = (float)PVZ_T(), fVar7 <= fVar5)))) {
      pcVar4 = *(code **)(*(long *)*(Plant **)(this + 0x10) + 0x1f8);
      if (pcVar4 == Plant::IsInPlantFoodState) {
        cVar1 = Plant::IsInPlantFoodState(*(Plant **)(this + 0x10));
      }
      else {
        cVar1 = (*pcVar4)();
      }
      if (((cVar1 == '\0') &&
          (cVar1 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0)), cVar1 != '\0')) &&
         (((*(long *)(this + 0x170) == 0 && (*(int *)(param_1 + 0x30) == 0)) ||
          (*(long *)(this + 0x170) == *(long *)param_1)))) {
        fVar5 = (float)FUN_03fa9694((float)*(int *)(param_1 + 0x10));
        fVar7 = (float)FUN_03fa9694((float)*(int *)(param_1 + 0x14));
        this_00 = (TRect<int> *)
                  (**(code **)(**(long **)(this + 0x10) + 0x178))(*(long **)(this + 0x10));
        cVar1 = Sexy::TRect<int>::Contains(this_00,(int)fVar5,(int)fVar7);
        if (cVar1 != '\0') {
          iVar2 = *(int *)(param_1 + 0x30);
          if (iVar2 == 3) {
            ClearTouch(this);
            if (((*(long *)(gLawnApp + 0x9f0) == 0) ||
                (cVar1 = FUN_03fa94c0(*(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0x887)),
                cVar1 != '\0')) &&
               (cVar1 = (**(code **)(**(long **)(this + 0x10) + 0x1f8))(*(long **)(this + 0x10)),
               cVar1 == '\0')) {
              DoTapAttack();
            }
            goto LAB_03fac3dc;
          }
          if (iVar2 != 4) {
            if (iVar2 == 0) {
              uVar6 = PVZ_T();
              *(undefined8 *)(this + 0x170) = *(undefined8 *)param_1;
              *(undefined4 *)(this + 0x158) = uVar6;
              this_01 = (RtObject *)
                        UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
              pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_ShineVine>(this_01);
              std::string::string(asStack_40,"attacklv5_start");
              Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
              PopAnimRig::PlayAndContinue((PopAnimRig *)pPVar3,asStack_40,0,aDStack_38);
              std::string::~string(asStack_40);
              nop();
              uVar6 = PVZ_T();
              this[0x168] = (PlantShineVine)0x1;
              *(undefined4 *)(this + 0x164) = uVar6;
            }
            goto LAB_03fac3dc;
          }
        }
        ClearTouch(this);
      }
    }
  }
LAB_03fac3dc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShineVine::applyAttackEffects(Zombie*, PlantWeapon) */

void __thiscall PlantShineVine::applyAttackEffects(PlantShineVine *this,long *param_1,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  RtObject *pRVar4;
  ShineVineProps *pSVar5;
  PlantAction *pPVar6;
  PowerPropsSunProducer *pPVar7;
  long lVar8;
  SunProducer *pSVar10;
  undefined4 uVar9;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_e0 [2];
  undefined8 local_d0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [68];
  DamageInfo *local_3c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_03fa9494(aRStack_80,*(undefined8 *)(this + 0x10));
  pRVar4 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
  pSVar5 = Sexy::RtObject::Cast<ShineVineProps_const>(pRVar4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
  pPVar6 = (PlantAction *)FUN_03fa94cc(*(undefined8 *)(pSVar5 + 0x70),param_3);
  PlantAction::PlantAction((PlantAction *)aRStack_80,pPVar6);
  if (param_3 == 1) {
    pPVar6 = *(PlantAction **)(this + 0x10);
  }
  else {
    pPVar6 = *(PlantAction **)(this + 0x10);
    iVar2 = FUN_03fa94b8(pPVar6);
    if (2 < iVar2) {
      local_3c._0_4_ = (DamageInfo *)((float)local_3c._0_4_ + (float)local_3c._0_4_);
    }
  }
  Plant::calcDamageInfoFromPlantAction(pPVar6);
  local_d0 = 0x2000000000000;
  DamageInfo::AddCondition(local_3c._0_4_,(DamageInfo *)local_e0,2);
  local_e0[0] = *(undefined8 *)(this + 0x10);
  (**(code **)(*param_1 + 0x110))(param_1,(DamageInfo *)local_e0);
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  if (((cVar1 != '\0') && (0 < *(int *)(this + 0x154))) ||
     (iVar2 = FUN_03fa94b8(*(undefined8 *)(this + 0x10)), 1 < iVar2)) {
    uVar3 = getPowerContextForWeapon(this,param_3);
    PowerSet::Find((RtWeakPtr<Sexy::ResourceInfo> *)&local_100,pSVar5 + 0x58,1,uVar3);
    pRVar4 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_100);
    pPVar7 = Sexy::RtObject::Cast<PowerPropsSunProducer>(pRVar4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_100);
    uVar3 = *(undefined4 *)((long)param_1 + 0x1c);
    local_108 = FUN_03fa94e0((int)param_1[3],uVar3,(int)param_1[4]);
    lVar8 = *(long *)(this + 0x10);
    uVar9 = *(undefined4 *)(lVar8 + 0x1c);
    local_104 = uVar3;
    local_100 = FUN_03fa94e0(*(undefined4 *)(lVar8 + 0x18),uVar9,*(undefined4 *)(lVar8 + 0x20));
    local_fc = uVar9;
    pSVar10._0_4_ =
         (SunProducer *)
         Sexy::SexyVector2::operator-((SexyVector2 *)&local_108,(SexyVector2 *)&local_100);
    SunProducer::SunProducer
              (pSVar10._0_4_,uVar9,(RtWeakPtr<Sexy::ResourceInfo> *)&local_100,
               *(undefined8 *)(this + 0x10),pPVar7);
    SunProducer::Execute((SunProducer *)&local_100);
  }
  *(int *)(this + 0x154) = *(int *)(this + 0x154) + -1;
  DamageInfo::~DamageInfo((DamageInfo *)local_e0);
  PlantAction::~PlantAction((PlantAction *)aRStack_80);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShineVine::tryAttackZombies(PlantWeapon) */

void __thiscall PlantShineVine::tryAttackZombies(PlantShineVine *this,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  Zombie *extraout_x0;
  undefined8 local_38;
  undefined8 local_30 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  (**(code **)(*(long *)this + 0x2b0))((__normal_iterator *)local_30,this,param_2);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,(__normal_iterator *)local_30);
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  uVar4 = 10;
  if (cVar1 == '\0') {
    iVar3 = FUN_03fa94b8(*(undefined8 *)(this + 0x10));
    uVar4 = 5;
    if (iVar3 < 2) {
      uVar4 = 1;
    }
  }
  *(undefined4 *)(this + 0x154) = uVar4;
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_20);
  while (bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)local_30)
        , bVar2) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    nop();
    uVar4 = getZombieTargetExclusionFlags(this,param_2);
    cVar1 = Zombie::MatchesAny(extraout_x0,uVar4,*(undefined8 *)(this + 0x10));
    if (cVar1 == '\0') {
      applyAttackEffects(this,extraout_x0,param_2);
      iVar3 = *(int *)(this + 0x154);
    }
    else {
      iVar3 = *(int *)(this + 0x154);
    }
    if ((iVar3 < 1) && (cVar1 = (**(code **)(*(long *)this + 0x180))(this), cVar1 == '\0')) break;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantShineVine::DoSpecial(int) */

void PlantShineVine::DoSpecial(int param_1)

{
  char cVar1;
  PlantShineVine *pPVar2;
  
  pPVar2 = (PlantShineVine *)(ulong)(uint)param_1;
  cVar1 = (**(code **)(*(long *)pPVar2 + 0x180))();
  if (cVar1 == '\0') {
    tryAttackZombies(pPVar2);
    return;
  }
  tryAttackZombies(pPVar2,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShineVine::Initialize() */

void __thiscall PlantShineVine::Initialize(PlantShineVine *this)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  long extraout_x0;
  long lVar4;
  undefined4 uVar5;
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = 0;
  PlantVineFramework::Initialize((PlantVineFramework *)this);
  this[0x17a] = (PlantShineVine)0x0;
  this[0x178] = (PlantShineVine)0x0;
  this[0x179] = (PlantShineVine)0x1;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x17c) = 0;
  *(undefined4 *)(this + 0x158) = 0;
  uVar5 = PVZ_EOT();
  *(undefined4 *)(this + 0x15c) = uVar5;
  uVar5 = PVZ_T();
  *(undefined4 *)(this + 0x160) = uVar5;
  lVar3 = FUN_03fab210(*(undefined8 *)(this + 0x10));
  *(undefined4 *)(this + 0x13c) = *(undefined4 *)(lVar3 + 0x2c4);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar5 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  uVar2 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  EntityFinder::GetEntitiesAtGridSquare(avStack_20,1,uVar5,uVar2);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    nop();
    Plant::GetType();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    bVar1 = std::operator==((string *)(lVar3 + 8),"shinevine");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    if (!bVar1) {
      lVar4 = extraout_x0;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  if (lVar4 != 0) {
    setupForBasePlant((Plant *)this);
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
/* PlantShineVine::UpdateUnconditionally() */

void __thiscall PlantShineVine::UpdateUnconditionally(PlantShineVine *this)

{
  char cVar1;
  int iVar2;
  RtObject *this_00;
  PlantAnimRig_ShineVine *pPVar3;
  float fVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantVineFramework::UpdateUnconditionally((PlantVineFramework *)this);
  iVar2 = FUN_03fa94b8(*(undefined8 *)(this + 0x10));
  if (((iVar2 == 5) && (*(long *)(this + 0x170) != 0)) &&
     (fVar4 = (float)PVZ_T(), 1.0 <= fVar4 - *(float *)(this + 0x158))) {
    if ((*(long *)(gLawnApp + 0x9f0) != 0) &&
       (cVar1 = FUN_03fa94c0(*(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0x887)), cVar1 != '\0'))
    {
      this[0x17a] = (PlantShineVine)0x1;
      this_00 = (RtObject *)
                UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_ShineVine>(this_00);
      std::string::string(asStack_10,"attacklv5_02");
      PlantAnimRig_HoyaCordata::setIdleTag((string *)pPVar3);
      std::string::~string(asStack_10);
      nop();
      DoTapAttack();
    }
    ClearTouch(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantShineVine::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantShineVine::onAnimStoppedCallback(PlantShineVine *this,string *param_1)

{
  long *plVar1;
  
  PlantStatefulFramework::onAnimStoppedCallback((PlantStatefulFramework *)this,param_1);
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar1 + 0x118))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShineVine::UpdateActions() */

void __thiscall PlantShineVine::UpdateActions(PlantShineVine *this)

{
  char cVar1;
  undefined4 uVar2;
  RtObject *this_00;
  ShineVineProps *pSVar3;
  PlantAction *pPVar4;
  long *plVar5;
  PlantAnimRig_ShineVine *this_01;
  code *pcVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  RtMixedPtr aRStack_e0 [8];
  undefined4 local_d8;
  undefined4 local_d4;
  FastCurve aFStack_d0 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_c8 [72];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [36];
  float local_5c;
  long local_8;
  
  pcVar6 = *(code **)(*(long *)*(Plant **)(this + 0x10) + 0x1f8);
  local_8 = ___stack_chk_guard;
  if (pcVar6 == Plant::IsInPlantFoodState) {
    cVar1 = Plant::IsInPlantFoodState(*(Plant **)(this + 0x10));
  }
  else {
    cVar1 = (*pcVar6)();
  }
  if (cVar1 == '\0') {
    fVar8 = (float)PVZ_T();
    if ((this[0x168] != (PlantShineVine)0x0) &&
       (fVar9 = (float)PVZ_T(), 1.5 <= fVar9 - *(float *)(this + 0x164))) {
      plVar5 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      (**(code **)(*plVar5 + 0x118))();
      this[0x168] = (PlantShineVine)0x0;
    }
    if (*(float *)(*(long *)(this + 0x10) + 300) < fVar8) {
      if (*(long *)(this + 0x148) == 0) {
        cVar1 = SunProducer::CanProduceSun();
        if (cVar1 != '\0') {
          this_01 = (PlantAnimRig_ShineVine *)FUN_03faab90(*(undefined8 *)(this + 0x10));
          cVar1 = PlantAnimRig_ShineVine::PlaySun(this_01);
          if (cVar1 == '\0') goto LAB_03fad1d0;
        }
        Plant::ResetLaunchTimer(*(Plant **)(this + 0x10),false);
      }
      else {
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
        uVar2 = operator|(4,2);
        lVar7 = *(long *)(*(long *)(this + 0x148) + 0x10);
        uVar10 = *(undefined4 *)(lVar7 + 0x1c);
        local_d8 = FUN_03fa94e0(*(undefined4 *)(lVar7 + 0x18),uVar10,*(undefined4 *)(lVar7 + 0x20));
        local_d4 = uVar10;
        Sexy::FastCurve::SetOutRange(aFStack_d0,1.0,0.0);
        EntityFinder::GetEntitiesTouchingRay
                  (avStack_80,uVar2,&local_d8,aFStack_d0,
                   *(undefined4 *)(*(long *)(this + 0x10) + 0x110),
                   *(undefined4 *)(*(long *)(this + 0x10) + 0x110));
        cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                          ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
        if ((cVar1 == '\0') &&
           (cVar1 = PlantMagnifyingGrass::tryFireRegularShot
                              (*(PlantMagnifyingGrass **)(this + 0x148),true), cVar1 != '\0')) {
          Plant::ResetLaunchTimer(*(Plant **)(this + 0x10),false);
        }
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
      }
    }
    if ((*(float *)(this + 0x140) <= fVar8) && (cVar1 = hasValidTarget(this,0), cVar1 != '\0')) {
      FUN_03fa9494((RtWeakPtr<Sexy::ResourceInfo> *)avStack_80,*(undefined8 *)(this + 0x10));
      this_00 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)avStack_80);
      pSVar3 = Sexy::RtObject::Cast<ShineVineProps_const>(this_00);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)avStack_80);
      pPVar4 = (PlantAction *)FUN_03fa94cc(*(undefined8 *)(pSVar3 + 0x70),0);
      PlantAction::PlantAction((PlantAction *)avStack_80,pPVar4);
      *(float *)(this + 0x140) = fVar8 + local_5c;
      plVar5 = (long *)FUN_03faab90(*(undefined8 *)(this + 0x10));
      pcVar6 = *(code **)(*plVar5 + 0x130);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_e0);
      std::string::string((string *)aFStack_d0,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_c8,
                 (RtId *)&local_d8,(string *)aFStack_d0);
      (*pcVar6)(plVar5,aRStack_c8);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_c8);
      std::string::~string((string *)aFStack_d0);
      nop();
      Sexy::RtId::~RtId((RtId *)&local_d8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_e0);
      PlantAction::~PlantAction((PlantAction *)avStack_80);
    }
  }
LAB_03fad1d0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

