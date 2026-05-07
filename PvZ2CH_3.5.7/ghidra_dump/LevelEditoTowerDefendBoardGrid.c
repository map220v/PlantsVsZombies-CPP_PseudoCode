// Class: LevelEditoTowerDefendBoardGrid


/* LevelEditoTowerDefendBoardGrid::ClearData() */

void __thiscall LevelEditoTowerDefendBoardGrid::ClearData(LevelEditoTowerDefendBoardGrid *this)

{
  if (*(int *)(this + 0xe8) != 7) {
    (**(code **)(*(long *)this + 0x318))(this);
    return;
  }
  CustomLevelUtils::RemoveTowerDefendRoad(*(int *)(this + 0xdc),*(int *)(this + 0xd8));
  (**(code **)(*(long *)this + 0x318))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditoTowerDefendBoardGrid::Reload() */

void __thiscall LevelEditoTowerDefendBoardGrid::Reload(LevelEditoTowerDefendBoardGrid *this)

{
  char cVar1;
  string *__n;
  string asStack_10 [8];
  long local_8;
  
  *(undefined8 *)(this + 0x108) = 0;
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_10);
  __n = asStack_10;
  cVar1 = CustomLevelUtils::GetTowerDefendRoad
                    (*(int *)(this + 0xdc),*(int *)(this + 0xd8),asStack_10);
  if (cVar1 == '\0') {
    *(undefined4 *)(this + 0xe8) = 0;
    std::string::append((string *)(this + 0xf0),"",(size_t)__n);
  }
  else {
    *(undefined4 *)(this + 0xe8) = 7;
    thunk_FUN_05475e00(this + 0xf0,asStack_10);
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditoTowerDefendBoardGrid::~LevelEditoTowerDefendBoardGrid() */

void __thiscall
LevelEditoTowerDefendBoardGrid::~LevelEditoTowerDefendBoardGrid
          (LevelEditoTowerDefendBoardGrid *this)

{
  *(undefined ***)this = &PTR_GetClass_06960da0;
  LevelEditorBoardGrid::~LevelEditorBoardGrid((LevelEditorBoardGrid *)this);
  return;
}


/* LevelEditoTowerDefendBoardGrid::~LevelEditoTowerDefendBoardGrid() */

void __thiscall
LevelEditoTowerDefendBoardGrid::~LevelEditoTowerDefendBoardGrid
          (LevelEditoTowerDefendBoardGrid *this)

{
  ~LevelEditoTowerDefendBoardGrid(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditoTowerDefendBoardGrid::SetData(LevelEditorCardInfo const&) */

void __thiscall
LevelEditoTowerDefendBoardGrid::SetData
          (LevelEditoTowerDefendBoardGrid *this,LevelEditorCardInfo *param_1)

{
  GriditemBarrelZombieDes::operator=
            ((GriditemBarrelZombieDes *)(this + 0xe8),(GriditemBarrelZombieDes *)param_1);
  if (*(int *)(this + 0xe8) != 7) {
    (**(code **)(*(long *)this + 0x318))(this);
    return;
  }
  CustomLevelUtils::AddTowerDefendRoad
            (*(int *)(this + 0xdc),*(int *)(this + 0xd8),(string *)(this + 0xf0));
  (**(code **)(*(long *)this + 0x318))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditoTowerDefendBoardGrid::Draw(Sexy::Graphics*) */

void __thiscall
LevelEditoTowerDefendBoardGrid::Draw(LevelEditoTowerDefendBoardGrid *this,Graphics *param_1)

{
  InfoClass *pIVar1;
  ResourceInfo *pRVar2;
  Image *pIVar3;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  pIVar3 = *(Image **)(this + 0x108);
  local_8 = ___stack_chk_guard;
  if (pIVar3 == (Image *)0x0) {
    if (*(int *)(this + 0xe8) != 7) goto LAB_04b392cc;
    pIVar1 = Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>
                       (*(ResourceManager **)(gLawnApp + 0x848),(string *)(this + 0xf0));
    if (pIVar1 != (InfoClass *)0x0) {
      Sexy::ResourceInfoTypes::FontRes::GetFont();
      pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
      *(ResourceInfo **)(this + 0x108) = pRVar2;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    pIVar3 = *(Image **)(this + 0x108);
    if (pIVar3 == (Image *)0x0) goto LAB_04b392cc;
  }
  Sexy::Graphics::DrawImage(param_1,pIVar3,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
LAB_04b392cc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* LevelEditoTowerDefendBoardGrid::LevelEditoTowerDefendBoardGrid(int, int) */

void __thiscall
LevelEditoTowerDefendBoardGrid::LevelEditoTowerDefendBoardGrid
          (LevelEditoTowerDefendBoardGrid *this,int param_1,int param_2)

{
  LevelEditorBoardGrid::LevelEditorBoardGrid((LevelEditorBoardGrid *)this,param_1,param_2);
  this[0x100] = (LevelEditoTowerDefendBoardGrid)0x1;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined ***)this = &PTR_GetClass_06960da0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditoTowerDefendBoardGrid::TouchEnded(Sexy::Touch const&) */

void __thiscall
LevelEditoTowerDefendBoardGrid::TouchEnded(LevelEditoTowerDefendBoardGrid *this,Touch *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  LevelEditorMultifunctionAssembly *this_00;
  LevelEditorTowerDefendRoadSetting *this_01;
  undefined8 uVar6;
  int local_48;
  int local_44;
  string asStack_40 [8];
  int local_38;
  undefined4 local_34;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0xd4) == (int)*(undefined8 *)param_1) &&
     (this[0x100] != (LevelEditoTowerDefendBoardGrid)0x0)) {
    if (*(int *)(this + 0xe8) == 0) {
      this_01 = ::operator_new(0xe0);
      LevelEditorTowerDefendRoadSetting::LevelEditorTowerDefendRoadSetting(this_01);
      (**(code **)(*(long *)this + 0xd0))(&local_38,this);
      iVar1 = *(int *)(this + 0x50);
      uVar4 = FUN_04b334ec(0x168);
      uVar5 = FUN_04b334ec(0x174);
      (**(code **)(*(long *)this_01 + 0x198))(this_01,local_38 + iVar1,local_34,uVar4,uVar5);
      FUN_04b33500(this_01);
      uVar6 = LevelEditorUtil::ShowDialogWithTouchClose((Widget *)this_01,true);
      FUN_04b3314c(afStack_28,this,uVar6);
      LevelEditorTowerDefendRoadSetting::Init(this_01,afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    }
    else {
      this_00 = ::operator_new(0x120);
      LevelEditorMultifunctionAssembly::LevelEditorMultifunctionAssembly(this_00);
      (**(code **)(*(long *)this + 0xd0))(&local_48,this);
      iVar1 = *(int *)(this + 0x50);
      iVar2 = FUN_04b334ec(10);
      iVar3 = FUN_04b334ec(0x28);
      Sexy::Insets::Insets
                ((Insets *)&local_38,local_48 + iVar1 + iVar2,
                 local_44 + (*(int *)(this + 0x54) - iVar3) / 2,iVar3,iVar3);
      FUN_04b32c44(afStack_28,this_00,this);
      std::string::string(asStack_40,"delete");
      LevelEditorMultifunctionAssembly::AttachButton
                (this_00,1,(Insets *)&local_38,afStack_28,asStack_40);
      std::string::~string(asStack_40);
      nop();
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      UIUtil::ShowDialog((Widget *)this_00);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

