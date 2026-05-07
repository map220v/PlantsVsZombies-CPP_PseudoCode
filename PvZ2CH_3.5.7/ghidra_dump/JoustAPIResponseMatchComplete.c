// Class: JoustAPIResponseMatchComplete


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustAPIResponseMatchComplete::ToString() const */

void JoustAPIResponseMatchComplete::ToString(void)

{
  long in_x0;
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  JoustUtils::ConvertContextToString((JoustUtils *)asStack_10,*(undefined4 *)(in_x0 + 8));
  uVar1 = FUN_0547429c(asStack_10);
  Sexy::StrFormat("%s [crowns %d]",uVar1,(ulong)*(uint *)(in_x0 + 0xc));
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustAPIResponseMatchComplete::~JoustAPIResponseMatchComplete() */

void __thiscall
JoustAPIResponseMatchComplete::~JoustAPIResponseMatchComplete(JoustAPIResponseMatchComplete *this)

{
  *(undefined ***)this = &PTR__JoustAPIResponseMatchComplete_066aded0;
  LevelOfTheDay_RewardItemType::~LevelOfTheDay_RewardItemType
            ((LevelOfTheDay_RewardItemType *)(this + 0x30));
  std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::~vector
            ((vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>> *)
             (this + 0x10));
  return;
}


/* JoustAPIResponseMatchComplete::~JoustAPIResponseMatchComplete() */

void __thiscall
JoustAPIResponseMatchComplete::~JoustAPIResponseMatchComplete(JoustAPIResponseMatchComplete *this)

{
  ~JoustAPIResponseMatchComplete(this);
  AK::FreeHook(this);
  return;
}


/* JoustAPIResponseMatchComplete::JoustAPIResponseMatchComplete() */

void __thiscall
JoustAPIResponseMatchComplete::JoustAPIResponseMatchComplete(JoustAPIResponseMatchComplete *this)

{
  JoustAPIResponse::JoustAPIResponse((JoustAPIResponse *)this);
  *(undefined ***)this = &PTR__JoustAPIResponseMatchComplete_066aded0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  this[0x28] = (JoustAPIResponseMatchComplete)0x0;
  LevelOfTheDay_RewardItemType::LevelOfTheDay_RewardItemType
            ((LevelOfTheDay_RewardItemType *)(this + 0x30));
  return;
}


/* JoustAPIResponseMatchComplete::TEMPNAMEPLACEHOLDERVALUE(JoustAPIResponseMatchComplete const&) */

JoustAPIResponseMatchComplete * __thiscall
JoustAPIResponseMatchComplete::operator=
          (JoustAPIResponseMatchComplete *this,JoustAPIResponseMatchComplete *param_1)

{
  FUN_0388ef10(this,*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::operator=
            ((vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>> *)
             (this + 0x10),(vector *)(param_1 + 0x10));
  this[0x28] = param_1[0x28];
  LevelOfTheDay_RewardItemType::operator=
            ((LevelOfTheDay_RewardItemType *)(this + 0x30),
             (LevelOfTheDay_RewardItemType *)(param_1 + 0x30));
  return this;
}

