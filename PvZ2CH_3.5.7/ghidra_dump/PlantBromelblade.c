// Class: PlantBromelblade


/* PlantBromelblade::IsInvincible() const */

bool __thiscall PlantBromelblade::IsInvincible(PlantBromelblade *this)

{
  return *(int *)(*(long *)(this + 0x10) + 200) == 0xd;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBromelblade::isZombieArmorType(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
PlantBromelblade::isZombieArmorType(undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  bool bVar1;
  Zombie *this;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar2;
  string asStack_10 [8];
  long local_8;
  
  bVar1 = true;
  local_8 = ___stack_chk_guard;
  this = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  FUN_05475d88(asStack_10,lVar2 + 8);
  lVar2 = FUN_05474374(asStack_10,"armor1",0);
  if (lVar2 == -1) {
    lVar2 = FUN_05474374(asStack_10,"armor2",0);
    bVar1 = lVar2 != -1;
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* PlantBromelblade::CanApplyPlantfood() */

byte __thiscall PlantBromelblade::CanApplyPlantfood(PlantBromelblade *this)

{
  byte bVar1;
  Plant *this_00;
  
  bVar1 = 0;
  this_00 = *(Plant **)(this + 0x10);
  if (*(int *)(this_00 + 200) != 0xd) {
    if (*(code **)(*(long *)this_00 + 0x1f8) == Plant::IsInPlantFoodState) {
      bVar1 = Plant::IsInPlantFoodState(this_00);
    }
    else {
      bVar1 = (**(code **)(*(long *)this_00 + 0x1f8))();
    }
    bVar1 = bVar1 ^ 1;
  }
  return bVar1;
}


/* PlantBromelblade::GetPlantAttackRect(PlantWeapon) */

long PlantBromelblade::GetPlantAttackRect(long param_1)

{
  PlantFramework::GetPlantAttackRect();
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -0x3c;
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBromelblade::StaticClassInit() */

void PlantBromelblade::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantBromelblade");
    (*pcVar2)(plVar1,asStack_10,FUN_04270374,0x90,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBromelblade::StaticGetClass() */

long * PlantBromelblade::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantBromelblade",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBromelblade::GetClass() const */

long * PlantBromelblade::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantBromelblade",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBromelblade::~PlantBromelblade() */

void __thiscall PlantBromelblade::~PlantBromelblade(PlantBromelblade *this)

{
  *(undefined ***)this = &PTR_GetClass_0681fd50;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x78));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantBromelblade::~PlantBromelblade() */

void __thiscall PlantBromelblade::~PlantBromelblade(PlantBromelblade *this)

{
  ~PlantBromelblade(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBromelblade::getCoolDownByWeapon(PlantWeapon) */

void __thiscall PlantBromelblade::getCoolDownByWeapon(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  lVar1 = FUN_0426e9bc(*(undefined8 *)(lVar1 + 0x70),param_2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  FUN_0426e84c(*(undefined4 *)(lVar1 + 0x24),*(undefined4 *)(lVar1 + 0x28));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBromelblade::PlantBromelblade() */

void __thiscall PlantBromelblade::PlantBromelblade(PlantBromelblade *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0681fd50;
  DVec3::DVec3((DVec3 *)(this + 0x2c));
  DVec3::DVec3((DVec3 *)(this + 0x38));
  DVec3::DVec3((DVec3 *)(this + 0x4c));
  DVec3::DVec3((DVec3 *)(this + 0x58));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x78));
  return;
}


/* PlantBromelblade::StaticNew() */

PlantBromelblade * PlantBromelblade::StaticNew(void)

{
  PlantBromelblade *this;
  
  this = ::operator_new(0x90);
  PlantBromelblade(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBromelblade::EndProvoke() */

void __thiscall PlantBromelblade::EndProvoke(PlantBromelblade *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  long lVar3;
  Zombie *pZVar4;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x80] != (PlantBromelblade)0x0) {
    this_00 = (RtMixedPtrBase *)(this + 0x78);
    this[0x80] = (PlantBromelblade)0x0;
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar1 != '\0') {
      plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      (**(code **)(*plVar2 + 0x78))(plVar2,this + 0x38);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      FUN_0426e9a8(*(undefined4 *)(this + 0x44),lVar3 + 0x36c);
      pZVar4 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      Zombie::EndCondition(pZVar4,0x18);
      pZVar4 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      Zombie::SetIsFlying(pZVar4,false);
      pZVar4 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      Zombie::SetIsControlled(pZVar4,false);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_10);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)a_Stack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBromelblade::onKilled(bool) */

void PlantBromelblade::onKilled(bool param_1)

{
  RtWeakPtr *this;
  bool bVar1;
  Zombie *pZVar2;
  
  this = (RtWeakPtr *)((ulong)param_1 + 0x78);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if (!bVar1) {
    return;
  }
  pZVar2 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
  ;
  Zombie::SetIsControlled(pZVar2,false);
  pZVar2 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
  ;
  Zombie::SetIsFlying(pZVar2,false);
  pZVar2 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
  ;
  Zombie::EndCondition(pZVar2,0x18);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBromelblade::UpdateTargetPosition() */

void __thiscall PlantBromelblade::UpdateTargetPosition(PlantBromelblade *this)

{
  char cVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 local_18;
  float local_14;
  float local_10;
  long local_8;
  
  fVar5 = *(float *)(this + 100);
  local_8 = ___stack_chk_guard;
  fVar3 = (float)PVZ_Dt();
  fVar3 = fVar3 + *(float *)(this + 0x6c);
  *(float *)(this + 0x6c) = fVar3;
  fVar4 = 13.0 / fVar5;
  local_18 = CurveLerp(0,this + 0x2c,this + 0x38,1);
  local_14 = fVar4;
  local_10 = fVar3;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x78));
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x78));
    (**(code **)(*plVar2 + 0x78))(plVar2,&local_18);
  }
  if (13.0 / fVar5 <= *(float *)(this + 0x6c)) {
    this[0x81] = (PlantBromelblade)0x1;
    *(undefined4 *)(this + 0x6c) = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x0426f454 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantBromelblade::UpdateTargetPositionAndRotation() */

void __thiscall PlantBromelblade::UpdateTargetPositionAndRotation(PlantBromelblade *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  PlantBromelblade *pPVar2;
  Zombie *this_01;
  long *plVar3;
  long lVar4;
  PlantBromelblade *pPVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  fVar10 = 19.0 / *(float *)(this + 100);
  pPVar5 = this + 0x4c;
  fVar11 = 25.0 / *(float *)(this + 100);
  local_8 = ___stack_chk_guard;
  auVar7 = PVZ_Dt();
  local_20 = *(undefined4 *)(this + 0x54);
  local_28 = *(undefined8 *)(this + 0x4c);
  fVar8 = auVar7._0_4_ + *(float *)(this + 0x6c);
  *(float *)(this + 0x6c) = fVar8;
  if (fVar10 <= fVar8) {
    fVar6 = CurveLerp<float>(auVar7,fVar11,this + 0x48,this + 0x44,1);
    uVar9 = *(undefined4 *)(this + 0x6c);
    pPVar2 = this + 0x58;
    fVar8 = fVar10;
    fVar10 = fVar11;
  }
  else {
    fVar6 = CurveLerp<float>(auVar7,fVar10,this + 0x44,this + 0x48,1);
    uVar9 = *(undefined4 *)(this + 0x6c);
    pPVar2 = pPVar5;
    pPVar5 = this + 0x58;
    fVar8 = 0.0;
  }
  this_00 = (RtMixedPtrBase *)(this + 0x78);
  local_18 = CurveLerp(fVar8,pPVar2,pPVar5,1);
  local_14 = fVar10;
  local_10 = uVar9;
  Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    this_01 = (Zombie *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Zombie::SetIsFlying(this_01,true);
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar3 + 0x78))(plVar3,(SexyVector3 *)&local_28);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    FUN_0426e9a8(fVar6,lVar4 + 0x36c);
  }
  if (fVar11 <= *(float *)(this + 0x6c)) {
    EndProvoke(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBromelblade::FindTarget(PlantWeapon) */

void PlantBromelblade::FindTarget
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,
               long *param_2,undefined4 param_3)

{
  int iVar1;
  ResourceInfo *pRVar2;
  UnchartedModePlantNumData aUStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UnchartedModePlantNumData::UnchartedModePlantNumData(aUStack_18,1,0);
  (**(code **)(*param_2 + 0xe0))
            (aRStack_10,param_2,*(undefined4 *)(param_2[2] + 0x110),param_3,0,aUStack_18);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (pRVar2 == (ResourceInfo *)0x0) {
LAB_0426f7d4:
    (**(code **)(*param_2 + 0xf8))(aRStack_10,param_2,param_3);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (pRVar2 != (ResourceInfo *)0x0) {
      iVar1 = FUN_0426e954(*(undefined4 *)(pRVar2 + 0x130));
      if ((-1 < iVar1) && (iVar1 - *(int *)(param_2[2] + 0x114) < 3)) goto LAB_0426f860;
    }
  }
  else {
    iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)pRVar2);
    if (iVar1 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8)) {
      if ((iVar1 < 0) || (2 < iVar1 - *(int *)(param_2[2] + 0x114))) goto LAB_0426f7d4;
LAB_0426f860:
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)param_1,(RtWeakPtrBase *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      goto LAB_0426f834;
    }
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(param_1)
  ;
LAB_0426f834:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBromelblade::setState(unsigned int) */

void __thiscall PlantBromelblade::setState(PlantBromelblade *this,uint param_1)

{
  RtMixedPtrBase *this_00;
  SexyVector3 *this_01;
  char cVar1;
  int iVar2;
  UIEasyButtonWidget *this_02;
  long lVar3;
  Zombie *pZVar4;
  undefined8 uVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var6;
  SexyVector3 *pSVar7;
  float *pfVar8;
  long *plVar9;
  PlantAnimRig *pPVar10;
  PopAnimRig *pPVar11;
  char *pcVar12;
  RealObject *pRVar13;
  float fVar14;
  float fVar15;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_02 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (*(uint *)(this_02 + 200) == param_1) goto switchD_0426fa2c_default;
  *(uint *)(this_02 + 200) = param_1;
  switch(param_1) {
  case 10:
    fVar14 = (float)PVZ_T();
    FUN_0426e95c((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58,*(undefined8 *)(this + 0x10));
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    lVar3 = FUN_0426e9bc(*(undefined8 *)(lVar3 + 0x70),0);
    *(float *)(this + 0x84) = fVar14 + *(float *)(lVar3 + 0x20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    break;
  case 0xb:
    plVar9 = (long *)FUN_0426f970();
    (**(code **)(*plVar9 + 0x118))();
    break;
  case 0xc:
    pPVar10 = (PlantAnimRig *)FUN_0426f970();
    PlantAnimRig::SetState(pPVar10,0xe);
    pPVar11 = (PopAnimRig *)FUN_0426f970(*(undefined8 *)(this + 0x10));
    pcVar12 = "attack";
    goto LAB_0426fe10;
  case 0xd:
    this_00 = (RtMixedPtrBase *)(this + 0x78);
    lVar3 = UIEasyButtonWidget::GetImageNormal(this_02);
    lVar3 = FUN_0426e94c(*(undefined8 *)(lVar3 + 0x20));
    *(float *)(this + 100) = (float)*(int *)(lVar3 + 0x30);
    fVar14 = (float)PVZ_T();
    this[0x81] = (PlantBromelblade)0x0;
    *(undefined4 *)(this + 0x6c) = 0;
    *(float *)(this + 0x68) = fVar14 + 35.0 / *(float *)(this + 100);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar1 != '\0') {
      this[0x80] = (PlantBromelblade)0x1;
      this_01 = (SexyVector3 *)(this + 0x38);
      pZVar4 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      Zombie::SetIsControlled(pZVar4,true);
      uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      pZVar4 = (Zombie *)PVZ_EOT();
      Zombie::ApplyCondition(pZVar4,0,uVar5,0x18,1);
      p_Var6 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
      ;
      pSVar7 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(p_Var6);
      Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x2c),pSVar7);
      p_Var6 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
      ;
      pSVar7 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(p_Var6);
      Sexy::SexyVector3::operator=(this_01,pSVar7);
      pfVar8 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(this + 0x10));
      fVar14 = *pfVar8;
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
      *(undefined4 *)(this + 0x44) = 0;
      *(undefined4 *)(this + 0x48) = 0x428c0000;
      *(float *)(this + 0x38) = fVar14 + (float)iVar2 * 1.3;
      Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x4c),this_01);
      Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x58),this_01);
      fVar15 = *(float *)(this + 0x58);
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
      fVar14 = (float)Sexy::SexyMath::DegToRad(*(float *)(this + 0x48));
      fVar14 = cosf(fVar14);
      *(float *)(this + 0x58) = fVar15 + (fVar14 - 1.0) * (float)iVar2 * 1.3;
      pRVar13 = (RealObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      fVar14 = (float)RealObject::CalcGroundZHeight(pRVar13,this_01);
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
      fVar15 = (float)Sexy::SexyMath::DegToRad(*(float *)(this + 0x48));
      fVar15 = sinf(fVar15);
      *(float *)(this + 0x60) = fVar14 + (float)iVar2 * fVar15 * 1.3;
    }
    pPVar10 = (PlantAnimRig *)FUN_0426f970(*(undefined8 *)(this + 0x10));
    PlantAnimRig::SetState(pPVar10,0xe);
    pPVar11 = (PopAnimRig *)FUN_0426f970(*(undefined8 *)(this + 0x10));
    std::string::string(asStack_58,"attack3");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
               asStack_60);
    PopAnimRig::PlayAndStop(pPVar11,asStack_58,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_58);
    nop();
    pRVar13 = *(RealObject **)(this + 0x10);
    pcVar12 = "Play_Plant_Agave_special";
    goto LAB_0426feb4;
  case 0xe:
    pPVar10 = (PlantAnimRig *)FUN_0426f970();
    PlantAnimRig::SetState(pPVar10,0xe);
    pPVar11 = (PopAnimRig *)FUN_0426f970(*(undefined8 *)(this + 0x10));
    pcVar12 = "attack5";
    goto LAB_0426fa70;
  case 0xf:
    pPVar10 = (PlantAnimRig *)FUN_0426f970();
    PlantAnimRig::SetState(pPVar10,0xe);
    pPVar11 = (PopAnimRig *)FUN_0426f970(*(undefined8 *)(this + 0x10));
    pcVar12 = "attack4";
