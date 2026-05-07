// Class: PlantPumpkin


/* PlantPumpkin::CancelPlantfood() */

void __thiscall PlantPumpkin::CancelPlantfood(PlantPumpkin *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 4;
  return;
}


/* PlantPumpkin::CanBeTargeted() */

byte __thiscall PlantPumpkin::CanBeTargeted(PlantPumpkin *this)

{
  return (byte)this[0x154] ^ 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPumpkin::StaticClassInit() */

void PlantPumpkin::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantPumpkin");
    (*pcVar2)(plVar1,asStack_10,FUN_04d0fa6c,0x160,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPumpkin::StaticGetClass() */

long * PlantPumpkin::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantPumpkin",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPumpkin::GetClass() const */

long * PlantPumpkin::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantPumpkin",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPumpkin::deathSkillRect() */

void PlantPumpkin::deathSkillRect(void)

{
  int iVar1;
  long in_x0;
  ulong uVar2;
  int in_w4;
  
  uVar2 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(in_x0 + 0x10));
  iVar1 = SharkMinion::getRow(*(SharkMinion **)(in_x0 + 0x10));
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(uVar2 & 0xffffffff),iVar1,2,1,in_w4);
  return;
}


/* PlantPumpkin::PlantPumpkin() */

void __thiscall PlantPumpkin::PlantPumpkin(PlantPumpkin *this)

{
  PlantVineFramework::PlantVineFramework((PlantVineFramework *)this);
  *(undefined ***)this = &PTR_GetClass_069a7450;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x140));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x148));
  this[0x154] = (PlantPumpkin)0x0;
  this[0x155] = (PlantPumpkin)0x0;
  this[0x156] = (PlantPumpkin)0x0;
  this[0x15c] = (PlantPumpkin)0x0;
  *(undefined4 *)(this + 0x158) = 0;
  return;
}


/* PlantPumpkin::StaticNew() */

PlantPumpkin * PlantPumpkin::StaticNew(void)

{
  PlantPumpkin *this;
  
  this = ::operator_new(0x160);
  PlantPumpkin(this);
  return this;
}


/* PlantPumpkin::~PlantPumpkin() */

void __thiscall PlantPumpkin::~PlantPumpkin(PlantPumpkin *this)

{
  *(undefined ***)this = &PTR_GetClass_069a7450;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x148));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140));
  PlantVineFramework::~PlantVineFramework((PlantVineFramework *)this);
  return;
}


/* PlantPumpkin::~PlantPumpkin() */

void __thiscall PlantPumpkin::~PlantPumpkin(PlantPumpkin *this)

{
  ~PlantPumpkin(this);
  AK::FreeHook(this);
  return;
}


/* PlantPumpkin::CanApplyPlantfood() */

void __thiscall PlantPumpkin::CanApplyPlantfood(PlantPumpkin *this)

{
  Shield *this_00;
  
  this_00 = (Shield *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140));
  Shield::CanDeployShield(this_00);
  return;
}


/* PlantPumpkin::HasPlantfoodShield() */

void __thiscall PlantPumpkin::HasPlantfoodShield(PlantPumpkin *this)

{
  Shield *this_00;
  
  this_00 = (Shield *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140));
  Shield::hasShield(this_00);
  return;
}


/* PlantPumpkin::TryBlockZombossRush(Zombie*) */

void PlantPumpkin::TryBlockZombossRush(Zombie *param_1)

{
  Zombie *pZVar1;
  
  pZVar1 = (Zombie *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x140));
  Shield::TryBlockZombossRush(pZVar1);
  return;
}


/* PlantPumpkin::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantPumpkin::onAnimStoppedCallback(PlantPumpkin *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==("attack_lv5",param_1);
  if (!bVar1) {
    return;
  }
  Plant::KillPlant(*(Plant **)(this + 0x10),0,0,1);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x04d0f53c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantPumpkin::Draw(Sexy::Graphics*) */

void PlantPumpkin::Draw(Graphics *param_1)

