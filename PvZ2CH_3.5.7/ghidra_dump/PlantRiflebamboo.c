// Class: PlantRiflebamboo


/* PlantRiflebamboo::onAnimStoppedCallback(std::string const&) */

bool __thiscall PlantRiflebamboo::onAnimStoppedCallback(PlantRiflebamboo *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"use_action");
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRiflebamboo::FireProjectile(PlantWeapon) */

void __thiscall PlantRiflebamboo::FireProjectile(PlantRiflebamboo *this,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  lVar2 = *(long *)this;
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = param_2;
  local_8 = ___stack_chk_guard;
  pcVar3 = *(code **)(lVar2 + 0xb0);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  uVar1 = (*pcVar3)(this,a_Stack_10,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),param_2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* PlantRiflebamboo::firePlantFoodProjectile(float) */

void PlantRiflebamboo::firePlantFoodProjectile(float param_1)

{
  long in_x0;
  
  *(undefined4 *)(in_x0 + 0x34) = 0;
  *(undefined1 *)(in_x0 + 0x2c) = 1;
  return;
}


/* PlantRiflebamboo::PlantRiflebamboo() */

void __thiscall PlantRiflebamboo::PlantRiflebamboo(PlantRiflebamboo *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined4 *)(this + 0x28) = 1;
  this[0x2c] = (PlantRiflebamboo)0x0;
  *(undefined ***)this = &PTR_GetClass_067c0e40;
  return;
}


/* PlantRiflebamboo::StaticNew() */

PlantRiflebamboo * PlantRiflebamboo::StaticNew(void)

