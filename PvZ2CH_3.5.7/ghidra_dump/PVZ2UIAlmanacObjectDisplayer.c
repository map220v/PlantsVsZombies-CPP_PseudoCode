// Class: PVZ2UIAlmanacObjectDisplayer


/* PVZ2UIAlmanacObjectDisplayer::~PVZ2UIAlmanacObjectDisplayer() */

void __thiscall
PVZ2UIAlmanacObjectDisplayer::~PVZ2UIAlmanacObjectDisplayer(PVZ2UIAlmanacObjectDisplayer *this)

{
  *(undefined ***)this = &PTR_GetClass_06839ea0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0683a1c8;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::string::~string((string *)(this + 0x100));
  FUN_05476c50(this + 0xe8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PVZ2UIAlmanacObjectDisplayer::~PVZ2UIAlmanacObjectDisplayer() */

void __thiscall
PVZ2UIAlmanacObjectDisplayer::~PVZ2UIAlmanacObjectDisplayer(PVZ2UIAlmanacObjectDisplayer *this)

{
  ~PVZ2UIAlmanacObjectDisplayer(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAlmanacObjectDisplayer::Draw(Sexy::Graphics*) */

void __thiscall
PVZ2UIAlmanacObjectDisplayer::Draw(PVZ2UIAlmanacObjectDisplayer *this,Graphics *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_38,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  Sexy::Insets::Insets(aIStack_18,aIStack_38);
  Draw9SliceImage(param_1,aIStack_18,*(undefined8 *)(this + 0xf8));
  fVar2 = (float)FUN_04377390(0x41880000);
  fVar3 = (float)FUN_04377390(0x42080000);
  fVar4 = (float)FUN_04377390(0x42540000);
  Sexy::Insets::Insets
            (aIStack_28,(int)fVar2,(int)fVar2,(int)((float)*(int *)(this + 0x50) - fVar3),(int)fVar4
            );
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0xe8,aIStack_28,uVar1,aIStack_18,5,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAlmanacObjectDisplayer::ButtonDepress(int) */

void __thiscall
PVZ2UIAlmanacObjectDisplayer::ButtonDepress(PVZ2UIAlmanacObjectDisplayer *this,int param_1)

{
  UIPlantPedia *this_00;
  PVZ2UIButton *this_01;
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 2) {
    this_00 = (UIPlantPedia *)UISingletonDialog<UIPlantPedia>::ShowDialog();
    UIPlantPedia::SetPlant(this_00,(string *)(this + 0x100));
    this_01 = *(PVZ2UIButton **)(this + 0x108);
    PVZ2UIImage::PVZ2UIImage(aPStack_78,AlmanacStatSettings::IMAGE_UI_GENERIC_CHECK,1);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,AlmanacStatSettings::IMAGE_UI_GENERIC_CHECK,1);
    PVZ2UIButton::SetDialogStates(this_01,aPStack_78,aPStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PVZ2UIAlmanacObjectDisplayer::ButtonDepress(int) */

void __thiscall
PVZ2UIAlmanacObjectDisplayer::ButtonDepress(PVZ2UIAlmanacObjectDisplayer *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAlmanacObjectDisplayer::Resize(int, int, int, int) */

void __thiscall
PVZ2UIAlmanacObjectDisplayer::Resize
          (PVZ2UIAlmanacObjectDisplayer *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  long *plVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  fVar7 = (float)FUN_04377390(0x41880000);
  fVar8 = (float)FUN_04377390(0x428c0000);
  fVar9 = (float)FUN_04377390(0x42080000);
  fVar10 = (float)FUN_04377390(0x435c0000);
  Sexy::Insets::Insets(aIStack_18,(int)fVar7,(int)fVar8,(int)((float)param_3 - fVar9),(int)fVar10);
  (**(code **)(**(long **)(this + 0xf0) + 0x1a0))(*(long **)(this + 0xf0),aIStack_18);
  plVar5 = *(long **)(this + 0x108);
  if (plVar5 != (long *)0x0) {
    pcVar6 = *(code **)(*plVar5 + 0x198);
    iVar1 = FUN_043772fc(0x32);
    uVar2 = FUN_043772fc(0x19);
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)
                         AlmanacStatSettings::IMAGE_UI_GENERIC_CHECK);
    uVar3 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    this_01 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)
                         AlmanacStatSettings::IMAGE_UI_GENERIC_CHECK);
    uVar4 = SalesProgressBar::GetCurrentLevel(this_01);
    (*pcVar6)(plVar5,param_3 - iVar1,uVar2,uVar3,uVar4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAlmanacObjectDisplayer::PVZ2UIAlmanacObjectDisplayer(Sexy::RtWeakPtr<ObjectTypeDescriptor
   const>) */

void __thiscall
PVZ2UIAlmanacObjectDisplayer::PVZ2UIAlmanacObjectDisplayer
          (PVZ2UIAlmanacObjectDisplayer *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  string *psVar1;
  PVZ2UIAlmanacObjectDisplayer *pPVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  PVZ2UIGameObjectCard *pPVar7;
  long lVar8;
  PlantPediaManager *pPVar9;
  PVZ2UIButton *pPVar10;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  RtObject *pRVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [56];
  long local_8;
  
  psVar1 = (string *)(this + 0x100);
  local_8 = ___stack_chk_guard;
  pPVar2 = this + 0xe8;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  this[0xe0] = (PVZ2UIAlmanacObjectDisplayer)0x0;
  *(undefined ***)this = &PTR_GetClass_06839ea0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0683a1c8;
  FUN_05476574(pPVar2);
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  Set8BytesTo0(psVar1);
  *(undefined8 *)(this + 0x108) = 0;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)param_2);
  pPVar7 = ::operator_new(0x160);
  PVZ2UIGameObjectCard::PVZ2UIGameObjectCard(pPVar7,aRStack_40,1,0xfffffffe,0,1);
  *(PVZ2UIGameObjectCard **)(this + 0xf0) = pPVar7;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xf0));
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  thunk_FUN_05475e00(psVar1,lVar8 + 8);
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)param_2);
  if (bVar3) {
    pRVar11 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    bVar3 = Sexy::RtObject::IsA<PlantType>(pRVar11);
    if (bVar3) {
      uVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)
                          AlmanacSettings::IMAGE_UI_DIALOG_ASSET_CARD_GREEN);
      *(undefined8 *)(this + 0xf8) = uVar12;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)param_2);
      Plant::GetFormattedNameString((Plant *)awStack_78,aRStack_40);
      FUN_054766c8(pPVar2,awStack_78);
      FUN_05476c50(awStack_78);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      pPVar9 = (PlantPediaManager *)Sexy::LazySingleton<PlantPediaManager>::GetInstancePtr();
      cVar4 = PlantPediaManager::IsPediaEnabled(pPVar9,psVar1);
      if (cVar4 != '\0') {
        FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
        Sexy::Color::Color((Color *)aRStack_40,1);
        pPVar10 = ::operator_new(0x300);
        PVZ2UIButton::PVZ2UIButton
                  (pPVar10,2,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aRStack_40);
        *(PVZ2UIButton **)(this + 0x108) = pPVar10;
        FUN_05476c50(awStack_78);
        nop();
        pPVar9 = (PlantPediaManager *)Sexy::LazySingleton<PlantPediaManager>::GetInstancePtr();
        cVar4 = PlantPediaManager::HasReceivedReward(pPVar9,psVar1);
        if (cVar4 == '\0') {
          pPVar10 = *(PVZ2UIButton **)(this + 0x108);
          puVar13 = AlmanacStatSettings::IMAGE_UI_GENERIC_CHECK_HINT;
        }
        else {
          pPVar10 = *(PVZ2UIButton **)(this + 0x108);
          puVar13 = AlmanacStatSettings::IMAGE_UI_GENERIC_CHECK;
        }
        PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,puVar13,1);
        PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_40,puVar13,1);
        PVZ2UIButton::SetDialogStates(pPVar10,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aRStack_40);
        pPVar10 = *(PVZ2UIButton **)(this + 0x108);
        this_00 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)
                             AlmanacStatSettings::IMAGE_UI_GENERIC_CHECK);
        iVar5 = LotteryResultProgressBar::GetCurrentLevel(this_00);
        this_01 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)
                             AlmanacStatSettings::IMAGE_UI_GENERIC_CHECK);
        iVar6 = SalesProgressBar::GetCurrentLevel(this_01);
        Sexy::Insets::Insets((Insets *)aRStack_40,0,0,iVar5,iVar6);
        PVZ2UIButton::SetContentsRect(pPVar10,(TRect *)aRStack_40);
        Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x108));
      }
      goto LAB_043808d0;
    }
  }
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)param_2);
  if (bVar3) {
    pRVar11 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    bVar3 = Sexy::RtObject::IsA<ZombieType>(pRVar11);
    if (bVar3) {
      uVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)
                          AlmanacSettings::IMAGE_UI_DIALOG_ASSET_CARD_PURPLE2);
      *(undefined8 *)(this + 0xf8) = uVar12;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)param_2);
      Zombie::GetFormattedNameString((Zombie *)awStack_78,aRStack_40);
      FUN_054766c8(pPVar2,(Zombie *)awStack_78);
      FUN_05476c50((Zombie *)awStack_78);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    }
  }
LAB_043808d0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

