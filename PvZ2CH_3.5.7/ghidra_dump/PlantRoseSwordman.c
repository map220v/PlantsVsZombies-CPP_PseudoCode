// Class: PlantRoseSwordman


/* PlantRoseSwordman::ApplyPlantfood() */

void __thiscall PlantRoseSwordman::ApplyPlantfood(PlantRoseSwordman *this)

{
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  *(undefined1 *)(*(long *)(this + 0x10) + 0x14c) = 0;
  return;
}


/* PlantRoseSwordman::GetDamageFlags(PlantWeapon) */

undefined8 __thiscall PlantRoseSwordman::GetDamageFlags(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 - 1U < 2) {
    uVar1 = operator|(0x4000000,0x2000);
    return uVar1;
  }
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRoseSwordman::StaticClassInit() */

void PlantRoseSwordman::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantRoseSwordman");
    (*pcVar2)(plVar1,asStack_10,FUN_040cf2b8,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantRoseSwordman::StaticGetClass() */

long * PlantRoseSwordman::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantRoseSwordman",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantRoseSwordman::GetClass() const */

long * PlantRoseSwordman::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantRoseSwordman",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantRoseSwordman::PlantRoseSwordman() */

void __thiscall PlantRoseSwordman::PlantRoseSwordman(PlantRoseSwordman *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x2a] = (PlantRoseSwordman)0x0;
  *(undefined ***)this = &PTR_GetClass_067da7f0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  this[0x29] = (PlantRoseSwordman)0x0;
  this[0x28] = (PlantRoseSwordman)0x0;
  this[0x2a] = (PlantRoseSwordman)0x0;
  return;
}


/* PlantRoseSwordman::StaticNew() */

PlantRoseSwordman * PlantRoseSwordman::StaticNew(void)

{
  PlantRoseSwordman *this;
  
  this = ::operator_new(0x48);
  PlantRoseSwordman(this);
  return this;
}


/* PlantRoseSwordman::~PlantRoseSwordman() */

void __thiscall PlantRoseSwordman::~PlantRoseSwordman(PlantRoseSwordman *this)

{
  *(undefined ***)this = &PTR_GetClass_067da7f0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantRoseSwordman::~PlantRoseSwordman() */

void __thiscall PlantRoseSwordman::~PlantRoseSwordman(PlantRoseSwordman *this)

{
  ~PlantRoseSwordman(this);
  AK::FreeHook(this);
  return;
}


/* PlantRoseSwordman::onKilled(bool) */

void PlantRoseSwordman::onKilled(bool param_1)

{
  RtMixedPtrBase *this;
  char cVar1;
  long *plVar2;
  
  this = (RtMixedPtrBase *)((ulong)param_1 + 0x40);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 == '\0') {
    return;
  }
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  (**(code **)(*plVar2 + 0x48))();
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRoseSwordman::PlaySwordEffect(bool) */

void __thiscall PlantRoseSwordman::PlaySwordEffect(PlantRoseSwordman *this,bool param_1)

{
  int iVar1;
  float *pfVar2;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar3;
  char *__s;
  float fVar4;
  float fVar5;
  float local_30;
  float local_2c;
  string asStack_28 [8];
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_30,20.0,-20.0);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  fVar4 = *pfVar2;
  fVar5 = pfVar2[1];
  if (param_1) {
    __s = "rose_attack_effect2";
  }
  else {
    __s = "rose_attack_effect1";
  }
  std::string::string(asStack_28,__s);
  nop();
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_ROSESWORDMAN_EFFECT");
  GetPAMByName(asStack_20);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  Effect_PopAnim::SetCentered(this_00,true);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_18,(float)(int)(local_30 + fVar4),(float)(int)(local_2c + fVar5),0.0);
  iVar1 = (**(code **)(**(long **)(this + 0x10) + 200))(*(long **)(this + 0x10));
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,iVar1 + 1);
  Effect_PopAnim::PlaySingleAnimation(this_00,asStack_28,0);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRoseSwordman::PlaySlashEffect() */

