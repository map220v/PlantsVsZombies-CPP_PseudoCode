// Class: PlantEggplantNinja


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEggplantNinja::StaticClassInit() */

void PlantEggplantNinja::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantEggplantNinja");
    (*pcVar2)(plVar1,asStack_10,FUN_03c2c3f8,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantEggplantNinja::StaticGetClass() */

long * PlantEggplantNinja::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantEggplantNinja",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantEggplantNinja::GetClass() const */

long * PlantEggplantNinja::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantEggplantNinja",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantEggplantNinja::ResetShurikenSlot(unsigned int) */

void __thiscall PlantEggplantNinja::ResetShurikenSlot(PlantEggplantNinja *this,uint param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 0x28);
  uVar1 = FUN_03c2782c(uVar3,*(undefined8 *)(this + 0x30));
  if (param_1 < uVar1) {
    puVar2 = (undefined4 *)FUN_03c27854(uVar3,(ulong)param_1);
    *puVar2 = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEggplantNinja::PlayAttackAnimation() */

void __thiscall PlantEggplantNinja::PlayAttackAnimation(PlantEggplantNinja *this)

{
  UIEasyButtonWidget *this_00;
  PopAnimRig *pPVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (*(int *)(this_00 + 0x150) == 2) {
    pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
    std::string::string(asStack_58,"attack5");
  }
  else {
    pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
    std::string::string(asStack_58,"attack");
  }
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x398);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantEggplantNinja,void(PlantEggplantNinja::*)(std::string_const&)>
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEggplantNinja::PlayShurikenBack(bool) */

void __thiscall PlantEggplantNinja::PlayShurikenBack(PlantEggplantNinja *this,bool param_1)

{
  char cVar1;
  long lVar2;
  int *piVar3;
  PopAnimRig *pPVar4;
  long lVar5;
  undefined8 uVar6;
  Delegate1<std::string_const&> *local_68;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 == '\0') {
    uVar6 = *(undefined8 *)(this + 0x28);
    lVar2 = FUN_03c2782c(uVar6,*(undefined8 *)(this + 0x30));
    lVar5 = 0;
    do {
      if (lVar5 == lVar2) {
        if (param_1) {
          pPVar4 = (PopAnimRig *)
                   UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
          std::string::string(asStack_58,"attack5_3");
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,(_func_void *)0x398);
          Sexy::Delegate1<std::string_const&>::
          Delegate1<PlantEggplantNinja,void(PlantEggplantNinja::*)(std::string_const&)>
                    (aDStack_38,aCStack_50);
        }
        else {
          pPVar4 = (PopAnimRig *)
                   UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
          std::string::string(asStack_58,"attack3");
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,(_func_void *)0x398);
          Sexy::Delegate1<std::string_const&>::
          Delegate1<PlantEggplantNinja,void(PlantEggplantNinja::*)(std::string_const&)>
                    (aDStack_38,aCStack_50);
        }
        local_68 = aDStack_38;
        PopAnimRig::PlayAndStop(pPVar4,asStack_58,0,local_68);
        std::string::~string(asStack_58);
        nop();
        break;
      }
      piVar3 = (int *)FUN_03c27854(uVar6,lVar5);
      lVar5 = lVar5 + 1;
    } while (*piVar3 != 1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantEggplantNinja::PlantEggplantNinja() */

void __thiscall PlantEggplantNinja::PlantEggplantNinja(PlantEggplantNinja *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0674b0d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* PlantEggplantNinja::StaticNew() */

PlantEggplantNinja * PlantEggplantNinja::StaticNew(void)

{
  PlantEggplantNinja *this;
  
  this = ::operator_new(0x48);
  PlantEggplantNinja(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEggplantNinja::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantEggplantNinja::onAnimStoppedCallback(PlantEggplantNinja *this,string *param_1)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  string *psVar4;
  __normal_iterator *__n;
  string asStack_28 [8];
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = (__normal_iterator *)&local_10;
  std::string::string(asStack_28,"idle");
  nop();
  Set8BytesTo0(asStack_20);
  bVar1 = std::operator==(param_1,"attack");
  if ((bVar1) || (bVar1 = std::operator==(param_1,"attack3"), bVar1)) {
    std::string::append(asStack_20,"attack2",(size_t)__n);
  }
  else {
    bVar1 = std::operator==(param_1,"attack5");
    if ((bVar1) || (bVar1 = std::operator==(param_1,"attack5_3"), bVar1)) {
      std::string::append(asStack_20,"attack5_2",(size_t)__n);
    }
  }
  bVar1 = true;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x28));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x28));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    bVar1 = (bool)(bVar1 & *piVar3 != 0);
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
  }
  if (bVar1) {
    psVar4 = (string *)FUN_03c29b0c(*(undefined8 *)(this + 0x10));
    PlantAnimRig_HoyaCordata::setIdleTag(psVar4);
  }
  else {
    psVar4 = (string *)FUN_03c29b0c(*(undefined8 *)(this + 0x10));
    PlantAnimRig_HoyaCordata::setIdleTag(psVar4);
  }
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEggplantNinja::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantEggplantNinja::Fire
          (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,PlantEggplantNinja *this)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  PlantAction *pPVar7;
  float *pfVar8;
  EggplantShuriken *extraout_x0;
  EggplantShuriken *extraout_x0_00;
  EggplantShuriken *extraout_x0_01;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  RealObject *pRVar12;
  EggplantShuriken *pEVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  RtWeakPtr<Sexy::SoundResource> aRStack_98 [8];
  float local_90;
  float local_8c;
  float local_88;
  string asStack_80 [8];
  RtWeakPtrBase aRStack_78 [112];
  long local_8;
  
  lVar4 = *(long *)(this + 0x10);
  iVar3 = *(int *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(lVar4 + 0x150) = 0;
  if (iVar3 == 4) {
    *(undefined4 *)(lVar4 + 0x150) = 1;
  }
  else {
    lVar4 = FUN_03c29a2c();
    fVar17 = *(float *)(this + 0x44) + *(float *)(lVar4 + 700);
    lVar4 = FUN_03c29a2c(*(undefined8 *)(this + 0x10));
    fVar18 = *(float *)(this + 0x44) + *(float *)(lVar4 + 0x2c8);
    lVar4 = FUN_03c29a2c(*(undefined8 *)(this + 0x10));
    fVar19 = *(float *)(lVar4 + 0x2c0);
    if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
       (lVar4 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar4 == 0)) {
      fVar19 = 1.0;
      fVar18 = 1.0;
      fVar17 = 1.0;
    }
    lVar4 = *(long *)(this + 0x10);
    iVar3 = FUN_03c277e0(*(undefined4 *)(lVar4 + 0x50));
    if (iVar3 == 2) {
      param_2 = 0x3f800000;
      fVar18 = (float)RandRangeFloat(0.0,1.0);
      if (fVar18 < fVar17) {
LAB_03c2aa9c:
        *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 4;
      }
    }
    else if (2 < iVar3) {
      cVar2 = FUN_03c277e8(lVar4);
      if (cVar2 != '\0') {
        param_2 = 0x3f800000;
        fVar17 = (float)RandRangeFloat(0.0,1.0);
        if (fVar17 < fVar18) {
          *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 2;
          goto LAB_03c2aaa8;
        }
      }
      param_2 = 0x3f800000;
      fVar17 = (float)RandRangeFloat(0.0,1.0);
      if (fVar17 < fVar19) goto LAB_03c2aa9c;
    }
  }
