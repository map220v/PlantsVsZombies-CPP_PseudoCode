// Class: PlantCeleryStalker


/* PlantCeleryStalker::GetEntityHeight() const */

undefined4 __thiscall PlantCeleryStalker::GetEntityHeight(PlantCeleryStalker *this)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (*(int *)(*(long *)(this + 0x10) + 200) == 0xe) {
    uVar1 = 0;
  }
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCeleryStalker::StaticClassInit() */

void PlantCeleryStalker::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantCeleryStalker");
    (*pcVar2)(plVar1,asStack_10,FUN_04161158,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCeleryStalker::StaticGetClass() */

long * PlantCeleryStalker::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantCeleryStalker",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCeleryStalker::GetClass() const */

long * PlantCeleryStalker::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantCeleryStalker",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCeleryStalker::CanUpgrade() */

undefined8 __thiscall PlantCeleryStalker::CanUpgrade(PlantCeleryStalker *this)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  
  fVar4 = *(float *)(*(long *)(this + 0x10) + 0xd8);
  iVar2 = (**(code **)(*(long *)this + 0x120))();
  if ((fVar4 < (float)iVar2) && (cVar1 = (**(code **)(*(long *)this + 0x180))(this), cVar1 == '\0'))
  {
    uVar3 = LawnApp::HasPlayerUnlockedFeature(gLawnApp,0x17);
    return uVar3;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCeleryStalker::targetFound() */

void __thiscall PlantCeleryStalker::targetFound(PlantCeleryStalker *this)

{
  undefined4 uVar1;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::FindTargetZombie(aRStack_10,this,0);
  uVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCeleryStalker::createBounceEffectAt(Zombie*, std::string) */

void PlantCeleryStalker::createBounceEffectAt
               (undefined8 param_1,
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *param_2)

{
  int iVar1;
  Effect_PopAnim *this;
  PopAnim *pPVar2;
  float *pfVar3;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_CELERYSTALKER_RE");
  GetPAMByName(asStack_20);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string(asStack_20);
  nop();
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(param_2);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,*pfVar3 + 10.0,pfVar3[1] - 20.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_18,-1);
  iVar1 = (**(code **)(*(long *)param_2 + 200))(param_2);
  FUN_0415e97c(this + 0x1c,iVar1 + 1);
  Effect_PopAnim::SetCentered(this,true);
  std::string::string((string *)aRStack_18,"re");
  Effect_PopAnim::PlaySingleAnimation(this,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCeleryStalker::PlantCeleryStalker() */

void __thiscall PlantCeleryStalker::PlantCeleryStalker(PlantCeleryStalker *this)

{
  undefined4 uVar1;
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067f2340;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x28) = uVar1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  this[0x48] = (PlantCeleryStalker)0x0;
  return;
}


/* PlantCeleryStalker::StaticNew() */

PlantCeleryStalker * PlantCeleryStalker::StaticNew(void)

{
  PlantCeleryStalker *this;
  
  this = ::operator_new(0x50);
  PlantCeleryStalker(this);
  return this;
}


/* PlantCeleryStalker::updateDamageVisuals() */

void __thiscall PlantCeleryStalker::updateDamageVisuals(PlantCeleryStalker *this)

{
  long lVar1;
  PlantAnimRig_CeleryStalker *this_00;
  PlantAnimRig_CeleryStalker *this_01;
  PlantAnimRig_CeleryStalker *this_02;
  UIEasyButtonWidget *this_03;
  
  lVar1 = FUN_041600cc(*(undefined8 *)(this + 0x10));
  this_03 = *(UIEasyButtonWidget **)(this + 0x10);
  if (*(float *)(this_03 + 0xd8) <= *(float *)(lVar1 + 0x2c4)) {
    UIEasyButtonWidget::GetImageNormal(this_03);
    nop();
    PlantAnimRig_CeleryStalker::ShowDamaged2(this_02);
    return;
  }
  if (*(float *)(lVar1 + 0x2c0) < *(float *)(this_03 + 0xd8)) {
    UIEasyButtonWidget::GetImageNormal(this_03);
    nop();
    PlantAnimRig_CeleryStalker::ShowDamaged0(this_00);
    return;
  }
  UIEasyButtonWidget::GetImageNormal(this_03);
  nop();
  PlantAnimRig_CeleryStalker::ShowDamaged1(this_01);
  return;
}


/* PlantCeleryStalker::onHealed() */

void __thiscall PlantCeleryStalker::onHealed(PlantCeleryStalker *this)

{
  long lVar1;
  PlantAnimRig_CeleryStalker *this_00;
  PlantAnimRig_CeleryStalker *this_01;
  PlantAnimRig_CeleryStalker *this_02;
  UIEasyButtonWidget *this_03;
  
  lVar1 = FUN_041600cc(*(undefined8 *)(this + 0x10));
  this_03 = *(UIEasyButtonWidget **)(this + 0x10);
  if (*(float *)(this_03 + 0xd8) <= *(float *)(lVar1 + 0x2c4)) {
    UIEasyButtonWidget::GetImageNormal(this_03);
    nop();
    PlantAnimRig_CeleryStalker::ShowDamaged2(this_02);
    return;
  }
  if (*(float *)(lVar1 + 0x2c0) < *(float *)(this_03 + 0xd8)) {
    UIEasyButtonWidget::GetImageNormal(this_03);
    nop();
    PlantAnimRig_CeleryStalker::ShowDamaged0(this_00);
    return;
  }
  UIEasyButtonWidget::GetImageNormal(this_03);
  nop();
  PlantAnimRig_CeleryStalker::ShowDamaged1(this_01);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCeleryStalker::setState(unsigned int) */

void __thiscall PlantCeleryStalker::setState(PlantCeleryStalker *this,uint param_1)

{
  UIEasyButtonWidget *this_00;
  PlantAnimRig_CeleryStalker *extraout_x0;
  PlantAnimRig_CeleryStalker *extraout_x0_00;
  PlantAnimRig_CeleryStalker *extraout_x0_01;
  PlantAnimRig_CeleryStalker *extraout_x0_02;
  PlantAnimRig_CeleryStalker *extraout_x0_03;
  PlantAnimRig_JackOLantern *extraout_x0_04;
  undefined4 uVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  *(uint *)(this_00 + 200) = param_1;
  if (param_1 - 10 < 6) {
    switch(param_1) {
    case 10:
      UIEasyButtonWidget::GetImageNormal(this_00);
      nop();
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,aRStack_60,asStack_58);
      PlantAnimRig_CeleryStalker::StartAttack
                (extraout_x0_01,
                 (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      uVar1 = PVZ_T();
      *(undefined4 *)(this + 0x28) = uVar1;
      goto LAB_041602b0;
    case 0xb:
      UIEasyButtonWidget::GetImageNormal(this_00);
      nop();
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,aRStack_60,asStack_58);
      PlantAnimRig_CeleryStalker::LoopAttack(extraout_x0_02,aRStack_50);
      break;
    case 0xc:
      UIEasyButtonWidget::GetImageNormal(this_00);
      nop();
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,aRStack_60,asStack_58);
      PlantAnimRig_CeleryStalker::SpecialAttack(extraout_x0_03,aRStack_50);
      break;
    case 0xd:
      UIEasyButtonWidget::GetImageNormal(this_00);
      nop();
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,aRStack_60,asStack_58);
      PlantAnimRig_JackOLantern::PlayAttackEnd(extraout_x0_04,aRStack_50);
      break;
    case 0xe:
      UIEasyButtonWidget::GetImageNormal(this_00);
      nop();
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,aRStack_60,asStack_58);
      PlantAnimRig_CeleryStalker::Submerge(extraout_x0,aRStack_50);
      break;
    case 0xf:
      UIEasyButtonWidget::GetImageNormal(this_00);
      nop();
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,aRStack_60,asStack_58);
      PlantAnimRig_CeleryStalker::Emerge(extraout_x0_00,aRStack_50);
    }
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
LAB_041602b0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCeleryStalker::Initialize() */

void __thiscall PlantCeleryStalker::Initialize(PlantCeleryStalker *this)

{
  undefined4 uVar1;
  
  PlantFramework::Initialize((PlantFramework *)this);
  uVar1 = PVZ_EOT();
  this[0x48] = (PlantCeleryStalker)0x0;
  *(undefined4 *)(this + 0x28) = uVar1;
  setState(this,0xe);
  return;
}


/* PlantCeleryStalker::ApplyPlantfood() */

void __thiscall PlantCeleryStalker::ApplyPlantfood(PlantCeleryStalker *this)

{
  Plant::Heal(*(Plant **)(this + 0x10));
  setState(this,0x10);
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCeleryStalker::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantCeleryStalker::onAnimStoppedCallback(PlantCeleryStalker *this,string *param_1)

{
  long lVar1;
  PlantAnimRig_CeleryStalker *extraout_x0;
  long *plVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_05474374(param_1,"attack_loop",0);
  if (lVar1 == -1) {
    lVar1 = FUN_05474374(param_1,"attack_end",0);
    if (lVar1 == -1) {
      lVar1 = FUN_05474374(param_1,"attack_special",0);
      if (lVar1 == -1) {
        lVar1 = FUN_05474374(param_1,"attack",0);
        if (lVar1 != -1) {
          setState(this,0xb);
          goto LAB_04160678;
        }
        lVar1 = FUN_05474374(param_1,&DAT_055e7830,0);
        if (lVar1 != -1) {
          plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
          ;
          (**(code **)(*plVar2 + 0x118))();
          goto LAB_04160678;
        }
        lVar1 = FUN_05474374(param_1,&DAT_05598570,0);
        if (lVar1 == -1) goto LAB_04160678;
      }
      setState(this,4);
    }
    else {
      plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      (**(code **)(*plVar2 + 0x118))();
      *(undefined4 *)(*(long *)(this + 0x10) + 200) = 4;
    }
  }
  else {
    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PlantAnimRig_CeleryStalker::LoopAttack(extraout_x0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
LAB_04160678:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCeleryStalker::canSpecialAttack() */

void __thiscall PlantCeleryStalker::canSpecialAttack(PlantCeleryStalker *this)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  float *pfVar5;
  float fVar6;
  int local_30;
  int local_2c;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_0415e9c8(*(undefined8 *)(this + 0x10));
  if (iVar3 == 2) {
    fVar6 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    lVar4 = FUN_041600cc(*(undefined8 *)(this + 0x10));
    bVar2 = fVar6 < *(float *)(lVar4 + 0x2e4);
LAB_041608e4:
    if (bVar2) {
      uVar1 = *(undefined4 *)(*(long *)(this + 0x10) + 0x110);
      lVar4 = FUN_041600cc(*(long *)(this + 0x10));
      Sexy::Insets::Insets((Insets *)&local_30,(Insets *)(lVar4 + 0x2d4));
      pfVar5 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(this + 0x10));
      local_30 = (int)((float)local_30 + *pfVar5);
      local_2c = (int)((float)local_2c + pfVar5[1]);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
      EntityFinder::GetEntitiesTouchingRectangle
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,
                 (Insets *)&local_30,uVar1,uVar1);
      lVar4 = FUN_0415e9dc(local_20,local_18);
      bVar2 = lVar4 != 0;
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
      goto LAB_04160894;
    }
  }
  else if (2 < iVar3) {
    fVar6 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    lVar4 = FUN_041600cc(*(undefined8 *)(this + 0x10));
    bVar2 = fVar6 < *(float *)(lVar4 + 0x2e8);
    goto LAB_041608e4;
  }
  bVar2 = false;
LAB_04160894:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCeleryStalker::CanApplyPlantfood() */

void PlantCeleryStalker::CanApplyPlantfood(void)

{
  byte bVar1;
  undefined8 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  vector<Sexy::Point,std::allocator<Sexy::Point>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = *(undefined8 *)(gLawnApp + 0x9f0);
  Plant::GetType();
  Board::FindAllPlantableCells(avStack_20,uVar2,aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  bVar1 = std::vector<Sexy::Point,std::allocator<Sexy::Point>>::empty(avStack_20);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1 ^ 1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCeleryStalker::tossZombie(Zombie*) */

void __thiscall PlantCeleryStalker::tossZombie(PlantCeleryStalker *this,Zombie *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  ZombieTosserSubSystem *pZVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  ZombieTosserSubSystem *pZVar10;
  float fVar9;
  float local_c8 [2];
  float local_c0;
  undefined4 local_bc;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_b0 [72];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = *(undefined8 *)(this + 0x10);
  Sexy::Point::Point((Point *)local_c8,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_c0,1.0,0.0);
  DamageInfo::DamageInfo((DamageInfo *)0x0,local_c0,local_bc,aDStack_68,1,uVar6,(Point *)local_c8,0)
  ;
  (**(code **)(*(long *)param_1 + 0x110))(param_1,aDStack_68);
  std::string::string((string *)&local_c0,"");
  createBounceEffectAt(this,param_1,(FastCurve *)&local_c0);
  std::string::~string((string *)&local_c0);
  nop();
  lVar3 = FUN_041600cc(*(undefined8 *)(this + 0x10));
  uVar8 = *(undefined4 *)(lVar3 + 0x2c8);
  lVar3 = FUN_041600cc(*(undefined8 *)(this + 0x10));
  fVar9 = *(float *)(lVar3 + 0x2d0);
  lVar3 = FUN_041600cc(*(undefined8 *)(this + 0x10));
                    /* WARNING: Load size is inaccurate */
  pZVar10._0_4_ = *(ZombieTosserSubSystem **)(lVar3 + 0x2cc);
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  fVar7 = pfVar4[1];
  local_c8[0] = *pfVar4 + fVar9;
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  local_c0 = (float)(iVar1 * iVar2 + 200);
  pfVar4 = eastl::min_alt<float>(local_c8,&local_c0);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_c0,*pfVar4,fVar7,0.0);
  pZVar5 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_b0);
  ZombieTosserSubSystem::LaunchZombie
            (pZVar10._0_4_,uVar8,pZVar5,param_1,(FastCurve *)&local_c0,aRStack_b0,1);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_b0);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCeleryStalker::~PlantCeleryStalker() */

void __thiscall PlantCeleryStalker::~PlantCeleryStalker(PlantCeleryStalker *this)

{
  char cVar1;
  bool bVar2;
  RtWeakPtrBase *pRVar3;
  Plant *pPVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_067f2340;
  if ((*(long *)(gLawnApp + 0x9f0) != 0) &&
     (cVar1 = FUN_0415e9d0(*(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0x887)), cVar1 == '\0')) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x30));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x30));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2)
    {
      pRVar3 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar3);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
      if (cVar1 != '\0') {
        pPVar4 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        Plant::KillPlant(pPVar4,0,0,0x40000000000);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x30))
  ;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantCeleryStalker::~PlantCeleryStalker() */

