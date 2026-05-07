// Class: PVZ2UIAlmanacStat


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAlmanacStat::~PVZ2UIAlmanacStat() */

void __thiscall PVZ2UIAlmanacStat::~PVZ2UIAlmanacStat(PVZ2UIAlmanacStat *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0683a850;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Almanac");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ZombieAlmanac");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ZombieAlmanac_Dynamic");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  FUN_05476c50(this + 0xe0);
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIAlmanacStat::~PVZ2UIAlmanacStat() */

void __thiscall PVZ2UIAlmanacStat::~PVZ2UIAlmanacStat(PVZ2UIAlmanacStat *this)

{
  ~PVZ2UIAlmanacStat(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAlmanacStat::PVZ2UIAlmanacStat(bool, std::wstring const&, std::wstring const&,
   Sexy::Image*, float, bool, Sexy::Color) */

void __thiscall
PVZ2UIAlmanacStat::PVZ2UIAlmanacStat
          (undefined4 param_5,PVZ2UIAlmanacStat *this,PVZ2UIAlmanacStat param_1,undefined8 param_2,
          undefined8 param_3,undefined8 param_4,PVZ2UIAlmanacStat param_6,Insets *param_8)

{
  LawnApp *pLVar1;
  long lVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  this[0xd1] = param_1;
  *(undefined ***)this = &PTR_GetClass_0683a850;
  FUN_05477b24(this + 0xd8,param_2);
  FUN_05477b24(this + 0xe0,param_3);
  this[0xec] = param_6;
  *(undefined4 *)(this + 0xe8) = param_5;
  Sexy::Insets::Insets((Insets *)(this + 0xf8),param_8);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Almanac");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ZombieAlmanac");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ZombieAlmanac_Dynamic");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  lVar2 = ___stack_chk_guard;
  *(undefined8 *)(this + 0xf0) = param_4;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAlmanacStat::Draw(Sexy::Graphics*) */

void __thiscall PVZ2UIAlmanacStat::Draw(PVZ2UIAlmanacStat *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  PrimeTypeface *pPVar4;
  undefined8 uVar5;
  long lVar6;
  Insets *pIVar7;
  PVZ2UIAlmanacStat *pPVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  Insets aIStack_68 [16];
  Insets aIStack_58 [4];
  int local_54;
  Insets aIStack_48 [4];
  int local_44;
  int local_3c;
  Insets aIStack_38 [16];
  Insets aIStack_28 [8];
  int local_20;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Color::Color((Color *)aIStack_18,1);
  Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
  Sexy::Graphics::SetColorizeImages(param_1,true);
  Sexy::Graphics::DrawImage(param_1,*(Image **)(this + 0xf0),0,0);
  if (this[0xec] == (PVZ2UIAlmanacStat)0x0) {
    if (this[0xd1] == (PVZ2UIAlmanacStat)0x0) {
      pIVar7 = (Insets *)&DAT_06afe890;
    }
    else {
      pIVar7 = (Insets *)&DAT_06afdd00;
    }
    Sexy::Insets::Insets(aIStack_68,pIVar7);
  }
  else {
    Sexy::Color::Color((Color *)aIStack_68,1);
  }
  if (this[0xd1] == (PVZ2UIAlmanacStat)0x0) {
    pPVar4 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    fVar9 = (float)Sexy::PrimeTypeface::GetLineHeight(pPVar4);
  }
  else {
    pPVar4 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    fVar9 = (float)Sexy::PrimeTypeface::GetLineHeight(pPVar4);
  }
  iVar1 = FUN_043772fc(1);
  if (this[0xd1] == (PVZ2UIAlmanacStat)0x0) {
    pPVar4 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    fVar10 = (float)Sexy::PrimeTypeface::GetHeight(pPVar4);
  }
  else {
    pPVar4 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    fVar10 = (float)Sexy::PrimeTypeface::GetHeight(pPVar4);
  }
  iVar2 = FUN_043772fc(5);
  fVar11 = (float)FUN_04377390(0x40a00000);
  fVar11 = fVar11 + (float)*(int *)(*(long *)(this + 0xf0) + 0x38);
  Sexy::Insets::Insets
            (aIStack_58,(int)fVar11,(int)(float)-iVar1,(int)((float)*(int *)(this + 0x50) - fVar11),
             (int)fVar9);
  if (this[0xd1] == (PVZ2UIAlmanacStat)0x0) {
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  }
  else {
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  }
  Sexy::Insets::Insets(aIStack_18,aIStack_68);
  WriteWordInRect(param_1,this + 0xd8,aIStack_58,uVar5,aIStack_18,3,0);
  if (this[0xd1] == (PVZ2UIAlmanacStat)0x0) {
    pPVar4 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
    fVar9 = (float)Sexy::PrimeTypeface::GetLineHeight(pPVar4);
  }
  else {
    pPVar4 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_Outline);
    fVar9 = (float)Sexy::PrimeTypeface::GetLineHeight(pPVar4);
  }
  fVar12 = (float)FUN_04377390(0x3f800000);
  Sexy::Insets::Insets
            (aIStack_48,(int)fVar11,(int)(fVar10 + (float)local_54 + (float)iVar2),
             (int)((float)*(int *)(this + 0x50) - fVar11),(int)(fVar12 + fVar9));
  if (this[0xd1] == (PVZ2UIAlmanacStat)0x0) {
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
  }
  else {
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_Outline);
  }
  pPVar8 = this + 0xf8;
  if (this[0xd1] == (PVZ2UIAlmanacStat)0x0) {
    pPVar8 = (PVZ2UIAlmanacStat *)&DAT_06afe3d8;
  }
  Sexy::Insets::Insets(aIStack_18,(Insets *)pPVar8);
  WriteWordInRect(param_1,this + 0xe0,aIStack_48,uVar5,aIStack_18,3,0);
  iVar1 = *(int *)(*(long *)(this + 0xf0) + 0x3c);
  iVar3 = FUN_043772fc(6);
  iVar2 = FUN_043772fc(1);
  if (this[0xd1] == (PVZ2UIAlmanacStat)0x0) {
    lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       AlmanacStatSettings::IMAGE_UI_ALMANAC_PLANTS_PLANT_FUELBAR);
    iVar1 = iVar1 + iVar3;
    iVar2 = local_44 + local_3c + iVar2;
    if (iVar1 < iVar2) {
      iVar1 = iVar2;
    }
    Sexy::Insets::Insets(aIStack_38,0,iVar1,*(int *)(this + 0x50),*(int *)(lVar6 + 0x3c));
    Sexy::Insets::Insets(aIStack_18,aIStack_38);
    Draw3SliceImage(param_1,aIStack_18,lVar6);
    Sexy::Insets::Insets(aIStack_28,aIStack_38);
    local_20 = (int)((float)local_20 * *(float *)(this + 0xe8));
    Sexy::Insets::Insets(aIStack_18,aIStack_28);
    uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       AlmanacStatSettings::IMAGE_UI_ALMANAC_GENERAL_FUELBAR_FILL);
    Draw3SliceImage(param_1,aIStack_18,uVar5);
  }
  Sexy::Graphics::SetColorizeImages(param_1,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