{
  RtWeakPtr *pRVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  wchar16 *pwVar8;
  long *plVar9;
  Insets *pIVar10;
  PopAnimRig *pPVar11;
  long lVar12;
  Shield *pSVar13;
  float *pfVar14;
  LineBreakCategory *in_x3;
  string *in_x4;
  long lVar15;
  Board *pBVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  int local_38 [2];
  int local_30;
  int local_28 [2];
  int local_20;
  undefined4 local_18 [3];
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Draw(param_1);
  lVar15 = *(long *)(param_1 + 0x10);
  cVar2 = FUN_04d0eb6c(*(undefined4 *)(lVar15 + 0x28));
  if (cVar2 != '\0') goto LAB_04d0f564;
  pBVar16 = (Board *)0x0;
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    pwVar8 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pIVar10 = (Insets *)local_28;
    std::string::string((string *)local_18,"HealthBars");
    cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar8,(wchar16 *)local_18,(LineBreakCategory *)pIVar10,in_x3,
                       (LineBreakCategory *)in_x4);
    if (cVar2 == '\0') {
LAB_04d0f3a4:
      std::string::~string((string *)local_18);
      nop();
LAB_04d0f3b4:
      lVar15 = *(long *)(gLawnApp + 0x9f0);
    }
    else {
      pRVar1 = (RtWeakPtr *)(param_1 + 0x140);
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar1);
      if (!bVar3) goto LAB_04d0f3a4;
      pSVar13 = (Shield *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      cVar2 = Shield::Undamaged(pSVar13);
      std::string::~string((string *)local_18);
      nop();
      if (cVar2 == '\0') goto LAB_04d0f3b4;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      Shield::GetShieldInfo();
      pfVar14 = (float *)std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         **)(param_1 + 0x10));
      fVar20 = *pfVar14;
      iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
      iVar4 = FUN_04d0dd30((int)(fVar20 - (float)(iVar4 / 2)));
      lVar15 = std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               **)(param_1 + 0x10));
      fVar20 = *(float *)(lVar15 + 4);
      iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
      iVar5 = FUN_04d0dd30((int)((fVar20 - (float)iVar5) - 24.0));
      BoardConstants::GRIDSQUARE_WIDTH();
      iVar6 = FUN_04d0dd30();
      BoardConstants::GRIDSQUARE_HEIGHT();
      iVar7 = FUN_04d0dd30();
      Sexy::Insets::Insets((Insets *)local_38,iVar4,iVar5,iVar6,iVar7);
      PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_12);
      Sexy::Color::Color((Color *)local_18,7);
      WriteWordInRect();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      Shield::GetShieldPercent();
      pfVar14 = (float *)std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         **)(param_1 + 0x10));
      fVar20 = *pfVar14;
      iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
      iVar4 = FUN_04d0dd30((int)(fVar20 - (float)(iVar4 / 2)));
      lVar15 = std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               **)(param_1 + 0x10));
      fVar20 = *(float *)(lVar15 + 4);
      iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
      iVar5 = FUN_04d0dd30((int)((fVar20 - (float)iVar5) - 12.0));
      BoardConstants::GRIDSQUARE_WIDTH();
      iVar6 = FUN_04d0dd30();
      BoardConstants::GRIDSQUARE_HEIGHT();
      iVar7 = FUN_04d0dd30();
      Sexy::Insets::Insets((Insets *)local_28,iVar4,iVar5,iVar6,iVar7);
      in_x3 = (LineBreakCategory *)
              PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_12);
      Sexy::Color::Color((Color *)local_18,7);
      in_x4 = (string *)local_18;
      WriteWordInRect();
      FUN_05476c50(auStack_40);
      FUN_05476c50(auStack_48);
      lVar15 = *(long *)(gLawnApp + 0x9f0);
    }
    if (lVar15 == 0) {
      lVar15 = *(long *)(param_1 + 0x10);
      pBVar16 = (Board *)0x0;
    }
    else {
      pwVar8 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
      pIVar10 = (Insets *)local_28;
      std::string::string((string *)local_18,"HealthBars");
      cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                        (pwVar8,(wchar16 *)local_18,(LineBreakCategory *)pIVar10,in_x3,
                         (LineBreakCategory *)in_x4);
      if (cVar2 == '\0') {
LAB_04d0f3f0:
        std::string::~string((string *)local_18);
        nop();
      }
      else {
        pRVar1 = (RtWeakPtr *)(param_1 + 0x148);
        bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar1);
        if (!bVar3) goto LAB_04d0f3f0;
        pSVar13 = (Shield *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
        cVar2 = Shield::Undamaged(pSVar13);
        std::string::~string((string *)local_18);
        nop();
        if (cVar2 != '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
          Shield::GetShieldInfo();
          pfVar14 = (float *)std::
                             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                             **)(param_1 + 0x10));
          fVar20 = *pfVar14;
          iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
          iVar4 = FUN_04d0dd30((int)(fVar20 - (float)(iVar4 / 2)));
          lVar15 = std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   **)(param_1 + 0x10));
          fVar20 = *(float *)(lVar15 + 4);
          iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
          iVar5 = FUN_04d0dd30((int)((fVar20 - (float)iVar5) - 4.0));
          BoardConstants::GRIDSQUARE_WIDTH();
          iVar6 = FUN_04d0dd30();
          BoardConstants::GRIDSQUARE_HEIGHT();
          iVar7 = FUN_04d0dd30();
          Sexy::Insets::Insets((Insets *)local_38,iVar4,iVar5,iVar6,iVar7);
          PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_12);
          Sexy::Color::Color((Color *)local_18,4);
          WriteWordInRect();
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
          Shield::GetShieldPercent();
          pfVar14 = (float *)std::
                             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                             **)(param_1 + 0x10));
          fVar20 = *pfVar14;
          iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
          iVar4 = FUN_04d0dd30((int)(fVar20 - (float)(iVar4 / 2)));
          lVar15 = std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   **)(param_1 + 0x10));
          fVar20 = *(float *)(lVar15 + 4);
          iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
          iVar5 = FUN_04d0dd30((int)((fVar20 + 6.0) - (float)iVar5));
          BoardConstants::GRIDSQUARE_WIDTH();
          iVar6 = FUN_04d0dd30();
          BoardConstants::GRIDSQUARE_HEIGHT();
          iVar7 = FUN_04d0dd30();
          Sexy::Insets::Insets((Insets *)local_28,iVar4,iVar5,iVar6,iVar7);
          PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_12);
          Sexy::Color::Color((Color *)local_18,4);
          WriteWordInRect();
          FUN_05476c50(auStack_40);
          FUN_05476c50(auStack_48);
        }
      }
      lVar15 = *(long *)(param_1 + 0x10);
      pBVar16 = *(Board **)(gLawnApp + 0x9f0);
    }
  }
  Sexy::Point::Point((Point *)local_18,*(int *)(lVar15 + 0x114),*(int *)(lVar15 + 0x110));
  plVar9 = (long *)Board::GetPlantAt(pBVar16,(Point *)local_18,1);
  if (plVar9 == (long *)0x0) {
    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
    PopAnimRig::GetPAMColor();
    local_c = 0xff;
    pPVar11 = (PopAnimRig *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
    PopAnimRig::SetPAMColor(pPVar11,(Color *)local_18);
  }
  else {
    pIVar10 = (Insets *)(**(code **)(*plVar9 + 0x178))();
    Sexy::Insets::Insets((Insets *)local_38,pIVar10);
    pIVar10 = (Insets *)
              (**(code **)(**(long **)(param_1 + 0x10) + 0x178))(*(long **)(param_1 + 0x10));
    Sexy::Insets::Insets((Insets *)local_28,pIVar10);
    if ((local_28[0] + local_20 < local_38[0]) || (local_38[0] + local_30 < local_28[0])) {
      UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
      PopAnimRig::GetPAMColor();
      local_c = 0x6e;
      pPVar11 = (PopAnimRig *)
                UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
      PopAnimRig::SetPAMColor(pPVar11,(Color *)local_18);
    }
    else {
      UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
      PopAnimRig::GetPAMColor();
      local_c = 0xff;
      pPVar11 = (PopAnimRig *)
                UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
      PopAnimRig::SetPAMColor(pPVar11,(Color *)local_18);
    }
  }
  if (param_1[0x156] != (Graphics)0x0) {
    pBVar16 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::Point::Point((Point *)local_18,*(int *)(*(long *)(param_1 + 0x10) + 0x114),
                       *(int *)(*(long *)(param_1 + 0x10) + 0x110));
    lVar15 = Board::GetPlantAt(pBVar16,(Point *)local_18,1);
    if ((lVar15 != 0) && (param_1[0x15c] != (Graphics)0x0)) {
      lVar12 = FUN_04d0f1b4(*(undefined8 *)(param_1 + 0x10));
      fVar20 = *(float *)(param_1 + 0x158);
      auVar18 = PVZ_T();
      local_18[0] = 0x3f800000;
      fVar20 = CurveLerp<float>(auVar18,fVar20 + 2.0,auVar18._0_4_,(Point *)local_18,lVar12 + 0x2c8,
                                1);
      fVar17 = (float)NewPVPUtils::GetBoardScale();
      fVar19 = *(float *)(lVar12 + 0x2c8);
      *(float *)(lVar15 + 0xc4) = fVar17 * fVar20;
      if (_FUN_04d0fa68 <= ABS(fVar20 - fVar19)) goto LAB_04d0f564;
    }
    param_1[0x156] = (Graphics)0x0;
  }
LAB_04d0f564:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPumpkin::deathBoom() */

void __thiscall PlantPumpkin::deathBoom(PlantPumpkin *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  Zombie *this_00;
  GridItem *this_01;
  long lVar7;
  ZombieTosserSubSystem *pZVar8;
  code *pcVar9;
  undefined8 local_100;
  undefined8 local_f8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_f0 [8];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 auStack_d8 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_c8 [24];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_b0 [72];
  DamageInfo aDStack_68 [8];
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  deathSkillRect();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_c8);
  uVar3 = operator|(2,4);
  EntityFinder::GetEntitiesInRectangle(avStack_c8,uVar3,auStack_d8);
  local_100 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_c8);
  local_f8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_c8);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_100,(__normal_iterator *)&local_f8);
  if (bVar1) {
    do {
      puVar6 = (undefined8 *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_100);
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
      this_01 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar6);
      DamageInfo::DamageInfo(aDStack_68);
      lVar7 = FUN_04d0f1b4(*(undefined8 *)(this + 0x10));
      local_60 = *(undefined4 *)(lVar7 + 0x2c4);
      if ((this_00 == (Zombie *)0x0) || (iVar4 = Zombie::GetSizeType(this_00), 1 < iVar4)) {
LAB_04d0ffec:
        if (this_01 != (GridItem *)0x0) {
          pcVar9 = *(code **)(*(long *)this + 1000);
          uVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this_01);
          uVar5 = SharkMinion::getRow((SharkMinion *)this_01);
          cVar2 = (*pcVar9)(this,uVar3,uVar5);
          if ((cVar2 != '\0') &&
             (cVar2 = (**(code **)(*(long *)this_01 + 0x200))(this_01), cVar2 != '\0')) {
            (**(code **)(*(long *)this_01 + 0x110))(this_01,aDStack_68);
          }
        }
      }
      else {
        pcVar9 = *(code **)(*(long *)this + 0x3e0);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_e8,(RtWeakPtrBase *)aRStack_f0);
        cVar2 = (*pcVar9)(this,(RtWeakPtr<Sexy::SoundResource> *)&local_e8,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_e8);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_f0);
        if (cVar2 == '\0') goto LAB_04d0ffec;
        cVar2 = Zombie::CanBeLaunchedByPlants(this_00);
        if (cVar2 != '\0') {
          puVar6 = (undefined8 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  *)this_00);
          local_e8 = *puVar6;
          local_e0 = *(undefined4 *)(puVar6 + 1);
          iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
          local_e8 = CONCAT44(local_e8._4_4_,(float)iVar4 + (float)local_e8);
          pZVar8 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
          RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_b0);
          ZombieTosserSubSystem::LaunchZombie
                    ((ZombieTosserSubSystem *)0x42200000,0x40000000,pZVar8,this_00,
                     (RtWeakPtr<Sexy::SoundResource> *)&local_e8,aRStack_b0,1);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_b0);
        }
        (**(code **)(*(long *)this_00 + 0x110))(this_00,aDStack_68);
      }
      DamageInfo::~DamageInfo(aDStack_68);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_100);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_100,(__normal_iterator *)&local_f8);
    } while (bVar1);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPumpkin::OnAnimCommand(std::string const&, std::string const&) */

