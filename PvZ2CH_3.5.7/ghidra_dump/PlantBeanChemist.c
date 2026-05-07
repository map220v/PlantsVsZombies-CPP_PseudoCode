// Class: PlantBeanChemist


/* PlantBeanChemist::PlantBeanChemist() */

void __thiscall PlantBeanChemist::PlantBeanChemist(PlantBeanChemist *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06818860;
  return;
}


/* PlantBeanChemist::StaticNew() */

PlantBeanChemist * PlantBeanChemist::StaticNew(void)

{
  PlantBeanChemist *this;
  
  this = ::operator_new(0x30);
  PlantBeanChemist(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBeanChemist::StaticClassInit() */

void PlantBeanChemist::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantBeanChemist");
    (*pcVar2)(plVar1,asStack_10,FUN_042514c0,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBeanChemist::StaticGetClass() */

long * PlantBeanChemist::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantBeanChemist",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBeanChemist::GetClass() const */

long * PlantBeanChemist::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantBeanChemist",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBeanChemist::GetRandomBulletType() */

undefined4 __thiscall PlantBeanChemist::GetRandomBulletType(PlantBeanChemist *this)

{
  undefined4 uVar1;
  float fVar2;
  
  fVar2 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
  uVar1 = 0;
  if ((0.7 <= fVar2) && (uVar1 = 2, fVar2 < 0.9)) {
    uVar1 = 1;
  }
  return uVar1;
}


/* PlantBeanChemist::~PlantBeanChemist() */

void __thiscall PlantBeanChemist::~PlantBeanChemist(PlantBeanChemist *this)

{
  *(undefined ***)this = &PTR_GetClass_06818860;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantBeanChemist::~PlantBeanChemist() */

void __thiscall PlantBeanChemist::~PlantBeanChemist(PlantBeanChemist *this)

{
  ~PlantBeanChemist(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBeanChemist::GetRevoverTime() */

void __thiscall PlantBeanChemist::GetRevoverTime(PlantBeanChemist *this)

{
  int iVar1;
  RtObject *pRVar2;
  BeanChemistProps *pBVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_04250dfc(aRStack_10,*(undefined8 *)(this + 0x10));
  pRVar2 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pBVar3 = Sexy::RtObject::Cast<BeanChemistProps_const>(pRVar2);
  fVar6 = *(float *)(pBVar3 + 0x2c0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  lVar4 = *(long *)(this + 0x10);
  iVar1 = FUN_04250e20(lVar4);
  if (2 < iVar1) {
    FUN_04250dfc(aRStack_10,lVar4);
    pRVar2 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    pBVar3 = Sexy::RtObject::Cast<BeanChemistProps_const>(pRVar2);
    fVar6 = *(float *)(pBVar3 + 0x2c4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    lVar4 = *(long *)(this + 0x10);
  }
  fVar5 = (float)FUN_04250dec(*(undefined4 *)(lVar4 + 0x420));
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail((float)(int)fVar6 * fVar5);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBeanChemist::SetState(unsigned int) */

void __thiscall PlantBeanChemist::SetState(PlantBeanChemist *this,uint param_1)

{
  int iVar1;
  long *plVar2;
  PopAnimRig *pPVar3;
  PlantAnimRig *pPVar4;
  char *__s;
  UIEasyButtonWidget *this_00;
  long lVar5;
  float fVar6;
  float fVar7;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  *(uint *)(this_00 + 200) = param_1;
  if (param_1 == 0xc) {
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
    std::string::string(asStack_58,"recover_start");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0x398);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<PlantBeanChemist,void(PlantBeanChemist::*)(std::string_const&)>(aDStack_38,aCStack_50)
    ;
    PopAnimRig::PlayAndStop(pPVar3,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
    pPVar4 = (PlantAnimRig *)
             UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    PlantAnimRig::SetState(pPVar4,0xe);
    lVar5 = *(long *)(this + 0x10);
    fVar6 = (float)PVZ_T();
    fVar7 = (float)GetRevoverTime(this);
    *(float *)(lVar5 + 0x128) = fVar7 + fVar6;
    goto LAB_04252454;
  }
  if (param_1 != 0xd) {
    if (param_1 == 4) {
      plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
      (**(code **)(*plVar2 + 0x118))();
    }
    goto LAB_04252454;
  }
  iVar1 = GetRandomBulletType(this);
  *(int *)(this + 0x28) = iVar1;
  if (iVar1 == 2) {
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    __s = "recover_end3";
LAB_042525fc:
    std::string::string(asStack_58,__s);
  }
  else {
    if (iVar1 == 1) {
      pPVar3 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      __s = "recover_end2";
      goto LAB_042525fc;
    }
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_58,"recover_end1");
  }
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x398);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantBeanChemist,void(PlantBeanChemist::*)(std::string_const&)>(aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop(pPVar3,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  pPVar4 = (PlantAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
  ;
  PlantAnimRig::SetState(pPVar4,0xe);
LAB_04252454:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBeanChemist::ApplyPlantfood() */

void __thiscall PlantBeanChemist::ApplyPlantfood(PlantBeanChemist *this)

{
  PopAnimRig *this_00;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  SetState(this,5);
  this_00 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  Sexy::Color::Color(aCStack_18,1);
  PopAnimRig::SetPAMColor(this_00,aCStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBeanChemist::CancelPlantfood() */

void __thiscall PlantBeanChemist::CancelPlantfood(PlantBeanChemist *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  SetState(this,4);
  return;
}


/* PlantBeanChemist::Idle() */

void __thiscall PlantBeanChemist::Idle(PlantBeanChemist *this)

{
  SetState(this,4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBeanChemist::FindTargetAndFire(PlantWeapon) */

void PlantBeanChemist::FindTargetAndFire(PlantBeanChemist *param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  PopAnimRig *pPVar4;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(*(long *)(param_1 + 0x10) + 200) != 4) ||
     (cVar2 = Plant::CanFindTarget(), cVar2 == '\0')) {
    uVar3 = 0;
    goto LAB_04252734;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 0) {
    pPVar4 = (PopAnimRig *)
             UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
    std::string::string(asStack_58,"attack");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)param_1,(_func_void *)0x398);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<PlantBeanChemist,void(PlantBeanChemist::*)(std::string_const&)>(aDStack_38,aCStack_50)
    ;
    PopAnimRig::PlayAndStop(pPVar4,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  else {
    if (iVar1 == 1) {
      pPVar4 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
      std::string::string(asStack_58,"attack2");
    }
    else {
      if (iVar1 != 2) goto LAB_04252784;
      pPVar4 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
      std::string::string(asStack_58,"attack3");
    }
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)param_1,(_func_void *)0x398);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<PlantBeanChemist,void(PlantBeanChemist::*)(std::string_const&)>(aDStack_38,aCStack_50)
    ;
    PopAnimRig::PlayAndStop(pPVar4,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
LAB_04252784:
  SetState(param_1,0xb);
  uVar3 = 1;
LAB_04252734:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBeanChemist::Initialize() */

void __thiscall PlantBeanChemist::Initialize(PlantBeanChemist *this)

{
  undefined4 uVar1;
  RtObject *this_00;
  PlantAnimRig_BeanChemist *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  uVar1 = GetRandomBulletType(this);
  *(undefined4 *)(this + 0x28) = uVar1;
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pPVar2 = Sexy::RtObject::Cast<PlantAnimRig_BeanChemist>(this_00);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  PlantAnimRig_Mandrake::SetPlant((PlantAnimRig_Mandrake *)pPVar2,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  SetState(this,4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBeanChemist::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantBeanChemist::onAnimStoppedCallback(PlantBeanChemist *this,string *param_1)

{
  bool bVar1;
  PlantAnimRig_Mandrake *this_00;
  
  bVar1 = std::operator==(param_1,"attack");
  if (((bVar1) || (bVar1 = std::operator==(param_1,"attack2"), bVar1)) ||
     (bVar1 = std::operator==(param_1,"attack3"), bVar1)) {
    SetState(this,0xc);
    return;
  }
  bVar1 = std::operator==(param_1,"recover_start");
  if (bVar1) {
    if (*(int *)(*(long *)(this + 0x10) + 200) == 0xc) {
      this_00 = (PlantAnimRig_Mandrake *)FUN_042521f8();
      PlantAnimRig_Mandrake::PlayRecoverLooped(this_00);
      return;
    }
  }
  else {
    bVar1 = std::operator==(param_1,"recover_end1");
    if (((bVar1) || (bVar1 = std::operator==(param_1,"recover_end2"), bVar1)) ||
       (bVar1 = std::operator==(param_1,"recover_end3"), bVar1)) {
      SetState(this,4);
      return;
    }
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x04252be8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantBeanChemist::UpdateActions() */

void __thiscall PlantBeanChemist::UpdateActions(PlantBeanChemist *this)

{
  int iVar1;
  undefined1 auVar2 [16];
  char cVar3;
  PopAnimRig *pPVar4;
  float fVar5;
  float fVar6;
  undefined1 extraout_var [12];
  float fVar7;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  long local_8;
  
  iVar1 = *(int *)(*(UIEasyButtonWidget **)(this + 0x10) + 200);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 0xc) {
    fVar5 = (float)PVZ_T();
    if (fVar5 <= *(float *)(*(UIEasyButtonWidget **)(this + 0x10) + 0x128)) {
      Plant::GetProps();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      fVar7 = *(float *)(*(long *)(this + 0x10) + 0x128);
      fVar5 = (float)PVZ_T();
      fVar6 = (float)GetRevoverTime(this);
      fVar5 = 1.0 - (fVar7 - fVar5) / fVar6;
      fVar5 = fVar5 * fVar5;
      fVar5 = fVar5 * fVar5 * 9.424778 + 3.1415927;
      cosf(fVar5);
      local_18 = 0x3f800000;
      local_1c = 0x3ecccccd;
      auVar2._4_12_ = extraout_var;
      auVar2._0_4_ = fVar5;
      fVar5 = CurveEvaluate<float>
                        (auVar2,0x3f000000,&local_1c,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,1);
      Sexy::Color::Color((Color *)&local_18);
      local_18 = (int)(fVar5 * 255.0);
      local_14 = local_18;
      local_10 = local_18;
      pPVar4 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      PopAnimRig::SetPAMColor(pPVar4,(Color *)&local_18);
    }
    else {
      pPVar4 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      Sexy::Color::Color((Color *)&local_18,1);
      PopAnimRig::SetPAMColor(pPVar4,(Color *)&local_18);
      SetState(this,0xd);
    }
  }
  else if (iVar1 == 0xd) {
    pPVar4 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    cVar3 = PopAnimRig::IsPlayingAnything(pPVar4);
    if (cVar3 == '\0') {
      SetState(this,4);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBeanChemist::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantBeanChemist::Fire
          (undefined1 param_1 [16],float param_2,undefined4 param_3,PlantBeanChemist *this)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  RtObject *pRVar5;
  BeanChemistProjectile *pBVar6;
  long lVar7;
  float *pfVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  Zombie *pZVar14;
  ulong uVar15;
  Plant *this_00;
  float local_40;
  float local_3c;
  undefined4 local_38;
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_20;
  float fStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = (**(code **)(*(long *)this + 0x180))();
  if (cVar2 == '\0') {
    *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_20);
    pRVar5 = (RtObject *)
             Plant::Fire(*(Plant **)(this + 0x10),
                         (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_20
                         ,*(undefined4 *)(*(Plant **)(this + 0x10) + 0x110),0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    if (pRVar5 != (RtObject *)0x0) {
      pBVar6 = Sexy::RtObject::Cast<BeanChemistProjectile>(pRVar5);
      if (pBVar6 != (BeanChemistProjectile *)0x0) {
        iVar3 = FUN_04250e20(*(undefined8 *)(this + 0x10));
        if (1 < iVar3) {
          iVar3 = iVar3 + 1;
        }
        FUN_04250e50(pBVar6 + 0x1b0,iVar3);
        uVar4 = FUN_04250e28(*(undefined8 *)(this + 0x10));
        FUN_04250e48(pBVar6 + 0x1ac,uVar4);
        BeanChemistProjectile::SetBulletType(pBVar6,*(undefined4 *)(this + 0x28));
        Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
        FUN_04250e58(pBVar6 + 0x1b4);
      }
      lVar7 = FUN_04253068(*(undefined8 *)(this + 0x10));
      PlantFramework::FindTargetZombie((RtMixedPtrBase *)&local_40,this,0);
      DVec3::DVec3((DVec3 *)&local_30);
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_40);
      if (cVar2 == '\0') {
        pfVar8 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(this + 0x10));
        local_30 = *pfVar8 + 600.0;
        local_2c = pfVar8[1];
        local_28 = 0;
      }
      else {
        plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        local_20 = (**(code **)(*plVar9 + 0x3b0))(*(undefined4 *)(lVar7 + 700));
        fStack_1c = param_2;
        local_18 = param_3;
        Sexy::SexyVector3::operator=((SexyVector3 *)&local_30,(SexyVector3 *)&local_20);
      }
      Projectile::LaunchAt
                ((Projectile *)pRVar5,(SexyVector3 *)&local_30,*(float *)(lVar7 + 0x2b8),
                 *(float *)(lVar7 + 700));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    }
  }
  else {
    uVar15 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    EntityFinder::GetEntitiesOnBoard
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2);
    uVar10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    uVar11 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_20);
    BoardEntity::CalcGridPosition();
    EntityFinder::BoardEntitySorter_Closest::BoardEntitySorter_Closest
              ((BoardEntitySorter_Closest *)&local_30,(DVec3 *)&local_40);
    std::
    sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,EntityFinder::BoardEntitySorter_Closest>
              (uVar10,uVar11,
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_30);
    do {
      uVar12 = FUN_04250ec8(CONCAT44(fStack_1c,local_20),CONCAT44(uStack_14,local_18));
      if (uVar12 <= uVar15) break;
      this_00 = *(Plant **)(this + 0x10);
      cVar2 = Plant::GetAvatarEnable(this_00);
      uVar4 = 2;
      uVar1 = uVar4;
      if (cVar2 == '\0') {
        uVar1 = 1;
      }
      *(undefined4 *)(this_00 + 0x150) = uVar1;
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_30);
      pRVar5 = (RtObject *)
               Plant::Fire(*(Plant **)(this + 0x10),
                           (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                           &local_30,*(undefined4 *)(*(Plant **)(this + 0x10) + 0x110),0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
      if (pRVar5 != (RtObject *)0x0) {
        pBVar6 = Sexy::RtObject::Cast<BeanChemistProjectile>(pRVar5);
        if (pBVar6 != (BeanChemistProjectile *)0x0) {
          iVar3 = FUN_04250e20(*(undefined8 *)(this + 0x10));
          if (1 < iVar3) {
            iVar3 = iVar3 + 1;
          }
          FUN_04250e50(pBVar6 + 0x1b0,iVar3);
          cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
          if (cVar2 == '\0') {
            uVar4 = 0;
          }
          BeanChemistProjectile::SetBulletType(pBVar6,uVar4);
          Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
          FUN_04250e58(pBVar6 + 0x1b4);
        }
        lVar7 = FUN_04253068(*(undefined8 *)(this + 0x10));
        puVar13 = (undefined8 *)FUN_04250ed4(CONCAT44(fStack_1c,local_20),uVar15);
        pZVar14 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar13);
        DVec3::DVec3((DVec3 *)&local_40);
        if (pZVar14 == (Zombie *)0x0) {
          pfVar8 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                            **)(this + 0x10));
          local_40 = *pfVar8 + 600.0;
          local_3c = pfVar8[1];
          local_38 = 0;
        }
        else {
          local_30 = (float)(**(code **)(*(long *)pZVar14 + 0x3b0))
                                      (*(undefined4 *)(lVar7 + 700),pZVar14);
          local_2c = param_2;
          local_28 = param_3;
          Sexy::SexyVector3::operator=((SexyVector3 *)&local_40,(SexyVector3 *)&local_30);
        }
        param_2 = *(float *)(lVar7 + 700);
        Projectile::LaunchAt
                  ((Projectile *)pRVar5,(SexyVector3 *)&local_40,*(float *)(lVar7 + 0x2b8),param_2);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != 3);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
    pRVar5 = (RtObject *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar5);
}

