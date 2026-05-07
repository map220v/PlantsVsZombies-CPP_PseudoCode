// Class: PlantWarsLeaderBoardLine


/* PlantWarsLeaderBoardLine::~PlantWarsLeaderBoardLine() */

void __thiscall PlantWarsLeaderBoardLine::~PlantWarsLeaderBoardLine(PlantWarsLeaderBoardLine *this)

{
  *(undefined ***)this = &PTR_GetClass_069be190;
  FUN_05476c50(this + 0x110);
  FUN_05476c50(this + 0x108);
  FUN_05476c50(this + 0x100);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PlantWarsLeaderBoardLine::~PlantWarsLeaderBoardLine() */

void __thiscall PlantWarsLeaderBoardLine::~PlantWarsLeaderBoardLine(PlantWarsLeaderBoardLine *this)

{
  ~PlantWarsLeaderBoardLine(this);
  AK::FreeHook(this);
  return;
}


/* PlantWarsLeaderBoardLine::PlantWarsLeaderBoardLine() */

void __thiscall PlantWarsLeaderBoardLine::PlantWarsLeaderBoardLine(PlantWarsLeaderBoardLine *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_069be190;
  FUN_05476574(this + 0x100);
  FUN_05476574(this + 0x108);
  FUN_05476574(this + 0x110);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsLeaderBoardLine::Draw(Sexy::Graphics*) */

void __thiscall PlantWarsLeaderBoardLine::Draw(PlantWarsLeaderBoardLine *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0xe0) == 0) {
    iVar1 = FUN_04d9f494(10);
    iVar2 = FUN_04d9f494(0x14);
    iVar3 = FUN_04d9f494(0x32);
    Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar3);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline)
    ;
    Sexy::Color::Color((Color *)aIStack_18,4);
    WriteWordInRect(param_1,this + 0x108,aIStack_28,uVar6,(Color *)aIStack_18,3,1);
  }
  else {
    iVar1 = FUN_04d9f494(10);
    iVar2 = FUN_04d9f494(0x14);
    iVar3 = FUN_04d9f494(0x32);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar3);
    DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0xe0));
  }
  if (*(long *)(this + 0xe8) != 0) {
    if (*(long *)(this + 0xf8) != 0) {
      iVar1 = FUN_04d9f494(0x46);
      iVar2 = FUN_04d9f494(10);
      Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar1,iVar1);
      DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0xf8));
    }
    if (*(long *)(this + 0xf0) != 0) {
      iVar1 = FUN_04d9f494(0x46);
      iVar2 = FUN_04d9f494(10);
      Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar1,iVar1);
      DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0xf0));
    }
    iVar1 = FUN_04d9f494(0x50);
    iVar2 = FUN_04d9f494(0x14);
    iVar3 = FUN_04d9f494(0x32);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar3);
    DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0xe8));
  }
  iVar1 = FUN_04d9f494(0x96);
  iVar2 = FUN_04d9f494(0x14);
  iVar3 = FUN_04d9f494(0xfa);
  iVar4 = FUN_04d9f494(0x32);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x100,aIStack_28,uVar6,aIStack_18,3,1);
  iVar2 = FUN_04d9f494(300);
  iVar1 = *(int *)(this + 0x50);
  iVar3 = FUN_04d9f494(0x14);
  iVar4 = FUN_04d9f494(0xfa);
  iVar5 = FUN_04d9f494(0x32);
  Sexy::Insets::Insets(aIStack_28,iVar1 - iVar2,iVar3,iVar4,iVar5);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x110,aIStack_28,uVar6,aIStack_18,3,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsLeaderBoardLine::InitHead(int) */

void __thiscall PlantWarsLeaderBoardLine::InitHead(PlantWarsLeaderBoardLine *this,int param_1)

{
  int iVar1;
  undefined8 uVar2;
  DIniFile *this_00;
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [16];
  string asStack_58 [16];
  DString aDStack_48 [16];
  int local_38 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetGameItemInfo(param_1,0x7fffffff,0);
  if (local_38[0] != 0) {
    uVar2 = StringHelper::ToImage(asStack_18,false);
    *(undefined8 *)(this + 0xe8) = uVar2;
    DSingleton<HeadshotConfig>::getInstance();
    nop();
    DString::DString(aDStack_48,param_1);
    DString::operator_cast_to_string(aDStack_48);
    std::string::string(asStack_58,"frame");
    iVar1 = DIniFile::getItemInt(this_00,asStack_68,asStack_58,1);
    std::string::~string(asStack_58);
    nop();
    std::string::~string(asStack_68);
    DString::~DString(aDStack_48);
    DString::DString((DString *)asStack_68,iVar1);
    ::operator+("IMAGE_UI_HEADSHOTFRAME_LV",(DString *)asStack_68);
    ::operator+((DString *)asStack_58,"_1");
    DString::operator_cast_to_string(aDStack_48);
    DString::~DString(aDStack_48);
    DString::~DString((DString *)asStack_58);
    DString::~DString((DString *)asStack_68);
    uVar2 = StringHelper::ToImage(asStack_78,false);
    *(undefined8 *)(this + 0xf0) = uVar2;
    DString::DString((DString *)asStack_68,iVar1);
    ::operator+("IMAGE_UI_HEADSHOTFRAME_LV",(DString *)asStack_68);
    ::operator+((DString *)asStack_58,"_2");
    DString::operator_cast_to_string(aDStack_48);
    DString::~DString(aDStack_48);
    DString::~DString((DString *)asStack_58);
    DString::~DString((DString *)asStack_68);
    uVar2 = StringHelper::ToImage(asStack_70,false);
    *(undefined8 *)(this + 0xf8) = uVar2;
    std::string::~string(asStack_70);
    std::string::~string(asStack_78);
  }
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsLeaderBoardLine::InitView(int, PlantWarsLeaderBoardLineData const&) */

void __thiscall
PlantWarsLeaderBoardLine::InitView
          (PlantWarsLeaderBoardLine *this,int param_1,PlantWarsLeaderBoardLineData *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  string *extraout_x1;
  string asStack_10 [8];
  long local_8;
  
  uVar1 = *(uint *)(param_2 + 4);
  *(int *)(this + 0xd4) = param_1;
  *(uint *)(this + 0xd8) = uVar1;
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d",asStack_10,(ulong)uVar1);
  FUN_054766c8(this + 0x110,asStack_10);
  FUN_05476c50(asStack_10);
  Sexy::StrFormat(L"%d",asStack_10,(ulong)*(uint *)(this + 0xd4));
  FUN_054766c8(this + 0x108,asStack_10);
  FUN_05476c50(asStack_10);
  Sexy::UTF8StringToWString((Sexy *)(param_2 + 0x10),extraout_x1);
  FUN_054766c8(this + 0x100,asStack_10);
  FUN_05476c50(asStack_10);
  *(undefined8 *)(this + 0xe0) = 0;
  if (*(int *)(this + 0xd4) < 3) {
    Sexy::StrFormat("IMAGE_UI_DIALOG_ASSET_RANK%d",asStack_10);
    uVar2 = StringHelper::ToImage(asStack_10,false);
    *(undefined8 *)(this + 0xe0) = uVar2;
    std::string::~string(asStack_10);
  }
  InitHead(this,*(int *)(param_2 + 8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