undefined8 PlantPumpkin::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"use_special");
  if (bVar1) {
    deathBoom((PlantPumpkin *)param_1);
  }
  bVar1 = std::operator==(param_2,"bigger");
  if (bVar1) {
    param_1[0x156] = (string)0x1;
  }
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPumpkin::handleAnimation(DamageInfo) */

void PlantPumpkin::handleAnimation(DamageInfo *param_1,long param_2,DamageInfo *param_3)

{
  char cVar1;
  PlantAnimRig_Pumpkin *pPVar2;
  long lVar3;
  float fVar4;
  RtMixedPtr aRStack_c8 [8];
  RtId aRStack_c0 [8];
  string asStack_b8 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_b0 [72];
  DamageInfo aDStack_68 [8];
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(aDStack_68,param_3);
  lVar3 = *(long *)(param_2 + 0x10);
  cVar1 = FUN_04d0dcd0(lVar3);
  if (cVar1 == '\0') {
    DamageInfo::DamageInfo(param_1,param_3);
  }
  else {
    fVar4 = (float)FUN_04d0dcc0(*(undefined4 *)(lVar3 + 0xd8));
    if (fVar4 - *(float *)(param_3 + 8) < 0.0) {
      *(undefined1 *)(param_2 + 0x154) = 1;
      local_60 = 0;
      pPVar2 = (PlantAnimRig_Pumpkin *)FUN_04d0f294(lVar3);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_c8);
      std::string::string(asStack_b8,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_b0,aRStack_c0,
                 asStack_b8);
      PlantAnimRig_Pumpkin::PlayDeathAnim(pPVar2,aRStack_b0);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_b0);
      std::string::~string(asStack_b8);
      nop();
      Sexy::RtId::~RtId(aRStack_c0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c8);
    }
    DamageInfo::DamageInfo(param_1,aDStack_68);
  }
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPumpkin::TakeDamage(DamageInfo const&) */