LAB_03c2aaa8:
  uVar11 = *(undefined8 *)(this + 0x28);
  uVar5 = FUN_03c2782c(uVar11,*(undefined8 *)(this + 0x30));
  uVar9 = 0;
  do {
    fVar18 = (float)param_3;
    fVar17 = (float)param_2;
    uVar10 = uVar9 & 0xffffffff;
    iVar3 = (int)uVar9;
    if (uVar9 == uVar5) goto joined_r0x03c2acb8;
    piVar6 = (int *)FUN_03c27854(uVar11,uVar9);
    fVar18 = (float)param_3;
    fVar17 = (float)param_2;
    uVar9 = uVar9 + 1;
  } while (*piVar6 != 1);
  *piVar6 = 2;
joined_r0x03c2acb8:
  if (iVar3 == 1) {
    pRVar12 = *(RealObject **)(this + 0x10);
    std::string::string(asStack_80,"Play_Plant_Bloomerange_Attack");
    RealObject::PlayPositionalSound(pRVar12,asStack_80,0.0);
    std::string::~string(asStack_80);
    nop();
    lVar4 = FUN_03c29a2c(*(undefined8 *)(this + 0x10));
    pPVar7 = (PlantAction *)
             FUN_03c2785c(*(undefined8 *)(lVar4 + 0x70),
                          (long)*(int *)(*(long *)(this + 0x10) + 0x150));
    PlantAction::PlantAction((PlantAction *)asStack_80,pPVar7);
    fVar19 = (float)(**(code **)(*(long *)this + 0x110))
                              (*(undefined4 *)(*(long *)(this + 0x10) + 0xc4),this,asStack_80);
    local_90 = fVar19;
    local_8c = fVar17;
    local_88 = fVar18;
    pfVar8 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0x10));
    fVar16 = *pfVar8;
    fVar15 = pfVar8[1];
    fVar14 = pfVar8[2];
    uVar11 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_98,aRStack_78);
    uVar11 = Board::AddProjectile
                       ((Board *)(fVar19 + fVar16),fVar17 + fVar15,fVar18 + fVar14,uVar11,aRStack_98
                        ,*(undefined8 *)(this + 0x10),0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
    *(undefined4 *)(extraout_x0_00 + 0x1a8) = 1;
    lVar4 = FUN_03c29a2c(*(undefined8 *)(this + 0x10));
    uVar1 = *(undefined4 *)(lVar4 + 0x2b8);
    pEVar13 = extraout_x0_00;
  }
  else {
    if (iVar3 != 2) {
      uVar11 = 0;
      if (iVar3 == 0) {
        pRVar12 = *(RealObject **)(this + 0x10);
        std::string::string(asStack_80,"Play_Plant_Bloomerange_Attack");
        RealObject::PlayPositionalSound(pRVar12,asStack_80,0.0);
        std::string::~string(asStack_80);
        nop();
        lVar4 = FUN_03c29a2c(*(undefined8 *)(this + 0x10));
        pPVar7 = (PlantAction *)
                 FUN_03c2785c(*(undefined8 *)(lVar4 + 0x70),
                              (long)*(int *)(*(long *)(this + 0x10) + 0x150));
        PlantAction::PlantAction((PlantAction *)asStack_80,pPVar7);
        fVar19 = (float)(**(code **)(*(long *)this + 0x110))
                                  (*(undefined4 *)(*(long *)(this + 0x10) + 0xc4),this,asStack_80);
        local_90 = fVar19;
        local_8c = fVar17;
        local_88 = fVar18;
        pfVar8 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(this + 0x10));
        fVar16 = *pfVar8;
        fVar15 = pfVar8[1];
        fVar14 = pfVar8[2];
        uVar11 = *(undefined8 *)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_98,aRStack_78);
        uVar11 = Board::AddProjectile
                           ((Board *)(fVar19 + fVar16),fVar17 + fVar15,fVar18 + fVar14,uVar11,
                            aRStack_98,*(undefined8 *)(this + 0x10),uVar10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98)
        ;
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
        nop();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98)
        ;
        *(undefined4 *)(extraout_x0 + 0x1a8) = 0;
        lVar4 = FUN_03c29a2c(*(undefined8 *)(this + 0x10));
        *(undefined4 *)(extraout_x0 + 0x1ac) = *(undefined4 *)(lVar4 + 0x2b8);
        EggplantShuriken::SetTrajectory(extraout_x0,2,uVar10);
        PlantAction::~PlantAction((PlantAction *)asStack_80);
      }
      goto LAB_03c2ac74;
    }
    pRVar12 = *(RealObject **)(this + 0x10);
    std::string::string(asStack_80,"Play_Plant_Bloomerange_Attack");
    RealObject::PlayPositionalSound(pRVar12,asStack_80,0.0);
    std::string::~string(asStack_80);
    nop();
    lVar4 = FUN_03c29a2c(*(undefined8 *)(this + 0x10));
    pPVar7 = (PlantAction *)
             FUN_03c2785c(*(undefined8 *)(lVar4 + 0x70),
                          (long)*(int *)(*(long *)(this + 0x10) + 0x150));
    PlantAction::PlantAction((PlantAction *)asStack_80,pPVar7);
    fVar19 = (float)(**(code **)(*(long *)this + 0x110))
                              (*(undefined4 *)(*(long *)(this + 0x10) + 0xc4),this,asStack_80);
    local_90 = fVar19;
    local_8c = fVar17;
    local_88 = fVar18;
    pfVar8 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0x10));
    fVar16 = *pfVar8;
    fVar15 = pfVar8[1];
    fVar14 = pfVar8[2];
    uVar11 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_98,aRStack_78);
    uVar11 = Board::AddProjectile
                       ((Board *)(fVar19 + fVar16),fVar17 + fVar15,fVar18 + fVar14,uVar11,aRStack_98
                        ,*(undefined8 *)(this + 0x10),0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
    *(undefined4 *)(extraout_x0_01 + 0x1a8) = 2;
    lVar4 = FUN_03c29a2c(*(undefined8 *)(this + 0x10));
    uVar1 = *(undefined4 *)(lVar4 + 0x2b8);
    uVar10 = 3;
    pEVar13 = extraout_x0_01;
  }
  *(undefined4 *)(pEVar13 + 0x1ac) = uVar1;
  EggplantShuriken::SetTrajectory(pEVar13,uVar10,0);
  PlantAction::~PlantAction((PlantAction *)asStack_80);