void __thiscall PlantCeleryStalker::~PlantCeleryStalker(PlantCeleryStalker *this)

{
  ~PlantCeleryStalker(this);
  AK::FreeHook(this);
  return;
}


/* PlantCeleryStalker::TakeDamage(DamageInfo const&) */

void __thiscall PlantCeleryStalker::TakeDamage(PlantCeleryStalker *this,DamageInfo *param_1)

{
  updateDamageVisuals(this);
  PlantMagicbeans::TakeDamage((DamageInfo *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCeleryStalker::CanFireZombie(Zombie const*) const */

void __thiscall PlantCeleryStalker::CanFireZombie(PlantCeleryStalker *this,Zombie *param_1)

{
  char cVar1;
  byte bVar2;
  TitleStatus aTStack_70 [24];
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = RealObject::IsOnOpposingTeam((RealObject *)param_1,*(RealObject **)(this + 0x10));
  if ((((cVar1 != '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0')
       ) && (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0')) &&
     (cVar1 = Zombie::IsIgnoringAllDamage(param_1), cVar1 == '\0')) {
    cVar1 = Zombie::IsControlled(param_1);
    if (cVar1 == '\0') {
      Zombie::GetCurrentTitleStatus();
      bVar2 = 0;
      if (local_58 == '\0') {
        bVar2 = Zombie::IsInvisible(param_1);
        bVar2 = bVar2 ^ 1;
      }
      TitleStatus::~TitleStatus(aTStack_70);
      goto LAB_04160e70;
    }
  }
  bVar2 = 0;
LAB_04160e70:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCeleryStalker::trySpecialAttack() */

void __thiscall PlantCeleryStalker::trySpecialAttack(PlantCeleryStalker *this)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  float *pfVar5;
  Zombie *extraout_x0;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  int local_2c;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  uVar1 = *(undefined4 *)(*(long *)(this + 0x10) + 0x110);
  local_8 = ___stack_chk_guard;
  lVar4 = FUN_041600cc(*(long *)(this + 0x10));
  Sexy::Insets::Insets((Insets *)&local_30,(Insets *)(lVar4 + 0x2d4));
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  local_30 = (int)((float)local_30 + *pfVar5);
  local_2c = (int)((float)local_2c + pfVar5[1]);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,
             (Insets *)&local_30,uVar1,uVar1);
  lVar4 = FUN_0415e9dc(local_20,local_18);
  if (lVar4 != 0) {
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar2)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      nop();
      cVar3 = CanFireZombie(this,extraout_x0);
      if (cVar3 != '\0') {
        tossZombie(this,extraout_x0);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


/* PlantCeleryStalker::OnAnimCommand(std::string const&, std::string const&) */

undefined8 PlantCeleryStalker::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  
  bVar1 = std::operator==(param_2,"use_action");
  if (!bVar1) {
    uVar2 = PlantFramework::OnAnimCommand(param_1,param_2);
    return uVar2;
  }
  trySpecialAttack((PlantCeleryStalker *)param_1);
  return 1;
}


/* PlantCeleryStalker::onEntityDamaged(BoardEntity*) */

void __thiscall PlantCeleryStalker::onEntityDamaged(PlantCeleryStalker *this,BoardEntity *param_1)

{
  char cVar1;
  Zombie *pZVar2;
  
  if (((param_1 != (BoardEntity *)0x0) &&
      (pZVar2 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), pZVar2 != (Zombie *)0x0)) &&
     (cVar1 = CanFireZombie(this,pZVar2), cVar1 != '\0')) {
    tossZombie(this,pZVar2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCeleryStalker::findPlantableGridCells() */

void __thiscall PlantCeleryStalker::findPlantableGridCells(PlantCeleryStalker *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *in_x8;
  undefined8 uVar8;
  Board *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar8 = *(undefined8 *)(gLawnApp + 0x9f0);
  Plant::GetType();
  Board::FindAllPlantableCells(uVar8,(RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  Plant::GetType();
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(in_x8);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(in_x8);
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar3) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      this_00 = *(Board **)(gLawnApp + 0x9f0);
      piVar5 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      iVar1 = piVar5[1];
      iVar2 = *piVar5;
      std::string::string((string *)&local_10,"");
      lVar6 = Board::GetPlantAt(this_00,iVar2,iVar1,(string *)&local_10);
      std::string::~string((string *)&local_10);
      nop();
      if (lVar6 == 0) break;
      Plant::GetType();
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      cVar4 = std::operator==((string *)(lVar6 + 8),(string *)(lVar7 + 8));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      if (cVar4 == '\0') break;
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      local_18 = std::vector<Sexy::Point,std::allocator<Sexy::Point>>::erase();
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(in_x8);
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCeleryStalker::createDuplicateStalker(Sexy::Point const&) */

void __thiscall PlantCeleryStalker::createDuplicateStalker(PlantCeleryStalker *this,Point *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Plant *this_00;
  undefined8 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar1 = *(undefined4 *)param_1;
  uVar3 = *(undefined8 *)(gLawnApp + 0x9f0);
  uVar2 = *(undefined4 *)(param_1 + 4);
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  this_00 = (Plant *)Board::AddPlant((Board *)0x0,uVar3,uVar1,uVar2,aRStack_10,1,1,0xffffffff,0,1,1,
                                     1,0,0,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (this_00 != (Plant *)0x0) {
    Plant::SetIsDuplicatePlant(this_00,true);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
    std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
              ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
               (this + 0x30),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCeleryStalker::executePlantFoodEffect() */

void __thiscall PlantCeleryStalker::executePlantFoodEffect(PlantCeleryStalker *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  bool bVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 *puVar8;
  Point *pPVar9;
  undefined8 *puVar10;
  Zombie *pZVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  int iVar15;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *this_00;
  ulong uVar16;
  Plant *this_01;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  findPlantableGridCells(this);
  cVar2 = std::vector<Sexy::Point,std::allocator<Sexy::Point>>::empty
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_80);
  if (cVar2 == '\0') {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
    this_01 = *(Plant **)(this + 0x10);
    iVar15 = *(int *)(this_01 + 0x114);
    iVar1 = *(int *)(this_01 + 0x110);
    for (uVar16 = 0; uVar12 = local_80, uVar6 = FUN_0415e9e8(local_80,local_78), uVar16 < uVar6;
        uVar16 = uVar16 + 1) {
      piVar7 = (int *)FUN_0415e9f4(uVar12,uVar16);
      Plant::SetGridLocSilent(this_01,*piVar7,piVar7[1]);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
      puVar8 = (undefined4 *)FUN_0415e9f4(local_80,uVar16);
      EntityFinder::GetEntitiesAtGridSquare
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20,2,*puVar8,puVar8[1]);
      cVar2 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                        ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20);
      if (cVar2 == '\0') {
        local_90 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)local_20);
        bVar4 = 0;
        while( true ) {
          local_88 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)local_20);
          bVar3 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88);
          if (bVar3 <= bVar4) break;
          puVar10 = (undefined8 *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
          pZVar11 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar10);
          bVar4 = (**(code **)(*(long *)pZVar11 + 0x330))();
          bVar4 = bVar4 ^ 1;
          FUN_0415f884((__normal_iterator *)&local_90);
        }
        if (bVar4 == 0) goto LAB_041617d0;
        pPVar9 = (Point *)FUN_0415e9f4(local_80,uVar16);
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                  ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_68,pPVar9);
      }
      else {
LAB_041617d0:
        pPVar9 = (Point *)FUN_0415e9f4(local_80,uVar16);
        if (*(int *)pPVar9 < 5) {
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_38,pPVar9);
        }
        else {
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_50,pPVar9);
        }
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20);
      this_01 = *(Plant **)(this + 0x10);
    }
    uVar16 = 0;
    Plant::SetGridLocSilent(this_01,iVar15,iVar1);
    uVar12 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_68);
    uVar13 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_68);
    std::
    random_shuffle<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
              (uVar12,uVar13);
    lVar14 = FUN_041600cc(*(undefined8 *)(this + 0x10));
    iVar15 = *(int *)(lVar14 + 0x2b8);
    cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    if (cVar2 != '\0') {
      iVar15 = iVar15 + 1;
    }
LAB_041618f4:
    uVar12 = local_68;
    uVar6 = FUN_0415e9e8(local_68,local_60);
    if (uVar16 < uVar6) goto LAB_041618cc;
    if (0 < iVar15) {
      bVar3 = false;
      this_00 = avStack_50;
      while( true ) {
        uVar12 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)this_00);
        uVar13 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_00);
        std::
        random_shuffle<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
                  (uVar12,uVar13);
        local_88 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)this_00);
        while( true ) {
          local_20[0] = std::
                        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                               *)this_00);
          bVar5 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_88,(__normal_iterator *)local_20);
          if (iVar15 < 1) goto LAB_0416199c;
          if (!bVar5) break;
          iVar15 = iVar15 + -1;
          pPVar9 = (Point *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
          createDuplicateStalker(this,pPVar9);
          FUN_0415fa44((exception_ptr *)&local_88);
        }
        if (bVar3) break;
        bVar3 = true;
        this_00 = avStack_38;
      }
    }
