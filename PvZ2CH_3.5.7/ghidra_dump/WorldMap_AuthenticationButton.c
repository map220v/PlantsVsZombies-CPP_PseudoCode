// Class: WorldMap_AuthenticationButton


/* WorldMap_AuthenticationButton::OnNotyAuthenticationSuc(bool) */

void __thiscall
WorldMap_AuthenticationButton::OnNotyAuthenticationSuc
          (WorldMap_AuthenticationButton *this,bool param_1)

{
  if (param_1) {
    UIWidget::SetVisible((UIWidget *)this,false);
    _isVisible = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AuthenticationButton::StaticClassInit() */

void WorldMap_AuthenticationButton::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"WorldMap_AuthenticationButton");
    (*pcVar2)(plVar1,asStack_10,FUN_0394cfe8,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_AuthenticationButton::StaticGetClass() */

long * WorldMap_AuthenticationButton::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = UIEasyButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_AuthenticationButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_AuthenticationButton::GetClass() const */

long * WorldMap_AuthenticationButton::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = UIEasyButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_AuthenticationButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_AuthenticationButton::CheckActivated() */

void __thiscall WorldMap_AuthenticationButton::CheckActivated(WorldMap_AuthenticationButton *this)

{
  UIWidget::SetVisible((UIWidget *)this,false);
  _isVisible = 0;
  return;
}


/* WorldMap_AuthenticationButton::onWorldLoaded() */

void __thiscall WorldMap_AuthenticationButton::onWorldLoaded(WorldMap_AuthenticationButton *this)

{
  UIWidget::SetVisible((UIWidget *)this,false);
  _isVisible = 0;
  return;
}


/* WorldMap_AuthenticationButton::onButtonClicked() */

void WorldMap_AuthenticationButton::onButtonClicked(void)

{
  UINameAuthentication::ShowDialog(false);
  return;
}


/* WorldMap_AuthenticationButton::IsVisible() */

undefined1 WorldMap_AuthenticationButton::IsVisible(void)

{
  return _isVisible;
}


/* WorldMap_AuthenticationButton::~WorldMap_AuthenticationButton() */

void __thiscall
WorldMap_AuthenticationButton::~WorldMap_AuthenticationButton(WorldMap_AuthenticationButton *this)

{
  *(undefined ***)this = &PTR_GetClass_066d0910;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_AuthenticationButton_066d0ab8;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<PlatformType,std::allocator<PlatformType>>::~vector
            ((vector<PlatformType,std::allocator<PlatformType>> *)(this + 0x1d0));
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_AuthenticationButton::~WorldMap_AuthenticationButton() */

void __thiscall
WorldMap_AuthenticationButton::~WorldMap_AuthenticationButton(WorldMap_AuthenticationButton *this)

{
  ~WorldMap_AuthenticationButton(this + -0x10);
  return;
}


/* WorldMap_AuthenticationButton::~WorldMap_AuthenticationButton() */

void __thiscall
WorldMap_AuthenticationButton::~WorldMap_AuthenticationButton(WorldMap_AuthenticationButton *this)

{
  ~WorldMap_AuthenticationButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_AuthenticationButton::~WorldMap_AuthenticationButton() */

void __thiscall
WorldMap_AuthenticationButton::~WorldMap_AuthenticationButton(WorldMap_AuthenticationButton *this)

{
  ~WorldMap_AuthenticationButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AuthenticationButton::WorldMap_AuthenticationButton() */

void __thiscall
WorldMap_AuthenticationButton::WorldMap_AuthenticationButton(WorldMap_AuthenticationButton *this)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *this_00;
  undefined *puVar1;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 local_40;
  function<bool(Sexy::Touch_const&)> afStack_38 [48];
  long local_8;
  
  this_00 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1d0);
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_066d0910;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_AuthenticationButton_066d0ab8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(this_00);
  local_50 = 0x51;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0x5a;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0x59;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0x67;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0x4a;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0x59;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0x43;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0x44;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0x47;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0x71;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0x6f;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0x48;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 99;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0x49;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0x6d;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0x55;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0x5b;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0x73;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0x4f;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0x4d;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0x4e;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0x4b;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0x62;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0x50;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0x66;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0x76;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0x78;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0x79;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0x70;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0x82;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0x56;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0x86;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0x85;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0x8a;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0x88;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0x89;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0xa5;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 8;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 6;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0xb;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0x8b;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  local_50 = 0x8c;
  std::vector<PlatformType,std::allocator<PlatformType>>::push_back
            ((vector<PlatformType,std::allocator<PlatformType>> *)this_00,(PlatformType *)&local_50)
  ;
  std::string::string((string *)&local_50,"IMAGE_UI_HUD_WORLDMAP_NAME_AUTHENTICATION");
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  std::string::string((string *)&local_50,"Play_UI_Map_Select_Universe_Press");
  DEditorNode::setRootName((string *)this);
  std::string::~string((string *)&local_50);
  nop();
  std::string::string((string *)&local_50,"Play_UI_Map_Select_Universe_Release");
  UIEasyButtonWidget::SetSoundReleased((string *)this);
  std::string::~string((string *)&local_50);
  nop();
  FUN_0394ce58(afStack_38,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_38);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onWorldLoaded);
  Sexy::Delegate0::Delegate0<WorldMap_AuthenticationButton,void(WorldMap_AuthenticationButton::*)()>
            ((Delegate0 *)afStack_38,(string *)&local_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::WorldMapWorldLoaded,(Delegate0 *)afStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotyAuthenticationSuc);
  local_80 = CONCAT44(uStack_4c,local_50);
  uStack_78 = uStack_48;
  local_70 = local_40;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<WorldMap_AuthenticationButton,void(WorldMap_AuthenticationButton::*)(bool)>>
            ((MessageRouter *)puVar1,Message::NameAuthenticationSuc,&local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_AuthenticationButton::StaticNew() */

WorldMap_AuthenticationButton * WorldMap_AuthenticationButton::StaticNew(void)

{
  WorldMap_AuthenticationButton *this;
  
  this = ::operator_new(0x1e8);
  WorldMap_AuthenticationButton(this);
  return this;
}