void PlantPumpkin::TakeDamage(DamageInfo *param_1)

{
  RtMixedPtrBase *this;
  char cVar1;
  Shield *pSVar2;
  DamageInfo *pDVar3;
  DamageInfo *in_x1;
  DamageInfo aDStack_c8 [8];
  float local_c0;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_8;
  
  this = (RtMixedPtrBase *)(param_1 + 0x148);
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(aDStack_c8,in_x1);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 == '\0') {
LAB_04d1074c:
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x140));
    if (cVar1 == '\0') goto LAB_04d10764;
LAB_04d10820:
    pSVar2 = (Shield *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x140));
    cVar1 = Shield::hasShield(pSVar2);
    if (cVar1 == '\0') goto LAB_04d10764;
    pDVar3 = (DamageInfo *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x140));
    Shield::ReduceDamage(pDVar3);
    local_c0 = local_60;
    DamageInfo::~DamageInfo((DamageInfo *)&local_68);
    if (*(float *)(param_1 + 0x150) <= local_c0) goto LAB_04d1086c;
  }
  else {
    pSVar2 = (Shield *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    cVar1 = Shield::hasShield(pSVar2);
    if (cVar1 == '\0') goto LAB_04d1074c;
    pDVar3 = (DamageInfo *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    Shield::ReduceDamage(pDVar3);
    local_c0 = local_60;
    DamageInfo::~DamageInfo((DamageInfo *)&local_68);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x140));
    if (cVar1 != '\0') goto LAB_04d10820;
LAB_04d10764:
    if (*(float *)(param_1 + 0x150) <= local_c0) {
LAB_04d1086c:
      DamageInfo::DamageInfo((DamageInfo *)&local_68);
      local_60 = *(float *)(param_1 + 0x150);
      local_68 = *(undefined8 *)in_x1;
      local_58 = *(undefined8 *)(in_x1 + 0x10);
      local_50 = *(undefined8 *)(in_x1 + 0x18);
      PlantMagicbeans::TakeDamage(param_1);
      DamageInfo::~DamageInfo((DamageInfo *)&local_68);
      goto LAB_04d10798;
    }
  }
  DamageInfo::DamageInfo((DamageInfo *)&local_68,aDStack_c8);
  handleAnimation(param_1,(DamageInfo *)&local_68);
  DamageInfo::~DamageInfo((DamageInfo *)&local_68);
