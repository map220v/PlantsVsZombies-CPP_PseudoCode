// Class: ActionPurchaseRedeem


/* ActionPurchaseRedeem::StaticGetClass() */

long * ActionPurchaseRedeem::StaticGetClass(void)

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
  uVar2 = WorldMapAction::StaticGetClass();
  (*pcVar3)(plVar1,"ActionPurchaseRedeem",uVar2,StaticNew);
  return sClass;
}


/* ActionPurchaseRedeem::GetClass() const */

long * ActionPurchaseRedeem::GetClass(void)

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
  uVar2 = WorldMapAction::StaticGetClass();
  (*pcVar3)(plVar1,"ActionPurchaseRedeem",uVar2,StaticNew);
  return sClass;
}


/* ActionPurchaseRedeem::Start() */

void __thiscall ActionPurchaseRedeem::Start(ActionPurchaseRedeem *this)

{
  int iVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  map *pmVar2;
  float fVar3;
  
  Sexy::OutputDebugStrF((wchar_t *)"ActionPurchaseRedeem::Start");
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pmVar2 = (map *)std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_rightmost(this_00);
  iVar1 = PurchaseBroker::GetRedeemOrders(pmVar2);
  if (iVar1 < 0) {
    this[0x14] = (ActionPurchaseRedeem)0x0;
    fVar3 = (float)PVZ_T();
    *(float *)(this + 0x48) = fVar3 + 30.0;
  }
  else {
    this[0x14] = (ActionPurchaseRedeem)0x1;
  }
  this[9] = (ActionPurchaseRedeem)0x0;
  return;
}


/* ActionPurchaseRedeem::Update() */

void __thiscall ActionPurchaseRedeem::Update(ActionPurchaseRedeem *this)

{
  byte extraout_var;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  map *pmVar1;
  float fVar2;
  
  if (this[0x14] == (ActionPurchaseRedeem)0x0) {
    fVar2 = (float)PVZ_T();
    if (*(float *)(this + 0x48) <= fVar2) {
      this[0x14] = (ActionPurchaseRedeem)0x1;
      return;
    }
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pmVar1 = (map *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_rightmost(this_00);
    PurchaseBroker::GetRedeemOrders(pmVar1);
    this[0x14] = (ActionPurchaseRedeem)((byte)~extraout_var >> 7);
  }
  else {
    this[9] = (ActionPurchaseRedeem)0x1;
  }
  return;
}


/* ActionPurchaseRedeem::ActionPurchaseRedeem() */

void __thiscall ActionPurchaseRedeem::ActionPurchaseRedeem(ActionPurchaseRedeem *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06859dc0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x18));
  return;
}


/* ActionPurchaseRedeem::StaticNew() */

ActionPurchaseRedeem * ActionPurchaseRedeem::StaticNew(void)

{
  ActionPurchaseRedeem *this;
  
  this = ::operator_new(0x50);
  ActionPurchaseRedeem(this);
  return this;
}


/* ActionPurchaseRedeem::CreateIfNeed(bool&) */

ActionPurchaseRedeem * ActionPurchaseRedeem::CreateIfNeed(bool *param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  PurchaseBroker *this_00;
  ActionPurchaseRedeem *this_01;
  
  if (*param_1 == false) {
    this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PurchaseBroker *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_rightmost(this);
    PurchaseBroker::CheckRedeemOrders(this_00);
    this_01 = ::operator_new(0x50);
    this_01[8] = (ActionPurchaseRedeem)0x0;
    this_01[9] = (ActionPurchaseRedeem)0x0;
    this_01[10] = (ActionPurchaseRedeem)0x0;
    *(undefined4 *)(this_01 + 0xc) = 0;
    *(undefined4 *)(this_01 + 0x10) = 0;
    this_01[0x14] = (ActionPurchaseRedeem)0x0;
    *(undefined4 *)(this_01 + 0x20) = 0;
    *(undefined8 *)this_01 = 0;
    *(undefined8 *)(this_01 + 0x28) = 0;
    *(undefined8 *)(this_01 + 0x30) = 0;
    *(undefined8 *)(this_01 + 0x38) = 0;
    *(undefined8 *)(this_01 + 0x40) = 0;
    *(undefined4 *)(this_01 + 0x48) = 0;
    ActionPurchaseRedeem(this_01);
    return this_01;
  }
  Sexy::OutputDebugStrF((wchar_t *)"ActionPurchaseRedeem::CreateIfNeed has  tutorial");
  return (ActionPurchaseRedeem *)0x0;
}


/* ActionPurchaseRedeem::~ActionPurchaseRedeem() */

void __thiscall ActionPurchaseRedeem::~ActionPurchaseRedeem(ActionPurchaseRedeem *this)

{
  *(undefined ***)this = &PTR_GetClass_06859dc0;
  std::
  map<std::string,Sexy::RedeemInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RedeemInfo>>>
  ::~map((map<std::string,Sexy::RedeemInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RedeemInfo>>>
          *)(this + 0x18));
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionPurchaseRedeem::~ActionPurchaseRedeem() */

void __thiscall ActionPurchaseRedeem::~ActionPurchaseRedeem(ActionPurchaseRedeem *this)

{
  ~ActionPurchaseRedeem(this);
  AK::FreeHook(this);
  return;
}

