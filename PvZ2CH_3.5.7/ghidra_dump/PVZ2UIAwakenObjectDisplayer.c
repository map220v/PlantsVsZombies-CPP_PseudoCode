// Class: PVZ2UIAwakenObjectDisplayer


/* PVZ2UIAwakenObjectDisplayer::~PVZ2UIAwakenObjectDisplayer() */

void __thiscall
PVZ2UIAwakenObjectDisplayer::~PVZ2UIAwakenObjectDisplayer(PVZ2UIAwakenObjectDisplayer *this)

{
  *(undefined ***)this = &PTR_GetClass_0683a210;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PVZ2UIAwakenObjectDisplayer::~PVZ2UIAwakenObjectDisplayer() */

void __thiscall
PVZ2UIAwakenObjectDisplayer::~PVZ2UIAwakenObjectDisplayer(PVZ2UIAwakenObjectDisplayer *this)

{
  ~PVZ2UIAwakenObjectDisplayer(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAwakenObjectDisplayer::Resize(int, int, int, int) */

void __thiscall
PVZ2UIAwakenObjectDisplayer::Resize
          (PVZ2UIAwakenObjectDisplayer *this,int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  fVar1 = (float)FUN_04377390(0x41880000);
  fVar2 = (float)FUN_04377390(0x428c0000);
  fVar3 = (float)FUN_04377390(0x42080000);
  fVar4 = (float)FUN_04377390(0x435c0000);
  Sexy::Insets::Insets(aIStack_18,(int)fVar1,(int)fVar2,(int)((float)param_3 - fVar3),(int)fVar4);
  (**(code **)(**(long **)(this + 0xe0) + 0x1a0))(*(long **)(this + 0xe0),aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAwakenObjectDisplayer::Draw(Sexy::Graphics*) */

void __thiscall
PVZ2UIAwakenObjectDisplayer::Draw(PVZ2UIAwakenObjectDisplayer *this,Graphics *param_1)

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
  Draw9SliceImage(param_1,aIStack_18,*(undefined8 *)(this + 0xe8));
  fVar2 = (float)FUN_04377390(0x41880000);
  fVar3 = (float)FUN_04377390(0x42080000);
  fVar4 = (float)FUN_04377390(0x42540000);
  Sexy::Insets::Insets
            (aIStack_28,(int)fVar2,(int)fVar2,(int)((float)*(int *)(this + 0x50) - fVar3),(int)fVar4
            );
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0xd8,aIStack_28,uVar1,aIStack_18,5,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAwakenObjectDisplayer::PVZ2UIAwakenObjectDisplayer(Sexy::RtWeakPtr<ObjectTypeDescriptor
   const>) */

void __thiscall
PVZ2UIAwakenObjectDisplayer::PVZ2UIAwakenObjectDisplayer
          (PVZ2UIAwakenObjectDisplayer *this,RtWeakPtr *param_2)

{
  PVZ2UIAwakenObjectDisplayer *pPVar1;
  bool bVar2;
  PVZ2UIGameObjectCard *pPVar3;
  RtObject *pRVar4;
  undefined8 uVar5;
  Plant aPStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  pPVar1 = this + 0xd8;
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  this[0xd1] = (PVZ2UIAwakenObjectDisplayer)0x0;
  *(undefined ***)this = &PTR_GetClass_0683a210;
  FUN_05476574(pPVar1);
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
  pPVar3 = ::operator_new(0x160);
  PVZ2UIGameObjectCard::PVZ2UIGameObjectCard(pPVar3,aRStack_10,1,0xfffffffe,0,1);
  *(PVZ2UIGameObjectCard **)(this + 0xe0) = pPVar3;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xe0));
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar2) {
    pRVar4 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    bVar2 = Sexy::RtObject::IsA<PlantType>(pRVar4);
    if (bVar2) {
      uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)
                         AlmanacSettings::IMAGE_UI_DIALOG_ASSET_CARD_GREEN);
      *(undefined8 *)(this + 0xe8) = uVar5;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
      Plant::GetFormattedNameString(aPStack_18,aRStack_10);
      FUN_054766c8(pPVar1,aPStack_18);
      FUN_05476c50(aPStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      goto LAB_04380bb4;
    }
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar2) {
    pRVar4 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    bVar2 = Sexy::RtObject::IsA<ZombieType>(pRVar4);
    if (bVar2) {
      uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)
                         AlmanacSettings::IMAGE_UI_DIALOG_ASSET_CARD_PURPLE);
      *(undefined8 *)(this + 0xe8) = uVar5;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
      Zombie::GetFormattedNameString((Zombie *)aPStack_18,aRStack_10);
      FUN_054766c8(pPVar1,(Zombie *)aPStack_18);
      FUN_05476c50((Zombie *)aPStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
  }
LAB_04380bb4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