LAB_04d10798:
  DamageInfo::~DamageInfo(aDStack_c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPumpkin::cureMainPlant() */

void __thiscall PlantPumpkin::cureMainPlant(PlantPumpkin *this)

{
  LawnApp *this_00;
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  Plant *this_01;
  int *piVar5;
  undefined8 uVar6;
  Board *pBVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_78;
  undefined8 local_70;
  Point aPStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  lVar3 = LawnApp::GetPlantLevelUpListView(gLawnApp);
  lVar4 = LawnApp::GetPlantAvatarListView(this_00);
  if (lVar4 == 0 && lVar3 == 0) {
    pBVar7 = *(Board **)(this_00 + 0x9f0);
    Sexy::Point::Point(aPStack_68,*(int *)(*(long *)(this + 0x10) + 0x114),
                       *(int *)(*(long *)(this + 0x10) + 0x110));
    lVar3 = Board::GetPlantAt(pBVar7,aPStack_68,0);
    lVar4 = *(long *)(this + 0x10);
    iVar2 = FUN_04d0dcc8(lVar4);
    if (1 < iVar2) {
      bVar1 = true;
      if (lVar3 != lVar4) {
        if (lVar3 == 0) goto LAB_04d10950;
        Plant::GetType();
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_68);
        bVar1 = std::operator!=((string *)(lVar3 + 8),"pumpkin");
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_68)
        ;
      }
      if (bVar1 != false) {
        pBVar7 = *(Board **)(gLawnApp + 0x9f0);
        Sexy::Point::Point(aPStack_68,*(int *)(*(long *)(this + 0x10) + 0x114),
                           *(int *)(*(long *)(this + 0x10) + 0x110));
        this_01 = (Plant *)Board::GetPlantAt(pBVar7,aPStack_68,1);
        if (this_01 != (Plant *)0x0) {
          Plant::GetType();
          lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
          std::vector<PlantTag,std::allocator<PlantTag>>::vector
                    ((vector<PlantTag,std::allocator<PlantTag>> *)aPStack_68,
                     (vector *)(lVar3 + 0xf0));
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
          local_78 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)aPStack_68);
          local_70 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)aPStack_68);
          while (bVar1 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_78,(__normal_iterator *)&local_70),
                bVar1) {
            piVar5 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
            if (*piVar5 == 0x1c) {
              this[0x15c] = (PlantPumpkin)0x1;
            }
            eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                      ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_78);
          }
          if (this[0x15c] != (PlantPumpkin)0x0) {
            fVar8 = (float)Plant::GetMaxHealth(this_01);
            lVar3 = FUN_04d0f1b4(*(undefined8 *)(this + 0x10));
            uVar6 = *(undefined8 *)(this + 0x10);
            iVar2 = FUN_04d0dcc8(uVar6);
            if (iVar2 == 2) {
              fVar10 = *(float *)(lVar3 + 700);
              fVar8 = fVar8 + fVar10;
              fVar9 = (float)FUN_04d0dcc0(*(undefined4 *)(this_01 + 0xd8));
              fVar9 = fVar9 + fVar10;
              uVar6 = FUN_04d0f294(uVar6);
              RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                        (aRStack_50);
              PlantAnimRig_Pumpkin::PlayLevel2Skill(uVar6,aRStack_50);
              RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              ::~RtReflectionDelegate
                        ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                          *)aRStack_50);
              uVar6 = *(undefined8 *)(this + 0x10);
            }
            else if (iVar2 < 3) {
              fVar9 = 0.0;
            }
            else {
              fVar10 = *(float *)(lVar3 + 0x2c0);
              fVar8 = fVar8 + fVar10;
              fVar9 = (float)FUN_04d0dcc0(*(undefined4 *)(this_01 + 0xd8));
              fVar9 = fVar9 + fVar10;
              uVar6 = FUN_04d0f294(uVar6);
              RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                        (aRStack_50);
              PlantAnimRig_Pumpkin::PlayLevel3Skill(uVar6,aRStack_50);
              RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              ::~RtReflectionDelegate
                        ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                          *)aRStack_50);
              uVar6 = *(undefined8 *)(this + 0x10);
            }
            lVar3 = FUN_04d0f294(uVar6);
            FUN_04d0dcf8(lVar3 + 0x3be);
            Plant::SetMaxHealth(this_01,fVar8);
            if (fVar9 < fVar8) {
              Plant::SetHealth(this_01,fVar9);
            }
            else {
              Plant::SetHealth(this_01,fVar8);
            }
          }
          std::vector<PlantTag,std::allocator<PlantTag>>::~vector
                    ((vector<PlantTag,std::allocator<PlantTag>> *)aPStack_68);
        }
      }
    }
  }
