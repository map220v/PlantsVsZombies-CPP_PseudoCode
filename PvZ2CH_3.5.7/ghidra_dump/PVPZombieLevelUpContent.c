// Class: PVPZombieLevelUpContent


/* PVPZombieLevelUpContent::~PVPZombieLevelUpContent() */

void __thiscall PVPZombieLevelUpContent::~PVPZombieLevelUpContent(PVPZombieLevelUpContent *this)

{
  *(undefined ***)this = &PTR_GetClass_06952280;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::string::~string((string *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PVPZombieLevelUpContent::~PVPZombieLevelUpContent() */

void __thiscall PVPZombieLevelUpContent::~PVPZombieLevelUpContent(PVPZombieLevelUpContent *this)

{
  ~PVPZombieLevelUpContent(this);
  AK::FreeHook(this);
  return;
}


/* PVPZombieLevelUpContent::InitView() */

void __thiscall PVPZombieLevelUpContent::InitView(PVPZombieLevelUpContent *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  SalesProgressBar *this_00;
  code *pcVar4;
  
  pcVar4 = *(code **)(*(long *)this + 0x198);
  uVar1 = FUN_04afce4c(0x1b8);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82b50);
  iVar2 = SalesProgressBar::GetCurrentLevel(this_00);
  iVar3 = FUN_04afce4c(0x1e);
  (*pcVar4)(this,0,0,uVar1,iVar2 + iVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPZombieLevelUpContent::AddZombieBaseInfo() */

void __thiscall PVPZombieLevelUpContent::AddZombieBaseInfo(PVPZombieLevelUpContent *this)

{
  int iVar1;
  string *psVar2;
  PVZ2UIAlmanacInfoDisplayer *pPVar3;
  code *pcVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_20);
  pPVar3 = ::operator_new(0x100);
  PVZ2UIAlmanacInfoDisplayer::PVZ2UIAlmanacInfoDisplayer(pPVar3,aRStack_18,0,1,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  pcVar4 = *(code **)(*(long *)pPVar3 + 0x1a0);
  iVar1 = FUN_04afce4c(0);
  Sexy::Insets::Insets((Insets *)aRStack_18,iVar1,iVar1,*(int *)(this + 0x50),*(int *)(this + 0x54))
  ;
  (*pcVar4)(pPVar3,aRStack_18);
  (**(code **)(*(long *)this + 0x60))(this,pPVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPZombieLevelUpContent::PVPZombieLevelUpContent(std::string const&) */

void __thiscall
PVPZombieLevelUpContent::PVPZombieLevelUpContent(PVPZombieLevelUpContent *this,string *param_1)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06952280;
  FUN_05475d88(this + 0xd8,param_1);
  InitView(this);
  AddZombieBaseInfo(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPZombieLevelUpContent::DrawWord(Sexy::Graphics*) */

void __thiscall PVPZombieLevelUpContent::DrawWord(PVPZombieLevelUpContent *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  string *psVar8;
  ZombieType *this_00;
  long lVar9;
  ZombieType *this_01;
  long lVar10;
  PVPManager *this_02;
  long lVar11;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[PVP_ZOMBIE_LEVEL_UP_NEXT]");
  iVar2 = FUN_04afce4c(0x14);
  iVar3 = FUN_04afce4c(100);
  iVar4 = FUN_04afce4c(200);
  Sexy::Insets::Insets(aIStack_28,iVar2,iVar3,*(int *)(this + 0x50),iVar4);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_18,0x5f,0x51,0x22,0xff);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar7,aIStack_18,0,1);
  FUN_05476c50(auStack_30);
  psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar8);
  this_00 = (ZombieType *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_18);
  lVar9 = ZombieType::GetProps(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_18);
  TodStringTranslate(L"[PVP_ZOMBIE_LEVEL_UP_MAX]");
  cVar1 = std::vector<ZombieSkillInfo,std::allocator<ZombieSkillInfo>>::empty
                    ((vector<ZombieSkillInfo,std::allocator<ZombieSkillInfo>> *)(lVar9 + 0x150));
  if (cVar1 == '\0') {
    psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_18);
    nop();
    lVar10 = ZombieType::GetProps(this_01);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_18);
    this_02 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar11 = PVPManager::GetZombieData(this_02,(string *)(this + 0xd8));
    if ((lVar10 != 0) && (lVar11 != 0)) {
      iVar2 = *(int *)(lVar11 + 8);
      lVar10 = FUN_04afcc64(*(undefined8 *)(lVar10 + 0x150),*(undefined8 *)(lVar10 + 0x158));
      if ((ulong)(long)iVar2 < lVar10 + 1U) {
        psVar8 = (string *)FUN_04afcc70(*(undefined8 *)(lVar9 + 0x150),(long)(iVar2 + -1));
        Sexy::ToWString(psVar8);
        TodStringTranslate((wstring *)aIStack_28);
        FUN_054766c8(auStack_38,aIStack_18);
        FUN_05476c50(aIStack_18);
        FUN_05476c50(aIStack_28);
        TodStringTranslate(L"[PVP_ZOMBIE_LEVEL_UP_NEED_TIME]");
        StringHelper::ToTimeString
                  ((StringHelper *)0x1,(float)*(int *)(psVar8 + 0xc),*(int *)(psVar8 + 0xc));
        TodReplaceString((wstring *)aIStack_28,L"{CONTENT}",(wstring *)aIStack_18);
        FUN_05476c50(aIStack_18);
        FUN_05476c50(aIStack_28);
        iVar3 = FUN_04afce4c(0x14);
        iVar4 = FUN_04afce4c(0x32);
        iVar2 = *(int *)(this + 0x54);
        iVar5 = FUN_04afce4c(0x28);
        Sexy::Insets::Insets(aIStack_28,iVar3,iVar2 - iVar4,*(int *)(this + 0x50) - iVar5,iVar4);
        uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
        Sexy::Insets::Insets(aIStack_18,0x5f,0x51,0x22,0xff);
        WriteWordInRect(param_1,auStack_30,aIStack_28,uVar7,aIStack_18,5,1);
        FUN_05476c50(auStack_30);
      }
    }
  }
  iVar3 = FUN_04afce4c(0x14);
  iVar4 = FUN_04afce4c(0x82);
  iVar5 = FUN_04afce4c(0x28);
  iVar2 = *(int *)(this + 0x50);
  iVar6 = FUN_04afce4c(0x96);
  Sexy::Insets::Insets(aIStack_28,iVar3,iVar4,iVar2 - iVar5,*(int *)(this + 0x54) - iVar6);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_18,0x5f,0x51,0x22,0xff);
  WriteWordInRect(param_1,auStack_38,aIStack_28,uVar7,aIStack_18,5,1);
  FUN_05476c50(auStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPZombieLevelUpContent::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
PVPZombieLevelUpContent::DrawAll
          (PVPZombieLevelUpContent *this,ModalFlags *param_1,Graphics *param_2)

{
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  DrawWord(this,param_2);
  return;
}