LAB_0426fa70:
    std::string::string(asStack_58,pcVar12);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
               asStack_60);
    PopAnimRig::PlayAndStop(pPVar11,asStack_58,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_58);
    nop();
    break;
  case 0x10:
    pPVar10 = (PlantAnimRig *)FUN_0426f970();
    PlantAnimRig::SetState(pPVar10,0xe);
    pPVar11 = (PopAnimRig *)FUN_0426f970(*(undefined8 *)(this + 0x10));
    pcVar12 = "attack2";
LAB_0426fe10:
    std::string::string(asStack_58,pcVar12);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
               asStack_60);
    PopAnimRig::PlayAndStop(pPVar11,asStack_58,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_58);
    nop();
    pRVar13 = *(RealObject **)(this + 0x10);
    pcVar12 = "Play_Plant_Agave_attack";
LAB_0426feb4:
    std::string::string(asStack_58,pcVar12);
    RealObject::PlayPositionalSound(pRVar13,asStack_58,0.0);
    std::string::~string(asStack_58);
    nop();
  }
switchD_0426fa2c_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBromelblade::Initialize() */

void __thiscall PlantBromelblade::Initialize(PlantBromelblade *this)

{
  long lVar1;
  undefined4 uVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  *(undefined4 *)(this + 0x28) = 1;
  setState(this,10);
  *(undefined4 *)(this + 100) = 0x41f00000;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x78),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  this[0x80] = (PlantBromelblade)0x0;
  this[0x81] = (PlantBromelblade)0x0;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x68) = uVar2;
  *(undefined4 *)(this + 0x6c) = 0;
  uVar2 = PVZ_T();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x70) = uVar2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBromelblade::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantBromelblade::onAnimStoppedCallback(PlantBromelblade *this,string *param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  RtObject *this_00;
  PlantBromelbladeProps *pPVar4;
  float fVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = std::operator==(param_1,"attack");
  if (bVar2) {
    uVar1 = (*(int *)(this + 0x28) + 1) % 4;
    *(uint *)(this + 0x28) = uVar1;
    if ((uVar1 & 3) != 0) {
      fVar5 = (float)PVZ_T();
      fVar6 = (float)getCoolDownByWeapon(this,0);
      *(float *)(this + 0x70) = fVar6 + fVar5;
    }
LAB_042700b0:
    setState(this,0xb);
  }
  else {
    bVar2 = std::operator==(param_1,"attack2");
    if (bVar2) {
      fVar5 = (float)PVZ_T();
    }
    else {
      bVar2 = std::operator==(param_1,"attack3");
      if (bVar2) {
        *(int *)(this + 0x28) = (*(int *)(this + 0x28) + 1) % 4;
        EndProvoke(this);
        cVar3 = FUN_0426e988(*(undefined8 *)(this + 0x10));
      }
      else {
        bVar2 = std::operator==(param_1,"attack4");
        if (bVar2) {
          uVar1 = (*(int *)(this + 0x28) + 1) % 4;
          *(uint *)(this + 0x28) = uVar1;
          if ((uVar1 & 3) != 0) {
            fVar5 = (float)PVZ_T();
            fVar6 = (float)getCoolDownByWeapon(this,0);
            *(float *)(this + 0x70) = fVar6 + fVar5;
          }
          goto LAB_042700b0;
        }
        bVar2 = std::operator==(param_1,"attack5");
        if (!bVar2) goto LAB_042700bc;
        *(int *)(this + 0x28) = (*(int *)(this + 0x28) + 1) % 4;
        cVar3 = FUN_0426e988(*(undefined8 *)(this + 0x10));
      }
      if (cVar3 != '\0') {
        fVar5 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
        FUN_0426e95c(aRStack_10,*(undefined8 *)(this + 0x10));
        this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        pPVar4 = Sexy::RtObject::Cast<PlantBromelbladeProps>(this_00);
        fVar6 = *(float *)(pPVar4 + 700);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        if (fVar5 < fVar6) {
          setState(this,0x10);
          goto LAB_042700bc;
        }
      }
      fVar5 = (float)PVZ_T();
    }
    fVar6 = (float)getCoolDownByWeapon(this,0);
    *(float *)(this + 0x70) = fVar6 + fVar5;
    setState(this,0xb);
  }
LAB_042700bc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantBromelblade::ApplyPlantfood() */

void __thiscall PlantBromelblade::ApplyPlantfood(PlantBromelblade *this)

{
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  setState(this,0x11);
  return;
}


/* PlantBromelblade::CancelPlantfood() */

void __thiscall PlantBromelblade::CancelPlantfood(PlantBromelblade *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  setState(this,0xb);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBromelblade::dealDamage(PlantWeapon) */

void __thiscall PlantBromelblade::dealDamage(PlantBromelblade *this,int param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  GridItem *this_00;
  Zombie *this_01;
  ResourceInfo *pRVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  RealObject *this_02;
  RtWeakPtr<Sexy::SoundResource> aRStack_a8 [8];
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  Insets aIStack_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  lVar4 = FUN_0426e9bc(*(undefined8 *)(lVar4 + 0x70),param_2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
  Sexy::Insets::Insets((Insets *)&local_a0,(Insets *)(lVar4 + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  if (param_2 - 4U < 2) {
    uVar3 = operator|(2,4);
    EntityFinder::GetEntitiesAtGridSquare
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar3,
               *(undefined4 *)(*(long *)(this + 0x10) + 0x114),
               *(undefined4 *)(*(long *)(this + 0x10) + 0x110));
  }
  else {
    uVar3 = operator|(2,4);
  }
  uVar9 = 0;
  Sexy::Insets::Insets
            (aIStack_90,*(int *)(*(long *)(this + 0x10) + 0x114) + local_a0,
             *(int *)(*(long *)(this + 0x10) + 0x110) + local_9c,local_98,local_94);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar3,
             aIStack_90);
  uVar10 = local_80;
  lVar4 = FUN_0426e9cc(local_80,local_78);
  if (lVar4 != 0) {
    do {
      FUN_0426e9d8(uVar10,uVar9);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a8,(RtWeakPtrBase *)aIStack_90);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_90);
      puVar5 = (undefined8 *)FUN_0426e9d8(local_80,uVar9);
      this_00 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar5);
      puVar5 = (undefined8 *)FUN_0426e9d8(local_80,uVar9);
      this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_a8);
      if (cVar1 == '\0') {
LAB_04270db0:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8)
        ;
      }
      else {
        this_02 = *(RealObject **)(this + 0x10);
        pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_a8);
        cVar1 = RealObject::IsOnOpposingTeam(this_02,(RealObject *)pRVar6);
        if (((cVar1 == '\0') ||
            ((this_00 != (GridItem *)0x0 &&
             ((bVar2 = Sexy::RtObject::IsA<GridItemPlantShield>((RtObject *)this_00), bVar2 ||
              (cVar1 = (**(code **)(*(long *)this_00 + 0x1f8))(this_00), cVar1 == '\0')))))) ||
           ((this_01 != (Zombie *)0x0 &&
            (((cVar1 = (**(code **)(*(long *)this_01 + 0x328))(this_01), cVar1 != '\0' ||
              (cVar1 = (**(code **)(*(long *)this_01 + 0x330))(this_01), cVar1 != '\0')) ||
             (cVar1 = Zombie::IsInvisible(this_01), cVar1 != '\0')))))) goto LAB_04270db0;
        plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
        (**(code **)(*plVar8 + 0x110))(plVar8,aRStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8)
        ;
      }
      uVar10 = local_80;
      uVar9 = uVar9 + 1;
      uVar7 = FUN_0426e9cc(local_80,local_78);
    } while (uVar9 < uVar7);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBromelblade::OnAnimCommand(std::string const&, std::string const&) */