LAB_04d10950:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPumpkin::Initialize() */

void __thiscall PlantPumpkin::Initialize(PlantPumpkin *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *pRVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  RtObject *this_00;
  PowerPropsShield *pPVar5;
  Shield *pSVar6;
  float fVar7;
  undefined4 uVar8;
  RtWeakPtr aRStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x140);
  PlantVineFramework::Initialize((PlantVineFramework *)this);
  lVar4 = FUN_04d0f1b4(*(undefined8 *)(this + 0x10));
  GameObject::Create<Shield>();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(pRVar1,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  uVar8 = 9;
  if (cVar2 == '\0') {
    uVar8 = 4;
  }
  PowerSet::Find(aRStack_28,lVar4 + 0x58,uVar8);
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_28);
  if (bVar3) {
    pSVar6 = (Shield *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    pPVar5 = Sexy::RtObject::Cast<PowerPropsShield_const>(this_00);
    ShieldProps::ShieldProps((ShieldProps *)aRStack_10,*(int *)(pPVar5 + 0x18));
    Shield::SetProps(pSVar6,(ShieldProps *)aRStack_10);
    pSVar6 = (Shield *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    nop();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
    Shield::SetAnimRig(pSVar6,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  fVar7 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
  if (0.0 < fVar7) {
    pRVar1 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x148);
    GameObject::Create<Shield>();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(pRVar1,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    PowerSet::Find(aRStack_20,lVar4 + 0x58,0xb);
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
    if (bVar3) {
      fVar7 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
      pSVar6 = (Shield *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      ShieldProps::ShieldProps((ShieldProps *)aRStack_10,(int)fVar7);
      Shield::SetProps(pSVar6,(ShieldProps *)aRStack_10);
      pSVar6 = (Shield *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      nop();
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
      Shield::SetAnimRig(pSVar6,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      lVar4 = FUN_04d0f294(*(undefined8 *)(this + 0x10));
      FUN_04d0dcf0(lVar4 + 0x3bd,1);
      pSVar6 = (Shield *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      Shield::DeployShield(pSVar6);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  }
  fVar7 = (float)Plant::GetMaxHealth(*(Plant **)(this + 0x10));
  *(float *)(this + 0x150) = fVar7 * 0.5;
  cureMainPlant(this);
  uVar8 = PVZ_T();
  *(undefined4 *)(this + 0x158) = uVar8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPumpkin::ApplyPlantfood() */

void __thiscall PlantPumpkin::ApplyPlantfood(PlantPumpkin *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  Shield *pSVar5;
  Shield *this_01;
  float *pfVar6;
  RealObject *this_02;
  string asStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x148);
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 5;
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  Plant::UpdateDamageStates(*(Plant **)(this + 0x10));
  lVar4 = FUN_04d0f294(*(undefined8 *)(this + 0x10));
  FUN_04d0dd24(lVar4 + 0x3bc);
  lVar4 = FUN_04d0f294(*(undefined8 *)(this + 0x10));
  FUN_04d0dcf0(lVar4 + 0x3bd,0);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    pSVar5 = (Shield *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    cVar2 = Shield::hasShield(pSVar5);
    if (cVar2 != '\0') {
      pSVar5 = (Shield *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar3 = Shield::getCurrentHitPoint(pSVar5);
      pSVar5 = (Shield *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140));
      this_01 = (Shield *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140));
      pfVar6 = (float *)Shield::GetProps(this_01);
      ShieldProps::ShieldProps((ShieldProps *)asStack_10,(int)((float)iVar3 + *pfVar6));
      Shield::SetProps(pSVar5,(ShieldProps *)asStack_10);
      pSVar5 = (Shield *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      Shield::setCurrentHitPoint(pSVar5,0);
    }
  }
  pSVar5 = (Shield *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140))
  ;
  Shield::DeployShield(pSVar5);
  this_02 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_10,"Play_Plant_Pumpkin_Plantfood");
  RealObject::PlayPositionalSound(this_02,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPumpkin::TakeSmashAttack(Sexy::RtWeakPtr<Zombie>) */

void __thiscall PlantPumpkin::TakeSmashAttack(PlantPumpkin *this,RtWeakPtr *param_2)

{
  bool bVar1;
  char cVar2;
  BoardEntity *pBVar3;
  PlantAnimRig_Pumpkin *pPVar4;
  Plant *this_00;
  float fVar5;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x148));
  if (bVar1) {
    pBVar3 = (BoardEntity *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x148));
    Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
    cVar2 = Shield::TakeSmashAttack(pBVar3);
    if (cVar2 != '\0') goto LAB_04d1111c;
  }
  pBVar3 = (BoardEntity *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140))
  ;
  Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
  cVar2 = Shield::TakeSmashAttack(pBVar3);
  if (cVar2 == '\0') {
    this_00 = *(Plant **)(this + 0x10);
    fVar5 = (float)FUN_04d0dcc0(*(undefined4 *)(this_00 + 0xd8));
    if (*(float *)(this + 0x150) < fVar5) {
      Plant::SetHealth(this_00,fVar5 - *(float *)(this + 0x150));
    }
    else {
      cVar2 = FUN_04d0dcd0(this_00);
      if (cVar2 == '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)asStack_58,(RtWeakPtrBase *)param_2);
        PlantTupistraStalker::TakeSmashAttack(this,(RtWeakPtr<Sexy::SoundResource> *)asStack_58);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58)
        ;
      }
      else {
        this[0x154] = (PlantPumpkin)0x1;
        pPVar4 = (PlantAnimRig_Pumpkin *)FUN_04d0f294(this_00);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string(asStack_58,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   aRStack_60,asStack_58);
        PlantAnimRig_Pumpkin::PlayDeathAnim(pPVar4,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string(asStack_58);
        nop();
        Sexy::RtId::~RtId(aRStack_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
      }
    }
  }
LAB_04d1111c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

