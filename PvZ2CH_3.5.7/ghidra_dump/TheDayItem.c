// Class: TheDayItem


/* TheDayItem::~TheDayItem() */

void __thiscall TheDayItem::~TheDayItem(TheDayItem *this)

{
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x98));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x80));
  std::vector<TheDayRewardItem,std::allocator<TheDayRewardItem>>::~vector
            ((vector<TheDayRewardItem,std::allocator<TheDayRewardItem>> *)(this + 0x68));
  std::vector<TheDayRewardItem,std::allocator<TheDayRewardItem>>::~vector
            ((vector<TheDayRewardItem,std::allocator<TheDayRewardItem>> *)(this + 0x50));
  std::string::~string((string *)(this + 0x48));
  std::string::~string((string *)(this + 0x40));
  std::string::~string((string *)(this + 0x38));
  std::string::~string((string *)(this + 0x30));
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  return;
}


/* TheDayItem::TheDayItem() */

void __thiscall TheDayItem::TheDayItem(TheDayItem *this)

{
  Set8BytesTo0(this + 8);
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x20);
  Set8BytesTo0(this + 0x28);
  Set8BytesTo0(this + 0x30);
  Set8BytesTo0(this + 0x38);
  Set8BytesTo0(this + 0x40);
  Set8BytesTo0(this + 0x48);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x80));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x98));
  return;
}


/* TheDayItem::TheDayItem(TheDayItem const&) */

void __thiscall TheDayItem::TheDayItem(TheDayItem *this,TheDayItem *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  FUN_05475d88(this + 8,param_1 + 8);
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  FUN_05475d88(this + 0x20,param_1 + 0x20);
  FUN_05475d88(this + 0x28,param_1 + 0x28);
  FUN_05475d88(this + 0x30,param_1 + 0x30);
  FUN_05475d88(this + 0x38,param_1 + 0x38);
  FUN_05475d88(this + 0x40,param_1 + 0x40);
  FUN_05475d88(this + 0x48,param_1 + 0x48);
  std::vector<TheDayRewardItem,std::allocator<TheDayRewardItem>>::vector
            ((vector<TheDayRewardItem,std::allocator<TheDayRewardItem>> *)(this + 0x50),
             (vector *)(param_1 + 0x50));
  std::vector<TheDayRewardItem,std::allocator<TheDayRewardItem>>::vector
            ((vector<TheDayRewardItem,std::allocator<TheDayRewardItem>> *)(this + 0x68),
             (vector *)(param_1 + 0x68));
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x80),
             (vector *)(param_1 + 0x80));
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x98),(vector *)(param_1 + 0x98));
  return;
}


/* TheDayItem::TEMPNAMEPLACEHOLDERVALUE(TheDayItem const&) */

TheDayItem * __thiscall TheDayItem::operator=(TheDayItem *this,TheDayItem *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  thunk_FUN_05475e00(this + 0x10,param_1 + 0x10);
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  thunk_FUN_05475e00(this + 0x20,param_1 + 0x20);
  thunk_FUN_05475e00(this + 0x28,param_1 + 0x28);
  thunk_FUN_05475e00(this + 0x30,param_1 + 0x30);
  thunk_FUN_05475e00(this + 0x38,param_1 + 0x38);
  thunk_FUN_05475e00(this + 0x40,param_1 + 0x40);
  thunk_FUN_05475e00(this + 0x48,param_1 + 0x48);
  std::vector<TheDayRewardItem,std::allocator<TheDayRewardItem>>::operator=
            ((vector<TheDayRewardItem,std::allocator<TheDayRewardItem>> *)(this + 0x50),
             (vector *)(param_1 + 0x50));
  std::vector<TheDayRewardItem,std::allocator<TheDayRewardItem>>::operator=
            ((vector<TheDayRewardItem,std::allocator<TheDayRewardItem>> *)(this + 0x68),
             (vector *)(param_1 + 0x68));
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x80),
             (vector *)(param_1 + 0x80));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x98),(vector *)(param_1 + 0x98));
  return this;
}


/* TheDayItem::TheDayItem(TheDayItem&&) */

void __thiscall TheDayItem::TheDayItem(TheDayItem *this,TheDayItem *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  FUN_05474148(this + 8,param_1 + 8);
  FUN_05474148(this + 0x10,param_1 + 0x10);
  FUN_05474148(this + 0x18,param_1 + 0x18);
  FUN_05474148(this + 0x20,param_1 + 0x20);
  FUN_05474148(this + 0x28,param_1 + 0x28);
  FUN_05474148(this + 0x30,param_1 + 0x30);
  FUN_05474148(this + 0x38,param_1 + 0x38);
  FUN_05474148(this + 0x40,param_1 + 0x40);
  FUN_05474148(this + 0x48,param_1 + 0x48);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x50),(vector *)(param_1 + 0x50));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x68),(vector *)(param_1 + 0x68));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x80),(vector *)(param_1 + 0x80));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x98),(vector *)(param_1 + 0x98));
  return;
}

