// Class: PlantDisplayFrame


/* PlantDisplayFrame::GetPlantDisplayPtr() */

undefined8 __thiscall PlantDisplayFrame::GetPlantDisplayPtr(PlantDisplayFrame *this)

{
  return *(undefined8 *)(this + 0xe0);
}


/* PlantDisplayFrame::ButtonPress(int) */

int PlantDisplayFrame::ButtonPress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to PlantDisplayFrame::ButtonPress(int) */

void __thiscall PlantDisplayFrame::ButtonPress(PlantDisplayFrame *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* PlantDisplayFrame::InitView() */

void __thiscall PlantDisplayFrame::InitView(PlantDisplayFrame *this)

{
  int iVar1;
  string *psVar2;
  
  psVar2 = ::operator_new(0x178);
  PlantDisplayBoard::PlantDisplayBoard((PlantDisplayBoard *)psVar2,1,0);
  *(string **)(this + 0xe0) = psVar2;
  PlantDisplayBoard::SetPlantName(psVar2);
  iVar1 = FUN_03dd24b8();
  (**(code **)(**(long **)(this + 0xe0) + 0x198))
            (*(long **)(this + 0xe0),-iVar1,(*(int *)(this + 0xf4) - *(int *)(this + 0x4c)) - iVar1,
             *(undefined4 *)(this + 0xf8),*(undefined4 *)(this + 0xfc));
  PlantDisplayBoard::DisplayNexyAction(*(PlantDisplayBoard **)(this + 0xe0));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe0));
  PlantDisplayBoard::HideDisplayItems(*(PlantDisplayBoard **)(this + 0xe0),true);
  return;
}


/* PlantDisplayFrame::~PlantDisplayFrame() */

void __thiscall PlantDisplayFrame::~PlantDisplayFrame(PlantDisplayFrame *this)

{
  *(undefined ***)this = &PTR_GetClass_0677d600;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0677d930;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  *(undefined8 *)(this + 0xe0) = 0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x100));
  std::string::~string((string *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PlantDisplayFrame::~PlantDisplayFrame() */

void __thiscall PlantDisplayFrame::~PlantDisplayFrame(PlantDisplayFrame *this)

{
  ~PlantDisplayFrame(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDisplayFrame::PlantDisplayFrame(std::string const&, Sexy::TRect<int> const&, std::string
   const&) */

void __thiscall
PlantDisplayFrame::PlantDisplayFrame
          (PlantDisplayFrame *this,string *param_1,TRect *param_2,string *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  CachedUIResourcePtr<Sexy::Image> aCStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0677d600;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0677d930;
  Set8BytesTo0(this + 0xe8);
  Sexy::Insets::Insets((Insets *)(this + 0xf0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x100));
  *(undefined8 *)(this + 0xe0) = 0;
  thunk_FUN_05475e00(this + 0xe8,param_1);
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0xf0) = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0xf8) = uVar1;
  pcVar2 = (char *)FUN_0547429c(param_3);
  CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr(aCStack_30,pcVar2);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)aCStack_30);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x100),(RtWeakPtr *)aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr(aCStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDisplayFrame::ButtonDepress(int) */

void PlantDisplayFrame::ButtonDepress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  return;
}


/* non-virtual thunk to PlantDisplayFrame::ButtonDepress(int) */

void __thiscall PlantDisplayFrame::ButtonDepress(PlantDisplayFrame *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}


/* PlantDisplayFrame::SetVisible(bool) */

void __thiscall PlantDisplayFrame::SetVisible(PlantDisplayFrame *this,bool param_1)

{
  long *plVar1;
  
  Sexy::Widget::SetVisible((Widget *)this,param_1);
  if ((*(long *)(this + 0xe0) != 0) &&
     (plVar1 = *(long **)(*(long *)(this + 0xe0) + 0xf0), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 800))(plVar1,!param_1);
  }
  return;
}


/* PlantDisplayFrame::Draw(Sexy::Graphics*) */

void __thiscall PlantDisplayFrame::Draw(PlantDisplayFrame *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  ResourceInfo *pRVar3;
  
  nop();
  iVar1 = *(int *)(this + 0xf4);
  iVar2 = *(int *)(this + 0x4c);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x100));
  Sexy::Graphics::DrawImage
            (param_1,(Image *)pRVar3,0,iVar1 - iVar2,*(int *)(this + 0xf8),*(int *)(this + 0xfc));
  return;
}

