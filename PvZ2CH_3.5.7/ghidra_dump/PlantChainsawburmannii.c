// Class: PlantChainsawburmannii


/* PlantChainsawburmannii::GetPlantAttackRect(PlantWeapon) */

int * PlantChainsawburmannii::GetPlantAttackRect(int *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  cVar1 = CardGameUtils::IsPlayingCardGame();
  if (cVar1 == '\0') {
    cVar1 = NewPVPUtils::IsPlayingNewPVP();
    if (cVar1 == '\0') {
      fVar5 = 1.0;
      goto LAB_04159db4;
    }
  }
  fVar5 = *(float *)(*(long *)(param_2 + 0x10) + 0xc4);
LAB_04159db4:
  PlantFramework::GetPlantAttackRect(param_1,param_2,param_3);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  iVar2 = FUN_04159c08(uVar3);
  fVar4 = 0.0;
  if (4 < iVar2) {
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    fVar4 = (float)-iVar2 * fVar5;
  }
  *param_1 = (int)(fVar4 + (float)*param_1);
  iVar2 = FUN_04159c08(uVar3);
  fVar4 = 0.0;
  if (4 < iVar2) {
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    fVar4 = (float)-iVar2 * fVar5;
  }
  param_1[1] = (int)(fVar4 + (float)param_1[1]);
  iVar2 = FUN_04159c08(uVar3);
  fVar4 = 0.0;
  if (4 < iVar2) {
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    fVar4 = (float)(iVar2 << 1) * fVar5;
  }
  param_1[2] = (int)(fVar4 + (float)param_1[2]);
  iVar2 = FUN_04159c08(uVar3);
  fVar4 = 0.0;
  if (4 < iVar2) {
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    fVar4 = (float)(iVar2 << 1) * fVar5;
  }
  param_1[3] = (int)(fVar4 + (float)param_1[3]);
  return param_1;
}


/* PlantChainsawburmannii::PlantChainsawburmannii() */

void __thiscall PlantChainsawburmannii::PlantChainsawburmannii(PlantChainsawburmannii *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067f15b0;
  return;
}


/* PlantChainsawburmannii::StaticNew() */

PlantChainsawburmannii * PlantChainsawburmannii::StaticNew(void)