LAB_0416199c:
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_38);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_50);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_68);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_80);
LAB_041619bc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_041618cc:
  iVar15 = iVar15 + -1;
  pPVar9 = (Point *)FUN_0415e9f4(uVar12,uVar16);
  createDuplicateStalker(this,pPVar9);
  uVar16 = uVar16 + 1;
  if (iVar15 < 1) goto LAB_04161a08;
  goto LAB_041618f4;
LAB_04161a08:
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_38);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_50);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_68);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_80);
  goto LAB_041619bc;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCeleryStalker::UpdateActions() */

void __thiscall PlantCeleryStalker::UpdateActions(PlantCeleryStalker *this)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  Plant *this_00;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = Plant::IsSuspended(*(Plant **)(this + 0x10));
  if (cVar2 != '\0') {
switchD_04161ae0_caseD_5:
    if (local_8 == ___stack_chk_guard) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  lVar3 = *(long *)(this + 0x10);
  iVar7 = *(int *)(lVar3 + 200);
LAB_04161a94:
  switch(iVar7) {
  case 4:
    lVar3 = FUN_041600cc();
    fVar9 = *(float *)(lVar3 + 700);
    cVar2 = targetFound(this);
    if (cVar2 == '\0') {
      fVar10 = (float)PVZ_EOT();
      if ((*(float *)(this + 0x28) != fVar10) &&
         (fVar10 = (float)PVZ_T(), fVar10 < fVar9 + *(float *)(this + 0x28))) goto LAB_04161b4c;
      setState(this,0xe);
      lVar3 = *(long *)(this + 0x10);
      iVar6 = *(int *)(lVar3 + 200);
    }
    else {
      setState(this,10);
      lVar3 = *(long *)(this + 0x10);
      iVar6 = *(int *)(lVar3 + 200);
    }
    goto LAB_04161b54;
  default:
    goto switchD_04161ae0_caseD_5;
  case 0xb:
    break;
  case 0xe:
    cVar2 = targetFound(this);
    if (cVar2 != '\0') {
      cVar2 = canSpecialAttack(this);
      if (cVar2 != '\0') {
        this[0x48] = (PlantCeleryStalker)0x1;
        setState(this,0xc);
        lVar3 = *(long *)(this + 0x10);
        iVar6 = *(int *)(lVar3 + 200);
        goto LAB_04161b54;
      }
      this[0x48] = (PlantCeleryStalker)0x0;
      setState(this,0xf);
    }
    goto LAB_04161b4c;
  case 0x10:
    executePlantFoodEffect(this);
    setState(this,4);
    lVar3 = *(long *)(this + 0x10);
  }
  fVar12 = *(float *)(this + 0x28);
  FUN_0415e9a4(aRStack_68,lVar3);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  lVar3 = FUN_0415ea00(*(undefined8 *)(lVar3 + 0x70));
  fVar9 = *(float *)(lVar3 + 0x28);
  fVar10 = (float)PVZ_T();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  if (fVar12 + fVar9 <= fVar10) {
    if (*(code **)(*(long *)this + 0x198) == PlantFramework::GetDamageFlags) {
      uVar4 = PlantFramework::GetDamageFlags();
    }
    else {
      uVar4 = (**(code **)(*(long *)this + 0x198))(this,0);
    }
    FUN_0415e9a4(aRStack_68,*(undefined8 *)(this + 0x10));
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    lVar3 = FUN_0415ea00(*(undefined8 *)(lVar3 + 0x70));
    this_00 = *(Plant **)(this + 0x10);
    fVar9 = (float)FUN_0415e988(*(undefined4 *)(this_00 + 0xf4),*(undefined4 *)(this_00 + 0x100),
                                *(undefined4 *)(this_00 + 0x104),*(undefined4 *)(this_00 + 0x3b8));
    fVar10 = (float)FUN_0415e998(*(undefined4 *)(this_00 + 0x3bc));
    iVar6 = *(int *)(lVar3 + 0x2c);
    fVar12 = (float)Plant::GetExtraDPSmodifier(this_00);
    fVar11 = (float)FUN_0415e99c(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    uVar8 = *(undefined8 *)(this + 0x10);
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo
              ((DamageInfo *)(fVar9 * fVar10 * (float)iVar6 * fVar12 * fVar11),local_70,local_6c,
               aRStack_68,uVar4,uVar8,aPStack_78,0);
    PlantFramework::FindTargetZombie((FastCurve *)&local_70,this,0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aPStack_78,(RtWeakPtrBase *)&local_70);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aPStack_78);
    if (cVar2 != '\0') {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_78);
      (**(code **)(*plVar5 + 0x110))(plVar5,aRStack_68);
    }
    FUN_0415e9a4((FastCurve *)&local_70,*(undefined8 *)(this + 0x10));
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
    lVar3 = FUN_0415ea00(*(undefined8 *)(lVar3 + 0x70));
    *(float *)(this + 0x28) = *(float *)(this + 0x28) + *(float *)(lVar3 + 0x28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_78);
    DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  }
  cVar2 = targetFound(this);
  if (cVar2 == '\0') {
    setState(this,0xd);
    lVar3 = *(long *)(this + 0x10);
    iVar6 = *(int *)(lVar3 + 200);
  }
  else {
LAB_04161b4c:
    lVar3 = *(long *)(this + 0x10);
    iVar6 = *(int *)(lVar3 + 200);
  }
LAB_04161b54:
  bVar1 = iVar7 == iVar6;
  iVar7 = iVar6;
  if (bVar1) goto switchD_04161ae0_caseD_5;
  goto LAB_04161a94;
}

