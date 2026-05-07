// Class: AchievementItem


/* AchievementItem::~AchievementItem() */

void __thiscall AchievementItem::~AchievementItem(AchievementItem *this)

{
  std::string::~string((string *)(this + 0x30));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x18));
  std::vector<RewardContent,std::allocator<RewardContent>>::~vector
            ((vector<RewardContent,std::allocator<RewardContent>> *)this);
  return;
}


/* AchievementItem::AchievementItem() */

void __thiscall AchievementItem::AchievementItem(AchievementItem *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  Set8BytesTo0(this + 0x30);
  *(undefined4 *)(this + 0x38) = 0;
  return;
}


/* AchievementItem::TEMPNAMEPLACEHOLDERVALUE(AchievementItem&&) */

AchievementItem * __thiscall
AchievementItem::operator=(AchievementItem *this,AchievementItem *param_1)

{
  std::vector<RewardContent,std::allocator<RewardContent>>::operator=
            ((vector<RewardContent,std::allocator<RewardContent>> *)this,(vector *)param_1);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x18),(vector *)(param_1 + 0x18));
  FUN_05474278(this + 0x30,param_1 + 0x30);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return this;
}


/* AchievementItem::TEMPNAMEPLACEHOLDERVALUE(AchievementItem const&) */

AchievementItem * __thiscall
AchievementItem::operator=(AchievementItem *this,AchievementItem *param_1)

{
  std::vector<RewardContent,std::allocator<RewardContent>>::operator=
            ((vector<RewardContent,std::allocator<RewardContent>> *)this,(vector *)param_1);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x18),(vector *)(param_1 + 0x18));
  thunk_FUN_05475e00(this + 0x30,param_1 + 0x30);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return this;
}


/* AchievementItem::AchievementItem(AchievementItem const&) */

void __thiscall AchievementItem::AchievementItem(AchievementItem *this,AchievementItem *param_1)

{
  std::vector<RewardContent,std::allocator<RewardContent>>::vector
            ((vector<RewardContent,std::allocator<RewardContent>> *)this,(vector *)param_1);
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x18),(vector *)(param_1 + 0x18));
  FUN_05475d88(this + 0x30,param_1 + 0x30);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return;
}


/* AchievementItem::AchievementItem(AchievementItem&&) */

void __thiscall AchievementItem::AchievementItem(AchievementItem *this,AchievementItem *param_1)

{
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  FUN_05474148(this + 0x30,param_1 + 0x30);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return;
}

