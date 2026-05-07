// Class: PlantHeadbutterLettuce


/* PlantHeadbutterLettuce::CancelPlantfood() */

void __thiscall PlantHeadbutterLettuce::CancelPlantfood(PlantHeadbutterLettuce *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
  return;
}


/* PlantHeadbutterLettuce::OnAnimCommand(std::string const&, std::string const&) */

undefined8 PlantHeadbutterLettuce::OnAnimCommand(string *param_1,string *param_2)

{
  return 0;
}


/* PlantHeadbutterLettuce::GetPlantAttackRect(PlantWeapon) */

int * PlantHeadbutterLettuce::GetPlantAttackRect(int *param_1,long param_2,int param_3)

{
  int iVar1;
  char cVar2;
  
  PlantFramework::GetPlantAttackRect();
  if (param_3 == 0) {
    iVar1 = param_1[2];
    cVar2 = *(char *)(param_2 + 0x28);
    param_1[2] = (int)((float)iVar1 * 0.5);
    if (cVar2 == '\0') {
      *param_1 = *param_1 + (int)((float)iVar1 * 0.5);
    }
  }
  return param_1;
}


/* PlantHeadbutterLettuce::CanTargetZombie(Sexy::RtWeakPtr<Zombie>, PlantWeapon) */

byte PlantHeadbutterLettuce::CanTargetZombie
               (undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  byte bVar1;
  long *plVar2;
  
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  bVar1 = (**(code **)(*plVar2 + 0x330))();
  return bVar1 ^ 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeadbutterLettuce::StaticClassInit() */

void PlantHeadbutterLettuce::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantHeadbutterLettuce");
    (*pcVar2)(plVar1,asStack_10,FUN_04cf7de0,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHeadbutterLettuce::StaticGetClass() */

long * PlantHeadbutterLettuce::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantHeadbutterLettuce",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHeadbutterLettuce::GetClass() const */

long * PlantHeadbutterLettuce::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantHeadbutterLettuce",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHeadbutterLettuce::GetPlantWeaponType() */

undefined4 __thiscall PlantHeadbutterLettuce::GetPlantWeaponType(PlantHeadbutterLettuce *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 == '\0') {
    iVar2 = FUN_04cf58bc(*(undefined4 *)(*(long *)(this + 0x10) + 0x50));
    uVar3 = 3;
    if (iVar2 < 2) {
      uVar3 = 2;
    }
    return uVar3;
  }
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  uVar3 = 5;
  if (cVar1 == '\0') {
    uVar3 = 4;
  }
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeadbutterLettuce::GetZombieMeleeTarget(bool) */

void PlantHeadbutterLettuce::GetZombieMeleeTarget(bool param_1)

{
  long *plVar1;
  undefined1 in_w1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  UnchartedModePlantNumData aUStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  plVar1 = (long *)(ulong)param_1;
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  *(undefined1 *)(plVar1 + 5) = in_w1;
  UnchartedModePlantNumData::UnchartedModePlantNumData(aUStack_18,1,0);
  (**(code **)(*plVar1 + 0xe0))(aRStack_10,plVar1,*(undefined4 *)(plVar1[2] + 0x110),0,0,aUStack_18)
  ;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)in_x8,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHeadbutterLettuce::Initialize() */

void __thiscall PlantHeadbutterLettuce::Initialize(PlantHeadbutterLettuce *this)

{
  long lVar1;
  UIEasyButtonWidget *this_00;
  
  PlantFramework::Initialize((PlantFramework *)this);
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  this[0x28] = (PlantHeadbutterLettuce)0x0;
  this[0x29] = (PlantHeadbutterLettuce)0x0;
  *(undefined4 *)(this_00 + 200) = 10;
  this[0x2a] = (PlantHeadbutterLettuce)0x0;
  lVar1 = UIEasyButtonWidget::GetImageNormal(this_00);
  *(undefined8 *)(lVar1 + 0x210) = *(undefined8 *)(this + 0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeadbutterLettuce::createHitEffect(bool, bool) */

void __thiscall
PlantHeadbutterLettuce::createHitEffect(PlantHeadbutterLettuce *this,bool param_1,bool param_2)

{
  char cVar1;
  Effect_PopAnim *this_00;
  SexyVector3 *this_01;
  PopAnim *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> *__n;
  undefined4 uVar3;
  undefined4 uVar4;
  string asStack_38 [8];
  string asStack_30 [8];
  undefined4 local_28 [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  uVar4 = 0;
  local_8 = ___stack_chk_guard;
  uVar3 = 0xc1b80000;
  EATextSquish::Vec3::Vec3((Vec3 *)local_28,80.0,-23.0,0.0);
  __n = (RtWeakPtr<Sexy::ResourceInfo> *)&local_18;
  std::string::string(asStack_38,"animation");
  nop();
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  if ((cVar1 == '\0') || (cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10)), cVar1 == '\0'))
  {
    if ((param_2) && (cVar1 = (**(code **)(*(long *)this + 0x180))(this), cVar1 == '\0')) {
      std::string::append(asStack_38,"attack_lv5",(size_t)__n);
    }
    else if (param_1) {
      local_28[0] = 0xc2a00000;
      std::string::append(asStack_38,"animation02",0xc2a00000);
    }
  }
  else if (param_1) {
    local_28[0] = 0xc2a00000;
    std::string::append(asStack_38,"plantfood_left",0xc2a00000);
  }
  else {
    std::string::append(asStack_38,"plantfood_right",(size_t)__n);
  }
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  Effect_PopAnim::SetCentered(this_00,true);
  this_01 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            **)(this + 0x10));
  local_18 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)local_28);
  local_14 = uVar3;
  local_10 = uVar4;
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_18,-1);
  uVar3 = Board::MakeRenderOrder(0x65130,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
  FUN_04cf58a8(this_00 + 0x1c,uVar3);
  std::string::string(asStack_30,"POPANIM_EFFECTS_HEADBUTTERLETTUCE_HITFX");
  GetPAMByName(asStack_30);
  pPVar2 = (PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_30);
  nop();
  Effect_PopAnim::PlaySingleAnimation(this_00,asStack_38,0);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeadbutterLettuce::PlayLevel5Anim() */

void __thiscall PlantHeadbutterLettuce::PlayLevel5Anim(PlantHeadbutterLettuce *this)

{
  PopAnimRig *pPVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  std::string::string(asStack_58,"level5");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x398);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantHeadbutterLettuce,void(PlantHeadbutterLettuce::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHeadbutterLettuce::PlantHeadbutterLettuce() */

void __thiscall PlantHeadbutterLettuce::PlantHeadbutterLettuce(PlantHeadbutterLettuce *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_069a4480;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* PlantHeadbutterLettuce::StaticNew() */

PlantHeadbutterLettuce * PlantHeadbutterLettuce::StaticNew(void)

{
  PlantHeadbutterLettuce *this;
  
  this = ::operator_new(0x48);
  PlantHeadbutterLettuce(this);
  return this;
}


/* PlantHeadbutterLettuce::launchDefaultButterAtTarget(Projectile*, Sexy::SexyVector3 const&) */

void __thiscall
PlantHeadbutterLettuce::launchDefaultButterAtTarget
          (PlantHeadbutterLettuce *this,Projectile *param_1,SexyVector3 *param_2)

{
  long lVar1;
  
  lVar1 = FUN_04cf6bb4(*(undefined8 *)(this + 0x10));
  Projectile::LaunchAt(param_1,param_2,*(float *)(lVar1 + 0x2e8),*(float *)(lVar1 + 0x2e4));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeadbutterLettuce::GetPlantFoodPlayCount() */

void __thiscall PlantHeadbutterLettuce::GetPlantFoodPlayCount(PlantHeadbutterLettuce *this)

{
  char cVar1;
  long lVar2;
  undefined4 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    Plant::GetProps();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    uVar3 = *(undefined4 *)(lVar2 + 0x3c);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  else {
    lVar2 = FUN_04cf6bb4(*(undefined8 *)(this + 0x10));
    uVar3 = *(undefined4 *)(lVar2 + 0x2c4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeadbutterLettuce::GetGridItemMeleeTarget(bool) */

void __thiscall
PlantHeadbutterLettuce::GetGridItemMeleeTarget(PlantHeadbutterLettuce *this,bool param_1)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  long *extraout_x0;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    iVar1 = *(int *)(*(long *)(this + 0x10) + 0x114) + -1;
  }
  else {
    iVar1 = *(int *)(*(long *)(this + 0x10) + 0x114) + 1;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesAtGridSquare
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,4,iVar1,
             *(undefined4 *)(*(long *)(this + 0x10) + 0x110));
  uVar5 = local_20;
  uVar3 = FUN_04cf58e8(local_20,local_18);
  if (uVar3 == 0) {
    EntityFinder::GetEntitiesAtGridSquare
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,4,
               *(undefined4 *)(*(long *)(this + 0x10) + 0x114),
               *(undefined4 *)(*(long *)(this + 0x10) + 0x110));
    uVar5 = local_20;
    uVar3 = FUN_04cf58e8(local_20,local_18);
  }
  uVar4 = 0;
  while (uVar4 < uVar3) {
    FUN_04cf58f4(uVar5,uVar4);
    nop();
    cVar2 = (**(code **)(*extraout_x0 + 0x200))();
    uVar5 = local_20;
    plVar6 = extraout_x0;
    if (cVar2 != '\0') goto LAB_04cf6f04;
    uVar3 = FUN_04cf58e8(local_20,local_18);
    uVar4 = uVar4 + 1;
  }
  plVar6 = (long *)0x0;
LAB_04cf6f04:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeadbutterLettuce::FindTargetsAndPlayAttackAnim() */

void __thiscall PlantHeadbutterLettuce::FindTargetsAndPlayAttackAnim(PlantHeadbutterLettuce *this)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  PlantAnimRig_HeadbutterLettuce *pPVar7;
  float fVar8;
  float fVar9;
  RtWeakPtr aRStack_60 [8];
  RtWeakPtr aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetZombieMeleeTarget(SUB81(this,0));
  GetZombieMeleeTarget(SUB81(this,0));
  lVar5 = GetGridItemMeleeTarget(this,false);
  lVar6 = GetGridItemMeleeTarget(this,true);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_60);
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_58);
  bVar3 = (bVar2 || lVar5 != 0) || (bVar3 || lVar6 != 0);
  if (bVar3) {
    bVar1 = false;
    pPVar7 = (PlantAnimRig_HeadbutterLettuce *)FUN_04cf6d64(*(undefined8 *)(this + 0x10));
    lVar6 = *(long *)(this + 0x10);
    iVar4 = FUN_04cf58bc(*(undefined4 *)(lVar6 + 0x50));
    lVar6 = FUN_04cf6bb4(lVar6);
    fVar9 = *(float *)(lVar6 + 0x2d0);
    if (iVar4 == 5) {
      fVar8 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
      bVar1 = fVar8 <= fVar9;
    }
    if (bVar2 || lVar5 != 0) {
      *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xb;
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
      PlantAnimRig_HeadbutterLettuce::PlayRightHeadbutt(pPVar7,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
    }
    else {
      *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xc;
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
      PlantAnimRig_HeadbutterLettuce::PlayLeftHeadbutt(pPVar7,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
    }
    if (bVar1) {
      this[0x2a] = (PlantHeadbutterLettuce)0x1;
    }
    PlantAnimRig::SetState((PlantAnimRig *)pPVar7,0xe);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* PlantHeadbutterLettuce::UpdateActions() */

void __thiscall PlantHeadbutterLettuce::UpdateActions(PlantHeadbutterLettuce *this)

{
  uint uVar1;
  char cVar2;
  PopAnimRig *this_00;
  long *plVar3;
  
  uVar1 = *(uint *)(*(UIEasyButtonWidget **)(this + 0x10) + 200);
  if (uVar1 == 10) {
    cVar2 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0));
    if (cVar2 == '\0') {
      FindTargetsAndPlayAttackAnim(this);
      return;
    }
  }
  else if ((9 < uVar1) && (uVar1 < 0xd)) {
    this_00 = (PopAnimRig *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    cVar2 = PopAnimRig::IsPlayingAnything(this_00);
    if (cVar2 == '\0') {
      plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      (**(code **)(*plVar3 + 0x118))();
      *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeadbutterLettuce::FindTargetGridItemInRow(int, bool) */

void __thiscall
PlantHeadbutterLettuce::FindTargetGridItemInRow
          (PlantHeadbutterLettuce *this,int param_1,bool param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar4;
  ulong uVar5;
  ulong uVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var7;
  int iVar8;
  float fVar9;
  int local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  uVar6 = 0;
  iVar8 = 0;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar2 = GridItem::StaticGetClass();
  p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)0x0;
  EntityFinder::GetEntitiesInRowMatchingClass
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,4,param_1,
             uVar2);
  uVar2 = local_20;
  lVar3 = FUN_04cf58e8(local_20,local_18);
  if (lVar3 != 0) {
    do {
      FUN_04cf58f4(uVar2,uVar6);
      nop();
      cVar1 = (**(code **)(*(long *)this_00 + 0x200))();
      if (cVar1 != '\0') {
        if (param_2) {
          pfVar4 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(this_00);
          fVar9 = *pfVar4;
          Plant::GetCenterPt();
          if (fVar9 < (float)local_28) {
            fVar9 = *pfVar4;
LAB_04cf72b8:
            if ((iVar8 < (int)fVar9) ||
               (p_Var7 == (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)0x0)) {
              p_Var7 = this_00;
              iVar8 = (int)fVar9;
            }
          }
        }
        else {
          pfVar4 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(this_00);
          fVar9 = *pfVar4;
          Plant::GetCenterPt();
          if ((float)local_28 < fVar9) {
            fVar9 = -*pfVar4;
            goto LAB_04cf72b8;
          }
        }
      }
      uVar2 = local_20;
      uVar6 = uVar6 + 1;
      uVar5 = FUN_04cf58e8(local_20,local_18);
    } while (uVar6 < uVar5);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(p_Var7);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeadbutterLettuce::FireProjectileDownLane(int, bool) */

void PlantHeadbutterLettuce::FireProjectileDownLane(int param_1,bool param_2)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  PlantHeadbutterLettuce *this;
  long lVar5;
  long *plVar6;
  Projectile *pPVar7;
  float *pfVar8;
  bool in_w2;
  code *pcVar9;
  undefined1 uVar10;
  float fVar11;
  UnchartedModePlantNumData aUStack_38 [8];
  RtMixedPtrBase aRStack_30 [8];
  float local_28 [4];
  undefined4 local_18 [4];
  long local_8;
  
  this = (PlantHeadbutterLettuce *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  lVar5 = FUN_04cf6bb4(*(undefined8 *)(this + 0x10));
  UnchartedModePlantNumData::UnchartedModePlantNumData(aUStack_38,1,0);
  pcVar9 = *(code **)(*(long *)this + 0xe0);
  uVar3 = GetPlantWeaponType(this);
  (*pcVar9)(aRStack_30,this,param_2,uVar3,0,aUStack_38);
  plVar6 = (long *)FindTargetGridItemInRow(this,(uint)param_2,in_w2);
  DVec3::DVec3((DVec3 *)local_28);
  cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_30);
  if (cVar2 == '\0') {
    uVar10 = 0;
    if (plVar6 == (long *)0x0) goto LAB_04cf74b0;
    local_18[0] = (**(code **)(*plVar6 + 0x238))(*(undefined4 *)(lVar5 + 0x2e4),plVar6);
    Sexy::SexyVector3::operator=((SexyVector3 *)local_28,(SexyVector3 *)local_18);
  }
  else {
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    local_18[0] = (**(code **)(*plVar6 + 0x3b0))(*(undefined4 *)(lVar5 + 0x2e4));
    Sexy::SexyVector3::operator=((SexyVector3 *)local_28,(SexyVector3 *)local_18);
    fVar1 = local_28[0];
    if (in_w2 == false) {
      pfVar8 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(this + 0x10));
      fVar11 = *pfVar8;
      if (fVar1 < fVar11) {
        iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
        local_28[0] = fVar11 + (float)iVar4 * 0.5;
      }
    }
    else {
      pfVar8 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(this + 0x10));
      fVar11 = *pfVar8;
      if (fVar11 < fVar1) {
        iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
        local_28[0] = fVar11 - (float)iVar4 * 0.5;
      }
    }
  }
  uVar10 = 1;
  pcVar9 = *(code **)(*(long *)this + 0xb0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)aRStack_30);
  uVar3 = GetPlantWeaponType(this);
  pPVar7 = (Projectile *)(*pcVar9)(this,(RtWeakPtr<Sexy::SoundResource> *)local_18,param_2,uVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  launchDefaultButterAtTarget(this,pPVar7,(SexyVector3 *)local_28);
LAB_04cf74b0:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}


/* PlantHeadbutterLettuce::launchButters(bool, int) */

void __thiscall
PlantHeadbutterLettuce::launchButters(PlantHeadbutterLettuce *this,bool param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  FUN_04cf6bb4(*(undefined8 *)(this + 0x10),param_1);
  iVar3 = 0;
  if (param_2 < 1) {
    return;
  }
  do {
    iVar2 = (int)this;
    if (iVar3 == 0) {
      cVar1 = FireProjectileDownLane(iVar2,SUB41(*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0))
      ;
      if (cVar1 == '\0') goto LAB_04cf7610;
      iVar3 = 1;
    }
    else {
      if (iVar3 == 1) {
LAB_04cf7610:
        cVar1 = FireProjectileDownLane
                          (iVar2,(bool)((char)*(undefined4 *)(*(long *)(this + 0x10) + 0x110) + -1))
        ;
        if (cVar1 != '\0') {
          iVar3 = 2;
          goto LAB_04cf75d0;
        }
      }
      else if (iVar3 != 2) {
        iVar3 = iVar3 + 1;
        goto LAB_04cf75d0;
      }
      cVar1 = FireProjectileDownLane
                        (iVar2,(bool)((char)*(undefined4 *)(*(long *)(this + 0x10) + 0x110) + '\x01'
                                     ));
      if (cVar1 == '\0') {
        return;
      }
      iVar3 = 3;
    }
LAB_04cf75d0:
    iVar4 = iVar4 + 1;
    if (param_2 <= iVar3) {
      return;
    }
    if (param_2 <= iVar4) {
      return;
    }
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeadbutterLettuce::DoLevel5Skill() */

void __thiscall PlantHeadbutterLettuce::DoLevel5Skill(PlantHeadbutterLettuce *this)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [8];
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  bVar2 = *(int *)(*(long *)(this + 0x10) + 200) == 0xc;
  local_8 = ___stack_chk_guard;
  createHitEffect(this,bVar2,true);
  Plant::GetProps();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
  lVar4 = FUN_04cf58d8(*(undefined8 *)(lVar4 + 0x70),0);
  iVar1 = *(int *)(lVar4 + 0x2c);
  fVar7 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
  uVar6 = *(undefined8 *)(this + 0x10);
  Sexy::Point::Point(aPStack_78,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
  DamageInfo::DamageInfo
            ((DamageInfo *)(fVar7 * (float)iVar1),local_70,local_6c,aDStack_68,0x4000000000,uVar6,
             aPStack_78,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
  GetZombieMeleeTarget(SUB81(this,0));
  plVar5 = (long *)GetGridItemMeleeTarget(this,bVar2);
  cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_70);
  if (cVar3 == '\0') {
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x110))(plVar5,aDStack_68);
    }
  }
  else {
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
    (**(code **)(*plVar5 + 0x110))(plVar5,aDStack_68);
  }
  lVar4 = FUN_04cf6bb4(*(undefined8 *)(this + 0x10));
  launchButters(this,bVar2,*(int *)(lVar4 + 0x2cc));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeadbutterLettuce::DoSpecial(int) */

void PlantHeadbutterLettuce::DoSpecial(int param_1)

{
  PlantHeadbutterLettuce PVar1;
  char cVar2;
  int iVar3;
  PlantHeadbutterLettuce *this;
  long lVar4;
  long *plVar5;
  int iVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [8];
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  this = (PlantHeadbutterLettuce *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if (this[0x2a] != (PlantHeadbutterLettuce)0x0) {
    DoLevel5Skill(this);
    this[0x2a] = (PlantHeadbutterLettuce)0x0;
    goto LAB_04cf79b0;
  }
  iVar6 = *(int *)(*(long *)(this + 0x10) + 200);
  iVar3 = FUN_04cf58bc(*(undefined4 *)(*(long *)(this + 0x10) + 0x50));
  cVar2 = (**(code **)(*(long *)this + 0x180))(this);
  if (cVar2 == '\0') {
    PVar1 = (PlantHeadbutterLettuce)(iVar6 == 0xc);
  }
  else {
    PVar1 = this[0x29];
    this[0x29] = (PlantHeadbutterLettuce)((byte)PVar1 ^ 1);
  }
  createHitEffect(this,(bool)PVar1,false);
  Plant::GetProps();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
  lVar4 = FUN_04cf58d8(*(undefined8 *)(lVar4 + 0x70),0);
  iVar6 = *(int *)(lVar4 + 0x2c);
  fVar8 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
  uVar7 = *(undefined8 *)(this + 0x10);
  Sexy::Point::Point(aPStack_78,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
  DamageInfo::DamageInfo
            ((DamageInfo *)(fVar8 * (float)iVar6),local_70,local_6c,aDStack_68,0x4000000000,uVar7,
             aPStack_78,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
  GetZombieMeleeTarget(SUB41(param_1,0));
  plVar5 = (long *)GetGridItemMeleeTarget(this,(bool)PVar1);
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_70);
  if (cVar2 == '\0') {
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x110))(plVar5,aDStack_68);
    }
  }
  else {
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
    (**(code **)(*plVar5 + 0x110))(plVar5,aDStack_68);
  }
  lVar4 = FUN_04cf6bb4(*(undefined8 *)(this + 0x10));
  fVar8 = *(float *)(lVar4 + 0x2b8);
  if (iVar3 == 2) {
    fVar8 = *(float *)(lVar4 + 700);
LAB_04cf79f8:
    fVar9 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    if (fVar9 <= fVar8) {
      iVar6 = 1;
LAB_04cf7a10:
      launchButters(this,(bool)PVar1,iVar6);
    }
  }
  else {
    if (iVar3 < 3) goto LAB_04cf79f8;
    fVar9 = *(float *)(lVar4 + 0x2c0);
    fVar8 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    if (fVar8 <= fVar9) {
      iVar6 = *(int *)(lVar4 + 0x2c8);
      goto LAB_04cf7a10;
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
  DamageInfo::~DamageInfo(aDStack_68);
LAB_04cf79b0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeadbutterLettuce::ApplyPlantfood() */

void __thiscall PlantHeadbutterLettuce::ApplyPlantfood(PlantHeadbutterLettuce *this)

{
  long lVar1;
  Plant *pPVar2;
  RtMixedPtr aRStack_f8 [8];
  RtId aRStack_f0 [8];
  string asStack_e8 [8];
  RtReflectionDelegate<Sexy::Delegate0> aRStack_e0 [72];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_98 [72];
  RtReflectionDelegate<Sexy::Delegate0> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_e0);
  pPVar2 = *(Plant **)(this + 0x10);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_f8);
  std::string::string(asStack_e8,"onPlantfoodLoopedCallback");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)aRStack_98,aRStack_f0,asStack_e8);
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_50);
  Plant::EnablePlantfoodAnimation(pPVar2,aRStack_e0,aRStack_98,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_98);
  std::string::~string(asStack_e8);
  nop();
  Sexy::RtId::~RtId(aRStack_f0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_f8);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_e0);
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xd;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x30));
  this[0x29] = (PlantHeadbutterLettuce)0x0;
  lVar1 = ___stack_chk_guard;
  this[0x2a] = (PlantHeadbutterLettuce)0x0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHeadbutterLettuce::~PlantHeadbutterLettuce() */