{
  PlantRiflebamboo *this;
  
  this = ::operator_new(0x40);
  PlantRiflebamboo(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRiflebamboo::StaticClassInit() */

void PlantRiflebamboo::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantRiflebamboo");
    (*pcVar2)(plVar1,asStack_10,FUN_04053ec0,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantRiflebamboo::StaticGetClass() */

long * PlantRiflebamboo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantRiflebamboo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantRiflebamboo::GetClass() const */

long * PlantRiflebamboo::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantRiflebamboo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantRiflebamboo::~PlantRiflebamboo() */

void __thiscall PlantRiflebamboo::~PlantRiflebamboo(PlantRiflebamboo *this)

{
  *(undefined ***)this = &PTR_GetClass_067c0e40;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantRiflebamboo::~PlantRiflebamboo() */

void __thiscall PlantRiflebamboo::~PlantRiflebamboo(PlantRiflebamboo *this)

{
  ~PlantRiflebamboo(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRiflebamboo::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantRiflebamboo::Fire(long *param_1,RtWeakPtrBase *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *__s;
  Plant *pPVar4;
  RealObject *this;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*param_1 + 0x180))();
  if (cVar1 == '\0') {
    this = (RealObject *)param_1[2];
    std::string::string(asStack_10,"Play_Plant_Riflebamboo_Attack");
    RealObject::PlayPositionalSound(this,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
    pPVar4 = (Plant *)param_1[2];
    iVar2 = FUN_040537e0(pPVar4);
    if (iVar2 == 5) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,param_2);
      __s = "Riflebamboo_2_ProjectileDefault";
    }
    else {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,param_2);
      __s = "Riflebamboo_1_ProjectileDefault";
    }
    std::string::string(asStack_10,__s);
    uVar3 = Plant::SpecialFire(pPVar4,aRStack_18,param_3,asStack_10);
    std::string::~string(asStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  else {
    uVar3 = 0;
    *(undefined1 *)((long)param_1 + 0x2c) = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRiflebamboo::UpdatePlantfood() */

void __thiscall PlantRiflebamboo::UpdatePlantfood(PlantRiflebamboo *this)

{
  char cVar1;
  int iVar2;
  long extraout_x0;
  long extraout_x0_00;
  SexyVector3 *pSVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var4;
  long extraout_x0_01;
  undefined8 *puVar5;
  Projectile *pPVar6;
  long extraout_x0_02;
  long extraout_x0_03;
  long extraout_x0_04;
  long lVar7;
  code *pcVar8;
  Plant *pPVar9;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_38 [8];
  string asStack_30 [8];
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    if (this[0x2c] == (PlantRiflebamboo)0x0) goto LAB_04054478;
    iVar2 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
    pPVar9 = *(Plant **)(this + 0x10);
    this[0x2c] = (PlantRiflebamboo)0x0;
    *(undefined4 *)(pPVar9 + 0x150) = 0;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_28);
    std::string::string((string *)&local_18,"Riflebamboo_3_ProjectileDefault");
    p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Plant::SpecialFire(pPVar9,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>
                                           *)&local_28,iVar2,(string *)&local_18);
    std::string::~string((string *)&local_18);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    nop();
    *(undefined1 *)(extraout_x0 + 0x1a6) = 1;
    puVar5 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(p_Var4);
    local_28 = *puVar5;
    local_20 = *(undefined4 *)(puVar5 + 1);
    puVar5 = (undefined8 *)Projectile::GetVelocity((Projectile *)p_Var4);
    local_18 = *puVar5;
    local_10 = *(undefined4 *)(puVar5 + 1);
    if (iVar2 != 0) {
      pPVar9 = *(Plant **)(this + 0x10);
      *(undefined4 *)(pPVar9 + 0x150) = 0;
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_38);
      std::string::string(asStack_30,"Riflebamboo_3_ProjectileDefault");
      pPVar6 = (Projectile *)Plant::SpecialFire(pPVar9,a_Stack_38,iVar2 + -1,asStack_30);
      std::string::~string(asStack_30);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
      nop();
      lVar7 = *(long *)pPVar6;
      *(undefined1 *)(extraout_x0_03 + 0x1a5) = 0;
      pcVar8 = *(code **)(lVar7 + 0x78);
      *(undefined1 *)(extraout_x0_03 + 0x1a6) = 1;
      local_28 = CONCAT44(local_28._4_4_ - 25.0,(undefined4)local_28);
      (*pcVar8)(pPVar6,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_28);
      local_18 = CONCAT44(0xc3480000,(undefined4)local_18);
      Projectile::SetVelocity(pPVar6,(SexyVector3 *)&local_18);
      if (iVar2 == 4) goto LAB_04054478;
    }
    pPVar9 = *(Plant **)(this + 0x10);
    *(undefined4 *)(pPVar9 + 0x150) = 0;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_38);
    std::string::string(asStack_30,"Riflebamboo_3_ProjectileDefault");
    pPVar6 = (Projectile *)Plant::SpecialFire(pPVar9,a_Stack_38,iVar2 + 1,asStack_30);
    std::string::~string(asStack_30);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
    nop();
    *(undefined1 *)(extraout_x0_00 + 0x1a5) = 0;
    lVar7 = extraout_x0_00;
  }
  else {
    if (this[0x2c] == (PlantRiflebamboo)0x0) goto LAB_04054478;
    iVar2 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
    pPVar9 = *(Plant **)(this + 0x10);
    this[0x2c] = (PlantRiflebamboo)0x0;
    *(undefined4 *)(pPVar9 + 0x150) = 0;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_28);
    std::string::string((string *)&local_18,"Riflebamboo_3_ProjectileDefault");
    p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Plant::SpecialFire(pPVar9,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>
                                           *)&local_28,iVar2,(string *)&local_18);
    std::string::~string((string *)&local_18);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    nop();
    *(undefined1 *)(extraout_x0_01 + 0x1a7) = 1;
    *(undefined1 *)(extraout_x0_01 + 0x1a6) = 1;
    puVar5 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(p_Var4);
    local_28 = *puVar5;
    local_20 = *(undefined4 *)(puVar5 + 1);
    puVar5 = (undefined8 *)Projectile::GetVelocity((Projectile *)p_Var4);
    local_18 = *puVar5;
    local_10 = *(undefined4 *)(puVar5 + 1);
    if (iVar2 != 0) {
      pPVar9 = *(Plant **)(this + 0x10);
      *(undefined4 *)(pPVar9 + 0x150) = 0;
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_38);
      std::string::string(asStack_30,"Riflebamboo_3_ProjectileDefault");
      pPVar6 = (Projectile *)Plant::SpecialFire(pPVar9,a_Stack_38,iVar2 + -1,asStack_30);
      std::string::~string(asStack_30);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
      nop();
      lVar7 = *(long *)pPVar6;
      *(undefined1 *)(extraout_x0_04 + 0x1a5) = 0;
      pcVar8 = *(code **)(lVar7 + 0x78);
      *(undefined1 *)(extraout_x0_04 + 0x1a7) = 1;
      *(undefined1 *)(extraout_x0_04 + 0x1a6) = 1;
      local_28 = CONCAT44(local_28._4_4_ - 25.0,(undefined4)local_28);
      (*pcVar8)(pPVar6,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_28);
      local_18 = CONCAT44(0xc3480000,(undefined4)local_18);
      Projectile::SetVelocity(pPVar6,(SexyVector3 *)&local_18);
      if (iVar2 == 4) goto LAB_04054478;
    }
    pPVar9 = *(Plant **)(this + 0x10);
    *(undefined4 *)(pPVar9 + 0x150) = 0;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_38);
    std::string::string(asStack_30,"Riflebamboo_3_ProjectileDefault");
    pPVar6 = (Projectile *)Plant::SpecialFire(pPVar9,a_Stack_38,iVar2 + 1,asStack_30);
    std::string::~string(asStack_30);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
    nop();
    *(undefined1 *)(extraout_x0_02 + 0x1a5) = 0;
    *(undefined1 *)(extraout_x0_02 + 0x1a7) = 1;
    lVar7 = extraout_x0_02;
  }
  *(undefined1 *)(lVar7 + 0x1a6) = 1;
  pSVar3 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)pPVar6);
  Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,pSVar3);
  local_28 = CONCAT44(local_28._4_4_ + 25.0,(undefined4)local_28);
  (**(code **)(*(long *)pPVar6 + 0x78))(pPVar6,(SexyVector3 *)&local_28);
  pSVar3 = (SexyVector3 *)Projectile::GetVelocity(pPVar6);
  Sexy::SexyVector3::operator=((SexyVector3 *)&local_18,pSVar3);
  local_18 = CONCAT44(0x43480000,(undefined4)local_18);
  Projectile::SetVelocity(pPVar6,(SexyVector3 *)&local_18);