void __thiscall PlantRoseSwordman::PlaySlashEffect(PlantRoseSwordman *this)

{
  int iVar1;
  float *pfVar2;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  float fVar4;
  float fVar5;
  float local_28;
  float local_24;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_28,0.0,-20.0);
  this_01 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(this + 0x10);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_01);
  fVar4 = *pfVar2;
  fVar5 = pfVar2[1];
  iVar1 = (**(code **)(*(long *)this_01 + 200))(this_01);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_ROSESWORDMAN_SLASH");
  GetPAMByName(asStack_20);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  Effect_PopAnim::SetCentered(this_00,true);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_18,(float)(int)(local_28 + fVar4),(float)(int)(local_24 + fVar5),0.0);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,iVar1 + 6000);
  std::string::string((string *)aRStack_18,"idle");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x40),(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantRoseSwordman::GetHitpointRate(Sexy::RtWeakPtr<BoardEntity> const&) */

float __thiscall PlantRoseSwordman::GetHitpointRate(PlantRoseSwordman *this,RtWeakPtr *param_1)

{
  bool bVar1;
  Zombie *pZVar2;
  RtObject *pRVar3;
  GridItem *this_00;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_1);
  if (bVar1) {
    pRVar3 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    pZVar2 = Sexy::RtObject::Cast<Zombie>(pRVar3);
    if (pZVar2 != (Zombie *)0x0) {
      fVar7 = (float)FUN_040cdd58(*(undefined4 *)(pZVar2 + 0x280));
      fVar8 = (float)FUN_040cdd60(*(undefined4 *)(pZVar2 + 0x2a8));
      fVar5 = (float)FUN_040cdd5c(*(undefined4 *)(pZVar2 + 0x284));
      fVar6 = (float)FUN_040cdd64(*(undefined4 *)(pZVar2 + 0x2ac));
      return (fVar8 + fVar7) / (fVar6 + fVar5);
    }
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_1);
  if (bVar1) {
    pRVar3 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    this_00 = Sexy::RtObject::Cast<GridItem>(pRVar3);
    if (this_00 != (GridItem *)0x0) {
      lVar4 = *(long *)this_00;
      if (*(code **)(lVar4 + 0x1d8) == GridItem::GetHitpoints) {
        fVar7 = (float)GridItem::GetHitpoints(this_00);
      }
      else {
        fVar7 = (float)(**(code **)(lVar4 + 0x1d8))();
        lVar4 = *(long *)this_00;
      }
      if (*(code **)(lVar4 + 0x1e0) == GridItem::GetMaxHitpoints) {
        fVar8 = (float)GridItem::GetMaxHitpoints(this_00);
        return fVar7 / fVar8;
      }
      fVar8 = (float)(**(code **)(lVar4 + 0x1e0))();
      return fVar7 / fVar8;
    }
  }
  return 0.0;
}


/* PlantRoseSwordman::TrigerAdvancedAttack() */

bool __thiscall PlantRoseSwordman::TrigerAdvancedAttack(PlantRoseSwordman *this)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  float *pfVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  
  lVar2 = FUN_040ceec4(*(undefined8 *)(this + 0x10));
  iVar1 = FUN_040cdd50(*(undefined8 *)(this + 0x10));
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    uVar5 = *(undefined8 *)(lVar2 + 0x2c0);
    uVar3 = FUN_040cdd68(uVar5,*(undefined8 *)(lVar2 + 0x2c8));
    if ((ulong)(long)iVar1 < uVar3) {
      pfVar4 = (float *)FUN_040cdd8c(uVar5,(long)iVar1);
      fVar7 = *pfVar4;
      goto LAB_040cef84;
    }
  }
  fVar7 = 0.0;
LAB_040cef84:
  fVar6 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
  return fVar6 < fVar7;
}


/* PlantRoseSwordman::TrigerSlashAttack() */

