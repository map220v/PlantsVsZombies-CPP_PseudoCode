// Class: TopicItem


/* TopicItem::~TopicItem() */

void __thiscall TopicItem::~TopicItem(TopicItem *this)

{
  std::vector<RewardItem,std::allocator<RewardItem>>::~vector
            ((vector<RewardItem,std::allocator<RewardItem>> *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  std::string::~string((string *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TopicItem::TopicItem() */

void __thiscall TopicItem::TopicItem(TopicItem *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  std::string::string((string *)this,"act_1");
  nop();
  std::string::string((string *)(this + 8),"[CONSUMPTION_NOTIFY]");
  nop();
  std::string::string((string *)(this + 0x10),"IMAGE_UI_HUD_WORLDMAP_BIG_ICON_CONSUMPTION_1");
  nop();
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TopicItem::TEMPNAMEPLACEHOLDERVALUE(TopicItem&&) */

TopicItem * __thiscall TopicItem::operator=(TopicItem *this,TopicItem *param_1)

{
  FUN_05474278();
  FUN_05474278(this + 8,param_1 + 8);
  FUN_05474278(this + 0x10,param_1 + 0x10);
  FUN_05474278(this + 0x18,param_1 + 0x18);
  FUN_05474278(this + 0x20,param_1 + 0x20);
  std::vector<RewardItem,std::allocator<RewardItem>>::operator=
            ((vector<RewardItem,std::allocator<RewardItem>> *)(this + 0x28),
             (vector *)(param_1 + 0x28));
  return this;
}


/* TopicItem::TopicItem(TopicItem&&) */

void __thiscall TopicItem::TopicItem(TopicItem *this,TopicItem *param_1)

{
  FUN_05474148();
  FUN_05474148(this + 8,param_1 + 8);
  FUN_05474148(this + 0x10,param_1 + 0x10);
  FUN_05474148(this + 0x18,param_1 + 0x18);
  FUN_05474148(this + 0x20,param_1 + 0x20);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x28),(vector *)(param_1 + 0x28));
  return;
}


/* TopicItem::TEMPNAMEPLACEHOLDERVALUE(TopicItem const&) */

TopicItem * __thiscall TopicItem::operator=(TopicItem *this,TopicItem *param_1)

{
  thunk_FUN_05475e00();
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  thunk_FUN_05475e00(this + 0x10,param_1 + 0x10);
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  thunk_FUN_05475e00(this + 0x20,param_1 + 0x20);
  std::vector<RewardItem,std::allocator<RewardItem>>::operator=
            ((vector<RewardItem,std::allocator<RewardItem>> *)(this + 0x28),
             (vector *)(param_1 + 0x28));
  return this;
}


/* TopicItem::TopicItem(TopicItem const&) */

void __thiscall TopicItem::TopicItem(TopicItem *this,TopicItem *param_1)

{
  FUN_05475d88();
  FUN_05475d88(this + 8,param_1 + 8);
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  FUN_05475d88(this + 0x20,param_1 + 0x20);
  std::vector<RewardItem,std::allocator<RewardItem>>::vector
            ((vector<RewardItem,std::allocator<RewardItem>> *)(this + 0x28),
             (vector *)(param_1 + 0x28));
  return;
}