LAB_04054478:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantRiflebamboo::CancelPlantfood() */

void __thiscall PlantRiflebamboo::CancelPlantfood(PlantRiflebamboo *this)

{
  char cVar1;
  long *plVar2;
  
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    (**(code **)(*plVar2 + 0x88))();
  }
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRiflebamboo::SetPopAnimDelegates(PlantAnimRig*) */

void __thiscall PlantRiflebamboo::SetPopAnimDelegates(PlantRiflebamboo *this,PlantAnimRig *param_1)

{
  PlantAnimRig *pPVar1;
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1<float> aDStack_68 [48];
  Delegate1<float> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::SetPopAnimDelegates((PlantFramework *)this,param_1);
  pPVar1 = (PlantAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
  ;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,firePlantFoodProjectile);
  Sexy::Delegate1<float>::Delegate1<PlantRiflebamboo,void(PlantRiflebamboo::*)(float)>
            (aDStack_68,aCStack_98);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (*(ReceivedDataCallback **)(this + 0x10),Plant::OnUseActionAnimCommand);
  Sexy::Delegate1<float>::Delegate1<Plant,void(Plant::*)(float)>(aDStack_38,aCStack_80);
  PlantAnimRig::SetPlantDelegates(pPVar1,aDStack_68,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantRiflebamboo::Initialize() */

void __thiscall PlantRiflebamboo::Initialize(PlantRiflebamboo *this)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  
  PlantFramework::Initialize((PlantFramework *)this);
  uVar4 = *(undefined8 *)(this + 0x10);
  iVar2 = FUN_040537e0(uVar4);
  uVar1 = 3;
  if (4 < iVar2) {
    uVar1 = 1;
  }
  *(undefined4 *)(this + 0x3c) = 1;
  *(undefined4 *)(this + 0x28) = uVar1;
  plVar3 = (long *)FUN_04054b78(uVar4);
  (**(code **)(*plVar3 + 0x118))();
  this[0x2c] = (PlantRiflebamboo)0x0;
  *(undefined4 *)(this + 0x34) = 0;
  return;
}


/* PlantRiflebamboo::setState(unsigned int) */

void __thiscall PlantRiflebamboo::setState(PlantRiflebamboo *this,uint param_1)

{
  int iVar1;
  PlantAnimRig_HollyKnight *this_00;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)(this + 0x10);
  *(uint *)(lVar3 + 200) = param_1;
  iVar1 = FUN_040537e0(lVar3);
  if (iVar1 < 3) {
    if (iVar1 == 2) {
      *(undefined4 *)(this + 0x38) = 0x41880000;
    }
    else {
      *(undefined4 *)(this + 0x38) = 0x41a00000;
    }
  }
  else {
    *(undefined4 *)(this + 0x38) = 0x41600000;
  }
  this_00 = (PlantAnimRig_HollyKnight *)FUN_04054b78(lVar3);
  iVar1 = FUN_040537e0(*(undefined8 *)(this + 0x10));
  PlantAnimRig_HollyKnight::SetNumDamageStates(this_00,iVar1);
  if (*(int *)(*(long *)(this + 0x10) + 200) != 4) {
    if (*(int *)(*(long *)(this + 0x10) + 200) == 0xd) {
      (**(code **)(*(long *)this + 0x1a0))(this);
    }
    return;
  }
  plVar2 = (long *)FUN_04054b78();
  (**(code **)(*plVar2 + 0x118))();
  return;
}