bool __thiscall PlantRoseSwordman::TrigerSlashAttack(PlantRoseSwordman *this)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  float *pfVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  
  lVar2 = FUN_040ceec4(*(undefined8 *)(this + 0x10));
  iVar1 = FUN_040cdd50(*(undefined8 *)(this + 0x10));
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    uVar5 = *(undefined8 *)(lVar2 + 0x2d8);
    uVar3 = FUN_040cdd68(uVar5,*(undefined8 *)(lVar2 + 0x2e0));
    if ((ulong)(long)iVar1 < uVar3) {
      pfVar4 = (float *)FUN_040cdd8c(uVar5,(long)iVar1);
      fVar7 = *pfVar4;
      goto LAB_040cf014;
    }
  }
  fVar7 = 0.0;
LAB_040cf014:
  fVar6 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
  return fVar6 < fVar7;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRoseSwordman::FindTargetAndAttack() */

void __thiscall PlantRoseSwordman::FindTargetAndAttack(PlantRoseSwordman *this)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  char cVar1;
  PlantRoseSwordman PVar2;
  PlantRoseSwordman PVar3;
  PlantAnimRig_RoseSwordman *this_01;
  long lVar4;
  code *pcVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x30);
  local_8 = ___stack_chk_guard;
  Plant::FindTargetInRow
            (aRStack_58,*(long *)(this + 0x10),*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)aRStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
  PVar2 = (PlantRoseSwordman)0x0;
  if (cVar1 != '\0') {
    this_01 = (PlantAnimRig_RoseSwordman *)FUN_040cee3c(*(undefined8 *)(this + 0x10));
    PVar2 = (PlantRoseSwordman)PlantAnimRig_RoseSwordman::SwordIsShow(this_01);
    if (PVar2 == (PlantRoseSwordman)0x0) {
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
      PlantAnimRig_RoseSwordman::PlayShowSword(this_01,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
    }
    else {
      PVar3 = (PlantRoseSwordman)TrigerSlashAttack(this);
      this[0x2a] = PVar3;
      if (PVar3 == (PlantRoseSwordman)0x0) {
        PVar3 = (PlantRoseSwordman)TrigerAdvancedAttack(this);
        this[0x29] = PVar3;
        fVar6 = (float)GetHitpointRate(this,(RtWeakPtr *)this_00);
        lVar4 = FUN_040ceec4(*(undefined8 *)(this + 0x10));
        if (fVar6 < *(float *)(lVar4 + 0x2b8)) {
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    (aRStack_50);
          PlantAnimRig_Peavine::PlaySecondAttack((PlantAnimRig_Peavine *)this_01,aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_50);
        }
        else {
          pcVar5 = *(code **)(*(long *)this_01 + 0x130);
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    (aRStack_50);
          (*pcVar5)(this_01,aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_50);
          if (this[0x29] != (PlantRoseSwordman)0x0) {
            this[0x28] = (PlantRoseSwordman)0x1;
            PVar2 = this[0x29];
          }
        }
      }
      else {
        this[0x28] = (PlantRoseSwordman)0x1;
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
        PlantAnimRig_RoseSwordman::PlaySlashAttack(this_01,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
        PVar2 = PVar3;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(PVar2);
}


/* PlantRoseSwordman::UpdateActions() */

void __thiscall PlantRoseSwordman::UpdateActions(PlantRoseSwordman *this)

{
  int iVar1;
  Effect_AngerFlame *this_00;
  
  this_00 = (Effect_AngerFlame *)
            UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  iVar1 = Effect_AngerFlame::GetFlameCol(this_00);
  if (iVar1 != 1) {
    return;
  }
  FindTargetAndAttack(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRoseSwordman::DamageTarget(int) */

void __thiscall PlantRoseSwordman::DamageTarget(PlantRoseSwordman *this,int param_1)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long lVar2;
  Insets *pIVar3;
  RealObject *this_01;
  long *plVar4;
  TRect<int> aTStack_88 [16];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [16];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [96];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x30);
  local_8 = ___stack_chk_guard;
  FUN_040cdd2c(aRStack_68,*(undefined8 *)(this + 0x10));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  FUN_040cdd7c(*(undefined8 *)(lVar2 + 0x70),(long)param_1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 == '\0') {
LAB_040cf5fc:
    Plant::FindTargetInRow
              (aRStack_78,*(long *)(this + 0x10),*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)aRStack_78);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar1 == '\0') goto LAB_040cf634;
  }
  else {
    (**(code **)(*(long *)this + 0x2b8))(aTStack_88,this,param_1);
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pIVar3 = (Insets *)(**(code **)(*plVar4 + 0x178))();
    Sexy::Insets::Insets((Insets *)aRStack_78,pIVar3);
    this_01 = (RealObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    cVar1 = RealObject::IsOnOpposingTeam(this_01,*(RealObject **)(this + 0x10));
    if ((cVar1 == '\0') ||
       (cVar1 = Sexy::TRect<int>::Intersects(aTStack_88,(TRect *)aRStack_78), cVar1 == '\0'))
    goto LAB_040cf5fc;
  }
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  (**(code **)(*plVar4 + 0x110))(plVar4,aRStack_68);
LAB_040cf634:
  DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRoseSwordman::GetPlantfoodAttackTargets(Sexy::TRect<int> const&, std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >&) */

void __thiscall
PlantRoseSwordman::GetPlantfoodAttackTargets(PlantRoseSwordman *this,TRect *param_1,vector *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  Zombie *pZVar5;
  long *extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtObject *local_38;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar3 = operator|(4,2);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,uVar3,param_1);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (!bVar1) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    local_38 = (RtObject *)*puVar4;
    cVar2 = RealObject::IsOnOpposingTeam(local_38,1);
    if (cVar2 != '\0') {
      pZVar5 = Sexy::RtObject::Cast<Zombie>(local_38);
      if (pZVar5 == (Zombie *)0x0) {
        nop();
        if (((extraout_x0 != (long *)0x0) &&
            (cVar2 = (**(code **)(*extraout_x0 + 0xb8))(), cVar2 != '\0')) &&
           (cVar2 = (**(code **)(*extraout_x0 + 0x200))(extraout_x0), cVar2 != '\0'))
        goto LAB_040cf860;
      }
      else {
        cVar2 = (**(code **)(*(long *)pZVar5 + 0xb8))(pZVar5,7);
        if ((cVar2 != '\0') &&
           (cVar2 = (**(code **)(*(long *)pZVar5 + 0x328))(pZVar5), cVar2 == '\0')) {
LAB_040cf860:
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_2,
                     (BoardEntity **)&local_38);
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRoseSwordman::ApplySlashDamage() */

void __thiscall PlantRoseSwordman::ApplySlashDamage(PlantRoseSwordman *this)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_a0;
  undefined8 local_98;
  Insets aIStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_040cdd2c(aRStack_68,*(undefined8 *)(this + 0x10));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  FUN_040cdd7c(*(undefined8 *)(lVar2 + 0x70),6);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
  local_60 = local_60 * 0.5;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  Sexy::Insets::Insets
            (aIStack_90,*(int *)(*(long *)(this + 0x10) + 0x114),
             *(int *)(*(long *)(this + 0x10) + 0x110),5,1);
  GetPlantfoodAttackTargets(this,(TRect *)aIStack_90,(vector *)avStack_80);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    (**(code **)(*(long *)*puVar3 + 0x110))((long *)*puVar3,aRStack_68);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRoseSwordman::GetPlantfoodAttackTargets(Sexy::Point const&, std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >&) */

void __thiscall
PlantRoseSwordman::GetPlantfoodAttackTargets(PlantRoseSwordman *this,Point *param_1,vector *param_2)

{
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_18,*(int *)param_1,*(int *)(param_1 + 4),1,1);
  GetPlantfoodAttackTargets(this,(TRect *)&local_18,param_2);
  local_18 = *(int *)param_1 + 1;
  local_14 = *(int *)(param_1 + 4) + -1;
  local_10 = 3;
  local_c = 3;
  GetPlantfoodAttackTargets(this,(TRect *)&local_18,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRoseSwordman::ApplyPlantfoodDamage() */

void __thiscall PlantRoseSwordman::ApplyPlantfoodDamage(PlantRoseSwordman *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined8 local_90;
  undefined8 local_88;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  float local_60;
  undefined1 auStack_58 [80];
  long local_8;
  
  fVar6 = 9.0;
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    fVar6 = 7.0;
  }
  FUN_040cdd2c(aRStack_68,*(undefined8 *)(this + 0x10));
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  FUN_040cdd7c(*(undefined8 *)(lVar3 + 0x70),1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
  uVar4 = (**(code **)(*(long *)this + 0x198))(this,1);
  operator|=(auStack_58,uVar4);
  local_60 = local_60 / fVar6;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  Sexy::Point::Point((Point *)&local_88,*(int *)(*(long *)(this + 0x10) + 0x114),
                     *(int *)(*(long *)(this + 0x10) + 0x110));
  GetPlantfoodAttackTargets(this,(Point *)&local_88,(vector *)avStack_80);
  local_90 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar2) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
    (**(code **)(*(long *)*puVar5 + 0x110))((long *)*puVar5,aRStack_68);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRoseSwordman::ApplyAvatarDamage() */

void __thiscall PlantRoseSwordman::ApplyAvatarDamage(PlantRoseSwordman *this)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_90;
  undefined8 local_88;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [16];
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_040cdd2c(aRStack_68,*(undefined8 *)(this + 0x10));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  FUN_040cdd7c(*(undefined8 *)(lVar2 + 0x70),2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
  uVar3 = (**(code **)(*(long *)this + 0x198))(this,2);
  operator|=(auStack_58,uVar3);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  Sexy::Point::Point((Point *)&local_88,*(int *)(*(long *)(this + 0x10) + 0x114),
                     *(int *)(*(long *)(this + 0x10) + 0x110));
  GetPlantfoodAttackTargets(this,(Point *)&local_88,(vector *)avStack_80);
  local_90 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
    (**(code **)(*(long *)*puVar4 + 0x110))((long *)*puVar4,aRStack_68);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantRoseSwordman::OnAnimCommand(std::string const&, std::string const&) */

void PlantRoseSwordman::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  string sVar2;
  int iVar3;
  
  bVar1 = std::operator==(param_2,"normal_attack");
  if (bVar1) {
    iVar3 = 4;
    if (param_1[0x29] == (string)0x0) {
      iVar3 = 0;
    }
    DamageTarget((PlantRoseSwordman *)param_1,iVar3);
    if ((param_1[0x29] != (string)0x0) && (param_1[0x28] != (string)0x0)) {
      PlaySwordEffect((PlantRoseSwordman *)param_1,false);
      param_1[0x28] = (string)0x0;
      PlantFramework::OnAnimCommand(param_1,param_2);
      return;
    }
  }
  else {
    sVar2 = (string)std::operator==(param_2,"charge_attack");
    if ((bool)sVar2) {
      iVar3 = 5;
      if (param_1[0x29] == (string)0x0) {
        iVar3 = 3;
      }
      DamageTarget((PlantRoseSwordman *)param_1,iVar3);
      if (param_1[0x29] != (string)0x0) {
        PlaySwordEffect((PlantRoseSwordman *)param_1,true);
      }
    }
    else {
      bVar1 = std::operator==(param_2,"slash_attack");
      if (bVar1) {
        if (param_1[0x28] != (string)0x0) {
          param_1[0x28] = sVar2;
          PlaySlashEffect((PlantRoseSwordman *)param_1);
        }
        ApplySlashDamage((PlantRoseSwordman *)param_1);
      }
      else {
        bVar1 = std::operator==(param_2,"plantfood_attack_start");
        if (!bVar1) {
          bVar1 = std::operator==(param_2,"plantfood_damage");
          if (bVar1) {
            ApplyPlantfoodDamage((PlantRoseSwordman *)param_1);
          }
          else {
            bVar1 = std::operator==(param_2,"avatar_damage");
            if (bVar1) {
              ApplyAvatarDamage((PlantRoseSwordman *)param_1);
            }
          }
        }
      }
    }
  }
  PlantFramework::OnAnimCommand(param_1,param_2);
  return;
}