LAB_03c2ac74:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar11);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEggplantNinja::DoSpecial(int) */

void PlantEggplantNinja::DoSpecial(int param_1)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  undefined4 *puVar4;
  PlantAction *pPVar5;
  float *pfVar6;
  EggplantShuriken *extraout_x0;
  EggplantShuriken *extraout_x0_00;
  EggplantShuriken *extraout_x0_01;
  EggplantShuriken *extraout_x0_02;
  EggplantShuriken *extraout_x0_03;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  float fVar11;
  float in_s1;
  float in_s2;
  Board *pBVar12;
  RtWeakPtr<Sexy::SoundResource> aRStack_98 [8];
  float local_90;
  PlantAction aPStack_80 [8];
  RtWeakPtrBase aRStack_78 [112];
  long local_8;
  
  plVar2 = (long *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::GetAvatarEnable((Plant *)plVar2[2]);
  lVar10 = plVar2[2];
  if (cVar1 == '\0') {
    *(undefined4 *)(lVar10 + 0x150) = 0;
  }
  else {
    *(undefined4 *)(lVar10 + 0x150) = 3;
  }
  lVar8 = plVar2[5];
  lVar3 = FUN_03c2782c(lVar8,plVar2[6]);
  lVar7 = 0;
  while (lVar7 + 1 != lVar3 + 1) {
    puVar4 = (undefined4 *)FUN_03c27854(lVar8,lVar7);
    *puVar4 = 2;
    lVar7 = lVar7 + 1;
  }
  lVar10 = FUN_03c29a2c(lVar10);
  pPVar5 = (PlantAction *)
           FUN_03c2785c(*(undefined8 *)(lVar10 + 0x70),(long)*(int *)(plVar2[2] + 0x150));
  PlantAction::PlantAction(aPStack_80,pPVar5);
  fVar11 = (float)(**(code **)(*plVar2 + 0x110))
                            (*(undefined4 *)(plVar2[2] + 0xc4),plVar2,aPStack_80);
  local_90 = fVar11;
  pfVar6 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)plVar2[2]);
  pBVar12._0_4_ = (Board *)(fVar11 + *pfVar6);
  in_s1 = in_s1 + pfVar6[1];
  in_s2 = in_s2 + pfVar6[2];
  uVar9 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_98,aRStack_78);
  Board::AddProjectile(pBVar12._0_4_,in_s1,in_s2,uVar9,aRStack_98,plVar2[2],0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
  *(undefined4 *)(extraout_x0 + 0x1a8) = 0;
  lVar10 = FUN_03c29a2c(plVar2[2]);
  *(undefined4 *)(extraout_x0 + 0x1ac) = *(undefined4 *)(lVar10 + 0x2b8);
  EggplantShuriken::SetTrajectory(extraout_x0,2,0);
  uVar9 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_98,aRStack_78);
  Board::AddProjectile(pBVar12._0_4_,in_s1,in_s2,uVar9,aRStack_98,plVar2[2],0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
  *(undefined4 *)(extraout_x0_00 + 0x1a8) = 1;
  lVar10 = FUN_03c29a2c(plVar2[2]);
  *(undefined4 *)(extraout_x0_00 + 0x1ac) = *(undefined4 *)(lVar10 + 0x2b8);
  EggplantShuriken::SetTrajectory(extraout_x0_00,1,1);
  uVar9 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_98,aRStack_78);
  Board::AddProjectile(pBVar12._0_4_,in_s1,in_s2,uVar9,aRStack_98,plVar2[2],0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
  lVar10 = plVar2[2];
  *(undefined4 *)(extraout_x0_01 + 0x1a8) = 2;
  lVar10 = FUN_03c29a2c(lVar10);
  *(undefined4 *)(extraout_x0_01 + 0x1ac) = *(undefined4 *)(lVar10 + 0x2b8);
  EggplantShuriken::SetTrajectory(extraout_x0_01,3,1);
  uVar9 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_98,aRStack_78);
  Board::AddProjectile(pBVar12._0_4_,in_s1,in_s2,uVar9,aRStack_98,plVar2[2],0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
  lVar10 = plVar2[2];
  *(undefined4 *)(extraout_x0_02 + 0x1a8) = 3;
  lVar10 = FUN_03c29a2c(lVar10);
  *(undefined4 *)(extraout_x0_02 + 0x1ac) = *(undefined4 *)(lVar10 + 0x2b8);
  EggplantShuriken::SetTrajectory(extraout_x0_02,0,1);
  uVar9 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_98,aRStack_78);
  Board::AddProjectile(pBVar12._0_4_,in_s1,in_s2,uVar9,aRStack_98,plVar2[2],0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
  *(undefined4 *)(extraout_x0_03 + 0x1a8) = 4;
  lVar10 = FUN_03c29a2c(plVar2[2]);
  *(undefined4 *)(extraout_x0_03 + 0x1ac) = *(undefined4 *)(lVar10 + 0x2b8);
  EggplantShuriken::SetTrajectory(extraout_x0_03,4,1);
  PlantAction::~PlantAction(aPStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEggplantNinja::FindTargetAndFire(PlantWeapon) */

void PlantEggplantNinja::FindTargetAndFire(long *param_1)

{
  Insets *pIVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  RtObject *pRVar11;
  long *extraout_x0;
  ulong uVar12;
  undefined4 *puVar13;
  long *extraout_x0_00;
  Insets *this;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  Insets *pIVar18;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  lVar15 = param_1[5];
  local_8 = ___stack_chk_guard;
  lVar8 = FUN_03c2782c(lVar15,param_1[6]);
  lVar16 = 0;
  do {
    if (lVar16 == lVar8) {
      pIVar18 = (Insets *)&local_38;
      this = pIVar18;
      do {
        pIVar1 = this + 0x10;
        Sexy::Insets::Insets(this);
        this = pIVar1;
      } while (pIVar1 != (Insets *)&local_8);
      uVar17 = 0;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
      iVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1[2]);
      iVar5 = SharkMinion::getRow((SharkMinion *)param_1[2]);
      iVar6 = BoardConstants::NUMBER_OF_COLUMNS();
      Sexy::Insets::Insets((Insets *)&local_60,iVar4,iVar5,iVar6 - iVar4,1);
      local_38 = local_60;
      local_30 = uStack_58;
      iVar6 = BoardConstants::NUMBER_OF_COLUMNS();
      Sexy::Insets::Insets((Insets *)&local_60,iVar4 + 1,iVar5 + -1,(iVar6 + -2) - iVar4,1);
      local_28 = local_60;
      uStack_20 = uStack_58;
      iVar6 = BoardConstants::NUMBER_OF_COLUMNS();
      Sexy::Insets::Insets((Insets *)&local_60,iVar4 + 1,iVar5 + 1,(iVar6 + -2) - iVar4,1);
      lVar16 = param_1[5];
      local_18 = local_60;
      uStack_10 = uStack_58;
      uVar9 = FUN_03c2782c(lVar16,param_1[6]);
      if (uVar9 != 0) {
        do {
          piVar10 = (int *)FUN_03c27854(lVar16,uVar17);
          if ((*piVar10 == 0) && (0 < *(int *)(pIVar18 + 8))) {
            uVar9 = 0;
            uVar7 = operator|(2,4);
            EntityFinder::GetEntitiesInGridSquares
                      ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50,
                       uVar7,pIVar18);
            uVar14 = local_50;
            lVar16 = FUN_03c27814(local_50,local_48);
            if (lVar16 != 0) {
              do {
                FUN_03c27820(uVar14,uVar9);
                ToolPacketData::GetProps();
                pRVar11 = (RtObject *)
                          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
                bVar2 = Sexy::RtObject::IsA<Zombie>(pRVar11);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
                if (bVar2) {
                  FUN_03c27820(local_50,uVar9);
                  ToolPacketData::GetProps();
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
                  nop();
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
                  cVar3 = RealObject::IsOnOpposingTeam(extraout_x0,2);
                  if (((cVar3 == '\0') &&
                      (cVar3 = (**(code **)(*extraout_x0 + 0x330))(extraout_x0), cVar3 == '\0')) &&
                     (cVar3 = (**(code **)(*extraout_x0 + 0x328))(extraout_x0), cVar3 == '\0')) {
LAB_03c2b728:
                    lVar16 = param_1[5];
                    uVar9 = FUN_03c2782c(lVar16,param_1[6]);
                    if (uVar9 <= uVar17) goto LAB_03c2b6f0;
                    uVar14 = 1;
                    *(int *)(param_1 + 8) = ((int)param_1[8] + 1) % 5;
                    puVar13 = (undefined4 *)FUN_03c27854(lVar16,uVar17);
                    lVar16 = *param_1;
                    *puVar13 = 1;
                    (**(code **)(lVar16 + 0x1a0))(param_1);
                    goto LAB_03c2b784;
                  }
                }
                else {
                  FUN_03c27820(local_50,uVar9);
                  ToolPacketData::GetProps();
                  pRVar11 = (RtObject *)
                            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
                  bVar2 = Sexy::RtObject::IsA<GridItem>(pRVar11);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
                  if (bVar2) {
                    FUN_03c27820(local_50,uVar9);
                    ToolPacketData::GetProps();
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
                    nop();
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
                    cVar3 = (**(code **)(*extraout_x0_00 + 0x210))(extraout_x0_00,param_1[2]);
                    if (cVar3 != '\0') goto LAB_03c2b728;
                  }
                }
                uVar14 = local_50;
                uVar9 = uVar9 + 1;
                uVar12 = FUN_03c27814(local_50,local_48);
              } while (uVar9 < uVar12);
            }
            lVar16 = param_1[5];
            uVar9 = FUN_03c2782c(lVar16,param_1[6]);
          }
          uVar17 = uVar17 + 1;
          pIVar18 = pIVar18 + 0x10;
        } while (uVar17 < uVar9);
      }
LAB_03c2b6f0:
      uVar14 = 0;
LAB_03c2b784:
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
      goto LAB_03c2b78c;
    }
    piVar10 = (int *)FUN_03c27854(lVar15,lVar16);
    lVar16 = lVar16 + 1;
  } while (*piVar10 != 1);
  uVar14 = 0;
LAB_03c2b78c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar14);
}