/* PlantRiflebamboo::ApplyPlantfood() */

void __thiscall PlantRiflebamboo::ApplyPlantfood(PlantRiflebamboo *this)

{
  this[0x2c] = (PlantRiflebamboo)0x0;
  setState(this,10);
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRiflebamboo::FindTargetAndFire(PlantWeapon) */

void PlantRiflebamboo::FindTargetAndFire(PlantRiflebamboo *param_1)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::CanFindTarget(*(undefined8 *)(param_1 + 0x10));
  if (cVar1 == '\0') {
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
    (**(code **)(*plVar2 + 0x88))();
    Plant::GetProps();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    lVar3 = FUN_04053804(*(undefined8 *)(lVar3 + 0x70));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)(*(long *)(param_1 + 0x10) + 0xbc),*(float *)(lVar3 + 0x24),
               *(float *)(lVar3 + 0x28));
  }
  else {
    setState(param_1,0xd);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1 != '\0');
}


/* PlantRiflebamboo::UpdateActions() */

void __thiscall PlantRiflebamboo::UpdateActions(PlantRiflebamboo *this)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  PopAnimRig *pPVar4;
  long lVar5;
  
  lVar5 = *(long *)(this + 0x10);
  iVar2 = FUN_040537e0(lVar5);
  if (iVar2 < 3) {
    if (iVar2 != 2) {
      *(undefined4 *)(this + 0x38) = 0x41a00000;
      goto LAB_04054de4;
    }
    iVar2 = *(int *)(lVar5 + 200);
    *(undefined4 *)(this + 0x38) = 0x41880000;
  }
  else {
    *(undefined4 *)(this + 0x38) = 0x41600000;
LAB_04054de4:
    iVar2 = *(int *)(lVar5 + 200);
  }
  if (iVar2 == 0xc) {
    pPVar4 = (PopAnimRig *)FUN_04054da4(lVar5);
    cVar1 = PopAnimRig::IsPlayingAnything(pPVar4);
    if (cVar1 == '\0') {
      plVar3 = (long *)FUN_04054b78(*(undefined8 *)(this + 0x10));
      (**(code **)(*plVar3 + 0x118))();
    }
  }
  else {
    if (iVar2 == 0xd) {
      pPVar4 = (PopAnimRig *)FUN_04054da4(lVar5);
      cVar1 = PopAnimRig::IsPlayingAnything(pPVar4);
      if (cVar1 != '\0') {
        return;
      }
LAB_04054e74:
      setState(this,4);
      return;
    }
    if (iVar2 == 10) {
      pPVar4 = (PopAnimRig *)FUN_04054da4(lVar5);
      cVar1 = PopAnimRig::IsPlayingAnything(pPVar4);
      if (cVar1 == '\0') {
        (**(code **)(*(long *)this + 0x228))(this);
        goto LAB_04054e74;
      }
    }
  }
  return;
}