void __thiscall PlantHeadbutterLettuce::~PlantHeadbutterLettuce(PlantHeadbutterLettuce *this)

{
  *(undefined ***)this = &PTR_GetClass_069a4480;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantHeadbutterLettuce::~PlantHeadbutterLettuce() */

void __thiscall PlantHeadbutterLettuce::~PlantHeadbutterLettuce(PlantHeadbutterLettuce *this)

{
  ~PlantHeadbutterLettuce(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeadbutterLettuce::updateButterDuration(Projectile*) */

void __thiscall
PlantHeadbutterLettuce::updateButterDuration(PlantHeadbutterLettuce *this,Projectile *param_1)

{
  bool bVar1;
  int *piVar2;
  long lVar3;
  float fVar4;
  undefined8 local_40;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_38 [24];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::GetDamageConditions();
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_38);
  while( true ) {
    local_20[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(avStack_38);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)local_20);
    if (!bVar1) break;
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    if (*piVar2 == 3) {
      lVar3 = FUN_04cf6bb4(*(undefined8 *)(this + 0x10));
      fVar4 = *(float *)(lVar3 + 0x2e0);
      lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      DVec2::DVec2((DVec2 *)local_20,fVar4,fVar4);
      *(undefined8 *)(lVar3 + 4) = local_20[0];
    }
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_40);
  }
  std::vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>>::vector
            ((vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>> *)local_20,
             (vector *)avStack_38);
  Projectile::SetDamageConditions(param_1,(DVec2 *)local_20);
  std::vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>>::~vector
            ((vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>> *)local_20);
  std::vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>>::~vector
            ((vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeadbutterLettuce::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantHeadbutterLettuce::Fire
          (PlantHeadbutterLettuce *this,RtWeakPtrBase *param_2,undefined8 param_3,undefined8 param_4
          )

{
  Projectile *pPVar1;
  Plant *pPVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  pPVar2 = *(Plant **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  *(int *)(pPVar2 + 0x150) = (int)param_4;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  pPVar1 = (Projectile *)Plant::Fire(pPVar2,aRStack_10,param_3,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
  updateButterDuration(this,pPVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeadbutterLettuce::launchPFButterAtTarget(Sexy::RtWeakPtr<BoardEntity>) */

void PlantHeadbutterLettuce::launchPFButterAtTarget
               (undefined1 param_1 [16],float param_2,undefined4 param_3,
               PlantHeadbutterLettuce *param_4,RtWeakPtr *param_5)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long *extraout_x0;
  Projectile *this;
  undefined8 uVar6;
  RtObject *pRVar7;
  long extraout_x0_00;
  code *pcVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  float local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = FUN_04cf6bb4(*(undefined8 *)(param_4 + 0x10));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_28);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_5);
  if (bVar1) {
    pRVar7 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_5);
    bVar1 = Sexy::RtObject::IsA<Zombie>(pRVar7);
    if (!bVar1) goto LAB_04cf80fc;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_5);
    nop();
    cVar2 = (**(code **)(*extraout_x0 + 0x328))();
    if (cVar2 != '\0') goto LAB_04cf810c;
    fVar9 = (float)(**(code **)(*extraout_x0 + 0x3a8))(*(undefined4 *)(lVar5 + 0x2e4),extraout_x0);
    local_18 = fVar9;
    local_14 = param_2;
    local_10 = param_3;
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_28,(RtWeakPtrBase *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  else {
LAB_04cf80fc:
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_5);
    if (!bVar1) goto LAB_04cf810c;
    pRVar7 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_5);
    bVar1 = Sexy::RtObject::IsA<GridItem>(pRVar7);
    if (!bVar1) goto LAB_04cf810c;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_5);
    nop();
    iVar4 = FUN_04cf58c0(*(undefined4 *)(extraout_x0_00 + 0x130));
    iVar4 = BoardTransforms::GridToBoardSpaceX(iVar4);
    fVar9 = (float)iVar4;
    iVar4 = FUN_04cf58c4(*(undefined4 *)(extraout_x0_00 + 0x134));
    iVar4 = BoardTransforms::GridToBoardSpaceY(iVar4);
    param_2 = (float)iVar4;
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_28,(RtWeakPtrBase *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  }
  if ((param_2 != -1.0) && (fVar9 != -1.0)) {
    pcVar8 = *(code **)(*(long *)param_4 + 0xb0);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
    uVar3 = GetPlantWeaponType(param_4);
    this = (Projectile *)
           (*pcVar8)(param_4,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                             &local_18,0,uVar3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    fVar11 = *(float *)(lVar5 + 0x2e8);
    fVar10 = *(float *)(lVar5 + 0x2e4);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_18,fVar9,param_2,40.0);
    Projectile::LaunchAt(this,(SexyVector3 *)&local_18,fVar11,fVar10);
    Projectile::SetTarget(this,(RtWeakPtr *)a_Stack_28);
    uVar6 = FUN_04cf58b0(*(undefined8 *)(this + 0xe0));
    uVar6 = operator|(uVar6,0x2000);
    FUN_04cf58b4(this + 0xe0,uVar6);
    updateButterDuration(param_4,this);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              (param_4 + 0x30),param_5);
  }
LAB_04cf810c:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeadbutterLettuce::launchPFButters() */

void __thiscall PlantHeadbutterLettuce::launchPFButters(PlantHeadbutterLettuce *this)

{
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *this_00;
  undefined4 uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  RtWeakPtrBase *pRVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 local_50;
  undefined8 local_48;
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> avStack_38 [24];
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> avStack_20 [24];
  long local_8;
  
  this_00 = (vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
            (this + 0x30);
  local_8 = ___stack_chk_guard;
  lVar4 = FUN_04cf6bb4(*(undefined8 *)(this + 0x10));
  uVar1 = *(undefined4 *)(lVar4 + 0x2dc);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::vector
            (avStack_20,(vector *)this_00);
  PlantFramework::FindTargets
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             &local_50,this,uVar1,avStack_20);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            (avStack_20);
  cVar3 = std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          empty((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )&local_50);
  if (cVar3 != '\0') {
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
              (this_00);
    uVar1 = *(undefined4 *)(lVar4 + 0x2dc);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::vector
              (avStack_38,(vector *)this_00);
    PlantFramework::FindTargets(avStack_20,this,uVar1,avStack_38);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    operator=((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              &local_50,(vector *)avStack_20);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
              (avStack_20);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
              (avStack_38);
  }
  uVar7 = 0;
  while( true ) {
    uVar2 = local_50;
    uVar6 = FUN_04cf58fc(local_50,local_48);
    if (uVar6 <= uVar7) break;
    pRVar5 = (RtWeakPtrBase *)FUN_04cf5908(uVar2,uVar7);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)avStack_20,pRVar5);
    launchPFButterAtTarget(this,avStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)avStack_20);
    uVar7 = uVar7 + 1;
  }
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             &local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeadbutterLettuce::onPlantfoodLooped() */

void __thiscall PlantHeadbutterLettuce::onPlantfoodLooped(PlantHeadbutterLettuce *this)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  Zombie *pZVar6;
  ulong uVar7;
  Zombie *extraout_x0;
  ulong uVar8;
  int local_90;
  int iStack_8c;
  int local_88;
  int local_84;
  undefined8 local_80;
  undefined8 local_78;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [16];
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  launchPFButters(this);
  Plant::GetProps();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  FUN_04cf58d8(*(undefined8 *)(lVar3 + 0x70),1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
  uVar4 = operator|(0x4000000000,0x2000);
  operator|=(auStack_58,uVar4);
  (**(code **)(*(long *)this + 0x2b8))(&local_90,this,1);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    Sexy::Insets::Insets
              ((Insets *)&local_80,local_90 - local_88 / 2,iStack_8c,local_88 << 1,local_84);
  }
  uVar8 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  uVar2 = operator|(4,2);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar2,
             &local_90,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),
             *(undefined4 *)(*(long *)(this + 0x10) + 0x110));
  uVar4 = local_80;
  lVar3 = FUN_04cf58e8(local_80,local_78);
  if (lVar3 != 0) {
    do {
      puVar5 = (undefined8 *)FUN_04cf58f4(uVar4,uVar8);
      pZVar6 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
      if (pZVar6 == (Zombie *)0x0) {
        FUN_04cf58f4(local_80,uVar8);
        nop();
        cVar1 = (**(code **)(*(long *)extraout_x0 + 0x200))();
        pZVar6 = extraout_x0;
        if (cVar1 != '\0') goto LAB_04cf8630;
      }
      else {
        uVar4 = operator|(1,0x2000);
        uVar2 = operator|(uVar4,4);
        cVar1 = Zombie::MatchesAny(pZVar6,uVar2,*(undefined8 *)(this + 0x10));
        if (cVar1 == '\0') {
LAB_04cf8630:
          (**(code **)(*(long *)pZVar6 + 0x110))(pZVar6,aRStack_68);
        }
      }
      uVar4 = local_80;
      uVar8 = uVar8 + 1;
      uVar7 = FUN_04cf58e8(local_80,local_78);
    } while (uVar8 < uVar7);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