/* PlantEggplantNinja::~PlantEggplantNinja() */

void __thiscall PlantEggplantNinja::~PlantEggplantNinja(PlantEggplantNinja *this)

{
  *(undefined ***)this = &PTR_GetClass_0674b0d0;
  std::vector<PlantEggplantNinja::ShurikenState,std::allocator<PlantEggplantNinja::ShurikenState>>::
  ~vector((vector<PlantEggplantNinja::ShurikenState,std::allocator<PlantEggplantNinja::ShurikenState>>
           *)(this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantEggplantNinja::~PlantEggplantNinja() */

void __thiscall PlantEggplantNinja::~PlantEggplantNinja(PlantEggplantNinja *this)

{
  ~PlantEggplantNinja(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEggplantNinja::Initialize() */

void __thiscall PlantEggplantNinja::Initialize(PlantEggplantNinja *this)

{
  vector<PlantEggplantNinja::ShurikenState,std::allocator<PlantEggplantNinja::ShurikenState>>
  *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  NameMapperBase *this_03;
  RtObject *this_04;
  NewAvatarGeneralSkillBoost *pNVar4;
  RtWeakPtr aRStack_18 [8];
  undefined4 local_10 [2];
  long local_8;
  
  local_10[0] = 0;
  this_00 = (vector<PlantEggplantNinja::ShurikenState,std::allocator<PlantEggplantNinja::ShurikenState>>
             *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  std::vector<PlantEggplantNinja::ShurikenState,std::allocator<PlantEggplantNinja::ShurikenState>>::
  push_back(this_00,(ShurikenState *)local_10);
  local_10[0] = 0;
  std::vector<PlantEggplantNinja::ShurikenState,std::allocator<PlantEggplantNinja::ShurikenState>>::
  push_back(this_00,(ShurikenState *)local_10);
  local_10[0] = 0;
  std::vector<PlantEggplantNinja::ShurikenState,std::allocator<PlantEggplantNinja::ShurikenState>>::
  push_back(this_00,(ShurikenState *)local_10);
  *(undefined4 *)(this + 0x40) = 0;
  PlantFramework::Initialize((PlantFramework *)this);
  *(undefined4 *)(this + 0x44) = 0;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  this_03 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
  std::string::string((string *)local_10,"eggplantninja_new_avatar_1");
  iVar3 = NameMapperBase::GetIdForName(this_03,(string *)local_10);
  std::string::~string((string *)local_10);
  nop();
  cVar1 = PlayerInfo::IsPlantNewAvatarUnLocked(this_02,iVar3);
  if (cVar1 != '\0') {
    NewAvatar::GetAvatarInfoByAvatarId(iVar3);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    if (bVar2) {
      NewAvatar::GetAvatarInfoByAvatarId(iVar3);
      this_04 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
      pNVar4 = Sexy::RtObject::Cast<NewAvatarGeneralSkillBoost>(this_04);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      if (pNVar4 != (NewAvatarGeneralSkillBoost *)0x0) {
        *(undefined4 *)(this + 0x44) = *(undefined4 *)(pNVar4 + 100);
      }
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

