// Class: LevelEditorTowerDefendRoad


/* LevelEditorTowerDefendRoad::~LevelEditorTowerDefendRoad() */

void __thiscall
LevelEditorTowerDefendRoad::~LevelEditorTowerDefendRoad(LevelEditorTowerDefendRoad *this)

{
  *(undefined ***)this = &PTR_GetClass_06961400;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0xf8));
  PakRecord::~PakRecord((PakRecord *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorTowerDefendRoad::~LevelEditorTowerDefendRoad() */

void __thiscall
LevelEditorTowerDefendRoad::~LevelEditorTowerDefendRoad(LevelEditorTowerDefendRoad *this)

{
  ~LevelEditorTowerDefendRoad(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorTowerDefendRoad::LevelEditorTowerDefendRoad() */

void __thiscall
LevelEditorTowerDefendRoad::LevelEditorTowerDefendRoad(LevelEditorTowerDefendRoad *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06961400;
  LevelEditorCardInfo::LevelEditorCardInfo((LevelEditorCardInfo *)(this + 0xe8));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0xf8));
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xd8) = 0xffffffff;
  *(undefined4 *)(this + 0xd4) = 0xffffffff;
  return;
}


/* LevelEditorTowerDefendRoad::TouchEnded(Sexy::Touch const&) */

void __thiscall
LevelEditorTowerDefendRoad::TouchEnded(LevelEditorTowerDefendRoad *this,Touch *param_1)

{
  if (*(int *)(this + 0xd8) != (int)*(undefined8 *)param_1) {
    return;
  }
  std::function<void(LevelEditorCardInfo_const&)>::operator()
            ((function<void(LevelEditorCardInfo_const&)> *)(this + 0xf8),
             (LevelEditorCardInfo *)(this + 0xe8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorTowerDefendRoad::Init(int) */

void __thiscall LevelEditorTowerDefendRoad::Init(LevelEditorTowerDefendRoad *this,int param_1)

{
  InfoClass *pIVar1;
  ResourceInfo *pRVar2;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0xe8) = 7;
  *(int *)(this + 0xd4) = param_1;
  local_8 = ___stack_chk_guard;
  thunk_FUN_05475e00((string *)(this + 0xf0),&DAT_06b853c0 + (long)param_1 * 8);
  pIVar1 = Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>
                     (*(ResourceManager **)(gLawnApp + 0x848),(string *)(this + 0xf0));
  if (pIVar1 != (InfoClass *)0x0) {
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
    *(ResourceInfo **)(this + 0xe0) = pRVar2;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorTowerDefendRoad::SetClickFunction(std::function<void (LevelEditorCardInfo const&)>) */

void __thiscall
LevelEditorTowerDefendRoad::SetClickFunction(LevelEditorTowerDefendRoad *this,function *param_2)

{
  std::function<void(int,int,int,int,int,int,int,int)>::operator=
            ((function<void(int,int,int,int,int,int,int,int)> *)(this + 0xf8),param_2);
  return;
}


/* LevelEditorTowerDefendRoad::Draw(Sexy::Graphics*) */

void __thiscall LevelEditorTowerDefendRoad::Draw(LevelEditorTowerDefendRoad *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  Image *pIVar3;
  
  pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b856c8);
  Sexy::Graphics::DrawImage(param_1,pIVar3,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  pIVar3 = *(Image **)(this + 0xe0);
  if (pIVar3 != (Image *)0x0) {
    iVar1 = FUN_04b334ec(10);
    iVar2 = FUN_04b334ec(0x14);
    Sexy::Graphics::DrawImage
              (param_1,pIVar3,iVar1,iVar1,*(int *)(this + 0x50) - iVar2,
               *(int *)(this + 0x54) - iVar2);
    return;
  }
  return;
}

