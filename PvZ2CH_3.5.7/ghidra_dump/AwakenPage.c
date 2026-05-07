// Class: AwakenPage


/* AwakenPage::ScrollTargetReached(Sexy::ScrollWidget*) */

void AwakenPage::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to AwakenPage::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall AwakenPage::ScrollTargetReached(AwakenPage *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe0));
  return;
}


/* AwakenPage::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void AwakenPage::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to AwakenPage::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall AwakenPage::ScrollTargetInterrupted(AwakenPage *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe0));
  return;
}


/* AwakenPage::~AwakenPage() */

void __thiscall AwakenPage::~AwakenPage(AwakenPage *this)

{
  *(undefined ***)this = &PTR_GetClass_069552c0;
  *(undefined **)(this + 0xd8) = &DAT_06955600;
  *(undefined ***)(this + 0xe0) = &PTR__AwakenPage_06955648;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to AwakenPage::~AwakenPage() */

void __thiscall AwakenPage::~AwakenPage(AwakenPage *this)

{
  ~AwakenPage(this + -0xe0);
  return;
}


/* AwakenPage::~AwakenPage() */

void __thiscall AwakenPage::~AwakenPage(AwakenPage *this)

{
  ~AwakenPage(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AwakenPage::~AwakenPage() */

void __thiscall AwakenPage::~AwakenPage(AwakenPage *this)

{
  ~AwakenPage(this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AwakenPage::AwakenPage(ArenaAwakenWidget*, Sexy::RtWeakPtr<ObjectTypeDescriptor const>,
   Sexy::TRect<int>, bool) */

void __thiscall
AwakenPage::AwakenPage
          (AwakenPage *this,undefined8 param_1,RtWeakPtr *param_3,TRect *param_4,undefined1 param_5)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  RtObject *pRVar7;
  Widget *pWVar8;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  int local_38 [2];
  int local_30;
  int local_28 [2];
  int local_20;
  int local_18 [2];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xf0);
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_069552c0;
  *(undefined **)(this + 0xd8) = &DAT_06955600;
  *(undefined ***)(this + 0xe0) = &PTR__AwakenPage_06955648;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_00)
  ;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xf8));
  *(undefined8 *)(this + 0xe8) = param_1;
  PlantHeadshot::Resize((PlantHeadshot *)this,param_4);
  *(undefined8 *)(this + 0x100) = 0;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)this_00,param_3);
  iVar2 = FUN_04b22278(0x16);
  iVar3 = FUN_04b22278(0xf);
  iVar4 = FUN_04b22278(0x2c);
  iVar6 = *(int *)(this + 0x50);
  iVar5 = FUN_04b22278(0x139);
  Sexy::Insets::Insets((Insets *)local_38,iVar2,iVar3,iVar6 - iVar4,iVar5);
  pRVar7 = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  bVar1 = Sexy::RtObject::IsA<PlantType>(pRVar7);
  if (bVar1) {
    Sexy::Insets::Insets((Insets *)local_28,(Insets *)local_38);
    local_20 = FUN_04b22278(0x100);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)this_00);
    pWVar8 = ::operator_new(0x110);
    PVZ2UIAlmanacObjectDisplayer::PVZ2UIAlmanacObjectDisplayer
              ((PVZ2UIAlmanacObjectDisplayer *)pWVar8,(RtWeakPtr<Sexy::SoundResource> *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    (**(code **)(*(long *)pWVar8 + 0x1a0))(pWVar8,(Insets *)local_28);
    *(uint *)(pWVar8 + 0x60) = *(uint *)(pWVar8 + 0x60) | 0x10;
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,pWVar8);
    Sexy::Insets::Insets((Insets *)local_18,(Insets *)local_38);
    iVar6 = FUN_04b22278(0x10d);
    local_18[0] = local_18[0] + iVar6;
    local_10 = local_10 - iVar6;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)this_00);
    pWVar8 = ::operator_new(0x100);
    PVZ2UIAlmanacInfoDisplayer::PVZ2UIAlmanacInfoDisplayer
              ((PVZ2UIAlmanacInfoDisplayer *)pWVar8,aRStack_40,param_5,0,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    (**(code **)(*(long *)pWVar8 + 0x1a0))(pWVar8,(RtWeakPtr<Sexy::SoundResource> *)local_18);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,pWVar8);
  }
  else {
    pRVar7 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    bVar1 = Sexy::RtObject::IsA<ZombieType>(pRVar7);
    if (bVar1) {
      Sexy::Insets::Insets((Insets *)local_28,(Insets *)local_38);
      local_20 = FUN_04b22278(0x100);
      local_28[0] = (local_38[0] + local_30) - local_20;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)this_00);
      pWVar8 = ::operator_new(0x110);
      PVZ2UIAlmanacObjectDisplayer::PVZ2UIAlmanacObjectDisplayer
                ((PVZ2UIAlmanacObjectDisplayer *)pWVar8,(RtWeakPtr<Sexy::SoundResource> *)local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      (**(code **)(*(long *)pWVar8 + 0x1a0))(pWVar8,(Insets *)local_28);
      Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,pWVar8);
      Sexy::Insets::Insets((Insets *)local_18,(Insets *)local_38);
      iVar6 = FUN_04b22278(0x10d);
      local_10 = local_10 - iVar6;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)this_00);
      pWVar8 = ::operator_new(0x100);
      PVZ2UIAlmanacInfoDisplayer::PVZ2UIAlmanacInfoDisplayer
                ((PVZ2UIAlmanacInfoDisplayer *)pWVar8,aRStack_40,param_5,0,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      (**(code **)(*(long *)pWVar8 + 0x1a0))(pWVar8,(RtWeakPtr<Sexy::SoundResource> *)local_18);
      Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,pWVar8);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AwakenPage::ButtonPress(int) */

void AwakenPage::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Almanac_Buy_Press");
  return;
}


/* non-virtual thunk to AwakenPage::ButtonPress(int) */

void __thiscall AwakenPage::ButtonPress(AwakenPage *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* AwakenPage::ButtonDepress(int) */

void AwakenPage::ButtonDepress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Almanac_Buy_Release");
  return;
}


/* non-virtual thunk to AwakenPage::ButtonDepress(int) */

void __thiscall AwakenPage::ButtonDepress(AwakenPage *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}

