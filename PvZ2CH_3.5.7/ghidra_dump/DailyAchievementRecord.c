// Class: DailyAchievementRecord


/* DailyAchievementRecord::~DailyAchievementRecord() */

void __thiscall DailyAchievementRecord::~DailyAchievementRecord(DailyAchievementRecord *this)

{
  std::string::~string((string *)(this + 0x18));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)this);
  return;
}


/* DailyAchievementRecord::DailyAchievementRecord() */

void __thiscall DailyAchievementRecord::DailyAchievementRecord(DailyAchievementRecord *this)

{
  size_t in_x2;
  
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  Set8BytesTo0((string *)(this + 0x18));
  std::string::append((string *)(this + 0x18),"",in_x2);
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)this);
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  return;
}


/* DailyAchievementRecord::DailyAchievementRecord(DailyAchievementRecord const&) */

void __thiscall
DailyAchievementRecord::DailyAchievementRecord
          (DailyAchievementRecord *this,DailyAchievementRecord *param_1)

{
  undefined4 uVar1;
  
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)this,(vector *)param_1);
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x20) = uVar1;
  return;
}


/* DailyAchievementRecord::DailyAchievementRecord(DailyAchievementRecord&&) */

void __thiscall
DailyAchievementRecord::DailyAchievementRecord
          (DailyAchievementRecord *this,DailyAchievementRecord *param_1)

{
  undefined4 uVar1;
  
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  FUN_05474148(this + 0x18,param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x20) = uVar1;
  return;
}


/* DailyAchievementRecord::TEMPNAMEPLACEHOLDERVALUE(DailyAchievementRecord const&) */

DailyAchievementRecord * __thiscall
DailyAchievementRecord::operator=(DailyAchievementRecord *this,DailyAchievementRecord *param_1)

{
  undefined4 uVar1;
  
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)this,(vector *)param_1);
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = uVar1;
  return this;
}