{
  PlantChainsawburmannii *this;
  
  this = ::operator_new(0x58);
  PlantChainsawburmannii(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChainsawburmannii::StaticClassInit() */

void PlantChainsawburmannii::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantChainsawburmannii");
    (*pcVar2)(plVar1,asStack_10,FUN_0415a7fc,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantChainsawburmannii::StaticGetClass() */

long * PlantChainsawburmannii::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantChainsawburmannii",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantChainsawburmannii::GetClass() const */

long * PlantChainsawburmannii::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantChainsawburmannii",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantChainsawburmannii::CanUpgrade() */

byte __thiscall PlantChainsawburmannii::CanUpgrade(PlantChainsawburmannii *this)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_04159c08(*(undefined8 *)(this + 0x10));
  bVar1 = 0;
  if (4 < iVar2) {
    bVar1 = (**(code **)(*(long *)this + 0x180))(this);
    bVar1 = bVar1 ^ 1;
  }
  return bVar1;
}


/* PlantChainsawburmannii::~PlantChainsawburmannii() */

void __thiscall PlantChainsawburmannii::~PlantChainsawburmannii(PlantChainsawburmannii *this)

{
  *(undefined ***)this = &PTR_GetClass_067f15b0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantChainsawburmannii::~PlantChainsawburmannii() */

void __thiscall PlantChainsawburmannii::~PlantChainsawburmannii(PlantChainsawburmannii *this)

{
  ~PlantChainsawburmannii(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChainsawburmannii::Initialize() */

void __thiscall PlantChainsawburmannii::Initialize(PlantChainsawburmannii *this)

{
  int iVar1;
  PopAnimRig *pPVar2;
  UIEasyButtonWidget *pUVar3;
  undefined4 uVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  *(undefined4 *)(this + 0x2c) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x28) = 0;
  uVar4 = PVZ_EOT();
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  this[0x40] = (PlantChainsawburmannii)0x0;
  this[0x41] = (PlantChainsawburmannii)0x0;
  *(undefined4 *)(this + 0x30) = uVar4;
  *(undefined4 *)(this + 0x34) = uVar4;
  uVar4 = PVZ_T();
  pUVar3 = *(UIEasyButtonWidget **)(this + 0x10);
  this[0x48] = (PlantChainsawburmannii)0x0;
  *(undefined4 *)(this + 0x4c) = 0;
  this[0x50] = (PlantChainsawburmannii)0x1;
  this[0x51] = (PlantChainsawburmannii)0x0;
  *(undefined4 *)(this + 0x44) = uVar4;
  iVar1 = FUN_04159c08(pUVar3);
  if (1 < iVar1) {
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(pUVar3);
    std::string::string(asStack_10,"_custom_fp_1_1");
    PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    pUVar3 = *(UIEasyButtonWidget **)(this + 0x10);
    iVar1 = FUN_04159c08(pUVar3);
    if (2 < iVar1) {
      pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(pUVar3);
      std::string::string(asStack_10,"_custom_fp_1_2");
      PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
      std::string::~string(asStack_10);
      nop();
      pUVar3 = *(UIEasyButtonWidget **)(this + 0x10);
      iVar1 = FUN_04159c08(pUVar3);
      if (4 < iVar1) {
        pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(pUVar3);
        std::string::string(asStack_10,"_custom_fp_1_4");
        PopAnimRig::SetLayerVisibility(pPVar2,asStack_10,false);
        std::string::~string(asStack_10);
        nop();
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantChainsawburmannii::Upgrade() */

void __thiscall PlantChainsawburmannii::Upgrade(PlantChainsawburmannii *this)

{
  char cVar1;
  long lVar2;
  Board *this_00;
  
  Plant::Heal(*(Plant **)(this + 0x10));
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  if ((((this_00 != (Board *)0x0) && (cVar1 = Board::IsPlaying(this_00), cVar1 != '\0')) &&
      (cVar1 = FUN_04159c30(this_00[0x887]), cVar1 != '\0')) &&
     (((lVar2 = Board::GetLevelDefinition(this_00), lVar2 != 0 &&
       (lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
       *(char *)(lVar2 + 0x116) == '\0')) &&
      (cVar1 = Plant::HasCondition(*(undefined8 *)(this + 0x10),0xf), cVar1 == '\0')))) {
    (**(code **)(*(long *)this + 0x220))(this);
  }
  return;
}


/* PlantChainsawburmannii::CancelPlantfood() */

void __thiscall PlantChainsawburmannii::CancelPlantfood(PlantChainsawburmannii *this)

{
  RtObject *this_00;
  PlantAnimRig_Chainsawburmannii *pPVar1;
  undefined4 uVar2;
  
  this[0x48] = (PlantChainsawburmannii)0x0;
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pPVar1 = Sexy::RtObject::Cast<PlantAnimRig_Chainsawburmannii>(this_00);
  FUN_04159c10(pPVar1 + 0x3b8,0);
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  this[0x40] = (PlantChainsawburmannii)0x0;
  uVar2 = PVZ_T();
  this[0x41] = (PlantChainsawburmannii)0x0;
  this[0x50] = (PlantChainsawburmannii)0x1;
  *(undefined4 *)(this + 0x44) = uVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChainsawburmannii::getBestDamageableGridItemFromEntities(std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >) */

void PlantChainsawburmannii::getBestDamageableGridItemFromEntities
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,long param_2
               ,vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  RealObject *this;
  int iVar5;
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(param_1)
  ;
  iVar5 = 0x12;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(param_3);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(param_3);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_18);
    if (!bVar1) {
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(param_1);
    }
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    nop();
    cVar2 = RealObject::IsOnOpposingTeam(this,*(RealObject **)(param_2 + 0x10));
    if ((cVar2 != '\0') && (cVar2 = (**(code **)(*(long *)this + 0x200))(this), cVar2 != '\0')) {
      iVar3 = FUN_04159bd8(*(undefined4 *)(this + 0x130));
      iVar4 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(param_2 + 0x10));
      if (ABS((double)(iVar3 - iVar4)) == 2.0) {
        iVar3 = FUN_04159bdc(*(undefined4 *)(this + 0x134));
        iVar4 = SharkMinion::getRow(*(SharkMinion **)(param_2 + 0x10));
        if (iVar3 - iVar4 == 2) goto LAB_0415bf30;
      }
      iVar3 = FUN_04159bd8(*(undefined4 *)(this + 0x130));
      if (iVar3 < iVar5) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)param_1,(RtWeakPtrBase *)aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        iVar5 = iVar3;
      }
    }
LAB_0415bf30:
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChainsawburmannii::GetPlantAttackGridRect(PlantWeapon) */

void PlantChainsawburmannii::GetPlantAttackGridRect(Insets *param_1,long param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ResourceInfo *pRVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  float fVar13;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = CardGameUtils::IsPlayingCardGame();
  if ((cVar1 == '\0') && (cVar1 = NewPVPUtils::IsPlayingNewPVP(), cVar1 == '\0')) {
    fVar13 = 1.0;
  }
  else {
    fVar13 = *(float *)(*(long *)(param_2 + 0x10) + 0xc4);
  }
  Plant::GetProps();
  pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  Sexy::Insets::Insets((Insets *)&local_18);
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  iVar2 = FUN_04159c08(uVar11);
  local_18 = 0;
  if (4 < iVar2) {
    local_18 = BoardConstants::GRIDSQUARE_WIDTH();
    uVar11 = *(undefined8 *)(param_2 + 0x10);
    local_18 = -local_18;
  }
  iVar2 = FUN_04159c08(uVar11);
  local_14 = 0;
  if (4 < iVar2) {
    local_14 = BoardConstants::GRIDSQUARE_HEIGHT();
    uVar11 = *(undefined8 *)(param_2 + 0x10);
    local_14 = -local_14;
  }
  iVar2 = FUN_04159c08(uVar11);
  local_10 = 0;
  if (4 < iVar2) {
    local_10 = BoardConstants::GRIDSQUARE_WIDTH();
    uVar11 = *(undefined8 *)(param_2 + 0x10);
    local_10 = local_10 << 1;
  }
  iVar2 = FUN_04159c08(uVar11);
  local_c = 0;
  if (4 < iVar2) {
    local_c = BoardConstants::GRIDSQUARE_HEIGHT();
    local_c = local_c << 1;
  }
  uVar11 = *(undefined8 *)(pRVar8 + 0x70);
  uVar9 = FUN_04159c64(uVar11,*(undefined8 *)(pRVar8 + 0x78));
  if (param_3 < uVar9) {
    lVar10 = FUN_04159c40(uVar11,(ulong)param_3);
    iVar2 = *(int *)(lVar10 + 0x18);
    if (iVar2 == 4) {
      Sexy::Insets::Insets
                (param_1,*(int *)(*(long *)(param_2 + 0x10) + 0x114) + *(int *)(lVar10 + 0x58),
                 *(int *)(*(long *)(param_2 + 0x10) + 0x110) + *(int *)(lVar10 + 0x5c),
                 *(int *)(lVar10 + 0x60),*(int *)(lVar10 + 100));
      goto LAB_0415c1a4;
    }
    if (iVar2 == 2) {
      iVar2 = *(int *)(*(long *)(param_2 + 0x10) + 0x110);
      iVar7 = BoardConstants::NUMBER_OF_COLUMNS();
      Sexy::Insets::Insets(param_1,0,iVar2,iVar7,1);
      goto LAB_0415c1a4;
    }
    if (iVar2 == 6) {
      iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
      iVar7 = BoardConstants::NUMBER_OF_ROWS();
      Sexy::Insets::Insets(param_1,0,0,iVar2,iVar7);
      goto LAB_0415c1a4;
    }
    if (iVar2 == 3) {
      iVar2 = *(int *)(lVar10 + 0x58) + local_18;
      iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
      iVar7 = *(int *)(lVar10 + 0x5c) + local_14;
      iVar12 = (int)((fVar13 * (float)iVar2) / (float)iVar3);
      iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
      iVar2 = *(int *)(lVar10 + 0x60) + local_10;
      iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
      iVar6 = BoardConstants::GRIDSQUARE_WIDTH();
      iVar3 = *(int *)(lVar10 + 100) + local_c;
      iVar2 = (int)((fVar13 * (float)iVar2 + (float)iVar5 * 0.8) / (float)iVar6);
      iVar6 = BoardConstants::GRIDSQUARE_HEIGHT();
      iVar5 = *(int *)(*(long *)(param_2 + 0x10) + 0x114);
      if (iVar2 < 1) {
        iVar2 = 1;
      }
      iVar3 = (int)((fVar13 * (float)iVar3) / (float)iVar6);
      if (iVar3 < 1) {
        iVar3 = 1;
      }
      iVar6 = BoardConstants::NUMBER_OF_COLUMNS();
      if (iVar6 < iVar12 + iVar5 + iVar2) {
        iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
        lVar10 = *(long *)(param_2 + 0x10);
        iVar5 = *(int *)(lVar10 + 0x114);
        iVar2 = (iVar2 - iVar5) - iVar12;
      }
      else {
        lVar10 = *(long *)(param_2 + 0x10);
        iVar5 = *(int *)(lVar10 + 0x114);
      }
      Sexy::Insets::Insets
                (param_1,iVar12 + iVar5,
                 (int)((fVar13 * (float)iVar7) / (float)iVar4) + *(int *)(lVar10 + 0x110),iVar2,
                 iVar3);
      goto LAB_0415c1a4;
    }
  }
  iVar2 = *(int *)(*(long *)(param_2 + 0x10) + 0x110);
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar7 = *(int *)(*(long *)(param_2 + 0x10) + 0x114);
  Sexy::Insets::Insets(param_1,iVar7,iVar2,iVar3 - iVar7,1);
LAB_0415c1a4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChainsawburmannii::ApplyPlantfood() */

void __thiscall PlantChainsawburmannii::ApplyPlantfood(PlantChainsawburmannii *this)

{
  int iVar1;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  lVar2 = FUN_0415c874(*(undefined8 *)(this + 0x10));
  iVar1 = *(int *)(lVar2 + 0x2dc);
  FUN_04159be4(aRStack_10,*(undefined8 *)(this + 0x10));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  *(float *)(this + 0x30) = (float)iVar1 / *(float *)(lVar2 + 0x38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  lVar2 = FUN_0415c874(*(undefined8 *)(this + 0x10));
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(lVar2 + 0x2dc);
  this[0x41] = (PlantChainsawburmannii)0x1;
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0x3e4ccccd;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChainsawburmannii::fireProjectile(int, Sexy::RtWeakPtr<ProjectilePropertySheet>) */

void __thiscall
PlantChainsawburmannii::fireProjectile
          (PlantChainsawburmannii *this,int param_1,RtWeakPtrBase *param_3)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  Projectile *this_00;
  DVec3 *this_01;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_0415c874(*(undefined8 *)(this + 0x10));
  pfVar2 = (float *)FUN_04159c78(DAT_06aeee20,(long)param_1);
  this_02 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(this + 0x10);
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_02);
  fVar9 = *pfVar3;
  fVar11 = *(float *)(this_02 + 0xc4);
  fVar7 = pfVar3[1];
  fVar5 = *pfVar2;
  fVar6 = pfVar2[1];
  lVar4 = *(long *)(gLawnApp + 0x9f0);
  fVar8 = 0.0;
  if (*(char *)(lVar4 + 0x119) != '\0') {
    fVar8 = pfVar3[2] + 1.0;
  }
  fVar10 = *(float *)(lVar1 + 0x2d4);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
  this_00 = (Projectile *)
            Board::AddProjectile
                      ((Board *)(fVar9 + fVar5 * fVar11),fVar7 + fVar6 * fVar11,
                       fVar8 + fVar11 * fVar10,lVar4,aRStack_10,*(undefined8 *)(this + 0x10),0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  DVec2::DVec2((DVec2 *)aRStack_10,-*(float *)(lVar1 + 0x2d8),*(float *)(lVar1 + 0x2d8));
  fVar5 = 45.0;
  switch(param_1) {
  case 0:
    fVar5 = (float)ValueRange::GetRandomValue((ValueRange *)aRStack_10);
    fVar5 = (float)(int)(fVar5 + 135.0);
    break;
  case 1:
    fVar5 = (float)ValueRange::GetRandomValue((ValueRange *)aRStack_10);
    fVar5 = (float)(int)(fVar5 + 45.0);
    break;
  case 2:
    fVar5 = (float)ValueRange::GetRandomValue((ValueRange *)aRStack_10);
    fVar5 = (float)(int)(fVar5 + 225.0);
    break;
  case 3:
    fVar5 = (float)ValueRange::GetRandomValue((ValueRange *)aRStack_10);
    fVar5 = (float)(int)(fVar5 + 315.0);
    break;
  case 4:
    fVar5 = (float)ValueRange::GetRandomValue((ValueRange *)aRStack_10);
    fVar5 = (float)(int)(fVar5 + 180.0);
    break;
  case 5:
    fVar5 = (float)ValueRange::GetRandomValue((ValueRange *)aRStack_10);
    fVar5 = (float)(int)fVar5;
  }
  Sexy::SexyMath::DegToRad(fVar5);
  FUN_04159ba8(this_00 + 0xc4);
  this_01 = (DVec3 *)Projectile::GetVelocity(this_00);
  fVar5 = (float)DVec3::getLength(this_01);
  Projectile::SetRotatedVelocity(this_00,fVar5);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}


/* PlantChainsawburmannii::pickProjectileIndex(bool, int) */

uint __thiscall
PlantChainsawburmannii::pickProjectileIndex(PlantChainsawburmannii *this,bool param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  
  lVar3 = FUN_0415c874(*(undefined8 *)(this + 0x10));
  if (lVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_04159c08(*(undefined8 *)(this + 0x10));
    if (param_2 == 1) {
      uVar4 = (uint)(1 < iVar1);
    }
    else if (param_2 == 2) {
      uVar4 = 0;
      if ((2 < iVar1) && (uVar4 = 2, iVar1 < 5)) {
        uVar4 = 1;
      }
    }
    else {
      uVar4 = 0;
    }
    uVar2 = uVar4 + 3;
    if (!param_1) {
      uVar2 = uVar4;
    }
  }
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChainsawburmannii::UpdatePlantfood() */

void __thiscall PlantChainsawburmannii::UpdatePlantfood(PlantChainsawburmannii *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  float *pfVar5;
  int *piVar6;
  long lVar7;
  Projectile *this_00;
  undefined8 uVar8;
  SexyVector3 *this_01;
  BoomerangProjectile *pBVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int local_30 [2];
  Vec3 aVStack_28 [16];
  int local_18;
  float local_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x40] != (PlantChainsawburmannii)0x0) {
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0x10));
    EATextSquish::Vec3::Vec3(aVStack_28,*pfVar5,pfVar5[1],pfVar5[2]);
    Plant::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    fVar12 = (float)PVZ_T();
    fVar13 = *(float *)(this + 0x34);
    fVar14 = *(float *)(this + 0x30);
    local_18 = *(int *)(this + 0x3c) - *(int *)(this + 0x38);
    local_30[0] = (int)((fVar12 - fVar13) * fVar14) - *(int *)(this + 0x38);
    piVar6 = eastl::min_alt<int>(local_30,&local_18);
    iVar1 = *piVar6;
    if (0 < iVar1) {
      iVar11 = 0;
      iVar10 = 0;
      do {
        iVar4 = pickProjectileIndex(this,true,iVar10);
        FUN_04159be4((RtWeakPtr<Sexy::ResourceInfo> *)&local_18,*(undefined8 *)(this + 0x10));
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18)
        ;
        lVar7 = FUN_04159c40(*(undefined8 *)(lVar7 + 0x70),(long)iVar4);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_30,(RtWeakPtrBase *)(lVar7 + 8));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)local_30);
        this_00 = (Projectile *)fireProjectile(this,1,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        uVar8 = FUN_04159bb0(*(undefined8 *)(this_00 + 0xe0));
        uVar8 = operator|(uVar8,0x2000);
        FUN_04159bb4(this_00 + 0xe0,uVar8);
        this_01 = (SexyVector3 *)Projectile::GetVelocity(this_00);
        local_18 = Sexy::SexyVector3::operator*(this_01,0.8);
        local_14 = fVar13;
        local_10 = fVar14;
        Projectile::SetVelocity(this_00,(SexyVector3 *)&local_18);
        FUN_04159ba8(*(undefined4 *)(this + 0x28),this_00 + 0xc4);
        fVar12 = (float)DVec3::getLength((DVec3 *)this_01);
        Projectile::SetRotatedVelocity(this_00,fVar12);
        cVar3 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
        if (cVar3 == '\0') {
          fVar12 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
          if (fVar12 < 0.0) goto LAB_0415ced0;
        }
        else {
          lVar7 = FUN_0415c874(*(undefined8 *)(this + 0x10));
          fVar13 = *(float *)(lVar7 + 0x2cc);
          fVar12 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
          if (fVar12 < fVar13) {
LAB_0415ced0:
            pBVar9 = Sexy::RtObject::Cast<BoomerangProjectile>((RtObject *)this_00);
            BoomerangProjectile::SetLargeFlag(SUB81(pBVar9,0));
          }
        }
        fVar14 = *(float *)(this + 0x2c);
        *(int *)(this + 0x38) = *(int *)(this + 0x38) + 1;
        fVar13 = *(float *)(this + 0x28) + fVar14;
        *(float *)(this + 0x28) = fVar13;
        iVar4 = FUN_04159c08(*(undefined8 *)(this + 0x10));
        if (iVar4 < 1) {
          iVar10 = 0;
        }
        else {
          iVar2 = 0;
          if (iVar4 != 0) {
            iVar2 = (iVar10 + 1) / iVar4;
          }
          iVar10 = (iVar10 + 1) - iVar2 * iVar4;
        }
        iVar11 = iVar11 + 1;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
      } while (iVar11 != iVar1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantChainsawburmannii::onAnimStoppedCallback(std::string const&) */

void __thiscall
PlantChainsawburmannii::onAnimStoppedCallback(PlantChainsawburmannii *this,string *param_1)

{
  bool bVar1;
  PlantChainsawburmannii PVar2;
  int iVar3;
  long lVar4;
  RtObject *pRVar5;
  PlantAnimRig_Chainsawburmannii *pPVar6;
  long *plVar7;
  float fVar8;
  
  bVar1 = std::operator==(param_1,"idle2_1");
  if (bVar1) {
    iVar3 = FUN_04159c08(*(undefined8 *)(this + 0x10));
    if (iVar3 == 2) {
      fVar8 = (float)PVZ_T();
      lVar4 = FUN_0415c874(*(undefined8 *)(this + 0x10));
      *(float *)(this + 0x44) = fVar8 + *(float *)(lVar4 + 0x2c0);
    }
    else {
      fVar8 = (float)PVZ_T();
      lVar4 = FUN_0415c874(*(undefined8 *)(this + 0x10));
      *(float *)(this + 0x44) = fVar8 + *(float *)(lVar4 + 0x2b8);
    }
    pRVar5 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pPVar6 = Sexy::RtObject::Cast<PlantAnimRig_Chainsawburmannii>(pRVar5);
    FUN_04159c10(pPVar6 + 0x3b8,1);
    plVar7 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    (**(code **)(*plVar7 + 0x118))();
    this[0x50] = (PlantChainsawburmannii)0x0;
    return;
  }
  bVar1 = std::operator==(param_1,"attack");
  if ((!bVar1) &&
     (PVar2 = (PlantChainsawburmannii)std::operator==(param_1,"attack_3"), !(bool)PVar2)) {
    bVar1 = std::operator==(param_1,"idle2_3");
    if (!bVar1) {
      return;
    }
    pRVar5 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pPVar6 = Sexy::RtObject::Cast<PlantAnimRig_Chainsawburmannii>(pRVar5);
    FUN_04159c10(pPVar6 + 0x3b8,0);
    plVar7 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    (**(code **)(*plVar7 + 0x118))();
    this[0x51] = PVar2;
    this[0x50] = (PlantChainsawburmannii)0x1;
    return;
  }
  pRVar5 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pPVar6 = Sexy::RtObject::Cast<PlantAnimRig_Chainsawburmannii>(pRVar5);
  FUN_04159c10(pPVar6 + 0x3b8,0);
  plVar7 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar7 + 0x118))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChainsawburmannii::UpdateActions() */

void __thiscall PlantChainsawburmannii::UpdateActions(PlantChainsawburmannii *this)

{
  RtObject *this_00;
  PlantAnimRig_Chainsawburmannii *pPVar1;
  float fVar2;
  float fVar3;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  fVar3 = *(float *)(this + 0x44);
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_T();
  if (((fVar3 <= fVar2) && (this[0x50] == (PlantChainsawburmannii)0x0)) &&
     (this[0x51] == (PlantChainsawburmannii)0x0)) {
    this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pPVar1 = Sexy::RtObject::Cast<PlantAnimRig_Chainsawburmannii>(this_00);
    std::string::string(asStack_68,"idle2_3");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PlantAnimRig_WizardThorns::PlayTapAnimation
              ((PlantAnimRig_WizardThorns *)pPVar1,asStack_68,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
    this[0x51] = (PlantChainsawburmannii)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChainsawburmannii::FindTargetAndFire(PlantWeapon) */

void __thiscall
PlantChainsawburmannii::FindTargetAndFire(PlantChainsawburmannii *this,undefined8 param_2)

{
  char cVar1;
  RtObject *this_00;
  PlantAnimRig_Chainsawburmannii *pPVar2;
  long lVar3;
  PlantChainsawburmannii PVar4;
  float fVar5;
  float fVar6;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  fVar6 = *(float *)(this + 0x44);
  local_8 = ___stack_chk_guard;
  PVar4 = (PlantChainsawburmannii)0x0;
  fVar5 = (float)PVZ_T();
  if (((fVar6 <= fVar5) && (this[0x48] == (PlantChainsawburmannii)0x0)) &&
     (PVar4 = this[0x50], PVar4 != (PlantChainsawburmannii)0x0)) {
    cVar1 = Plant::CanFindTarget(*(undefined8 *)(this + 0x10),param_2);
    if (cVar1 == '\0') {
      PVar4 = (PlantChainsawburmannii)0x0;
      Plant::GetProps();
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
      lVar3 = FUN_04159c40(*(undefined8 *)(lVar3 + 0x70),0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)(*(long *)(this + 0x10) + 0xbc),*(float *)(lVar3 + 0x24),
                 *(float *)(lVar3 + 0x28));
    }
    else {
      this_00 = (RtObject *)
                UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      pPVar2 = Sexy::RtObject::Cast<PlantAnimRig_Chainsawburmannii>(this_00);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PlantAnimRig_Chainsawburmannii::PlayAttackAnimation(pPVar2,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(PVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChainsawburmannii::ResetBoomerang() */

void __thiscall PlantChainsawburmannii::ResetBoomerang(PlantChainsawburmannii *this)

{
  char cVar1;
  int iVar2;
  RtObject *pRVar3;
  PlantAnimRig_Chainsawburmannii *pPVar4;
  long *plVar5;
  long lVar6;
  UIEasyButtonWidget *this_00;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if ((cVar1 == '\0') && (this[0x48] != (PlantChainsawburmannii)0x0)) {
    this_00 = *(UIEasyButtonWidget **)(this + 0x10);
    iVar2 = FUN_04159c08(this_00);
    if (iVar2 < 3) {
      pRVar3 = (RtObject *)UIEasyButtonWidget::GetImageNormal(this_00);
      pPVar4 = Sexy::RtObject::Cast<PlantAnimRig_Chainsawburmannii>(pRVar3);
      std::string::string(asStack_68,"idle2_1");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PlantAnimRig_WizardThorns::PlayTapAnimation
                ((PlantAnimRig_WizardThorns *)pPVar4,asStack_68,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_68);
      nop();
      this[0x50] = (PlantChainsawburmannii)0x0;
      fVar8 = (float)PVZ_T();
      lVar6 = FUN_0415c874(*(undefined8 *)(this + 0x10));
      fVar9 = *(float *)(lVar6 + 0x2b8);
      this[0x48] = (PlantChainsawburmannii)0x0;
      *(float *)(this + 0x44) = fVar8 + fVar9;
    }
    else {
      pRVar3 = (RtObject *)UIEasyButtonWidget::GetImageNormal(this_00);
      pPVar4 = Sexy::RtObject::Cast<PlantAnimRig_Chainsawburmannii>(pRVar3);
      FUN_04159c10(pPVar4 + 0x3b8,0);
      plVar5 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      (**(code **)(*plVar5 + 0x118))();
      this[0x50] = (PlantChainsawburmannii)0x1;
      uVar7 = PVZ_T();
      this[0x48] = (PlantChainsawburmannii)0x0;
      *(undefined4 *)(this + 0x44) = uVar7;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChainsawburmannii::FindTargetZombieInRow(int, PlantWeapon, int*, PlantTargetParams&,
   Sexy::TRect<int>) */

void PlantChainsawburmannii::FindTargetZombieInRow
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,
               long *param_2,int param_3,undefined8 param_4,int *param_5,long param_6,
               undefined8 param_7)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  undefined8 uVar6;
  float *pfVar7;
  Insets *pIVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  float fVar12;
  uint local_3c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  int local_30 [4];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(param_1)
  ;
  cVar2 = Board::RowCanHaveZombies(*(Board **)(gLawnApp + 0x9f0),param_3);
  if (cVar2 != '\0') {
    if (param_5 != (int *)0x0) {
      *param_5 = 0;
    }
    uVar10 = 0;
    iVar11 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    EntityFinder::GetEntitiesTouchingRectangle
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,param_7,
               param_3,param_3);
    uVar6 = local_20;
    lVar5 = FUN_04159c50(local_20,local_18);
    if (lVar5 != 0) {
      do {
        FUN_04159c5c(uVar6,uVar10);
        nop();
        uVar6 = operator|(1,4);
        uVar6 = operator|(uVar6,0x80);
        uVar6 = operator|(uVar6,0x200);
        uVar6 = operator|(uVar6,0x800);
        local_3c = operator|(uVar6,0x2000);
        if (*(int *)(param_6 + 4) == 0) {
          operator|=(&local_3c,8);
        }
        cVar2 = Zombie::MatchesAny((Zombie *)this,local_3c,param_2[2]);
        if ((cVar2 == '\0') &&
           ((uVar1 = *(uint *)(param_6 + 4), (uVar1 >> 2 & 1) == 0 ||
            (cVar2 = FUN_0415b798(*(undefined4 *)(this + 0xcc)), cVar2 == '\0')))) {
          if ((uVar1 >> 1 & 1) == 0) {
            pfVar7 = (float *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost(this);
          }
          else {
            pfVar7 = (float *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost(this);
            fVar12 = *pfVar7;
            Plant::GetCenterPt();
            if (fVar12 <= (float)local_30[0]) goto LAB_0415d7e8;
          }
          fVar12 = pfVar7[1];
          iVar3 = BoardTransforms::BoardSpaceToGridXUnbounded(*pfVar7);
          iVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)param_2[2]);
          if (ABS((double)(iVar3 - iVar4)) == 2.0) {
            iVar3 = BoardTransforms::BoardSpaceToGridYUnbounded(fVar12);
            iVar4 = SharkMinion::getRow((SharkMinion *)param_2[2]);
            if (iVar3 - iVar4 == 2) goto LAB_0415d7e8;
          }
          pIVar8 = (Insets *)(**(code **)(*(long *)this + 0x178))(this);
          Sexy::Insets::Insets((Insets *)local_30,pIVar8);
          iVar3 = (**(code **)(*param_2 + 0x108))(param_2,this,param_6);
          cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)param_1);
          if ((iVar11 < iVar3) || (cVar2 != '\0')) {
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                      ((RtWeakPtr<SpartanBambooMatrixSystem> *)param_1,(RtWeakPtrBase *)aRStack_38);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
            iVar11 = iVar3;
          }
        }
LAB_0415d7e8:
        uVar6 = local_20;
        uVar10 = uVar10 + 1;
        uVar9 = FUN_04159c50(local_20,local_18);
      } while (uVar10 < uVar9);
    }
    if (param_5 != (int *)0x0) {
      *param_5 = iVar11;
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChainsawburmannii::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantChainsawburmannii::Fire
          (PlantChainsawburmannii *this,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  PopAnimRig *this_00;
  undefined8 uVar7;
  BoomerangRotateProjectile *this_01;
  SexyVector3 *pSVar8;
  Plant *pPVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  string asStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [16];
  Insets aIStack_60 [16];
  vector<std::string,std::allocator<std::string>> avStack_50 [24];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 == '\0') {
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0x10));
    fVar16 = pfVar6[1];
    fVar17 = *pfVar6;
    std::string::string(asStack_38,"dian_1");
    std::string::string(asStack_30,"dian_2");
    std::string::string(asStack_28,"dian_3");
    std::vector<std::string,std::allocator<std::string>>::vector
              (avStack_50,asStack_38,3,
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    std::string::~string(asStack_28);
    std::string::~string(asStack_30);
    std::string::~string(asStack_38);
    nop();
    nop();
    nop();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_88 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_50);
    local_80 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_50);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_88,(__normal_iterator *)&local_80), bVar2)
    {
      uVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
      FUN_05475d88(asStack_90,uVar7);
      Sexy::Insets::Insets(aIStack_60);
      this_00 = (PopAnimRig *)
                UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      PopAnimRig::CalcSymbolRect(this_00,asStack_90,(TRect *)aIStack_60);
      lVar10 = *(long *)(this + 0x10);
      fVar14 = *(float *)(lVar10 + 0x1c);
      fVar13 = (float)FUN_04159c9c(*(undefined4 *)(lVar10 + 0x18),fVar14,
                                   *(undefined4 *)(lVar10 + 0x20));
      Sexy::TRect<int>::GetCenter();
      iVar3 = FUN_04159d68(local_78);
      FUN_04159be4(aRStack_70,*(undefined8 *)(this + 0x10));
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
      fVar12 = *(float *)(lVar10 + 0x9c);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
      Sexy::TRect<int>::GetCenter();
      iVar4 = FUN_04159d68(local_74);
      FUN_04159be4(aRStack_70,*(undefined8 *)(this + 0x10));
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
      fVar15 = *(float *)(lVar10 + 0xa0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
      EATextSquish::Vec3::Vec3
                ((Vec3 *)aRStack_70,(float)(int)((fVar13 - fVar12) + (float)iVar3),
                 (float)(int)((fVar14 - fVar15) + (float)iVar4),0.0);
      std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::push_back
                ((vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>> *)local_20,
                 (SexyVector3 *)aRStack_70);
      std::string::~string(asStack_90);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_88);
    }
    lVar10 = 0;
    do {
      lVar11 = *(long *)(this + 0x10);
      uVar5 = pickProjectileIndex(this,false,(int)lVar10);
      pPVar9 = *(Plant **)(this + 0x10);
      *(undefined4 *)(lVar11 + 0x150) = uVar5;
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aIStack_60);
      uVar7 = Plant::Fire(pPVar9,aIStack_60,param_3,param_4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_60);
      nop();
      if (this_01 != (BoomerangRotateProjectile *)0x0) {
        EATextSquish::Vec3::Vec3((Vec3 *)aIStack_60,fVar17,fVar16 - 15.0,0.0);
        BoomerangRotateProjectile::SetCenterPosition(this_01,(SexyVector3 *)aIStack_60);
        pSVar8 = (SexyVector3 *)FUN_04159c80(local_20[0],lVar10);
        BoomerangRotateProjectile::SetStartPosition(this_01,pSVar8);
        FUN_04159c18(DAT_06aeef70,this_01 + 0x1dc);
        FUN_04159c20(this_01 + 0x1e4,0);
        BoomerangRotateProjectile::SetDegree(this_01);
        fVar13 = (float)PVZ_T();
        lVar11 = FUN_0415c874(*(undefined8 *)(this + 0x10));
        FUN_04159c28(fVar13 + *(float *)(lVar11 + 700),this_01 + 0x1e8);
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 != 3);
    *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
    this[0x48] = (PlantChainsawburmannii)0x1;
    std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::~vector
              ((vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>> *)local_20);
    std::vector<std::string,std::allocator<std::string>>::~vector(avStack_50);
  }
  else {
    this[0x40] = (PlantChainsawburmannii)0x1;
    if (this[0x41] != (PlantChainsawburmannii)0x0) {
      uVar5 = PVZ_T();
      *(undefined4 *)(this + 0x34) = uVar5;
    }
    this[0x41] = (PlantChainsawburmannii)0x0;
    uVar7 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChainsawburmannii::OnAnimCommand(std::string const&, std::string const&) */

void PlantChainsawburmannii::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  undefined8 uVar7;
  BoomerangRotateProjectile *this;
  SexyVector3 *pSVar8;
  PopAnimRig *pPVar9;
  Insets *__n;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  string asStack_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [16];
  Insets aIStack_78 [16];
  vector<std::string,std::allocator<std::string>> avStack_68 [24];
  undefined8 local_50 [3];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"use_action2");
  if (bVar1) {
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(param_1 + 0x10));
    fVar16 = pfVar6[1];
    fVar17 = *pfVar6;
    std::string::string(asStack_38,"dian_4");
    std::string::string(asStack_30,"dian_5");
    std::string::string(asStack_28,"dian_6");
    std::vector<std::string,std::allocator<std::string>>::vector
              (avStack_68,asStack_38,3,
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_50);
    std::string::~string(asStack_28);
    std::string::~string(asStack_30);
    std::string::~string(asStack_38);
    nop();
    nop();
    nop();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_50);
    local_a0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_68);
    local_98 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_68);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar2)
    {
      uVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
      FUN_05475d88(asStack_a8,uVar7);
      Sexy::Insets::Insets(aIStack_78);
      pPVar9 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
      PopAnimRig::CalcSymbolRect(pPVar9,asStack_a8,(TRect *)aIStack_78);
      lVar11 = *(long *)(param_1 + 0x10);
      fVar14 = *(float *)(lVar11 + 0x1c);
      fVar13 = (float)FUN_04159c9c(*(undefined4 *)(lVar11 + 0x18),fVar14,
                                   *(undefined4 *)(lVar11 + 0x20));
      Sexy::TRect<int>::GetCenter();
      iVar3 = FUN_04159d68(local_90);
      FUN_04159be4(aRStack_88,*(undefined8 *)(param_1 + 0x10));
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
      fVar12 = *(float *)(lVar11 + 0x9c);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
      Sexy::TRect<int>::GetCenter();
      iVar4 = FUN_04159d68(local_8c);
      FUN_04159be4(aRStack_88,*(undefined8 *)(param_1 + 0x10));
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
      fVar15 = *(float *)(lVar11 + 0xa0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
      EATextSquish::Vec3::Vec3
                ((Vec3 *)aRStack_88,(float)(int)((fVar13 - fVar12) + (float)iVar3),
                 (float)(int)((fVar14 - fVar15) + (float)iVar4),0.0);
      std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::push_back
                ((vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>> *)local_50,
                 (SexyVector3 *)aRStack_88);
      std::string::~string(asStack_a8);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
    }
    lVar11 = 0;
    do {
      lVar10 = *(long *)(param_1 + 0x10);
      uVar5 = pickProjectileIndex((PlantChainsawburmannii *)param_1,false,(int)lVar11);
      *(undefined4 *)(lVar10 + 0x150) = uVar5;
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aIStack_78);
      Plant::Fire(*(Plant **)(param_1 + 0x10),aIStack_78,
                  *(undefined4 *)(*(Plant **)(param_1 + 0x10) + 0x110),0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_78);
      nop();
      __n = aIStack_78;
      std::string::string((string *)aRStack_88,"animation_2");
      nop();
      iVar3 = *(int *)(*(long *)(param_1 + 0x10) + 0x150);
      if (iVar3 == 1) {
        std::string::append((string *)aRStack_88,"animation_2_1",(size_t)__n);
      }
      else if (iVar3 == 2) {
        std::string::append((string *)aRStack_88,"animation_2_2",(size_t)__n);
      }
      else if (iVar3 == 0) {
        std::string::append((string *)aRStack_88,"animation_2",(size_t)__n);
      }
      if (this != (BoomerangRotateProjectile *)0x0) {
        EATextSquish::Vec3::Vec3((Vec3 *)aIStack_78,fVar17,fVar16 - 15.0,0.0);
        BoomerangRotateProjectile::SetCenterPosition(this,(SexyVector3 *)aIStack_78);
        pSVar8 = (SexyVector3 *)FUN_04159c80(local_50[0],lVar11);
        BoomerangRotateProjectile::SetStartPosition(this,pSVar8);
        FUN_04159c18(DAT_06aeef70 + DAT_06aeef70,this + 0x1dc);
        FUN_04159c20(this + 0x1e4,1);
        BoomerangRotateProjectile::SetDegree(this);
        fVar13 = (float)PVZ_T();
        lVar10 = FUN_0415c874(*(undefined8 *)(param_1 + 0x10));
        FUN_04159c28(fVar13 + *(float *)(lVar10 + 700),this + 0x1e8);
        pPVar9 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3
                  ((DummyInit *)asStack_38);
        PopAnimRig::PlayAndContinue(pPVar9,aRStack_88,0,asStack_38);
      }
      lVar11 = lVar11 + 1;
      std::string::~string((string *)aRStack_88);
    } while (lVar11 != 3);
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = 0xffffffff;
    std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::~vector
              ((vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>> *)local_50);
    std::vector<std::string,std::allocator<std::string>>::~vector(avStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}

