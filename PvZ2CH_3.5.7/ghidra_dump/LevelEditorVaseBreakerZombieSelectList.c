// Class: LevelEditorVaseBreakerZombieSelectList


/* LevelEditorVaseBreakerZombieSelectList::~LevelEditorVaseBreakerZombieSelectList() */

void __thiscall
LevelEditorVaseBreakerZombieSelectList::~LevelEditorVaseBreakerZombieSelectList
          (LevelEditorVaseBreakerZombieSelectList *this)

{
  *(undefined ***)this = &PTR_GetClass_0696ceb0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0696d1f8;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x120));
  LevelEditorZombieSelectList::~LevelEditorZombieSelectList((LevelEditorZombieSelectList *)this);
  return;
}


/* LevelEditorVaseBreakerZombieSelectList::~LevelEditorVaseBreakerZombieSelectList() */

void __thiscall
LevelEditorVaseBreakerZombieSelectList::~LevelEditorVaseBreakerZombieSelectList
          (LevelEditorVaseBreakerZombieSelectList *this)

{
  ~LevelEditorVaseBreakerZombieSelectList(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorVaseBreakerZombieSelectList::LevelEditorVaseBreakerZombieSelectList() */

void __thiscall
LevelEditorVaseBreakerZombieSelectList::LevelEditorVaseBreakerZombieSelectList
          (LevelEditorVaseBreakerZombieSelectList *this)

{
  LevelEditorZombieSelectList::LevelEditorZombieSelectList((LevelEditorZombieSelectList *)this);
  *(undefined ***)this = &PTR_GetClass_0696ceb0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0696d1f8;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x120));
  FUN_04b65658((function<void(Sexy::Graphics*)> *)(this + 0x120));
  return;
}


/* LevelEditorVaseBreakerZombieSelectList::SetFunc(std::function<void (LevelEditorCardInfo const&)>)
    */

void __thiscall
LevelEditorVaseBreakerZombieSelectList::SetFunc
          (LevelEditorVaseBreakerZombieSelectList *this,function *param_2)

{
  std::function<void(int,int,int,int,int,int,int,int)>::operator=
            ((function<void(int,int,int,int,int,int,int,int)> *)(this + 0x120),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorVaseBreakerZombieSelectList::RefreshZombiesByPage() */

void __thiscall
LevelEditorVaseBreakerZombieSelectList::RefreshZombiesByPage
          (LevelEditorVaseBreakerZombieSelectList *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  int *piVar12;
  ProfileMgr *this_00;
  LevelEditorVaseBreakerZombieSelect *this_01;
  long lVar13;
  string *psVar14;
  Widget *this_02;
  long *plVar15;
  int iVar16;
  int local_3c;
  undefined4 local_38 [4];
  function<void(int,std::string)> afStack_28 [32];
  long local_8;
  
  plVar15 = *(long **)(this + 0xf8);
  local_8 = ___stack_chk_guard;
  if (plVar15 == (long *)0x0) {
    this_02 = ::operator_new(0xd8);
    Sexy::Widget::Widget(this_02);
    *(Widget **)(this + 0xf8) = this_02;
    this_02[0x59] = (Widget)0x0;
    uVar7 = FUN_04b665cc(0x96);
    uVar8 = FUN_04b665cc(5);
    uVar9 = FUN_04b665cc(0x230);
    uVar10 = FUN_04b665cc(0x5a);
    (**(code **)(*(long *)this_02 + 0x198))(this_02,uVar7,uVar8,uVar9,uVar10);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
    plVar15 = *(long **)(this + 0xf8);
  }
  (**(code **)(*plVar15 + 0x80))(plVar15,1,1);
  iVar4 = FUN_04b665cc(0x4b);
  iVar1 = *(int *)(*(long *)(this + 0xf8) + 0x50);
  iVar16 = *(int *)(this + 0xe8) * 7;
  local_3c = iVar16 + 7;
  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
  local_38[0] = FUN_04b65694(*(undefined8 *)(lVar11 + 0x50),*(undefined8 *)(lVar11 + 0x58));
  piVar12 = eastl::min_alt<int>(&local_3c,(int *)local_38);
  iVar2 = *piVar12;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  if (iVar16 < iVar2) {
    lVar11 = (long)iVar16;
    do {
      iVar5 = FUN_04b665cc(0);
      iVar3 = iVar16 % 7;
      iVar6 = FUN_04b665cc(0x5a);
      iVar16 = iVar16 + 1;
      Sexy::Insets::Insets
                ((Insets *)local_38,iVar3 * (iVar4 + (iVar4 * -7 + iVar1) / 6),iVar5,iVar4,iVar6);
      this_01 = ::operator_new(0x120);
      LevelEditorVaseBreakerZombieSelect::LevelEditorVaseBreakerZombieSelect(this_01);
      (**(code **)(*(long *)this_01 + 0x1a0))(this_01,(Insets *)local_38);
      lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
      psVar14 = (string *)FUN_04b656a0(*(undefined8 *)(lVar13 + 0x50),lVar11);
      LevelEditorZombieDraggable::Init((LevelEditorZombieDraggable *)this_01,psVar14);
      std::function<void(int,std::string)>::function(afStack_28,(function *)(this + 0x120));
      LevelEditorVaseBreakerZombieSelect::SetFunc(this_01,afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function
                ((function<bool(Sexy::Touch_const&)> *)afStack_28);
      (**(code **)(**(long **)(this + 0xf8) + 0x60))(*(long **)(this + 0xf8),this_01);
      lVar11 = lVar11 + 1;
    } while (iVar16 != iVar2);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