void PlantBromelblade::OnAnimCommand(string *param_1,string *param_2)

{
  undefined8 uVar1;
  char cVar2;
  char cVar3;
  ulong uVar4;
  undefined8 *puVar5;
  Zombie *this;
  SexyVector3 *pSVar6;
  ZombieTosserSubSystem *pZVar7;
  ulong uVar8;
  float local_78 [4];
  undefined8 local_68;
  undefined8 local_60;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = std::operator==(param_2,"use_action");
  if ((bool)cVar2) {
    switch(*(undefined4 *)(*(Plant **)(param_1 + 0x10) + 200)) {
    case 0xc:
      dealDamage((PlantBromelblade *)param_1,0);
      break;
    case 0xd:
    case 0xe:
      dealDamage((PlantBromelblade *)param_1,2);
      break;
    case 0xf:
      dealDamage((PlantBromelblade *)param_1,1);
      break;
    case 0x10:
      dealDamage((PlantBromelblade *)param_1,3);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
      Sexy::Insets::Insets
                ((Insets *)local_78,*(int *)(*(long *)(param_1 + 0x10) + 0x114),
                 *(int *)(*(long *)(param_1 + 0x10) + 0x110),4,1);
      EntityFinder::GetEntitiesInGridSquares
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68,2,
                 (Insets *)local_78);
      for (uVar8 = 0; uVar1 = local_68, uVar4 = FUN_0426e9cc(local_68,local_60), uVar8 < uVar4;
          uVar8 = uVar8 + 1) {
        puVar5 = (undefined8 *)FUN_0426e9d8(uVar1,uVar8);
        this = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
        if ((this != (Zombie *)0x0) && (cVar3 = Zombie::CanBeLaunchedByPlants(this), cVar3 != '\0'))
        {
          DVec3::DVec3((DVec3 *)local_78);
          pSVar6 = (SexyVector3 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  *)this);
          Sexy::SexyVector3::operator=((SexyVector3 *)local_78,pSVar6);
          local_78[0] = local_78[0] + 100.0;
          pZVar7 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
          RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
          ZombieTosserSubSystem::LaunchZombie
                    ((ZombieTosserSubSystem *)0x428c0000,0x3f800000,pZVar7,this,(Insets *)local_78,
                     aRStack_50,0);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_50);
        }
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68);
      break;
    case 0x11:
      cVar3 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
      if (cVar3 == '\0') {
        dealDamage((PlantBromelblade *)param_1,4);
      }
      else {
        dealDamage((PlantBromelblade *)param_1,5);
        cVar2 = cVar3;
      }
      break;
    default:
      cVar2 = '\0';
    }
  }
  else {
    cVar2 = '\x01';
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBromelblade::isZombieBlacklisted(Sexy::RtWeakPtr<Zombie>) */

void __thiscall PlantBromelblade::isZombieBlacklisted(PlantBromelblade *this,undefined8 param_2)

{
  bool bVar1;
  RtObject *this_00;
  PlantBromelbladeProps *pPVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_30;
  undefined8 local_28;
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_0426e95c((RtWeakPtr<Sexy::ResourceInfo> *)&local_28,*(undefined8 *)(this + 0x10));
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
  pPVar2 = Sexy::RtObject::Cast<PlantBromelbladeProps>(this_00);
  std::vector<std::string,std::allocator<std::string>>::vector
            (avStack_20,(vector *)(pPVar2 + 0x2c0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  local_30 = FUN_04271284(uVar3,uVar4,param_2);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBromelblade::canProvokeZombie(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall PlantBromelblade::canProvokeZombie(PlantBromelblade *this,RtWeakPtr *param_2)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  RtObject *this_00;
  Zombie *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    this_01 = Sexy::RtObject::Cast<Zombie>(this_00);
    if ((((((this_01 != (Zombie *)0x0) &&
           (cVar2 = GameObject::IsDestroyed((GameObject *)this_01), cVar2 == '\0')) &&
          (cVar2 = RealObject::IsOnTeam(this_01,2), cVar2 != '\0')) &&
         (((iVar4 = Zombie::GetSizeType(this_01), iVar4 == 0 &&
           (cVar2 = Zombie::IsBoss(this_01), cVar2 == '\0')) &&
          ((cVar2 = (**(code **)(*(long *)this_01 + 0x4d8))(this_01), cVar2 == '\0' &&
           ((cVar2 = (**(code **)(*(long *)this_01 + 0x508))(this_01), cVar2 == '\0' &&
            (cVar2 = Creature::IsOnBoard(), cVar2 != '\0')))))))) &&
        (cVar2 = (**(code **)(*(long *)this_01 + 0x328))(this_01), cVar2 == '\0')) &&
       (((cVar2 = Zombie::IsControlled(this_01), cVar2 == '\0' &&
         (cVar2 = FUN_02fd434c(*(undefined4 *)(this_01 + 0xcc)), cVar2 == '\0')) &&
        (cVar2 = Zombie::HasCondition(this_01,0x2e), cVar2 == '\0')))) {
      cVar2 = Zombie::HasCondition(this_01,0x5a);
      if (cVar2 == '\0') {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
        cVar2 = isZombieBlacklisted(this,aRStack_10);
        bVar3 = 0;
        if (((cVar2 == '\0') && (cVar2 = Zombie::IsOnBoardOrClose(this_01,1), cVar2 != '\0')) &&
           (cVar2 = (**(code **)(*(long *)this_01 + 0x338))(this_01), cVar2 == '\0')) {
          bVar3 = Zombie::IsFlying(this_01);
          bVar3 = bVar3 ^ 1;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        goto LAB_042713cc;
      }
    }
  }
  bVar3 = 0;
LAB_042713cc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBromelblade::UpdateActions() */

void __thiscall PlantBromelblade::UpdateActions(PlantBromelblade *this)

{
  char cVar1;
  int iVar2;
  ResourceInfo *this_00;
  RtObject *this_01;
  PlantBromelbladeProps *pPVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  iVar2 = *(int *)(*(long *)(this + 0x10) + 200);
  local_8 = ___stack_chk_guard;
  if (iVar2 == 0xb) {
    cVar1 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0));
    if ((cVar1 == '\0') && (fVar4 = (float)PVZ_T(), *(float *)(this + 0x70) < fVar4)) {
      FindTarget(aRStack_10,this,0);
      this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      if (this_00 != (ResourceInfo *)0x0) {
        if ((*(uint *)(this + 0x28) & 3) == 0) {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
          cVar1 = canProvokeZombie(this,aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
          if (cVar1 == '\0') {
            setState(this,0xe);
          }
          else {
            Sexy::RtObject::Cast<Zombie>((RtObject *)this_00);
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                      ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x78),
                       (RtWeakPtrBase *)aRStack_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
            setState(this,0xd);
          }
        }
        else {
          iVar2 = FUN_0426e980(*(undefined8 *)(this + 0x10));
          if (1 < iVar2) {
            fVar4 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
            FUN_0426e95c(aRStack_10,*(undefined8 *)(this + 0x10));
            this_01 = (RtObject *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
            pPVar3 = Sexy::RtObject::Cast<PlantBromelbladeProps>(this_01);
            fVar6 = *(float *)(pPVar3 + 0x2b8);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
            if (fVar4 < fVar6) {
              setState(this,0xf);
              goto LAB_042715c0;
            }
          }
          setState(this,0xc);
        }
      }
    }
  }
  else if (iVar2 == 0xd) {
    cVar1 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0));
    if (((cVar1 == '\0') && (this[0x80] != (PlantBromelblade)0x0)) &&
       (fVar4 = (float)PVZ_T(), *(float *)(this + 0x68) < fVar4)) {
      if (this[0x81] == (PlantBromelblade)0x0) {
        UpdateTargetPosition(this);
      }
      else {
        UpdateTargetPositionAndRotation(this);
      }
    }
  }
  else if ((iVar2 == 10) && (fVar6 = *(float *)(this + 0x84), fVar4 = (float)PVZ_T(), fVar6 < fVar4)
          ) {
    uVar5 = PVZ_EOT();
    *(undefined4 *)(this + 0x84) = uVar5;
    cVar1 = (**(code **)(*(long *)this + 0x180))(this);
    if (cVar1 == '\0') {
      setState(this,0xb);
    }
  }
LAB_042715c0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

